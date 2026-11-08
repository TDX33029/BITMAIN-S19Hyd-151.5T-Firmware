// FUN_01b2071c @ 01b2071c size=140 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_01b2071c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  if (iVar1 != 0) {
    iVar2 = 3;
    do {
      iVar1 = FUN_01b7b5a8(iVar1,param_2,0x30);
      if (iVar1 == 0x30) {
        return 0;
      }
      FUN_01b7bc08(*(undefined4 *)(param_1 + 0x13c),0,0);
      *(undefined4 *)(param_1 + 0x13c) = 0;
      iVar1 = FUN_01b7bb84(0,0x20);
      *(int *)(param_1 + 0x13c) = iVar1;
    } while ((iVar1 != 0) && (iVar2 = iVar2 + -1, iVar2 != 0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

