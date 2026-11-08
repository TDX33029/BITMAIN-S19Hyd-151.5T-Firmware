// FUN_00035430 @ 00035430  size=368  callers=6
// program: bmminer


void FUN_00035430(void *param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *__format;
  char acStack_810 [2048];
  
  if ((int)(param_3 - 1) < 0) {
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from %s %s():%d";
  }
  else if (param_1 == (void *)0x0) {
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d";
  }
  else {
    if (param_2 != (void *)0x0) {
      memcpy(param_1,param_2,param_3);
      return;
    }
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d";
  }
  snprintf(acStack_810,0x800,__format,param_3,param_4,param_5,param_6);
  FUN_00032218(3,acStack_810,0);
  return;
}

