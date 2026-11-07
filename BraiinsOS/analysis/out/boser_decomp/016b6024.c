// FUN_016b6024 @ 016b6024 size=40 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016b6024(int param_1)

{
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_1 + 0xc),*(uint *)(param_1 + 8),&DAT_01d08a88);
  }
  return *(undefined4 *)(param_1 + 4);
}

