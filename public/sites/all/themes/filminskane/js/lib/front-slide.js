import $ from 'jquery';
const frontSlide = {
  init() {
    $('.view-display-id-f_slide').owlCarousel({
      navigation: true,
      slideSpeed: 300,
      paginationSpeed: 400,
      singleItem: true
    });
  }
};
export default frontSlide;
