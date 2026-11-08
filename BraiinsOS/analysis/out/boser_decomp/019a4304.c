// FUN_019a4304 @ 019a4304 size=120 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_019a4304(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_3) {
    FUN_0197ac30(param_1,iVar1,param_3,1,1);
    iVar1 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar1,param_2,param_3);
  param_1[2] = iVar1 + param_3;
  return 0;
}

