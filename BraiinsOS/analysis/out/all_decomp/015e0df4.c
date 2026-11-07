// FUN_015e0df4 @ 015e0df4 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_015e0df4(char *param_1)

{
  if (*param_1 != 'S') {
    thunk_FUN_015dec6c(0x52,0);
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410ac0,0x1d,&DAT_018ab248);
  }
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *param_1 = 'R';
  return;
}

