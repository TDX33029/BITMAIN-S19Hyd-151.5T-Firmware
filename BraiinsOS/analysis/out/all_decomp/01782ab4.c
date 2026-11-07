// FUN_01782ab4 @ 01782ab4 size=164 calls_out=2 calls_in=2
// strings: 

void FUN_01782ab4(undefined4 *param_1)

{
  FUN_01781ff4(&DAT_018dffb4,FUN_01782be0);
  if (DAT_018dffb0 == 1) {
    *param_1 = *DAT_018dffac;
    return;
  }
  if ((DAT_018dffb0 != 2) && (DAT_018dffb0 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  *param_1 = 0;
  return;
}

