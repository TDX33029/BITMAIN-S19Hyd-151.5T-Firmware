// FUN_009ec4ac @ 009ec4ac size=1632 calls_out=17 calls_in=1
// strings: RUST_MIN_STACK

/* WARNING: Removing unreachable block (ram,0x009ec748) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009ec4ac(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  undefined4 local_1a0;
  uint local_19c;
  undefined4 local_198;
  int local_194;
  undefined1 auStack_190 [88];
  undefined4 local_138;
  undefined4 *local_134;
  undefined4 local_130;
  int *local_12c;
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  int *piStack_108;
  undefined1 auStack_104 [100];
  int *local_a0;
  uint *local_9c;
  undefined *local_98;
  uint local_94;
  int *local_90;
  int *local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5c;
  
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x10);
  }
  puVar6[3] = 0x7265646e;
  puVar6[2] = 0x65707061;
  puVar6[1] = 0x2d676e69;
  *puVar6 = 0x63617274;
  FUN_00a032ec(&local_a0,0x1f400);
  uVar18 = local_94;
  puVar8 = local_98;
  puVar5 = local_9c;
  piVar4 = local_a0;
  local_5c = 0;
  local_9c = (uint *)&DAT_00000001;
  local_a0 = (int *)0x1;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = (int *)0x0;
  local_94 = local_94 & 0xffffff00;
  local_98 = (undefined *)0x0;
  local_68 = 4;
  local_74 = 4;
  local_80 = 4;
  local_8c = (int *)0x4;
  iVar7 = thunk_FUN_016d4a50(0x48);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x48);
  }
  FUN_016dd1aa(iVar7,&local_a0,0x48);
  FUN_016dd1aa(auStack_190,param_2,0x54);
  local_198 = 2;
  local_19c = uVar18;
  local_1a0 = puVar8;
  local_130 = 0x10;
  local_138 = 0x10;
  local_194 = iVar7;
  local_134 = puVar6;
  if (DAT_018dd980 == 0) {
    FUN_015e9334(&local_118,"RUST_MIN_STACK",0xe);
    uVar3 = local_114;
    iVar12 = local_118;
    uVar18 = 0x200000;
    if (local_118 != -0x80000000) {
      FUN_00fab1e0(&local_a0,local_114,local_110);
      if ((local_a0 == (int *)0x1) || (local_98 == (undefined *)0x0)) {
LAB_009ec708:
        uVar18 = 0x200000;
      }
      else {
        if (local_98 == (undefined *)0x1) {
          bVar16 = (byte)*local_9c;
          if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_009ec708;
        }
        else {
          bVar16 = (byte)*local_9c;
        }
        puVar8 = local_98;
        puVar13 = local_9c;
        if (bVar16 == 0x2b) {
          puVar13 = (uint *)((int)local_9c + 1);
          puVar8 = (undefined *)((int)local_98 - 1);
        }
        if (8 < puVar8) {
          uVar18 = 0;
          while( true ) {
            if (puVar8 == (undefined *)0x0) goto joined_r0x009ec710;
            uVar9 = (uint)((ulonglong)uVar18 * 10);
            if ((int)((ulonglong)uVar18 * 10 >> 0x20) != 0) break;
            uVar14 = *(byte *)puVar13 - 0x30;
            uVar18 = uVar14 + uVar9;
            if ((9 < uVar14) ||
               (puVar8 = (undefined *)((int)puVar8 - 1), puVar13 = (uint *)((int)puVar13 + 1),
               CARRY4(uVar14,uVar9))) break;
          }
          goto LAB_009ec708;
        }
        uVar18 = 0;
        for (; puVar8 != (undefined *)0x0; puVar8 = (undefined *)((int)puVar8 - 1)) {
          bVar16 = *(byte *)puVar13;
          if (9 < bVar16 - 0x30) {
            uVar18 = 0x200000;
            break;
          }
          puVar13 = (uint *)((int)puVar13 + 1);
          uVar18 = (bVar16 - 0x30) + uVar18 * 10;
        }
      }
joined_r0x009ec710:
      if (iVar12 != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
    }
    DAT_018dd980 = uVar18 + 1;
  }
  else {
    uVar18 = DAT_018dd980 - 1;
  }
  ClearExclusiveLocal();
  do {
    uVar9 = DAT_018dd9a8 + 1;
    uVar14 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
    if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
      FUN_015ee8c8();
      goto LAB_009ecb20;
    }
    bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
  } while (!bVar2);
  DAT_018dd9a8 = uVar9;
  DAT_018dd9ac = uVar14;
  piVar10 = (int *)FUN_015f8074(uVar9,uVar14,&local_138);
  local_12c = piVar10;
  FUN_015fc56c(&local_128,&local_12c);
  local_94 = 0;
  local_98 = (undefined *)0x0;
  local_9c = (uint *)&DAT_00000001;
  local_a0 = (int *)0x1;
  piVar11 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *piVar11 = (int)local_a0;
  piVar11[1] = (int)local_9c;
  piVar11[2] = (int)local_98;
  piVar11[3] = local_94;
  piVar11[4] = (int)local_90;
  piVar11[5] = (int)local_8c;
  do {
    iVar12 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar12 + 1;
  if (iVar12 < 0) {
LAB_009ecb20:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9ecb20);
    (*pcVar1)();
  }
  FUN_016dd1aa(auStack_104,&local_1a0,100);
  iVar12 = piVar11[2];
  local_118 = local_128;
  local_114 = uStack_124;
  local_110 = uStack_120;
  uStack_10c = uStack_11c;
  piStack_108 = piVar11;
  if (iVar12 != 0) {
    piVar15 = (int *)(iVar12 + 0xc);
    do {
      iVar17 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar17 + 1;
    if (iVar17 < 0) {
      FUN_015f85e4(iVar12 + 8);
      goto LAB_009ecb20;
    }
  }
  FUN_016dd1aa(&local_a0,&local_118,0x78);
  iVar12 = thunk_FUN_016d4a50(0x78);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x78);
  }
  FUN_016dd1aa(iVar12,&local_118,0x78);
  do {
    iVar17 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar17 + 1;
  if (iVar17 < 0) goto LAB_009ecb20;
  local_98 = &DAT_0186b2ec;
  local_a0 = piVar10;
  local_9c = (uint *)iVar12;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar6 = local_a0;
  puVar6[1] = local_9c;
  puVar6[2] = local_98;
  FUN_015f6af4(&local_a0,uVar18);
  puVar13 = local_9c;
  piVar15 = local_a0;
  if ((char)local_a0 != '\x04') {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659070(piVar11);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(piVar10);
    }
    local_a0 = piVar15;
    local_9c = puVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034b47b,0x3d,&local_a0,&DAT_0186b160,&DAT_0186b150);
  }
  if (piVar4 == (int *)0x0) {
    puVar13 = puVar5 + 0x28;
    do {
      uVar18 = *puVar13;
      bVar2 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar2);
    *puVar13 = uVar18 + 1;
  }
  else {
    if (piVar4 != (int *)0x1) {
      do {
        uVar18 = *puVar5;
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = uVar18 + 1;
      if (0x7fffffff < uVar18) goto LAB_009ec968;
      goto LAB_009ec98c;
    }
    puVar13 = puVar5 + 0x20;
    do {
      uVar18 = *puVar13;
      bVar2 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar2);
    *puVar13 = uVar18 + 1;
  }
  if ((int)uVar18 < 0) {
LAB_009ec968:
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
LAB_009ec98c:
  local_88 = (int)local_9c;
  local_98 = (undefined *)0x2;
  local_a0 = piVar4;
  local_9c = puVar5;
  local_94 = iVar7;
  local_90 = piVar10;
  local_8c = piVar11;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = 0;
  param_1[4] = (int)local_a0;
  param_1[5] = (int)local_9c;
  param_1[6] = (int)local_98;
  param_1[7] = local_94;
  param_1[8] = (int)local_90;
  param_1[9] = (int)local_8c;
  param_1[10] = local_88;
  *(undefined1 *)(param_1 + 3) = 1;
  *param_1 = (int)piVar4;
  param_1[1] = (int)puVar5;
  param_1[2] = (int)puVar6;
  return;
}

