// FUN_0199b618 @ 0199b618 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_0199b618(char *param_1)

{
  if (*param_1 != 'S') {
    thunk_FUN_01999584(0x52,0);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526af1,0x1d,&DAT_01d27e44);
  }
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *param_1 = 'R';
  return;
}

