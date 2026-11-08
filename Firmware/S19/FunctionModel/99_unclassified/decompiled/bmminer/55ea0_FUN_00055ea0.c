// FUN_00055ea0 @ 00055ea0  size=68  callers=2
// program: bmminer


undefined4 FUN_00055ea0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0005578c();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_000558e4(param_1,param_2,0);
  return uVar2;
}

