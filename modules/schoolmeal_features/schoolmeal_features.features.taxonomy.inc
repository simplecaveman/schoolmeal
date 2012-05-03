<?php
/**
 * @file
 * schoolmeal_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function schoolmeal_features_taxonomy_default_vocabularies() {
  return array(
    'programs' => array(
      'name' => 'Programs',
      'machine_name' => 'programs',
      'description' => 'Various programs that subsidize student nutrition.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
