<?php
$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'set1bg' => t('Background'),
    'set1text' => t('Text'),
    'set2bg' => t('Background'),
    'set2text' => t('Text'),
    'set3bg' => t('Background'),
    'set3text' => t('Text'),
    'set4bg' => t('Background'),
    'set4text' => t('Text'),
    'set5bg' => t('Background'),
    'set5text' => t('Text'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Opera (default)'),
      'colors' => array(
        'set1bg' => '#686963',
        'set1text' => '#FEF3FF',
        'set2bg' => '#db5461',
        'set2text' => '#002000',
        'set3bg' => '#8aa29e',
        'set3text' => '#F2FFFF',
        'set4bg' => '#f1edee',
        'set4text' => '#020020',
        'set5bg' => '#3d5467',
        'set5text' => '#FFF3FF',
      ),
    ),
    'plume' => array(
      'title' => t('Plume'),
      'colors' => array(
        'set1bg' => '#1c2541',
        'set1text' => '#FEF3FF',
        'set2bg' => '#94d3c9',
        'set2text' => '#FEF4FF',
        'set3bg' => '#8aa29e',
        'set3text' => '#3a506b',
        'set4bg' => '#0b132b',
        'set4text' => '#FFF4FF',
        'set5bg' => '#3a506b',
        'set5text' => '#000020',

      ),
    ),
    'bright' => array(
      'title' => t('Bright'),
      'colors' => array(
        'set1bg' => '#6e0e0a',
        'set1text' => '#020000',
        'set2bg' => '#f0f0c9',
        'set2text' => '#002000',
        'set3bg' => '#f2bb05',
        'set3text' => '#F2FFFF',
        'set4bg' => '#124e78',
        'set4text' => '#FFF4FF',
        'set5bg' => '#d74e09',
        'set5text' => '#000020',

      ),
    ),
    'night' => array(
      'title' => t('Night'),
      'colors' => array(
        'set1bg' => '#232020',
        'set1text' => '#020000',
        'set2bg' => '#955e42',
        'set2text' => '#002000',
        'set3bg' => '#9c914f',
        'set3text' => '#F2FFFF',
        'set4bg' => '#553739',
        'set4text' => '#FFF4FF',
        'set5bg' => '#748e54',
        'set5text' => '#000020',

      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/opera-variables.css',
  ),
);
