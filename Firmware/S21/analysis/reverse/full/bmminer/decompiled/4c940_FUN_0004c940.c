// FUN_0004c940 @ 0004c940  size=396  callers=7
// program: bmminer


void FUN_0004c940(void *param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *__format;
  char acStack_2010 [8192];
  
  if ((int)(param_3 - 1) < 0) {
    if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from %s %s():%d";
  }
  else if (param_1 == (void *)0x0) {
    if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d";
  }
  else {
    if (param_2 != (void *)0x0) {
      memcpy(param_1,param_2,param_3);
      return;
    }
    if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d";
  }
  snprintf(acStack_2010,0x2000,__format,param_3,param_4,param_5,param_6);
  FUN_0004948c(3,acStack_2010,0);
  return;
}

