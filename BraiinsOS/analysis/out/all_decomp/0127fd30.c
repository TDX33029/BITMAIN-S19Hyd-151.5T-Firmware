// FUN_0127fd30 @ 0127fd30 size=1976 calls_out=19 calls_in=7
// strings: attempted to use a condition variable with more than one mutex

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0127fd30(int *param_1,char *param_2,uint param_3,undefined1 *param_4,undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined *local_c4;
  int local_b8;
  uint local_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  uint uStack_a8;
  undefined1 *local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  uint uStack_74;
  undefined1 *local_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  local_b8 = 0;
  uVar16 = thunk_FUN_016de0ee(0,0x1c4);
  puVar13 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if (((char)puVar13[0xd] != '\x01') &&
     (puVar13 = (uint *)FUN_01280554(puVar13), puVar13 == (uint *)0x0)) {
    if (local_b8 == 1) {
      puVar13 = &local_b4;
    }
    else {
      FUN_01283788(&local_80);
      FUN_0127d2e4(&local_b8);
      puVar13 = &local_b4;
      local_b8 = 1;
      local_b4 = local_80;
      puStack_b0 = local_7c;
      puStack_ac = local_78;
      uStack_a8 = uStack_74;
      local_a4 = local_70;
      local_a0 = iStack_6c;
      local_9c = uStack_68;
      local_98 = iStack_64;
      local_94 = local_60;
      uStack_90 = uStack_5c;
      uStack_8c = uStack_58;
      uStack_88 = uStack_54;
      uStack_84 = uStack_50;
    }
  }
  local_c4 = &DAT_0188b980;
LAB_0127fd90:
  DataMemoryBarrier(0xb);
  piVar4 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar4 = (int *)FUN_01283a38();
  }
  uVar6 = piVar4[1];
  uVar2 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
  if (uVar6 <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) goto LAB_0128049c;
  iVar12 = *piVar4 + uVar2 * 0x40;
  puVar10 = (uint *)(iVar12 + 0x18);
  if (*puVar10 == 0) {
    bVar14 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar14) goto LAB_0127fe24;
    *puVar10 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0127fe24:
    FUN_01286a10(puVar10);
  }
  if (DAT_018dd950 != piVar4) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar10;
      bVar14 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar14);
    *puVar10 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01286894(puVar10);
    }
    goto LAB_0127fd90;
  }
  if ((char *)*param_1 == (char *)0x0) {
    *param_1 = (int)param_2;
  }
  else if ((char *)*param_1 != param_2) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar10;
      bVar14 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar14);
    *puVar10 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01286894(puVar10);
    }
    FUN_0127d2e4(&local_b8);
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("attempted to use a condition variable with more than one mutex",0x7d,&DAT_0188b8d0
                );
  }
  puVar13[2] = 0;
  *(bool *)(puVar13 + 0xc) = param_5 != &DAT_3b9aca00;
  puVar13[1] = (uint)param_1;
  puVar13[4] = 0;
  *puVar13 = 1;
  if (*(int *)(iVar12 + 0x1c) == 0) {
    *(uint **)(iVar12 + 0x1c) = puVar13;
  }
  else {
    *(uint **)(*(int *)(iVar12 + 0x20) + 8) = puVar13;
  }
  *(uint **)(iVar12 + 0x20) = puVar13;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar10;
    bVar14 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar14);
  *puVar10 = uVar2 - 1;
  if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
    FUN_01286894(puVar10);
  }
  FUN_01282570(param_2);
  if (*param_2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar14 = (bool)hasExclusiveAccess(param_2);
      if (bVar14) {
        *param_2 = '\0';
        goto LAB_0127ff60;
      }
    } while (*param_2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_2);
LAB_0127ff60:
  uVar2 = *puVar13;
  DataMemoryBarrier(0xb);
  if (param_5 == &DAT_3b9aca00) {
    while (uVar2 != 0) {
      FUN_016d6968(0xf0,puVar13,0x80,1,0);
      uVar2 = *puVar13;
      DataMemoryBarrier(0xb);
    }
    FUN_012826f4(puVar13);
  }
  else if (uVar2 != 0) {
LAB_0127ffd0:
    FUN_015f3b0c(&local_80,1);
    bVar14 = (int)local_7c - (int)(param_4 + (local_80 < param_3)) < 0 ==
             (SBORROW4((int)local_7c,(int)param_4) !=
             SBORROW4((int)local_7c - (int)param_4,(uint)(local_80 < param_3)));
    if (param_3 == local_80 && param_4 == local_7c) {
      bVar14 = param_5 <= local_78;
    }
    if (!bVar14) {
      local_34 = local_7c;
      puStack_40 = param_5;
      local_38 = local_80;
      local_30 = local_78;
      local_48 = param_3;
      puStack_44 = param_4;
      FUN_015f3c24(&local_80,&local_48,&local_38);
      bVar14 = (local_80 & 1) != 0;
      puVar7 = local_78;
      if (bVar14) {
        puVar7 = (undefined1 *)0x0;
      }
      uVar2 = uStack_74 ^ (int)puVar7 >> 0x1f;
      if (bVar14) {
        uVar2 = (int)puVar7 >> 0x1f;
      }
      if (uVar2 == 0) goto code_r0x01280078;
      uVar2 = *puVar13;
      DataMemoryBarrier(0xb);
      while (uVar2 != 0) {
        FUN_016d6968(0xf0,puVar13,0x80,1,0);
        uVar2 = *puVar13;
        DataMemoryBarrier(0xb);
      }
      goto LAB_01280260;
    }
    local_c4 = &DAT_0188b920;
    goto LAB_012800d8;
  }
LAB_01280260:
  uVar2 = puVar13[3];
  iVar12 = DAT_018dd954;
  goto joined_r0x012804d8;
code_r0x01280078:
  local_78 = local_70;
  if ((local_80 & 1) != 0) {
    local_78 = (undefined1 *)0x0;
  }
  local_80 = 1;
  local_7c = puVar7;
  FUN_016d6968(0xf0,puVar13,0x80,1,&local_7c);
  DataMemoryBarrier(0xb);
  if (*puVar13 == 0) goto LAB_01280260;
  goto LAB_0127ffd0;
LAB_012800d8:
  DataMemoryBarrier(0xb);
  piVar4 = DAT_018dd950;
  if (DAT_018dd950 == (int *)0x0) {
    piVar4 = (int *)FUN_01283a38();
  }
  piVar11 = (int *)puVar13[1];
  uVar6 = piVar4[1];
  uVar2 = (uint)((int)piVar11 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
  if (uVar6 <= (uint)((int)piVar11 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
LAB_0128049c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,uVar6,local_c4);
  }
  iVar12 = *piVar4 + uVar2 * 0x40;
  puVar10 = (uint *)(iVar12 + 0x18);
  if (*puVar10 == 0) {
    bVar14 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar14) goto LAB_01280184;
    *puVar10 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01280184:
    FUN_01286a10(puVar10);
  }
  piVar3 = DAT_018dd950;
  if (DAT_018dd950 == piVar4) {
    piVar3 = (int *)puVar13[1];
  }
  if (DAT_018dd950 != piVar4 || piVar3 != piVar11) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar10;
      bVar14 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar14);
    *puVar10 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01286894(puVar10);
    }
    goto LAB_012800d8;
  }
  if (*puVar13 != 0) {
    puVar9 = (uint *)(iVar12 + 0x1c);
    puVar5 = (uint *)*puVar9;
    if (puVar5 == (uint *)0x0) {
LAB_012802e8:
      bVar15 = false;
    }
    else {
      if (puVar5 == puVar13) {
        puVar8 = (uint *)0x0;
        bVar14 = false;
      }
      else {
        bVar1 = 1;
        do {
          puVar8 = puVar5;
          puVar5 = (uint *)puVar8[2];
          if (puVar5 == (uint *)0x0) goto LAB_012802e8;
          bVar1 = (int *)puVar8[1] != piVar11 & bVar1;
        } while (puVar5 != puVar13);
        bVar14 = (bool)(bVar1 ^ 1);
        puVar9 = puVar8 + 2;
      }
      uVar2 = puVar5[2];
      *puVar9 = uVar2;
      if (*(uint **)(iVar12 + 0x20) == puVar13) {
        *(uint **)(iVar12 + 0x20) = puVar8;
      }
      else {
        for (; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
          if (*(int **)(uVar2 + 4) == piVar11) {
            bVar15 = piVar11 != param_1;
            goto LAB_01280360;
          }
        }
      }
      bVar15 = piVar11 != param_1;
      if (!bVar15 && !bVar14) {
        bVar15 = false;
        *param_1 = 0;
      }
    }
LAB_01280360:
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar10;
      bVar14 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar14);
    *puVar10 = uVar2 - 1;
    iVar12 = DAT_018dd954;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01286894(puVar10);
      iVar12 = DAT_018dd954;
    }
    DAT_018dd954 = iVar12;
    if (local_b8 != 0) {
      do {
        DAT_018dd954 = iVar12 + -1;
        bVar14 = (bool)hasExclusiveAccess(0x18dd954);
      } while (!bVar14);
      if (local_98 != 0) {
        thunk_FUN_016d3fb4(local_94);
      }
      if (local_a0 != 3) {
        FUN_0128155c(local_a0,local_9c);
      }
    }
    if (*param_2 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(param_2);
      if (bVar14) {
        *param_2 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_012803f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_01280da8(param_2);
LAB_012803f0:
    FUN_0128236c(param_2);
    return bVar15 ^ 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar10;
    bVar14 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar14);
  *puVar10 = uVar2 - 1;
  if ((uVar2 < 4) || ((uVar2 & 2) != 0)) goto LAB_01280260;
  FUN_01286894(puVar10);
  uVar2 = puVar13[3];
  iVar12 = DAT_018dd954;
joined_r0x012804d8:
  DAT_018dd954 = iVar12;
  if (local_b8 != 0) {
    do {
      DAT_018dd954 = iVar12 + -1;
      bVar14 = (bool)hasExclusiveAccess(0x18dd954);
    } while (!bVar14);
    if (local_98 != 0) {
      thunk_FUN_016d3fb4(local_94);
    }
    if (local_a0 != 3) {
      FUN_0128155c(local_a0,local_9c);
    }
  }
  if (uVar2 != 1) {
    if (*param_2 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(param_2);
      if (bVar14) {
        *param_2 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_012802d4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_01280da8(param_2);
  }
LAB_012802d4:
  FUN_0128236c(param_2);
  return 0;
}

