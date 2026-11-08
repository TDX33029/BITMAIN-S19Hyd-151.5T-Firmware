// FUN_00bcd1c0 @ 00bcd1c0 size=872 calls_out=12 calls_in=1
// strings: 

void FUN_00bcd1c0(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x13)) {
  case 0:
    piVar4 = (int *)(*(int *)(param_2[0x10] + 0x3bc) + -4);
    iVar8 = *(int *)(param_2[0x10] + 0x3c0) << 2;
    do {
      if (iVar8 == 0) {
        *param_2 = 6;
        param_2[1] = param_2[0x11];
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        local_48 = param_2[4];
        uStack_44 = param_2[5];
        uStack_40 = param_2[6];
        uStack_3c = param_2[7];
        uVar7 = FUN_00c78ae8();
        uVar10 = 0x80000000;
        goto LAB_00bcd4fc;
      }
      piVar4 = piVar4 + 1;
      piVar9 = (int *)*piVar4;
      iVar8 = iVar8 + -4;
    } while (piVar9[0xe3] != param_2[0x11]);
    do {
      iVar8 = *piVar9;
      bVar11 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar11);
    *piVar9 = iVar8 + 1;
    if (iVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0xbcd568);
      (*pcVar2)();
    }
    iVar8 = *piVar4;
    param_2[0x12] = iVar8;
    *param_2 = 7;
    param_2[1] = iVar8;
    *(undefined1 *)(param_2 + 0xb) = 0;
    iVar8 = iVar8 + 0x10;
    param_2[8] = iVar8;
LAB_00bcd29c:
    param_2[0xc] = iVar8 + 900;
    param_2[0xd] = 0xffffffff;
    param_2[9] = iVar8;
switchD_00bcd280_caseD_3:
    iVar8 = FUN_00c8101c(param_2 + 0xc,param_3);
    if (iVar8 == 0) {
      uVar3 = 3;
      goto LAB_00bcd3e8;
    }
    param_2[10] = iVar8;
    if (param_2[0xc] != 0) {
      FUN_00c8204c(param_2[0xc],param_2[0xd],1);
      iVar8 = param_2[10];
    }
    iVar8 = *(int *)(iVar8 + 0x20);
    if (iVar8 == 0) {
      local_28 = &DAT_00f5c97c;
      local_2c = param_2[9] + 0x37c;
      FUN_00600d2c(&local_58,&DAT_00595128,&local_2c);
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uVar7 = FUN_00c6b484(&local_38);
      uVar10 = 0x80000000;
      goto LAB_00bcd4bc;
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
    iVar8 = iVar8 + 8;
    param_2[0xc] = iVar8;
LAB_00bcd374:
    param_2[0xd] = iVar8 + 0x1a0;
    param_2[0xe] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871550);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871550);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      iVar8 = param_2[8];
      goto LAB_00bcd29c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018716f0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018716f0);
    case 3:
      goto switchD_00bcd280_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      iVar8 = param_2[0xc];
      goto LAB_00bcd374;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018717b0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018717b0);
    }
  }
  iVar8 = FUN_00c8101c(param_2 + 0xd,param_3);
  if (iVar8 == 0) {
    *(undefined1 *)(param_2 + 0xf) = 3;
    uVar3 = 4;
LAB_00bcd3e8:
    *(undefined1 *)(param_2 + 0xb) = uVar3;
    *param_1 = 0x80000001;
    *(undefined1 *)(param_2 + 0x13) = 3;
    return;
  }
  iVar5 = param_2[0xd];
  if (iVar5 != 0) {
    FUN_00c8204c(iVar5,param_2[0xe],1);
  }
  param_3 = *(uint *)(iVar8 + 0x28);
  uVar6 = 0;
  bVar12 = 0x3ffffffe < param_3;
  bVar11 = param_3 == 0x3fffffff;
  uVar1 = param_3 * 4;
  if (param_3 < 0x40000000) {
    bVar12 = 0x7ffffffb < uVar1;
    bVar11 = uVar1 == 0x7ffffffc;
  }
  if (bVar12 && !bVar11) {
LAB_00bcd3d0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,uVar1);
  }
  uVar6 = *(undefined4 *)(iVar8 + 0x24);
  if (uVar1 == 0) {
    uVar7 = 4;
    uVar10 = 0;
  }
  else {
    uVar7 = thunk_FUN_016d4a50(uVar1,uVar6);
    uVar10 = param_3;
    if (uVar7 == 0) {
      uVar6 = 4;
      goto LAB_00bcd3d0;
    }
  }
  FUN_016dd1aa(uVar7,uVar6,uVar1);
  FUN_00c822ec(iVar8);
  *(undefined1 *)(param_2 + 0xf) = 1;
LAB_00bcd4bc:
  FUN_00c822ec(param_2[10]);
  piVar4 = (int *)param_2[0x12];
  *(undefined1 *)(param_2 + 0xb) = 1;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar11 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar11);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(param_2[0x12]);
  }
LAB_00bcd4fc:
  *param_1 = uVar10;
  param_1[1] = uVar7;
  param_1[2] = param_3;
  *(undefined1 *)(param_2 + 0x13) = 1;
  return;
}

