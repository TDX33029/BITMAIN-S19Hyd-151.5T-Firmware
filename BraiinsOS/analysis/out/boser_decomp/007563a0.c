// FUN_007563a0 @ 007563a0 size=56 calls_out=2 calls_in=5
// strings: 

void FUN_007563a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_013ddb0c(iVar2,param_1[2]);
  FUN_01af7af8(iVar1,iVar2,4,0x18);
  return;
}

