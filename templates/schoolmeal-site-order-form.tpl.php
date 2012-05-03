<?php

/**
 * @file
 * Theme the main district order form.
 *
 * render element:
 * $form - standard pre-rendered form array 
 *
 */

/**
 * this is a complex routine. modify at your own peril.
 * start by making a backup.
 *
 */
$rows = array();
$current = '';
$meal = '';
$meal_table = array();
foreach($form as $key => $value) {
	if($key == 'field_school_reference') {
		continue;
	}
	if($key == starts_with($key, 'max') ) {
		$max = drupal_render($form[$key]);
		continue;
	}
	if(starts_with($key,'order_')) {
		$parts = explode('_', $key);
		// has the meal ID changed since the last iteration?
		if (!($meal == $parts[3])) {
			// are there entries in the $meal_table? if so add the final rendered results to the table row...
			if (!empty($meal_table)) {
				$meal_html = theme('table',array('rows' => array($meal_table), 'header' => array(array('data' => $meal, 'class' => (array('meal-label'))), array('data' => $max, 'class' => array('meal-max')))));
				$row[] = $meal_html;
			}			
			$meal_table = array(drupal_render($form[$key]));
		} else {
			$meal_table[] = drupal_render($form[$key]);
		}

		if(!($current == $parts[1])) { // row change
			if (!empty ($row)) {
				$rows[] = $row;
				$row = array($parts[2]);
			} else {
				$row[] = $parts[2];
			}
		} 

		//$row[] = drupal_render($form[$key]);
		$meal = $parts[3];
		$current = $parts[1];	
		$meal = $parts[3];
	} else {// catch the last row thru
		if (!empty ($row)) {
			$meal_html = theme('table',array('rows' => array($meal_table), 'header' => array(array('data' => $meal, 'class' => (array('meal-label'))), array('data' => $max, 'class' => array('meal-max')))));
			$row[] = $meal_html;
			$rows[] = $row;
			$row = array();
		}
	}
}

print theme('table',array('rows' => $rows));

?>
<?php
	print drupal_render_children($form);
	hello_kitty();
?>