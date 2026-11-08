// FUN_00f7ba60 @ 00f7ba60 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00f7ba60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_00b1e0e0(iVar2,param_1[2]);
  FUN_0132b958(iVar1,iVar2,4,0x18);
  return;
}

