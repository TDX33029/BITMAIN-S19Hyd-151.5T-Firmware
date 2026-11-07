// FUN_00956b50 @ 00956b50 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_00956b50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_01ae1810(iVar2,param_1[2]);
  FUN_0134aee0(iVar1,iVar2,8,0x70);
  return;
}

