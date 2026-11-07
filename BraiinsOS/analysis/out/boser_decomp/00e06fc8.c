// FUN_00e06fc8 @ 00e06fc8 size=352 calls_out=5 calls_in=10
// strings: internal error: entered unreachable code

int FUN_00e06fc8(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
    iVar2 = *(int *)*param_1;
    *(undefined1 *)(param_1 + 0xc) = 0;
    iVar2 = iVar2 + 8;
    param_1[1] = iVar2;
LAB_00e07038:
    param_1[2] = iVar2;
    *(undefined1 *)(param_1 + 0xb) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f190);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f190);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      iVar2 = param_1[1];
      goto LAB_00e07038;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3d0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0xb)) {
      case 0:
        iVar2 = param_1[2];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      case 3:
        goto switchD_00e070dc_caseD_3;
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  param_1[9] = 1;
  param_1[3] = iVar2 + 4;
  param_1[4] = 0;
switchD_00e070dc_caseD_3:
  bVar1 = FUN_019f9bc4(param_1 + 3);
  if (bVar1 == 2) {
    uVar3 = 3;
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0xb) = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 3);
    if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0xb) = 1;
    iVar2 = param_1[2] + 4;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  return iVar2;
}

