// FUN_00b24d20 @ 00b24d20 size=116 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_00b24d20(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_3) {
    FUN_00d653ec(param_1,iVar1,param_3,1,1);
    iVar1 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar1,param_2,param_3);
  param_1[2] = iVar1 + param_3;
  return 0;
}

