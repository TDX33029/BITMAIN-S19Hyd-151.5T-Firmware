// FUN_00049328 @ 00049328  size=176  callers=1
// program: cgminer


undefined4 FUN_00049328(char *param_1,__gnuc_va_list param_2)

{
  int iVar1;
  char *__s;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = vsnprintf((char *)0x0,0,param_1,param_2);
  if (iVar1 == 0) {
    uVar3 = FUN_00049178(&DAT_0004d140,0);
    return uVar3;
  }
  __s = (char *)FUN_000482f8(iVar1 + 1U);
  if (__s == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    vsnprintf(__s,iVar1 + 1U,param_1,param_2);
    iVar2 = FUN_00048a64(__s,iVar1);
    if (iVar2 == 0) {
      FUN_00048310(__s);
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00048bbc(__s,iVar1,1);
    }
  }
  return uVar3;
}

