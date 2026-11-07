// FUN_01b290a8 @ 01b290a8 size=176 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b290a8(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3[1];
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *param_3;
  iVar1 = FUN_01bed7c2(iVar3,param_4,iVar2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 - iVar3;
  *param_1 = iVar3;
  param_1[1] = iVar1;
  *param_2 = iVar3 + iVar1 + 1;
  param_2[1] = (iVar2 + -1) - iVar1;
  return 1;
}

