// FUN_01b1fda8 @ 01b1fda8 size=56 calls_out=1 calls_in=0
// strings: 

bool FUN_01b1fda8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b6b0a8(4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1 != 0;
}

