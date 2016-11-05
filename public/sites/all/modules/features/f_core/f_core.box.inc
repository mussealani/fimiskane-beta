<?php
/**
 * @file
 * f_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function f_core_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'external_links_menu';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'External links menu';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="other-sites-list">
  <?php
      $string = \'<li class="other-sites-equal"><h3>Skane.com</h3>\' . t(\'Services and inspiration for business owners and investors\') . \'</li>\';
      $link = \'http://www.skane.com/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li><h3>Event in Skåne</h3>\' . t(\'For people organising events or conferences in Skåne\') . \'</li>\';
      $link = \'http://www.eventinskane.com/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Invest in Skåne</h3>\' . t(\'Free advice for those who want to invest in Skåne or export goods or services\') . \'</li>\';
      $link = \'http://www.investinskane.com/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Film i Skåne</h3>\' . t(\'Advice and support for film producers and film educational work\') . \'</li>\';
      $link = \'http://www.filmiskane.se/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Tourism in Skåne</h3>\' . t(\'Marketing and counselling for those in the tourism industry\') . \'</li>\';
      $link = \'http://www.tourisminskane.com/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Visit Skåne</h3>\' . t(\'Inspiration for activities and events, and accommodation bookings\') . \'</li>\';
      $link = \'http://www.skane.org/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Start Run Develop</h3>\' . t(\'A guide to help you start, run and develop your business in Skåne (in Swedish)\') . \'</li>\';
      $link = \'http://startadrivautveckla.skane.com/\';
      print l($string, $link, array(\'html\' => TRUE));

      $string = \'<li class="other-sites-equal"><h3>Moving to Southern Sweden</h3>\' . t(\'For you who wish to relocate your life and career to southern Sweden\') . \'</li>\';
      $link = \'http://www.movingtosouthernsweden.com/\';
      print l($string, $link, array(\'html\' => TRUE));
  ?>
</ul>
',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['external_links_menu'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'external_links_toggle';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'External Links Toggle';
  $box->options = array(
    'body' => array(
      'value' => '<ul>
<li class="site-title">The official business promotion agency for Skåne</li>
<li class="contact-tab-wrapper"><a class="contact-tab-link" href="<?php print url(\'contact-us\'); ?>"><span class="contact-icon"></span>Contact</a></li>
<li class="other-sites-toggler mobile-hide">
<a class="toggle-other-sites" href="#">
  <?php print t("Business Region Skåne\'s websites"); ?>
  <span class="arrow"></span>
</a>
</li>
</ul>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['external_links_toggle'] = $box;

  return $export;
}
