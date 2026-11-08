// FUN_017546e4 @ 017546e4 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_017546e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_017412d4(iVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_01754638(iVar2 + 0x5c);
    if (iVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24(0);
}

