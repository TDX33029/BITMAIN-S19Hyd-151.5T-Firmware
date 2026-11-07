// FUN_0007da78 @ 0007da78  size=124  callers=2
// program: bmminer


undefined4 FUN_0007da78(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[2] = 0x10;
  param_1[1] = 0;
  iVar1 = FUN_0007d8a0(param_1[2]);
  *param_1 = iVar1;
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)*param_1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

