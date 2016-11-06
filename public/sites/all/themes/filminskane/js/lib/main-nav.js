import $ from 'jquery';
const toggleSiteNav = {
  init() {
    $('.main-menu-toggle').on('click', function () {
      $('.site-header .menu-block-wrapper').toggleClass('show');
    });
  }
};

export default toggleSiteNav;
