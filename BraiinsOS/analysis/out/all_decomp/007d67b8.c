// FUN_007d67b8 @ 007d67b8 size=404 calls_out=5 calls_in=39
// strings: 

undefined4 FUN_007d67b8(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    uVar2 = *param_1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 0xd) = 0;
LAB_007d682c:
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 4) = 0;
LAB_007d6840:
    param_1[3] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886258);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886258);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xd)) {
    case 0:
      uVar2 = param_1[1];
      goto LAB_007d682c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886268);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886268);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      uVar2 = param_1[2];
      goto LAB_007d6840;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886278);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886278);
    case 3:
      uVar2 = param_1[3];
      break;
    case 4:
      goto switchD_007d68f8_caseD_4;
    }
  }
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[6] = 0;
switchD_007d68f8_caseD_4:
  bVar1 = FUN_0163c8bc(param_1 + 5);
  if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xd) = 3;
    return 0;
  }
  FUN_0163c790(param_1 + 5);
  if (param_1[6] != 0) {
    (**(code **)(param_1[6] + 0xc))(param_1[7]);
  }
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1[1];
}

