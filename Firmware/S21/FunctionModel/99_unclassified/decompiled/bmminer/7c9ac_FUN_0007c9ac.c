// FUN_0007c9ac @ 0007c9ac  size=124  callers=5
// program: bmminer


undefined4 FUN_0007c9ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0007b470(param_1,param_2,param_4);
  iVar1 = FUN_0007da78(param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = param_3;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

