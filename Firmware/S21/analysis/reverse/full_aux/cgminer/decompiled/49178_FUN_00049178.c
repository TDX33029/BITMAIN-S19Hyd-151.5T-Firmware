// FUN_00049178 @ 00049178  size=68  callers=2
// program: cgminer


undefined4 FUN_00049178(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00048a64();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00048bbc(param_1,param_2,0);
  return uVar2;
}

