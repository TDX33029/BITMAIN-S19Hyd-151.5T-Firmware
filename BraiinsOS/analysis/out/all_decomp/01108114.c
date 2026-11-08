// FUN_01108114 @ 01108114 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01108114(undefined1 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_2[2];
  if ((uint)(*param_2 - iVar1) < param_4) {
    FUN_011096d4(param_2,iVar1,param_4,1,1);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1,param_3,param_4);
  param_2[2] = iVar1 + param_4;
  *param_1 = 4;
  return;
}

