// FUN_0164a850 @ 0164a850 size=116 calls_out=2 calls_in=5
// strings: 

void FUN_0164a850(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_3 - param_2;
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < uVar2 >> 2) {
    FUN_006520b4(param_1,iVar1,uVar2 >> 2,4,4);
    iVar1 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar1 * 4,param_2,uVar2);
  param_1[2] = iVar1 + (uVar2 >> 2);
  return;
}

