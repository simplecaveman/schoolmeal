<?php

function theme_schoolmeal_site_order_form ($variables) {
	$form = $variables['form'];
	$rows = array ();
	$current = '';
	$meal = '';
	$meal_table = array ();
	// dsm ($form);
	foreach ($form as $key => $value) {
		switch (TRUE) {
			case ($key == 'field_school_reference'):
			case ($key == 'delivery_date'):
					continue;
					break;	
		}
		if ($key == starts_with($key, 'max') ) {
			continue;
		}
		if(starts_with ($key,'order_')) {
			$parts = explode('_', $key);
			// has the meal ID changed since the last iteration?
			if (!($meal == $parts[3])) { // the meal just changed
				$meal = $parts[3];
				// are there entries in the $meal_table? if so add the final rendered results to the table row...
				if (!empty($meal_table)) {
					$meal_html = theme('table', array (
						'rows' => array($meal_table), 
						'header' => array (
							array (
								'data' => $meal, 
								'class' => array('meal-label'),
								),
							array (
								'data' => $max,
								'class' => array('meal-max'),
								)
							)
						)
					);				
					$row[] = $meal_html;
				}
				$max = drupal_render ($form['max_'.$parts[1].'_'.$meal]);	
				$meal_table = array (drupal_render($form[$key])); // brand new $meal_table
			} else {
				$meal_table[] = drupal_render ($form[$key]);
			}
	
			if(!($current == $parts[1])) { // row change - new teacher
				if (!empty ($row)) {
					$rows[] = $row;
					$row = array ($parts[2]);
				} else {
					$row[] = $parts[2];
				}
			} 
			
			$current = $parts[1];	
		} else {// catch the last row thru
			if (!empty ($row)) {
				$meal_html = theme ('table', 
					array (
						'rows' => array ($meal_table), 
						'header' => 
						array (
							array (
									'data' => $meal,
									'class' => array ('meal-label')
								), 
							array (
								'data' => $max, 
								'class' => array ('meal-max'),
								)
						)
					)
				);
				$row[] = $meal_html;
				$rows[] = $row;
				$row = array();
			}
		}
	}
	$output = theme ('table',array('rows' => $rows, 'header' => array (
	'data' => array ('data' => date ('l, F jS Y', strtotime(drupal_render($form['delivery_date_markup']))), 'colspan' => 4),
		),
		));
	$output .= drupal_render_children ($form);
	return $output;
}

function theme_schoolmeal_site_order_summary ($variables) {
	$rows = $variables['result'];
	foreach ($rows as $row) {
 		dsm ($row);			
 	}
	return ('test string!');
}
	
?>