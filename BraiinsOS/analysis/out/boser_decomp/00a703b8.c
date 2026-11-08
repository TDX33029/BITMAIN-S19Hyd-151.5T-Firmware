// FUN_00a703b8 @ 00a703b8 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00a703b8(int param_1,int param_2)

{
  if (*(char *)(param_2 + 4) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    FUN_01bed93e(param_1,0,0x4c);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_2 + 4) = 1;
    return;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f4ec);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c0f4ec);
}

