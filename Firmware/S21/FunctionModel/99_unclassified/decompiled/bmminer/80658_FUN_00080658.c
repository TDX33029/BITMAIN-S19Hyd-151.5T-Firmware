// FUN_00080658 @ 00080658  size=236  callers=0
// program: bmminer


undefined4 FUN_00080658(char *param_1,__gnuc_va_list param_2)

{
  int iVar1;
  char *__s;
  int iVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = vsnprintf((char *)0x0,0,param_1,param_2);
  if (iVar1 == 0) {
    local_c = FUN_00080268(&DAT_000a98e4);
  }
  else {
    __s = (char *)FUN_0007d8a0(iVar1 + 1);
    if (__s != (char *)0x0) {
      vsnprintf(__s,iVar1 + 1,param_1,param_2);
      iVar2 = FUN_0007e790(__s,iVar1);
      if (iVar2 == 0) {
        FUN_0007d8e8(__s);
      }
      else {
        local_c = FUN_00080234(__s,iVar1);
      }
    }
  }
  return local_c;
}

