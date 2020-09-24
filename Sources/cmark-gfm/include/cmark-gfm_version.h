#ifndef CMARK_GFM_VERSION_H
#define CMARK_GFM_VERSION_H

#define CMARK_GFM_VERSION ((CMARK_GFM_VERSION_MAJOR << 24) | (CMARK_GFM_VERSION_MINOR << 16) | (CMARK_GFM_VERSION_PATCH << 8) | CMARK_GFM_VERSION_BUILD)

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define CMARK_GFM_VERSION_STRING STR(CMARK_GFM_VERSION_MAJOR) "." STR(CMARK_GFM_VERSION_MINOR) "." STR(CMARK_GFM_VERSION_PATCH) ".gfm." STR(CMARK_GFM_VERSION_BUILD)

#endif
