// FUN_01048010 @ 01048010 size=1452 calls_out=14 calls_in=1
// strings: 

void FUN_01048010(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  undefined *puVar10;
  int iVar11;
  char cVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar15 = thunk_FUN_016de0ee(param_1,0x40);
  iVar3 = (int)uVar15 + (int)((ulonglong)uVar15 >> 0x20);
  while (param_1[1] != 0) {
    iVar8 = *param_1;
    pcVar13 = (char *)(iVar8 + 8);
    if (*pcVar13 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(pcVar13);
      if (!bVar14) goto LAB_01048450;
      *pcVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01048450:
      FUN_01280da8(pcVar13);
    }
    FUN_0128236c(pcVar13);
    puVar10 = *(undefined **)(iVar8 + 0x1c);
    if (puVar10 == (undefined *)0x0) {
      uVar15 = FUN_01040ee8(0);
LAB_0104811c:
      *(undefined8 *)(iVar8 + 0x1c) = uVar15;
    }
    else {
      puVar4 = *(undefined **)(iVar8 + 0x20);
      bVar14 = puVar4 == (undefined *)0x0;
      if (bVar14) {
        puVar4 = &DAT_01883378;
      }
      if (!bVar14 || puVar10 != puVar4) {
        uVar15 = FUN_01040ee8(0);
        (**(code **)(puVar10 + 0xc))(*(undefined4 *)(iVar8 + 0x20));
        goto LAB_0104811c;
      }
    }
    iVar11 = *(int *)(iVar8 + 0x10);
    if (iVar11 == 0) {
      FUN_01282570(pcVar13);
      if (*pcVar13 != '\x01') goto LAB_01048490;
      DataMemoryBarrier(0xb);
      goto LAB_01048478;
    }
    iVar5 = *(int *)(iVar11 + 4);
    piVar7 = (int *)(iVar11 + -8);
    *(int *)(iVar8 + 0x10) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    *(undefined4 *)(iVar11 + 4) = 0;
    *(undefined4 *)(iVar11 + 8) = 0;
    do {
      iVar5 = *piVar7;
      bVar14 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar14);
    *piVar7 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_010485bc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10485bc);
      (*pcVar1)();
    }
    iVar5 = *(int *)(iVar8 + 0x14);
    local_40 = iVar11;
    if (iVar5 == iVar11) {
      FUN_010557ec((int *)(iVar8 + 0x14),&local_40,&DAT_018ac72c);
      goto LAB_010485bc;
    }
    *(undefined4 *)(iVar11 + 4) = 0;
    *(int *)(iVar11 + 8) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = iVar11;
    }
    *(int *)(iVar8 + 0x14) = iVar11;
    if (*(int *)(iVar8 + 0x18) == 0) {
      *(int *)(iVar8 + 0x18) = iVar11;
    }
    *(undefined1 *)(iVar11 + 0x10) = 1;
    FUN_01282570(pcVar13);
    if (*pcVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(pcVar13);
        if (bVar14) {
          *pcVar13 = '\0';
          goto LAB_010481e4;
        }
      } while (*pcVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar13);
LAB_010481e4:
    cVar9 = '\0';
    iVar8 = *(int *)(iVar11 + 0xc);
    local_48 = &DAT_01883398;
    local_3c = 0;
    local_40 = 1;
    local_44 = iVar11;
    if (*(char *)(iVar3 + 0x38) == '\x01') {
LAB_01048240:
      cVar12 = *(char *)(iVar3 + 0x31);
      cVar9 = *(char *)(iVar3 + 0x30);
      cVar2 = cVar12;
      if (cVar9 != '\x01') {
LAB_01048264:
        *(char *)(iVar3 + 0x31) = cVar2;
        goto LAB_01048268;
      }
      if (cVar12 != '\0') {
        cVar2 = cVar12 + -1;
        goto LAB_01048264;
      }
      FUN_016455a4(&DAT_01883398,iVar11);
      FUN_0104d290(&local_40);
LAB_01048538:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar7;
        bVar14 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar14);
      *piVar7 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0105b210(piVar7);
      }
      goto LAB_01048564;
    }
    cVar12 = '\0';
    if (*(char *)(iVar3 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar3,FUN_01044070);
      *(undefined1 *)(iVar3 + 0x38) = 1;
      goto LAB_01048240;
    }
LAB_01048268:
    (**(code **)(*(int *)(iVar8 + 8) + 0xc))(iVar8,&local_40,&local_48);
    if (local_40 != 0 || local_3c != 0) {
      local_58 = local_38;
      iStack_54 = iStack_34;
      iStack_50 = iStack_30;
      iStack_4c = iStack_2c;
      if (cVar9 != '\0') {
        if (*(char *)(iVar3 + 0x38) != '\x01') {
          if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_01048538;
          FUN_015e8e6c(iVar3,FUN_01655ec4);
          *(undefined1 *)(iVar3 + 0x38) = 1;
        }
        *(char *)(iVar3 + 0x31) = cVar12;
        *(undefined1 *)(iVar3 + 0x30) = 1;
      }
      goto LAB_01048538;
    }
    iVar8 = *param_1;
    local_58 = local_38;
    iStack_54 = iStack_34;
    iStack_50 = iStack_30;
    iStack_4c = iStack_2c;
    param_1[1] = param_1[1] + -1;
    pcVar13 = (char *)(iVar8 + 8);
    local_40 = local_38;
    local_3c = iStack_34;
    local_38 = iStack_30;
    iStack_34 = iStack_2c;
    if (*pcVar13 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(pcVar13);
      if (!bVar14) goto LAB_010482e0;
      *pcVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_010482e0:
      FUN_01280da8(pcVar13);
    }
    FUN_0128236c(pcVar13);
    cVar9 = *(char *)(iVar11 + 0x10);
    *(undefined1 *)(iVar11 + 0x10) = 2;
    iVar5 = 0xc;
    if (cVar9 != '\0') {
      if (cVar9 != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018833b8);
      }
      iVar5 = 0x14;
    }
    piVar6 = (int *)(iVar8 + iVar5);
    if (*(int *)(iVar11 + 4) == 0) {
      if (*piVar6 != iVar11) goto LAB_010485b0;
      iVar8 = *(int *)(iVar11 + 8);
      *piVar6 = iVar8;
      if (iVar8 == 0) goto LAB_0104835c;
LAB_01048334:
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar11 + 4);
    }
    else {
      iVar8 = *(int *)(iVar11 + 8);
      *(int *)(*(int *)(iVar11 + 4) + 8) = iVar8;
      if (iVar8 != 0) goto LAB_01048334;
LAB_0104835c:
      if (piVar6[1] != iVar11) {
LAB_010485b0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018833a8);
      }
      piVar6[1] = *(int *)(iVar11 + 4);
    }
    *(undefined4 *)(iVar11 + 4) = 0;
    *(undefined4 *)(iVar11 + 8) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar7;
      bVar14 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar14);
    *piVar7 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105b210(piVar7);
    }
    FUN_01282570(pcVar13);
    if (*pcVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(pcVar13);
        if (bVar14) {
          *pcVar13 = '\0';
          goto LAB_010483e0;
        }
      } while (*pcVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar13);
LAB_010483e0:
    piVar6 = *(int **)(iVar11 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar7;
      bVar14 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar14);
    *piVar7 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105b210(piVar7);
    }
    local_68 = local_40;
    iStack_64 = local_3c;
    iStack_60 = local_38;
    iStack_5c = iStack_34;
    if (*piVar6 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(piVar6);
      if (!bVar14) goto LAB_01048050;
      *piVar6 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01048050:
      (**(code **)(piVar6[2] + 0x10))(piVar6);
    }
    local_8c = 0;
    local_78 = local_68;
    iStack_74 = iStack_64;
    iStack_70 = iStack_60;
    iStack_6c = iStack_5c;
    local_88 = local_68;
    iStack_84 = iStack_64;
    iStack_80 = iStack_60;
    iStack_7c = iStack_5c;
    local_90 = 1;
    FUN_01048708(&local_90);
  }
  goto LAB_010484ac;
  while (*pcVar13 == '\x01') {
LAB_01048478:
    bVar14 = (bool)hasExclusiveAccess(pcVar13);
    if (bVar14) {
      *pcVar13 = '\0';
      goto LAB_0104849c;
    }
  }
LAB_01048490:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar13);
LAB_0104849c:
  if (param_1[1] != 0) goto LAB_01048564;
LAB_010484ac:
  local_78 = local_68;
  iStack_74 = iStack_64;
  iStack_70 = iStack_60;
  iStack_6c = iStack_5c;
  local_88 = local_68;
  iStack_84 = iStack_64;
  iStack_80 = iStack_60;
  iStack_7c = iStack_5c;
LAB_01048564:
  local_8c = 0;
  local_90 = 0;
  FUN_01048708(&local_90);
  return;
}

