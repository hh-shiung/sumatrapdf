/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

struct EditAnnotationsWindow {

};

static bool gEditAnnotationsWindow = nullptr;

void StartEditAnnotations() {
  if (gEditAnnotationsWindow) {
    return;
  }
}
