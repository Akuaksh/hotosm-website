<?php
/**
 * @file
 * hot_updates.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hot_updates_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_3' => array(
      'name' => 'Update Tags',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_update_tags',
      'weight' => 0,
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
