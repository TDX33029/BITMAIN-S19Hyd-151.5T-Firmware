// FUN_00ba6b7c @ 00ba6b7c size=352 calls_out=5 calls_in=6
// strings: internal error: entered unreachable code

undefined4 FUN_00ba6b7c(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    uVar2 = *param_1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 0xd) = 0;
LAB_00ba6bec:
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = uVar2;
LAB_00ba6bfc:
    param_1[3] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c23280);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c23280);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xd)) {
    case 0:
      uVar2 = param_1[1];
      goto LAB_00ba6bec;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23290);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23290);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      uVar2 = param_1[2];
      goto LAB_00ba6bfc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c232a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c232a0);
    case 3:
      uVar2 = param_1[3];
      break;
    case 4:
      goto switchD_00ba6c88_caseD_4;
    }
  }
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[6] = 0;
switchD_00ba6c88_caseD_4:
  bVar1 = FUN_019f9bc4(param_1 + 5);
  if (bVar1 == 2) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 4) = 4;
    uVar2 = 0;
  }
  else {
    FUN_0193c3cc(param_1 + 5);
    if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
    }
    uVar2 = param_1[1];
    uVar3 = 1;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar3;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  return uVar2;
}

