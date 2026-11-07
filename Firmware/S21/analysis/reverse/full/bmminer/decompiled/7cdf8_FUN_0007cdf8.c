// FUN_0007cdf8 @ 0007cdf8  size=620  callers=3
// program: bmminer


int FUN_0007cdf8(int param_1,uint param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  void *__s;
  size_t __n;
  int local_c;
  
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (0x800 < *(uint *)(param_1 + 0x38)) {
    FUN_0007b2bc(param_3,param_1,2,"maximum parsing depth reached");
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0x101) {
    local_c = FUN_00080784(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  else if (iVar2 < 0x102) {
    if (iVar2 == 0x5b) {
      local_c = FUN_0007ccd0(param_1,param_2,param_3);
    }
    else {
      if (iVar2 < 0x5c) {
        if (iVar2 == -1) {
          FUN_0007b2bc(param_3,param_1,8,"invalid token");
          return 0;
        }
LAB_0007d00c:
        FUN_0007b2bc(param_3,param_1,8,"unexpected token");
        return 0;
      }
      if (iVar2 == 0x7b) {
        local_c = FUN_0007ca6c(param_1,param_2,param_3);
      }
      else {
        if (iVar2 != 0x100) goto LAB_0007d00c;
        __s = *(void **)(param_1 + 0x40);
        __n = *(size_t *)(param_1 + 0x44);
        if (((param_2 & 0x10) == 0) && (pvVar1 = memchr(__s,0,__n), pvVar1 != (void *)0x0)) {
          FUN_0007b2bc(param_3,param_1,0xb,"\\u0000 is not allowed without JSON_ALLOW_NUL");
          return 0;
        }
        local_c = FUN_00080234(__s,__n);
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
    }
  }
  else if (iVar2 == 0x103) {
    local_c = FUN_00080c2c();
  }
  else if (iVar2 < 0x103) {
    local_c = FUN_00080940((int)*(undefined8 *)(param_1 + 0x40));
  }
  else if (iVar2 == 0x104) {
    local_c = FUN_00080c4c();
  }
  else {
    if (iVar2 != 0x105) goto LAB_0007d00c;
    local_c = FUN_00080c6c();
  }
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return local_c;
}

