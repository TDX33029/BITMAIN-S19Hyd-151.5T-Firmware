// FUN_0069dd24 @ 0069dd24 size=1312 calls_out=10 calls_in=1
// strings: API usage task config changed; notifying task.event open/utils-rs/api-logging/src/debouncer.rs:109 | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs

void FUN_0069dd24(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  undefined4 ***local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  char *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 ***local_50;
  char **local_4c;
  undefined4 *local_48;
  undefined4 **local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  piVar18 = (int *)(param_1 + 0x98);
  if (*piVar18 == 0) {
    bVar19 = (bool)hasExclusiveAccess(piVar18);
    if (!bVar19) goto LAB_0069e1e4;
    *piVar18 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0069e1e4:
    FUN_0164d8d8(piVar18);
  }
  FUN_0165098c(piVar18);
  FUN_0165098c((uint)piVar18 | 1);
  cVar1 = *(char *)((int)param_2 + 0xd);
  iVar14 = *param_2;
  iVar13 = param_2[1];
  iVar17 = param_2[2];
  uVar2 = *(undefined1 *)((int)param_2 + 0x13);
  cVar3 = *(char *)((int)param_2 + 0x12);
  cVar4 = *(char *)((int)param_2 + 0x11);
  iVar16 = param_2[4];
  cVar5 = *(char *)((int)param_2 + 0xf);
  cVar6 = *(char *)((int)param_2 + 0xe);
  cVar7 = (char)param_2[3];
  cVar9 = *(char *)(param_1 + 0xa8);
  if (cVar7 == '\x02' || cVar9 == '\x02') {
    if (cVar7 == '\x02' && cVar9 == '\x02') {
LAB_0069ddb0:
      FUN_009dd354(piVar18);
      return;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x9c);
    bVar19 = iVar10 == iVar14;
    if (bVar19) {
      iVar10 = *(int *)(param_1 + 0xa0);
    }
    if ((bVar19 && iVar10 == iVar13) && (*(int *)(param_1 + 0xa4) == iVar17 && cVar9 == cVar7)) {
      cVar9 = *(char *)(param_1 + 0xa9);
      bVar19 = cVar9 == cVar1;
      if (bVar19) {
        cVar9 = *(char *)(param_1 + 0xaa);
      }
      if (bVar19 && cVar9 == cVar6) {
        cVar9 = *(char *)(param_1 + 0xab);
        bVar19 = cVar9 == cVar5;
        if (bVar19) {
          cVar9 = *(char *)(param_1 + 0xac);
        }
        if (bVar19 && cVar9 == (char)iVar16) {
          cVar9 = *(char *)(param_1 + 0xad);
          bVar19 = cVar9 == cVar4;
          if (bVar19) {
            cVar9 = *(char *)(param_1 + 0xae);
          }
          if (bVar19 && cVar9 == cVar3) goto LAB_0069ddb0;
        }
      }
    }
  }
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4b6dc - 1 < 2 ||
       ((DAT_01d4b6dc != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4b6d4), cVar9 != '\0')))) &&
      (iVar10 = FUN_01aaa278(DAT_01d4b6d4), iVar10 != 0)))) {
    local_40 = *(int *)(DAT_01d4b6d4 + 0x20);
    if (local_40 == 0) {
LAB_0069e22c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0534c);
    }
    local_3c = *(undefined4 *)(DAT_01d4b6d4 + 0x24);
    local_38 = *(undefined4 *)(DAT_01d4b6d4 + 0x28);
    local_50 = &local_44;
    local_68 = (undefined4 *)(DAT_01d4b6d4 + 0x1c);
    local_44 = (undefined4 **)*local_68;
    local_4c = &local_64;
    local_70 = &local_50;
    local_6c = 1;
    local_34 = 0;
    local_48 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = 0x5d;
    local_64 = 
    "API usage task config changed, notifying task.event open/utils-rs/api-logging/src/debouncer.rs:109"
    ;
    FUN_01aaaecc(DAT_01d4b6d4,&local_70);
    iVar10 = DAT_01d4b6d4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4b6d4 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4b6d4 + 0x18);
      local_30 = (undefined4 **)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar15 = DAT_01d4edc8;
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar15 = &DAT_01cfc5e0;
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar15[3])(pcVar8,&local_30);
      if (iVar11 != 0) {
        FUN_01aaa328(iVar10,pcVar8,puVar15[4],&local_30,&local_70);
      }
    }
  }
  else {
    iVar10 = DAT_01d4b6d4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_58 = *(undefined4 *)(DAT_01d4b6d4 + 0x14);
      local_54 = *(undefined4 *)(DAT_01d4b6d4 + 0x18);
      local_5c = 4;
      DataMemoryBarrier(0xb);
      puVar15 = DAT_01d4edc8;
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar15 = &DAT_01cfc5e0;
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar15[3])(pcVar8,&local_5c);
      if (iVar11 != 0) {
        local_48 = (undefined4 *)(DAT_01d4b6d4 + 0x1c);
        local_44 = (undefined4 **)*local_48;
        local_40 = *(int *)(DAT_01d4b6d4 + 0x20);
        if (local_40 == 0) goto LAB_0069e22c;
        local_30 = &local_44;
        local_3c = *(undefined4 *)(DAT_01d4b6d4 + 0x24);
        local_38 = *(undefined4 *)(DAT_01d4b6d4 + 0x28);
        local_2c = &local_70;
        local_50 = &local_30;
        local_4c = (char **)&DAT_00000001;
        local_34 = 0;
        local_28 = &DAT_01d2ea4c;
        local_6c = 0x5d;
        local_70 = (undefined4 ***)0x3d519b;
        FUN_01aaa328(iVar10,pcVar8,puVar15[4],&local_5c,&local_50);
      }
    }
  }
  *(char *)(param_1 + 0xab) = cVar5;
  *(char *)(param_1 + 0xaa) = cVar6;
  *(char *)(param_1 + 0xa9) = cVar1;
  *(undefined1 *)(param_1 + 0xaf) = uVar2;
  *(int *)(param_1 + 0x9c) = iVar14;
  *(int *)(param_1 + 0xa0) = iVar13;
  *(int *)(param_1 + 0xa4) = iVar17;
  piVar12 = (int *)(param_1 + 0xb0);
  *(char *)(param_1 + 0xae) = cVar3;
  *(char *)(param_1 + 0xad) = cVar4;
  *(char *)(param_1 + 0xac) = (char)iVar16;
  *(char *)(param_1 + 0xa8) = cVar7;
  DataMemoryBarrier(0xb);
  do {
    bVar19 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar19);
  *piVar12 = *piVar12 + 2;
  FUN_009dd354(piVar18);
  iVar16 = 0;
  do {
    FUN_019e03e8(param_1 + 8 + iVar16);
    iVar16 = iVar16 + 0x10;
  } while (iVar16 != 0x80);
  return;
}

