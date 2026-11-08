// FUN_00bd15ec @ 00bd15ec size=1916 calls_out=20 calls_in=1
// strings: hashchain not running | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

longlong FUN_00bd15ec(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 unaff_r6;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 ***local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *local_6c;
  undefined4 **local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined **local_58;
  undefined *local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  int *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  code *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x13)) {
  case 0:
    piVar5 = (int *)(*(int *)(param_1[0x10] + 0x3bc) + -4);
    iVar7 = *(int *)(param_1[0x10] + 0x3c0) << 2;
    do {
      if (iVar7 == 0) {
        *param_1 = 6;
        param_1[1] = param_1[0x11];
        local_90 = (int *)*param_1;
        local_8c = param_1[1];
        local_88 = param_1[2];
        uStack_84 = param_1[3];
        local_80 = (undefined4 ***)param_1[4];
        local_7c = param_1[5];
        uStack_78 = param_1[6];
        uStack_74 = param_1[7];
        uVar13 = FUN_00c78ae8();
        goto LAB_00bd1c6c;
      }
      piVar5 = piVar5 + 1;
      piVar14 = (int *)*piVar5;
      iVar7 = iVar7 + -4;
    } while (piVar14[0xe3] != param_1[0x11]);
    do {
      iVar7 = *piVar14;
      bVar1 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar1);
    *piVar14 = iVar7 + 1;
    if (iVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xfdee,0xbd1dac);
      (*pcVar6)();
    }
    iVar9 = *piVar5;
    *(undefined1 *)(param_1 + 10) = 0;
    iVar7 = iVar9 + 0x10;
    param_1[0x12] = iVar9;
    *param_1 = 7;
    param_1[1] = iVar9;
    param_1[8] = iVar7;
LAB_00bd16c0:
    param_1[0xb] = iVar7 + 900;
    param_1[0xc] = 0xffffffff;
switchD_00bd16a4_caseD_3:
    iVar7 = FUN_00c8101c(param_1 + 0xb);
    if (iVar7 == 0) {
      uVar3 = 3;
      goto LAB_00bd1800;
    }
    param_1[9] = iVar7;
    if (param_1[0xb] != 0) {
      FUN_00c8204c(param_1[0xb],param_1[0xc],1);
      iVar7 = param_1[9];
    }
    iVar7 = *(int *)(iVar7 + 0x20);
    if (iVar7 == 0) {
      uVar13 = FUN_00c70f88("hashchain not running",0x15);
      FUN_00c822ec(param_1[9]);
      goto LAB_00bd1c20;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar7 = iVar7 + 8;
    param_1[0xb] = iVar7;
LAB_00bd1794:
    param_1[0xc] = iVar7;
    uVar16 = (**(code **)(*(int *)(iVar7 + 0x15c) + 0x2c))(*(undefined4 *)(iVar7 + 0x158));
    *(undefined8 *)(param_1 + 0xd) = uVar16;
    unaff_r6 = param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871560);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871560);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 10)) {
    case 0:
      iVar7 = param_1[8];
      goto LAB_00bd16c0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871700);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871700);
    case 3:
      goto switchD_00bd16a4_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      iVar7 = param_1[0xb];
      goto LAB_00bd1794;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018717c0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018717c0);
    case 3:
      uVar16 = *(undefined8 *)(param_1 + 0xd);
    }
  }
  uVar17 = (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0xc))((int)uVar16,param_2);
  puVar10 = (undefined4 *)(uVar17 >> 0x20);
  if ((uVar17 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xf) = 3;
    uVar3 = 4;
    param_2 = unaff_r6;
LAB_00bd1800:
    *(undefined1 *)(param_1 + 10) = uVar3;
    *(undefined1 *)(param_1 + 0x13) = 3;
    return CONCAT44(param_2,1);
  }
  puVar15 = (undefined4 *)param_1[0xe];
  uVar12 = param_1[0xd];
  pcVar6 = (code *)*puVar15;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar12);
  }
  if (puVar15[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if (puVar10 != (undefined4 *)0x0) {
    local_6c = puVar10;
    if ((DAT_018d9130 < 5) && (DAT_018d9b30 != '\0')) {
      if (DAT_018d9b30 == '\x01') {
LAB_00bd18dc:
        DataMemoryBarrier(0xb);
        pcVar11 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar11 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar7 = (**(code **)(puVar2 + 0x14))(pcVar11,DAT_018d9b28);
        if (iVar7 == 0) goto LAB_00bd1a64;
      }
      else if (DAT_018d9b30 != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d9b28);
        if (cVar4 == '\0') goto LAB_00bd1a64;
        if (cVar4 != '\x02') goto LAB_00bd18dc;
      }
      local_7c = DAT_018d9b28;
      local_4c = *(int *)(DAT_018d9b28 + 0x20);
      if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018717d0);
      }
      local_60 = (undefined4 *)(DAT_018d9b28 + 0x1c);
      local_50 = *local_60;
      local_5c = &local_50;
      local_48 = *(undefined4 *)(DAT_018d9b28 + 0x24);
      local_58 = &local_3c;
      local_44 = *(undefined4 *)(DAT_018d9b28 + 0x28);
      local_68 = &local_5c;
      local_40 = 0;
      local_54 = &DAT_018abb78;
      local_38 = &local_34;
      local_64 = 1;
      local_3c = &DAT_00592caf;
      local_34 = param_1[0xc] + 0x19c;
      local_28 = FUN_00604528;
      local_2c = &local_6c;
      local_8c = 0;
      local_80 = &local_68;
      local_30 = &DAT_00f5c97c;
      local_90 = (int *)0x1;
      DataMemoryBarrier(0xb);
      pcVar11 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar7 = (**(code **)(puVar2 + 0x28))(pcVar11,&local_90);
      if (iVar7 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar11,&local_90);
      }
    }
LAB_00bd1a64:
    (**(code **)*local_6c)();
  }
  FUN_015f3b0c(&local_90,1);
  uVar12 = local_8c;
  piVar5 = local_90;
  iVar9 = *(int *)(param_1[0xc] + 0x180);
  iVar7 = *(int *)(iVar9 + 0x44);
  if (iVar7 != 0) {
    puVar15 = *(undefined4 **)(iVar9 + 0x40);
    puVar10 = puVar15;
    do {
      puVar8 = puVar10 + 2;
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = 0;
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar10 + 1);
      } while (!bVar1);
      puVar10[1] = 0;
      puVar10 = puVar8;
    } while (puVar8 != puVar15 + iVar7 * 2);
  }
  piVar14 = (int *)(iVar9 + 8);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x24));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x24) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x28));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x28) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x2c));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x2c) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x30));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x30) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x34));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x34) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar9 + 0x38));
  } while (!bVar1);
  *(undefined4 *)(iVar9 + 0x38) = 0;
  do {
    if (*piVar14 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar14);
      goto LAB_00bd1ba0;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar1);
  *piVar14 = 1;
  DataMemoryBarrier(0xb);
LAB_00bd1ba0:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(iVar9 + 0xc) != '\0') {
      uVar13 = 0;
LAB_00bd1cc4:
      local_8c = CONCAT31(local_8c._1_3_,(char)uVar13);
      local_90 = piVar14;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034abf4,0x21,&local_90,&DAT_0186ab18,&DAT_0186a970);
    }
    *(int **)(iVar9 + 0x10) = piVar5;
    *(undefined4 *)(iVar9 + 0x14) = uVar12;
    *(undefined4 *)(iVar9 + 0x18) = local_88;
LAB_00bd1bd0:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(iVar9 + 0xc) = 1;
    }
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    if (*(char *)(iVar9 + 0xc) != '\0') goto LAB_00bd1cc4;
    *(int **)(iVar9 + 0x10) = piVar5;
    *(undefined4 *)(iVar9 + 0x14) = uVar12;
    *(undefined4 *)(iVar9 + 0x18) = local_88;
    if (uVar13 == 0) goto LAB_00bd1bd0;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar14;
    bVar1 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar1);
  *piVar14 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar14,0x81,1);
  }
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_00c822ec(param_1[9]);
LAB_00bd1c20:
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_00bd1f78(param_1 + 8);
  piVar5 = (int *)param_1[0x12];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(param_1[0x12]);
  }
LAB_00bd1c6c:
  *(undefined1 *)(param_1 + 0x13) = 1;
  return (ulonglong)uVar13 << 0x20;
}

