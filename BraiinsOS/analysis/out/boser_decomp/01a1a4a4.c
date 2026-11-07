// FUN_01a1a4a4 @ 01a1a4a4 size=272 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

int FUN_01a1a4a4(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xb]) {
  case '\0':
    iVar2 = *param_1;
    param_1[1] = iVar2;
    *(undefined1 *)(param_1 + 10) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2b3d0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2b3d0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[10]) {
    case '\0':
      iVar2 = param_1[1];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3e0);
    case '\x03':
      goto switchD_01a1a4fc_caseD_3;
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[2] = iVar2 + 4;
  param_1[3] = 0;
switchD_01a1a4fc_caseD_3:
  bVar1 = FUN_019f9bc4(param_1 + 2);
  if (bVar1 == 2) {
    uVar3 = 3;
    iVar2 = 0;
    *(undefined1 *)(param_1 + 10) = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 2);
    if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 10) = 1;
    iVar2 = param_1[1] + 4;
  }
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  return iVar2;
}

