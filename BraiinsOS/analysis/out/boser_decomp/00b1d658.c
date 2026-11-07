// FUN_00b1d658 @ 00b1d658 size=60 calls_out=2 calls_in=7
// strings: 

void FUN_00b1d658(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_0124f8f0(iVar2,param_1[2]);
  FUN_0132b958(iVar1,iVar2,8,0x30);
  return;
}

