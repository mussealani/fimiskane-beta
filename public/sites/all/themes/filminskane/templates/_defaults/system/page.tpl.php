<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * This file will print the entire contents within the <body> tag. The only
 * variables you should be printing, should be the available regions. The
 * contents within the regions should be added using Contexts and blocks, and
 * therefore, shouldn't be added here.
 *
 * Feel free to add any HTML that you'd like to use for creating the structure
 * of the page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div class="main-wrapper">
	<?php if ($page['pre-page']): ?>
		<div class="site-pre-page">	
			<?php print render($page['pre-page']); ?>
		</div><!-- end site-pre-page -->
	<?php endif ?>

  <?php if ($page['header']): ?>
    <header class="site-header">
      <?php print render($page['header']); ?>
    </header>
  <?php endif; ?>

  <?php if ($page['content']): ?>
    <main class="main-content <?php print $submenu_active; ?>">
      <?php print render($page['content']); ?>
    </main>
  <?php endif; ?>

  <?php if ($page['footer']): ?>
    <footer class="main-footer">
      <?php print render($page['footer']); ?>
    </footer>
  <?php endif; ?>
</div><!-- end main-wrapper -->
