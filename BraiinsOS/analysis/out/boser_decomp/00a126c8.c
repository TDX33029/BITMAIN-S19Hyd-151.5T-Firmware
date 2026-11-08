// FUN_00a126c8 @ 00a126c8 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00a126c8(undefined4 *param_1,int param_2)

{
  if (*(char *)(param_2 + 0xc) == '\0') {
    FUN_01139b38(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    *param_1 = 10;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  }
  if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0d450);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c0d450);
}

