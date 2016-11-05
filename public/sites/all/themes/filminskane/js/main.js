// Import libs
import $ from 'jquery';
import utils from 'lib/utils';
import prePageNavToggle from './lib/pre-page-menu';
import frontSlide from './lib/front-slide';

(function () {
  // Run when DOM is ready
  $(function () {
    prePageNavToggle.init();
    frontSlide.init();

    // If SVG is not supported replace it with png version
    utils.replaceSVG();
  });

  // Run when DOM is changed
  Drupal.behaviors.filminskane = {
    attach() {

    }
  };
})();
