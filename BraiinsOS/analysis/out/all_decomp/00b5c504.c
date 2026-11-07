// FUN_00b5c504 @ 00b5c504 size=240 calls_out=5 calls_in=0
// strings: 

void FUN_00b5c504(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1e]) {
  case '\0':
    piVar1 = (int *)(*param_2 + 0x2c);
    if (*piVar1 == 0) {
      local_28 = FUN_00c70f88(&DAT_0034e635,0x2b);
      local_24 = 1;
      param_2[1] = 1;
      param_2[2] = local_28;
      local_2c = -0x80000000;
      goto LAB_00b5c5b0;
    }
    param_2[2] = (int)piVar1;
    param_2[1] = 0;
    iVar2 = *piVar1;
    *(undefined1 *)(param_2 + 0x1d) = 0;
    param_2[4] = (int)FUN_00c047c0;
    param_2[3] = iVar2 + 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018707e0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018707e0);
  }
  FUN_00b5c720(&local_2c,param_2 + 3);
  if (local_2c == -0x7fffffff) {
    *param_1 = -0x7fffffff;
    *(undefined1 *)(param_2 + 0x1e) = 3;
    return;
  }
  FUN_00b5c64c(param_2 + 3);
LAB_00b5c5b0:
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = local_24;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  return;
}

