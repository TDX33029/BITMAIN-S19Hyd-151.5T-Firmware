// FUN_017048e0 @ 017048e0 size=64 calls_out=1 calls_in=0
// strings: 

bool FUN_017048e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0177a9c0(0x104);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1 != 0;
}

