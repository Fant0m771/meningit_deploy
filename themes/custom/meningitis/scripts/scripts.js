(function ($) {
  $(document).ready(function() {
    // Change External link pop up settings
    $.extend(Drupal.settings.extlink_extra.colorboxSettings, {
      maxWidth: '745',
      height: '374'
    });


    $('#open-mobile-menu').bind('click', function () {
      $(this).toggleClass('opened');
      $(".pane-menu-menu-mobile-menu").slideToggle();
    });
  });

})(jQuery);