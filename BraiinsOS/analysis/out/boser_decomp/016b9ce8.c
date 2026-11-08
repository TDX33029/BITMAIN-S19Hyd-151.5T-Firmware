// FUN_016b9ce8 @ 016b9ce8 size=44 calls_out=2 calls_in=3
// strings: 

void FUN_016b9ce8(int *param_1,int param_2,int param_3)

{
  if (param_2 == 3) {
    return;
  }
  if (*param_1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d08b88);
  }
  FUN_016b67fc(param_1,*(undefined4 *)(param_3 + 0x13c));
  return;
}

