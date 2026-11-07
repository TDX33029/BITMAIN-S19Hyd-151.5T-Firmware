// FUN_00055fd8 @ 00055fd8  size=68  callers=1
// program: bmminer


undefined4 FUN_00055fd8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (iVar1 = FUN_0005578c(param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_00055f40(param_1,param_2,param_3);
  return uVar2;
}

