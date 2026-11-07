// FUN_00ad9810 @ 00ad9810 size=56 calls_out=2 calls_in=3
// strings: 

void FUN_00ad9810(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_0196c25c(iVar2,param_1[2]);
  FUN_0134aee0(iVar1,iVar2,4,0x10);
  return;
}

