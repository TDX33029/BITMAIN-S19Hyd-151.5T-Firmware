// FUN_01ac3400 @ 01ac3400 size=92 calls_out=2 calls_in=3
// strings: 

int FUN_01ac3400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_14 [2];
  uint local_c;
  
  FUN_01ac3bf0(local_14,param_2,param_3,param_1);
  iVar1 = 0;
  if ((local_14[0] & 1) != 0) {
    if (*(uint *)(param_1 + 0x28) <= local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_c,*(uint *)(param_1 + 0x28),&DAT_01d2f40c);
    }
    iVar1 = local_c * 0x34 + *(int *)(param_1 + 0x24) + 0xc;
  }
  return iVar1;
}

