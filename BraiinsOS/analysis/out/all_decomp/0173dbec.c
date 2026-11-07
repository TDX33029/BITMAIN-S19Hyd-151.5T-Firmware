// FUN_0173dbec @ 0173dbec size=92 calls_out=2 calls_in=0
// strings: 

bool FUN_0173dbec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0177a9c0(0x4d0);
  if (iVar1 != 0) {
    FUN_0173dbd0(iVar1 + 8);
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1 != 0;
}

