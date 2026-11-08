// FUN_013b9cdc @ 013b9cdc size=40 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_013b9cdc(int param_1)

{
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_1 + 0xc),*(uint *)(param_1 + 8),&DAT_01893c80);
  }
  return *(undefined4 *)(param_1 + 4);
}

