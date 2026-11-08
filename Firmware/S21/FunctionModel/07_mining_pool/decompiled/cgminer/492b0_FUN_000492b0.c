// FUN_000492b0 @ 000492b0  size=68  callers=1
// program: cgminer


undefined4 FUN_000492b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (iVar1 = FUN_00048a64(param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_00049218(param_1,param_2,param_3);
  return uVar2;
}

