// FUN_00cab200 @ 00cab200 size=592 calls_out=5 calls_in=4
// strings: 

void FUN_00cab200(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined3 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x65)) {
  case 0:
    piVar3 = (int *)param_2[0x18];
    param_2[0x10] = param_2[0x14];
    param_2[0x11] = param_2[0x15];
    param_2[0x12] = param_2[0x16];
    *(undefined1 *)(param_2 + 0x19) = 1;
    param_2[0x13] = param_2[0x17];
    *param_2 = piVar3;
    *(undefined1 *)(param_2 + 0xf) = 0;
LAB_00cab290:
    uVar4 = 1;
    param_2[2] = piVar3;
    param_2[4] = piVar3;
    param_2[5] = 1;
    param_2[3] = 1;
    param_2[1] = piVar3;
    *(undefined1 *)(param_2 + 6) = 0;
    goto LAB_00cab2b4;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187ab10);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187ab10);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      piVar3 = (int *)*param_2;
      goto LAB_00cab290;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab20);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab20);
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    piVar3 = (int *)param_2[2];
    uVar4 = param_2[3];
    param_2[4] = piVar3;
    param_2[5] = uVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187ab00);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187ab00);
  case 3:
    piVar3 = (int *)param_2[4];
    uVar4 = param_2[5];
    break;
  case 4:
    goto switchD_00cab3e4_caseD_4;
  }
LAB_00cab2b4:
  if (*(uint *)(*piVar3 + 0x94) < uVar4) {
    *(undefined1 *)(param_2 + 6) = 1;
  }
  else {
    param_2[7] = *piVar3 + 0x80;
    *(undefined1 *)(param_2 + 0xe) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = uVar4;
    param_2[0xd] = uVar4;
    param_2[8] = 0;
switchD_00cab3e4_caseD_4:
    bVar1 = FUN_0163c8bc(param_2 + 7,param_3);
    if (bVar1 == 2) {
      *(undefined1 *)(param_2 + 6) = 4;
      *(undefined1 *)(param_2 + 0xf) = 3;
      *param_1 = 10;
      *(undefined1 *)((int)param_2 + 0x65) = 3;
      return;
    }
    FUN_0163c790(param_2 + 7);
    if (param_2[8] != 0) {
      (**(code **)(param_2[8] + 0xc))(param_2[9]);
    }
    *(undefined1 *)(param_2 + 6) = 1;
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xf) = 1;
      local_40 = param_2[0x10];
      uStack_3c = param_2[0x11];
      uStack_38 = param_2[0x12];
      uStack_34 = param_2[0x13];
      *(undefined1 *)(param_2 + 0x19) = 0;
      FUN_00d071f8(param_2[1],&local_40);
      uVar2 = 9;
      goto LAB_00cab398;
    }
  }
  *(undefined1 *)(param_2 + 0x19) = 0;
  local_2c = *(undefined4 *)((int)param_2 + 0x45);
  local_30 = *(undefined4 *)((int)param_2 + 0x41);
  uVar2 = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0xf) = 1;
  local_28._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0x49);
  local_28._3_1_ = (undefined1)param_2[0x13];
  uStack_24 = (undefined3)((uint)param_2[0x13] >> 8);
LAB_00cab398:
  *param_1 = uVar2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined4 *)(param_1 + 9) = local_28;
  *(undefined4 *)(param_1 + 1) = local_30;
  *(undefined4 *)(param_1 + 5) = local_2c;
  *(uint *)(param_1 + 0xc) = CONCAT31(uStack_24,local_28._3_1_);
  *(undefined1 *)((int)param_2 + 0x65) = 1;
  return;
}

