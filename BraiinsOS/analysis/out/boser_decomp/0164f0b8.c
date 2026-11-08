// FUN_0164f0b8 @ 0164f0b8 size=1864 calls_out=17 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0164f0b8(undefined4 *param_1,char *param_2,uint param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined *local_c4;
  uint *local_bc;
  int local_b8;
  uint local_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  undefined1 *local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  int iStack_74;
  undefined1 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  local_b8 = 0;
  uVar14 = thunk_FUN_01bee35a(0,0x184);
  local_bc = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  if (((char)local_bc[0xd] != '\x01') &&
     (local_bc = (uint *)FUN_01652ae4(), local_bc == (uint *)0x0)) {
    if (local_b8 == 1) {
      local_bc = &local_b4;
    }
    else {
      FUN_01651608(&local_80);
      FUN_0164cc04(&local_b8);
      local_b8 = 1;
      local_bc = &local_b4;
      local_b4 = local_80;
      puStack_b0 = local_7c;
      puStack_ac = local_78;
      iStack_a8 = iStack_74;
      local_a4 = local_70;
      uStack_a0 = uStack_6c;
      uStack_9c = uStack_68;
      uStack_98 = uStack_64;
      local_94 = local_60;
      uStack_90 = uStack_5c;
      uStack_8c = uStack_58;
      uStack_88 = uStack_54;
      uStack_84 = uStack_50;
    }
  }
  local_c4 = &DAT_01d068e8;
LAB_0164f120:
  DataMemoryBarrier(0xb);
  piVar3 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar3 = (int *)FUN_016518b8();
  }
  uVar5 = piVar3[1];
  uVar2 = (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU);
  if (uVar5 <= (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU)) goto LAB_0164f7d0;
  iVar12 = *piVar3 + uVar2 * 0x40;
  puVar11 = (uint *)(iVar12 + 0x18);
  if (*puVar11 == 0) {
    bVar1 = (bool)hasExclusiveAccess(puVar11);
    if (!bVar1) goto LAB_0164f1b8;
    *puVar11 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164f1b8:
    FUN_01652ed8(puVar11);
  }
  if (DAT_01d519e4 != piVar3) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    goto LAB_0164f120;
  }
  if ((char *)*param_1 == (char *)0x0) {
    *param_1 = param_2;
  }
  else if ((char *)*param_1 != param_2) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    FUN_0164cc04(&local_b8);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004c140f,0x7d,&DAT_01d06888);
  }
  local_bc[2] = 0;
  *(bool *)(local_bc + 0xc) = param_5 != &DAT_3b9aca00;
  local_bc[1] = (uint)param_1;
  local_bc[4] = 0;
  *local_bc = 1;
  if (*(int *)(iVar12 + 0x1c) == 0) {
    *(uint **)(iVar12 + 0x1c) = local_bc;
  }
  else {
    *(uint **)(*(int *)(iVar12 + 0x20) + 8) = local_bc;
  }
  *(uint **)(iVar12 + 0x20) = local_bc;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar11;
    bVar1 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar1);
  *puVar11 = uVar2 - 1;
  if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
    FUN_01652d70(puVar11);
  }
  FUN_01650a90(param_2);
  if (*param_2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
      if (bVar1) {
        *param_2 = '\0';
        goto LAB_0164f2f8;
      }
    } while (*param_2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_2);
LAB_0164f2f8:
  uVar2 = *local_bc;
  DataMemoryBarrier(0xb);
  if (param_5 == &DAT_3b9aca00) {
    while (uVar2 != 0) {
      FUN_01be6c3c(0xf0,local_bc,0x80,1,0);
      uVar2 = *local_bc;
      DataMemoryBarrier(0xb);
    }
    FUN_01650ba0(local_bc);
  }
  else if (uVar2 != 0) {
LAB_0164f36c:
    FUN_019ac130(&local_80,1);
    bVar1 = (int)local_7c - (int)(param_4 + (local_80 < param_3)) < 0 ==
            (SBORROW4((int)local_7c,(int)param_4) !=
            SBORROW4((int)local_7c - (int)param_4,(uint)(local_80 < param_3)));
    if (param_3 == local_80 && param_4 == local_7c) {
      bVar1 = param_5 <= local_78;
    }
    if (!bVar1) {
      local_40 = param_5;
      local_34 = local_7c;
      local_38 = local_80;
      local_30 = local_78;
      local_48 = param_3;
      local_44 = param_4;
      FUN_019ac248(&local_80,&local_48,&local_38);
      puVar6 = local_78;
      iVar12 = iStack_74;
      if ((local_80 & 1) != 0) {
        iVar12 = 0;
        puVar6 = (undefined1 *)0x0;
      }
      if (iVar12 + (uint)((undefined1 *)0x7fffffff < puVar6) == 0) goto code_r0x0164f414;
      uVar2 = *local_bc;
      DataMemoryBarrier(0xb);
      while (uVar2 != 0) {
        FUN_01be6c3c(0xf0,local_bc,0x80,1,0);
        uVar2 = *local_bc;
        DataMemoryBarrier(0xb);
      }
      goto LAB_0164f624;
    }
    local_c4 = &DAT_01d068d8;
    goto LAB_0164f478;
  }
LAB_0164f624:
  uVar2 = local_bc[3];
  FUN_0164cc04(&local_b8);
  bVar13 = false;
  bVar10 = 1;
  if (uVar2 == 1) goto LAB_0164f664;
  goto LAB_0164f644;
code_r0x0164f414:
  local_78 = local_70;
  if ((local_80 & 1) != 0) {
    local_78 = (undefined1 *)0x0;
  }
  local_80 = 1;
  local_7c = puVar6;
  FUN_01be6c3c(0xf0,local_bc,0x80,1,&local_7c);
  DataMemoryBarrier(0xb);
  if (*local_bc == 0) goto LAB_0164f624;
  goto LAB_0164f36c;
LAB_0164f478:
  DataMemoryBarrier(0xb);
  piVar3 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar3 = (int *)FUN_016518b8();
  }
  puVar9 = (undefined4 *)local_bc[1];
  uVar5 = piVar3[1];
  uVar2 = (uint)((int)puVar9 * -0x61c88647) >> (-piVar3[2] & 0x1fU);
  if (uVar5 <= (uint)((int)puVar9 * -0x61c88647) >> (-piVar3[2] & 0x1fU)) {
LAB_0164f7d0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,uVar5,local_c4);
  }
  iVar12 = *piVar3 + uVar2 * 0x40;
  puVar11 = (uint *)(iVar12 + 0x18);
  if (*puVar11 == 0) {
    bVar1 = (bool)hasExclusiveAccess(puVar11);
    if (!bVar1) goto LAB_0164f534;
    *puVar11 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164f534:
    FUN_01652ed8(puVar11);
  }
  if ((DAT_01d519e4 != piVar3) || ((undefined4 *)local_bc[1] != puVar9)) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    goto LAB_0164f478;
  }
  if (*local_bc == 0) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    goto LAB_0164f624;
  }
  puVar8 = (uint *)(iVar12 + 0x1c);
  puVar4 = (uint *)*puVar8;
  if (puVar4 == (uint *)0x0) {
LAB_0164f67c:
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
    bVar13 = false;
  }
  else {
    if (puVar4 == local_bc) {
      bVar1 = false;
      puVar7 = (uint *)0x0;
    }
    else {
      bVar10 = 1;
      do {
        puVar7 = puVar4;
        puVar4 = (uint *)puVar7[2];
        if (puVar4 == (uint *)0x0) goto LAB_0164f67c;
        bVar10 = (undefined4 *)puVar7[1] != puVar9 & bVar10;
      } while (puVar4 != local_bc);
      bVar1 = (bool)(bVar10 ^ 1);
      puVar8 = puVar7 + 2;
    }
    uVar2 = puVar4[2];
    *puVar8 = uVar2;
    if (*(uint **)(iVar12 + 0x20) == local_bc) {
      *(uint **)(iVar12 + 0x20) = puVar7;
    }
    else {
      for (; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
        if (*(undefined4 **)(uVar2 + 4) == puVar9) {
          bVar13 = puVar9 != param_1;
          goto LAB_0164f710;
        }
      }
    }
    bVar13 = puVar9 != param_1;
    if (!bVar1 && !bVar13) {
      bVar13 = false;
      *param_1 = 0;
    }
LAB_0164f710:
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar11;
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = uVar2 - 1;
  }
  if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
    FUN_01652d70(puVar11);
  }
  FUN_0164cc04(&local_b8);
  bVar10 = 0;
LAB_0164f644:
  if (*param_2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_2);
    if (bVar1) {
      *param_2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0164f664;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(param_2);
LAB_0164f664:
  FUN_0165098c(param_2);
  return (bVar10 | bVar13) ^ 1;
}

