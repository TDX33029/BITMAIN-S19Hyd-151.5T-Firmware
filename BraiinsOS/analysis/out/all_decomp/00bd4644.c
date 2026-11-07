// FUN_00bd4644 @ 00bd4644 size=1124 calls_out=9 calls_in=4
// strings: BUG: broadcast failed

void FUN_00bd4644(int *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int unaff_r4;
  undefined4 uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  undefined8 uVar33;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  uint local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_28;
  
  iVar5 = *param_1;
  iVar12 = param_1[1];
  if (iVar5 != 5 || iVar12 != 0) {
    local_ec = param_1[2];
    local_f0 = param_1[3];
    local_f4 = param_1[4];
    local_f8 = param_1[5];
  }
  iVar6 = param_1[6];
  iVar7 = param_1[0x11];
  iVar8 = param_1[0xd];
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x16);
  iVar27 = param_1[10];
  iVar29 = param_1[7];
  iVar30 = param_1[8];
  iVar32 = param_1[9];
  iVar13 = param_1[0x12];
  iVar17 = param_1[0xe];
  iVar14 = param_1[0x14];
  iVar21 = param_1[0x15];
  iVar26 = param_1[0x10];
  iVar23 = param_1[0xc];
  if (param_1[0x1a] == -0x80000000) {
    iVar28 = 0;
    iVar9 = iVar26;
    iVar24 = -0x80000000;
  }
  else {
    iVar28 = param_1[0x1c];
    iVar24 = param_1[0x1b];
    if (iVar28 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(iVar28);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar28);
      }
    }
    FUN_016dd1aa(iVar9,iVar24,iVar28);
    iVar24 = iVar28;
  }
  iVar25 = param_1[0x1e];
  bVar2 = *(byte *)(param_1 + 0x1d);
  if (*(int *)(iVar25 + 0x11c) == 0) {
    local_94 = local_f8;
    local_98 = local_f4;
    local_9c = local_f0;
    local_a0 = local_ec;
    local_a8 = iVar5;
    local_a4 = iVar12;
    local_90 = iVar6;
    local_8c = iVar29;
    local_88 = iVar30;
    local_84 = iVar32;
    local_80 = iVar27;
    local_78 = iVar23;
    local_74 = iVar8;
    local_70 = iVar17;
    local_68 = iVar26;
    local_64 = iVar7;
    local_60 = iVar13;
    local_58 = iVar14;
    local_54 = iVar21;
    local_50 = (uint)bVar1;
    local_48 = uVar33;
    local_40 = iVar24;
    local_3c = iVar9;
    local_38 = iVar28;
    local_34 = (uint)bVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: broadcast failed",0x15,&local_a8,&DAT_0187261c,0x1872218);
  }
  piVar18 = (int *)(iVar25 + 8);
  if (*piVar18 == 0) {
    bVar3 = (bool)hasExclusiveAccess(piVar18);
    if (bVar3) {
      *piVar18 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00bd47ac;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar18);
LAB_00bd47ac:
  FUN_0128236c(piVar18);
  FUN_0128236c((uint)piVar18 | 1);
  *(int *)(iVar25 + 0x28) = iVar6;
  *(int *)(iVar25 + 0x10) = iVar5;
  uVar22 = *(uint *)(iVar25 + 0x78);
  iVar5 = *(int *)(iVar25 + 0x7c);
  *(int *)(iVar25 + 0x80) = iVar28;
  *(int *)(iVar25 + 0x78) = iVar24;
  *(int *)(iVar25 + 0x7c) = iVar9;
  *(int *)(iVar25 + 0x70) = (int)uVar33;
  *(uint *)(iVar25 + 0x68) = (uint)bVar1;
  *(int *)(iVar25 + 100) = iVar21;
  *(int *)(iVar25 + 0x60) = iVar14;
  *(int *)(iVar25 + 0x58) = iVar13;
  *(int *)(iVar25 + 0x54) = iVar7;
  *(int *)(iVar25 + 0x50) = iVar26;
  *(int *)(iVar25 + 0x48) = iVar17;
  *(int *)(iVar25 + 0x44) = iVar8;
  *(int *)(iVar25 + 0x40) = iVar23;
  *(int *)(iVar25 + 0x38) = iVar27;
  *(int *)(iVar25 + 0x34) = iVar32;
  *(int *)(iVar25 + 0x30) = iVar30;
  *(int *)(iVar25 + 0x2c) = iVar29;
  *(int *)(iVar25 + 0x24) = local_f8;
  *(int *)(iVar25 + 0x20) = local_f4;
  *(int *)(iVar25 + 0x1c) = local_f0;
  *(int *)(iVar25 + 0x18) = local_ec;
  *(undefined4 *)(iVar25 + 0x14) = 0;
  *(uint *)(iVar25 + 0x84) = (uint)bVar2;
  piVar10 = (int *)(iVar25 + 0x118);
  *(int *)(iVar25 + 0x74) = (int)((ulonglong)uVar33 >> 0x20);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = *piVar10 + 2;
  FUN_01282570(piVar18);
  FUN_01282570((uint)piVar18 | 1);
  if (*piVar18 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar18);
      if (bVar3) {
        *piVar18 = 0;
        goto LAB_00bd48fc;
      }
    } while (*piVar18 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar18);
LAB_00bd48fc:
  FUN_0163b708(iVar25 + 0x88);
  FUN_0163b708(iVar25 + 0x98);
  FUN_0163b708(iVar25 + 0xa8);
  FUN_0163b708(iVar25 + 0xb8);
  FUN_0163b708(iVar25 + 200);
  FUN_0163b708(iVar25 + 0xd8);
  FUN_0163b708(iVar25 + 0xe8);
  FUN_0163b708(iVar25 + 0xf8);
  if ((uVar22 & 0x7fffffff) == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar22 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar19 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar19 - 0x10, uVar19 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar19 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar8 = *(int *)(iVar12 + 8) + 0x10;
  iVar7 = iVar6 * uVar22 + iVar6 + -4;
  iVar6 = iVar8 + iVar7;
  if (4 < uVar19) {
    if (uVar19 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar19 = *(uint *)(iVar6 + -4);
    if (uVar19 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar6 - iVar5) < uVar19) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar19) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar8 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar19 = 1 << uVar22;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar20 = *(uint *)(iVar12 + 0x10);
    uVar15 = *(uint *)(iVar12 + 0xc) | uVar20;
    if ((uVar19 & uVar15) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar20 == 0) || (uVar15 + uVar19 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar22);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar11;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar11 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar19 + uVar20;
      return;
    }
    puVar31 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar31);
      uVar15 = *puVar31;
      if (uVar20 != uVar15) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar31);
    } while (!bVar3);
    *puVar31 = uVar19 + uVar20;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar20 == uVar15) {
      return;
    }
  } while( true );
}

