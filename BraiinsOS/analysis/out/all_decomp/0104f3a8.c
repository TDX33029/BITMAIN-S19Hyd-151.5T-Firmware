// FUN_0104f3a8 @ 0104f3a8 size=1140 calls_out=7 calls_in=2
// strings: 

void FUN_0104f3a8(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  short sVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  int unaff_r4;
  uint uVar13;
  uint uVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int local_640;
  int local_63c;
  undefined2 local_628;
  undefined2 local_626;
  int local_624;
  int local_620;
  int local_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined2 local_604;
  short local_602;
  int local_600;
  int local_5fc;
  int local_5f8;
  undefined4 local_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined1 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined2 local_5d8 [2];
  undefined4 local_5d4;
  ushort local_5cc;
  undefined2 local_5ca;
  int local_5c8;
  int local_5c4;
  undefined4 local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_590;
  ushort *local_58c;
  ushort *local_588;
  undefined4 local_584;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  short local_300 [232];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  short local_122;
  short local_110 [116];
  undefined4 uStack_28;
  
  uVar1 = *(ushort *)(param_2 + 0x50);
  uVar2 = *(undefined2 *)(param_2 + 0x52);
  if (0xf < uVar1 - 4) {
                    /* WARNING: Could not recover jumptable at 0x0104f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0104f500 + *(int *)(&DAT_0104f500 + (uint)uVar1 * 4)))(&DAT_0104f500,param_2);
    return;
  }
  iVar10 = *(int *)(param_2 + 0x20);
  if (iVar10 == 0) {
LAB_0104f43c:
    local_110[0] = 2;
    iVar10 = *(int *)(param_2 + 8);
  }
  else {
    puVar7 = *(ushort **)(param_2 + 0x1c);
    if (1 < puVar7[0x24]) {
      if (iVar10 != 1) {
        puVar7 = puVar7 + 0x98;
        iVar10 = iVar10 * 0xe8 + -0xe8;
        do {
          if (*puVar7 < 2) {
            puVar7 = puVar7 + -0x24;
            goto LAB_0104f5cc;
          }
          puVar7 = puVar7 + 0x74;
          iVar10 = iVar10 + -0xe8;
        } while (iVar10 != 0);
      }
      goto LAB_0104f43c;
    }
LAB_0104f5cc:
    local_590 = *(undefined4 *)(puVar7 + 0x22);
    local_588 = puVar7 + 0x24;
    local_584 = *(undefined4 *)(puVar7 + 0x72);
    local_58c = puVar7;
    FUN_0104bc48(&local_488,&local_590);
    FUN_016dd1aa(local_110,&local_488,0xe8);
    iVar10 = *(int *)(param_2 + 8);
  }
  if (iVar10 == 0) {
    FUN_016dd606(&local_628,0,0x40);
    local_5e0 = (uint)local_5e0._2_2_ << 0x10;
    local_5e8 = 1;
    local_5e4 = (uint)local_5e4._2_2_ << 0x10;
    iVar10 = thunk_FUN_016d4a50(0x4c);
    goto joined_r0x0104f650;
  }
  psVar16 = *(short **)(param_2 + 4);
  sVar6 = psVar16[0x20];
  if (*psVar16 == 1) {
    iVar17 = *(int *)(psVar16 + 6);
    uVar8 = 0;
    if (iVar17 < 0) {
LAB_0104f484:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar17);
    }
    uVar8 = *(undefined4 *)(psVar16 + 4);
    if (iVar17 == 0) {
      iVar10 = 1;
      local_63c = 0;
    }
    else {
      iVar10 = thunk_FUN_016d4a50(iVar17);
      local_63c = iVar17;
      if (iVar10 == 0) {
        uVar8 = 1;
        goto LAB_0104f484;
      }
    }
    FUN_016dd1aa(iVar10,uVar8,iVar17);
    uVar12 = 1;
    if (psVar16[0x12] != 1) goto LAB_0104f764;
LAB_0104f4d0:
    iVar19 = *(int *)(psVar16 + 0x18);
    uVar8 = 0;
    if (iVar19 < 0) {
LAB_0104f4e0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar19);
    }
    uVar8 = *(undefined4 *)(psVar16 + 0x16);
    if (iVar19 == 0) {
      iVar20 = 0;
      local_640 = 1;
    }
    else {
      local_640 = thunk_FUN_016d4a50(iVar19);
      iVar20 = iVar19;
      if (local_640 == 0) {
        uVar8 = 1;
        goto LAB_0104f4e0;
      }
    }
    FUN_016dd1aa(local_640,uVar8,iVar19);
    local_604 = 1;
  }
  else {
    local_63c = *(int *)(psVar16 + 2);
    uVar18 = (uint)local_590 >> 0x10;
    local_590 = CONCAT22((short)uVar18,psVar16[1]);
    iVar10 = *(int *)(psVar16 + 4);
    iVar17 = *(int *)(psVar16 + 6);
    local_488 = *(undefined4 *)(psVar16 + 8);
    uStack_484 = *(undefined4 *)(psVar16 + 10);
    uStack_480 = *(undefined4 *)(psVar16 + 0xc);
    uStack_47c = *(undefined4 *)(psVar16 + 0xe);
    uStack_478 = *(undefined4 *)(psVar16 + 0x10);
    uVar12 = 0;
    if (psVar16[0x12] == 1) goto LAB_0104f4d0;
LAB_0104f764:
    local_640 = *(int *)(psVar16 + 0x16);
    iVar20 = *(int *)(psVar16 + 0x14);
    local_604 = 0;
    iVar19 = *(int *)(psVar16 + 0x18);
    local_130 = *(undefined4 *)(psVar16 + 0x1a);
    uStack_12c = *(undefined4 *)(psVar16 + 0x1c);
    uStack_128 = *(undefined4 *)(psVar16 + 0x1e);
    local_122 = psVar16[0x13];
  }
  local_624 = local_63c;
  local_626 = (undefined2)local_590;
  local_618 = local_488;
  uStack_614 = uStack_484;
  uStack_610 = uStack_480;
  uStack_60c = uStack_47c;
  uStack_608 = uStack_478;
  local_5e4 = *(int *)(psVar16 + 0x22);
  local_5e0 = *(int *)(psVar16 + 0x24);
  local_5fc = local_640;
  local_602 = local_122;
  local_5f4 = local_130;
  uStack_5f0 = uStack_12c;
  uStack_5ec = uStack_128;
  local_628 = uVar12;
  local_620 = iVar10;
  local_61c = iVar17;
  local_600 = iVar20;
  local_5f8 = iVar19;
  local_5e8 = (char)sVar6;
  iVar10 = thunk_FUN_016d4a50(0x4c);
joined_r0x0104f650:
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x4c);
  }
  FUN_016dd1aa(iVar10,&local_628,0x4c);
  iVar17 = 0;
  if (local_110[0] != 2) {
    local_300[0] = local_110[0];
    FUN_016dd1aa((uint)local_300 | 2,(uint)local_110 | 2,0xe6);
    iVar17 = thunk_FUN_016d4a50(0xe8);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xe8);
    }
    FUN_016dd1aa(iVar17,local_300,0xe8);
  }
  local_5c0 = 0;
  local_5d8[0] = 0x15;
  local_5b0 = 0;
  local_5d4 = 0;
  local_5b8 = 0;
  local_5cc = uVar1;
  local_5ca = uVar2;
  local_5c8 = iVar10;
  local_5c4 = iVar17;
  iVar10 = thunk_FUN_016d4a50(0x44);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar10,local_5d8,0x44);
  *param_1 = 0x80000000;
  param_1[1] = iVar10;
  FUN_010408b0(param_2);
  if (*(int *)(param_2 + 0x68) == 0) {
    return;
  }
  iVar10 = *(int *)(param_2 + 0x6c);
  if (iVar10 == 0) {
    return;
  }
  iVar17 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar19 = uVar13 - 0x10, uVar13 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar15 = *(int *)(iVar17 + 8) + 0x10;
  iVar20 = iVar19 * uVar18 + iVar19 + -4;
  iVar19 = iVar15 + iVar20;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar19 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar19 - iVar10) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar19 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar15 + iVar20) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar17 + 0x14);
  uVar13 = 1 << uVar18;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar17 + 0x10);
    uVar11 = *(uint *)(iVar17 + 0xc) | uVar14;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar14 == 0) || (uVar11 + uVar13 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar17,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar9;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar9 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar17 + 0x10) = uVar13 + uVar14;
      return;
    }
    puVar21 = (uint *)(iVar17 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar21);
      uVar11 = *puVar21;
      if (uVar14 != uVar11) goto LAB_016d409c;
      bVar5 = (bool)hasExclusiveAccess(puVar21);
    } while (!bVar5);
    *puVar21 = uVar13 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar11) {
      return;
    }
  } while( true );
}

