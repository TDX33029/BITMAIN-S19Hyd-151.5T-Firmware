// FUN_01b5a050 @ 01b5a050 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_01b5a050(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_01b4d24c(iVar2);
  if ((iVar1 == 0) || (iVar1 = FUN_01b59fa8(iVar2 + 0x5c), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0(0);
  }
  return;
}

