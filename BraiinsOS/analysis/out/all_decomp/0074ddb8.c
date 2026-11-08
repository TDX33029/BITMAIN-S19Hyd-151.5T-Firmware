// FUN_0074ddb8 @ 0074ddb8 size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0074ddb8(int *param_1)

{
  if ((char)param_1[6] == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    *(undefined1 *)(param_1 + 6) = 1;
    return 0;
  }
  if ((char)param_1[6] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185b718);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7cc0(&DAT_0185b718);
}

