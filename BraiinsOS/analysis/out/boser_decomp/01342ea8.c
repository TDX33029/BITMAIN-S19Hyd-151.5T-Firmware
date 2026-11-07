// FUN_01342ea8 @ 01342ea8 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_01342ea8(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar1 = param_1[2];
  uVar2 = iVar4 - iVar3;
  if ((uint)(*param_1 - iVar1) < uVar2) {
    FUN_016092cc(param_1,iVar1,uVar2,1,1);
    iVar1 = param_1[2];
  }
  if (iVar4 != iVar3) {
    FUN_01bed4e2(param_1[1] + iVar1,(int)param_2 + iVar3 + 8,uVar2);
    iVar1 = (iVar1 - iVar3) + iVar4;
  }
  param_1[2] = iVar1;
  return;
}

