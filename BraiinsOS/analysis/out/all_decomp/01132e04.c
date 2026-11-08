// FUN_01132e04 @ 01132e04 size=96 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01132e04(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_3) {
    FUN_01139080(param_1,iVar1,param_3);
    iVar1 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar1,param_2,param_3);
  param_1[2] = iVar1 + param_3;
  return 0;
}

