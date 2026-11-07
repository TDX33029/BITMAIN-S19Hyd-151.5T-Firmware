// FUN_00872cb0 @ 00872cb0 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_00872cb0(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_00808f1c(&DAT_0034493c,0x30);
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861d64);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7cc0(&DAT_01861d64);
}

