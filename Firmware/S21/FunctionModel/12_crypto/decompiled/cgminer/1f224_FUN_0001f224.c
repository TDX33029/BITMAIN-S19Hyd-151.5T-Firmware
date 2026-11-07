// FUN_0001f224 @ 0001f224  size=128  callers=2
// program: cgminer


void FUN_0001f224(int param_1)

{
  int __fd;
  
  if (*(undefined1 **)(param_1 + 0x260) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x260) = 0;
  }
  __fd = *(int *)(param_1 + 0x24c);
  *(undefined1 *)(param_1 + 0x293) = 0;
  *(undefined1 *)(param_1 + 0x291) = 0;
  if (__fd != 0) {
    if ((*(char *)(param_1 + 0x250) != '\0') && (*(SSL **)(param_1 + 0x254) != (SSL *)0x0)) {
      SSL_shutdown(*(SSL **)(param_1 + 0x254));
      X509_free(*(X509 **)(param_1 + 0x25c));
      SSL_CTX_free(*(SSL_CTX **)(param_1 + 600));
      SSL_free(*(SSL **)(param_1 + 0x254));
      __fd = *(int *)(param_1 + 0x24c);
    }
    close(__fd);
  }
  *(undefined4 *)(param_1 + 0x24c) = 0;
  return;
}

