// FUN_007c4944 @ 007c4944 size=1096 calls_out=15 calls_in=0
// strings: RUST_MIN_STACK | failed to spawn thread

/* WARNING: Removing unreachable block (ram,0x007c4ae4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007c4944(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  undefined8 local_3e8;
  undefined1 auStack_3e0 [288];
  undefined4 local_2c0 [3];
  int *local_2b4;
  int local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined1 auStack_290 [296];
  int *local_168;
  int *local_160;
  byte *local_15c;
  undefined *local_158;
  int local_154;
  int iStack_150;
  int iStack_14c;
  
  local_3e8 = FUN_0164ec90(&DAT_0185e3b4);
  FUN_016dd1aa(auStack_3e0,param_2,0x120);
  local_2c0[0] = 0x80000000;
  if (DAT_018dd980 == 0) {
    FUN_015e9334(&local_2a0,"RUST_MIN_STACK",0xe);
    uVar3 = local_29c;
    iVar8 = local_2a0;
    uVar15 = 0x200000;
    if (local_2a0 != -0x80000000) {
      FUN_00fab1e0(&local_160,local_29c,local_298);
      if ((local_160 == (int *)0x1) || (local_158 == (undefined *)0x0)) {
LAB_007c4aa4:
        uVar15 = 0x200000;
      }
      else {
        if (local_158 == (undefined *)0x1) {
          bVar13 = *local_15c;
          if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) goto LAB_007c4aa4;
        }
        else {
          bVar13 = *local_15c;
        }
        puVar4 = local_158;
        pbVar10 = local_15c;
        if (bVar13 == 0x2b) {
          pbVar10 = local_15c + 1;
          puVar4 = (undefined *)((int)local_158 - 1);
        }
        if (8 < puVar4) {
          uVar15 = 0;
          while( true ) {
            if (puVar4 == (undefined *)0x0) goto joined_r0x007c4aac;
            uVar5 = (uint)((ulonglong)uVar15 * 10);
            if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0) break;
            uVar11 = *pbVar10 - 0x30;
            uVar15 = uVar11 + uVar5;
            if ((9 < uVar11) ||
               (puVar4 = (undefined *)((int)puVar4 - 1), pbVar10 = pbVar10 + 1, CARRY4(uVar11,uVar5)
               )) break;
          }
          goto LAB_007c4aa4;
        }
        uVar15 = 0;
        for (; puVar4 != (undefined *)0x0; puVar4 = (undefined *)((int)puVar4 - 1)) {
          bVar13 = *pbVar10;
          if (9 < bVar13 - 0x30) {
            uVar15 = 0x200000;
            break;
          }
          pbVar10 = pbVar10 + 1;
          uVar15 = (bVar13 - 0x30) + uVar15 * 10;
        }
      }
joined_r0x007c4aac:
      if (iVar8 != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
    }
    DAT_018dd980 = uVar15 + 1;
  }
  else {
    uVar15 = DAT_018dd980 - 1;
  }
  ClearExclusiveLocal();
  do {
    uVar5 = DAT_018dd9a8 + 1;
    uVar11 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
    if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
      FUN_015ee8c8();
      goto LAB_007c4d98;
    }
    bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
  } while (!bVar2);
  DAT_018dd9a8 = uVar5;
  DAT_018dd9ac = uVar11;
  piVar6 = (int *)FUN_015f8074(uVar5,uVar11,local_2c0);
  local_2b4 = piVar6;
  FUN_015fc56c(&local_2b0,&local_2b4);
  local_154 = 0;
  local_158 = (undefined *)0x0;
  local_15c = &DAT_00000001;
  local_160 = (int *)0x1;
  piVar7 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *piVar7 = (int)local_160;
  piVar7[1] = (int)local_15c;
  piVar7[2] = (int)local_158;
  piVar7[3] = local_154;
  piVar7[4] = iStack_150;
  piVar7[5] = iStack_14c;
  do {
    iVar8 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar8 + 1;
  if (-1 < iVar8) {
    FUN_016dd1aa(auStack_290,&local_3e8,0x128);
    iVar8 = piVar7[2];
    local_2a0 = local_2b0;
    local_29c = uStack_2ac;
    local_298 = uStack_2a8;
    uStack_294 = uStack_2a4;
    local_168 = piVar7;
    if (iVar8 != 0) {
      piVar12 = (int *)(iVar8 + 0xc);
      do {
        iVar14 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar14 + 1;
      if (iVar14 < 0) {
        FUN_015f85e4(iVar8 + 8);
        goto LAB_007c4d98;
      }
    }
    FUN_016dd1aa(&local_160,&local_2a0,0x140);
    iVar8 = thunk_FUN_016d4a50(0x140);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x140);
    }
    FUN_016dd1aa(iVar8,&local_2a0,0x140);
    do {
      iVar14 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar14 + 1;
    if (-1 < iVar14) {
      local_158 = &DAT_018610e8;
      local_160 = piVar6;
      local_15c = (byte *)iVar8;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar9 = local_160;
      puVar9[1] = local_15c;
      puVar9[2] = local_158;
      FUN_015f6af4(&local_160,uVar15);
      pbVar10 = local_15c;
      piVar12 = local_160;
      if (((uint)local_160 & 0xff) == 4) {
        *param_1 = piVar6;
        param_1[1] = piVar7;
        param_1[2] = local_15c;
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(piVar7);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(piVar6);
      }
      local_160 = piVar12;
      local_15c = pbVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("failed to spawn thread",0x16,&local_160,&DAT_0185e3c4);
    }
  }
LAB_007c4d98:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x7c4d98);
  (*pcVar1)();
}

