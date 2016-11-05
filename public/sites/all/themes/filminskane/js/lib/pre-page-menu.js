import $ from 'jquery';
const prePageNavToggle = {
  init() {
    $('.other-sites-toggler a span').addClass('down');
    $('.block-boxes-external-links-toggle').delegate('.other-sites-toggler', 'click', function () {
      $('.other-sites-toggler a span').toggleClass('up down');
      $('.block-boxes-external-links-menu').slideToggle('slow');
    });
  }
};

export default prePageNavToggle;
