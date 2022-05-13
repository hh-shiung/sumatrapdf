/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

namespace strconv {

WCHAR* Utf8ToWstr(const char* s, size_t cb = (size_t)-1, Allocator* a = nullptr);

char* WstrToCodePageV(uint codePage, const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToUtf8V(const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToCodePage(uint codePage, const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToUtf8(const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToUtf8(std::wstring_view sv, Allocator* a = nullptr);

char* ToMultiByteV(const char* src, uint codePageSrc, uint codePageDest);
WCHAR* StrToWstr(const char* src, uint codePage, int cbSrc = -1);

std::string_view UnknownToUtf8V(const std::string_view&);

std::string_view WstrToAnsiV(const WCHAR*);

WCHAR* AnsiToWstr(const char* src, size_t cbLen = (size_t)-1);

} // namespace strconv
