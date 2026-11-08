// FUN_019ac968 @ 019ac968 size=1308 calls_out=14 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x019acda0) */
/* WARNING: Removing unreachable block (ram,0x019acdb0) */
/* WARNING: Removing unreachable block (ram,0x019acdb8) */
/* WARNING: Removing unreachable block (ram,0x019acdc4) */
/* WARNING: Removing unreachable block (ram,0x019acdcc) */
/* WARNING: Removing unreachable block (ram,0x019acddc) */

void FUN_019ac968(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  short *psVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_7c;
  uint local_78;
  uint local_60;
  uint local_5c;
  undefined1 *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  uint local_2c;
  uint local_28;
  
  uVar14 = param_3;
  if ((param_2 & 1) == 0) {
    uVar14 = 0xffffff9c;
  }
  while (iVar5 = FUN_01be3500(uVar14,param_4,0x8c000), iVar5 == -1) {
    puVar6 = (uint *)FUN_01be3244();
    local_4c = *puVar6;
    if (local_4c != 4) {
      local_50 = (undefined1 *)0x0;
      if (local_4c != 0x28 && local_4c != 0x14) {
        param_1[1] = local_4c;
        *(undefined1 *)param_1 = 0;
        uVar2 = *(undefined2 *)((uint)&local_50 | 1);
        *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((undefined2 *)((uint)&local_50 | 1) + 1)
        ;
        *(undefined2 *)((int)param_1 + 1) = uVar2;
        return;
      }
      if ((param_2 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = local_4c;
        return;
      }
      iVar5 = FUN_01bf0530(param_3,param_4,0);
      if (iVar5 == -1) {
        uVar12 = *puVar6;
        *param_1 = 0;
        param_1[1] = uVar12;
        return;
      }
      *(undefined1 *)param_1 = 4;
      return;
    }
  }
  local_3c = FUN_01be2ce4();
  if (local_3c == 0) {
    puVar8 = (undefined4 *)FUN_01be3244();
    uVar14 = *puVar8;
    FUN_01bf01d6(iVar5);
    *(char *)(param_1 + 1) = (char)uVar14;
    *param_1 = 0;
    *(char *)((int)param_1 + 7) = (char)((uint)uVar14 >> 0x18);
    *(short *)((int)param_1 + 5) = (short)((uint)uVar14 >> 8);
    return;
  }
  local_44 = 1;
  local_4c = 1;
  local_50 = &DAT_00000001;
  local_40 = 0;
  local_48 = 0;
  piVar7 = (int *)thunk_FUN_01be5118(0x18);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *piVar7 = (int)local_50;
  piVar7[1] = local_4c;
  piVar7[2] = local_48;
  piVar7[3] = local_44;
  piVar7[4] = local_40;
  piVar7[5] = local_3c;
  puVar6 = (uint *)FUN_01be3244();
LAB_019acaa4:
  *puVar6 = 0;
  puVar8 = (undefined4 *)FUN_01be2d7c(piVar7[5]);
  if (puVar8 == (undefined4 *)0x0) goto LAB_019acc70;
  psVar13 = (short *)((int)puVar8 + 0x13);
  iVar9 = FUN_01bedbda(psVar13);
  if (iVar9 == 1) goto LAB_019aca98;
  if (iVar9 == 2) {
    if (*psVar13 != 0x2e2e) {
      iVar9 = 2;
      goto LAB_019acaf4;
    }
    goto LAB_019acaa4;
  }
  goto LAB_019acaf4;
LAB_019acc70:
  local_5c = *puVar6;
  if (local_5c == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019ad05c(piVar7);
    }
    iVar5 = FUN_01bf0530(uVar14,param_4,0x200);
    if (iVar5 == -1) {
      uVar12 = *puVar6;
      cVar4 = FUN_019a0d94(uVar12);
      if (cVar4 != '\0') {
        *param_1 = 0;
        param_1[1] = uVar12;
        return;
      }
    }
    *(undefined1 *)param_1 = 4;
    return;
  }
  local_60 = local_60 & 0xffffff00;
LAB_019acc8c:
  *param_1 = local_60;
  param_1[1] = local_5c;
  goto LAB_019acc94;
LAB_019aca98:
  if (*(char *)psVar13 == '.') goto LAB_019acaa4;
  iVar9 = 1;
LAB_019acaf4:
  uVar11 = *puVar8;
  iVar15 = puVar8[1];
  cVar4 = *(char *)((int)puVar8 + 0x12);
  uVar16 = FUN_00664758(psVar13,iVar9 + 1);
  uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
  puVar10 = (undefined1 *)uVar16;
  do {
    iVar9 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar9 + 1;
  if (iVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19ace80);
    (*pcVar1)();
  }
  *(undefined4 *)((uint)&local_60 | 4) = uVar11;
  ((undefined4 *)((uint)&local_60 | 4))[1] = iVar15;
  local_60 = uVar12;
  if (puVar10 == (undefined1 *)0x0) goto LAB_019acc8c;
  *(uint *)((uint)&local_50 | 4) = uVar12;
  ((uint *)((uint)&local_50 | 4))[1] = local_5c;
  local_40 = CONCAT31(local_40._1_3_,cVar4);
  local_50 = puVar10;
  local_44 = iVar15;
  local_38 = piVar7;
  if (cVar4 == '\0') {
    FUN_019ac968(&local_2c,1,iVar5,puVar10);
LAB_019acba8:
    if ((char)local_2c == '\x04') {
LAB_019acbd8:
      local_78 = local_78 & 0xffffff00 | 4;
      uVar12 = local_7c;
    }
    else {
      local_78 = local_2c;
      uVar12 = local_28;
    }
    if ((local_78 & 0xff) == 0) goto LAB_019acc18;
    if ((local_78 & 0xff) == 4) {
      local_7c = uVar12;
      goto LAB_019acc28;
    }
  }
  else {
    if (cVar4 == '\x04') {
      FUN_019ac968(&local_2c,1,iVar5,puVar10);
      goto LAB_019acba8;
    }
    iVar9 = FUN_01bf0530(iVar5,puVar10,0);
    if (iVar9 != -1) goto LAB_019acbd8;
    uVar12 = *puVar6;
    local_78 = 0;
LAB_019acc18:
    local_7c = 2;
    if (uVar12 == 2) {
LAB_019acc28:
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(piVar7);
      }
      *puVar10 = 0;
      if (local_4c != 0) {
        thunk_FUN_01be4678(puVar10);
      }
      goto LAB_019acaa4;
    }
  }
  *param_1 = local_78;
  param_1[1] = uVar12;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(piVar7);
  }
  *puVar10 = 0;
  if (local_4c != 0) {
    thunk_FUN_01be4678(puVar10);
  }
LAB_019acc94:
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(piVar7);
    return;
  }
  return;
}

