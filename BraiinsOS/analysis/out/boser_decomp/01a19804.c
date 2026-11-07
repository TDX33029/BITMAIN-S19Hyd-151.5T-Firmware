// FUN_01a19804 @ 01a19804 size=288 calls_out=5 calls_in=4
// strings: internal error: entered unreachable code

void FUN_01a19804(int *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xb]) {
  case '\0':
    piVar3 = (int *)*param_2;
    param_2[1] = (int)piVar3;
    *(undefined1 *)(param_2 + 10) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2b400);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2b400);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[10]) {
    case '\0':
      piVar3 = (int *)param_2[1];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b410);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b410);
    case '\x03':
      goto switchD_01a19860_caseD_3;
    }
  }
  iVar4 = *piVar3;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = iVar4;
  param_2[8] = iVar4;
  param_2[2] = (int)(piVar3 + 1);
  param_2[3] = 0;
switchD_01a19860_caseD_3:
  bVar1 = FUN_019f9bc4(param_2 + 2,param_3);
  if (bVar1 == 2) {
    uVar2 = 3;
    *(undefined1 *)(param_2 + 10) = 3;
    *param_1 = 0;
  }
  else {
    FUN_0193c3cc(param_2 + 2);
    if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    piVar3 = (int *)param_2[1];
    param_1[2] = (int)(piVar3 + 6);
    iVar4 = *piVar3;
    *param_1 = (int)(piVar3 + 1);
    param_1[1] = iVar4;
    uVar2 = 1;
    *(undefined1 *)(param_2 + 10) = 1;
  }
  *(undefined1 *)(param_2 + 0xb) = uVar2;
  return;
}

