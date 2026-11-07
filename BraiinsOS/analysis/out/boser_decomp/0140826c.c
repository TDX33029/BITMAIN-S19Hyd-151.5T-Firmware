// FUN_0140826c @ 0140826c size=1648 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0140826c(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint local_a0;
  uint local_9c;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int local_34;
  uint *local_30;
  uint local_28;
  
  if (param_3 == 0) {
LAB_01408890:
    if (param_1[6] == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 9) = 1;
    }
    return;
  }
  piVar4 = param_1 + 6;
  iVar12 = param_2;
  do {
    local_80 = param_1[2];
    uStack_7c = param_1[3];
    local_94 = uStack_7c ^ 0x6c796765;
    local_98 = (undefined4 *)(local_80 ^ 0x6e657261);
    local_78 = param_1[4];
    uStack_74 = param_1[5];
    local_8c = uStack_74 ^ 0x646f7261;
    local_90 = local_78 ^ 0x6e646f6d;
    local_84 = uStack_74 ^ 0x74656462;
    local_88 = local_78 ^ 0x79746573;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_9c = uStack_7c ^ 0x736f6d65;
    local_a0 = local_80 ^ 0x70736575;
    FUN_015f5e7c(&local_a0,*(undefined4 *)(iVar12 + 0x14),*(undefined4 *)(iVar12 + 0x18));
    local_58 = CONCAT31(local_58._1_3_,0xff);
    FUN_015f5e7c(&local_a0,&local_58,1);
    uVar18 = local_8c + local_9c + (uint)CARRY4(local_90,local_a0);
    uVar13 = (local_8c << 0xd | local_90 >> 0x13) ^ uVar18;
    uVar14 = (local_90 << 0xd | local_8c >> 0x13) ^ local_90 + local_a0;
    uVar16 = local_6c | local_68 << 0x18;
    uVar15 = uVar16 ^ local_84;
    uVar5 = local_70 ^ local_88;
    uVar23 = uVar5 + (int)local_98;
    uVar19 = uVar15 + local_94 + (uint)CARRY4(uVar5,(uint)local_98);
    uVar6 = (uVar5 << 0x10 | uVar15 >> 0x10) ^ uVar23;
    uVar24 = uVar19 + uVar13 + (uint)CARRY4(uVar23,uVar14);
    uVar19 = (uVar15 << 0x10 | uVar5 >> 0x10) ^ uVar19;
    uVar20 = uVar19 + local_90 + local_a0 + (uint)CARRY4(uVar6,uVar18);
    uVar15 = uVar23 + uVar14 ^ (uVar14 << 0x11 | uVar13 >> 0xf);
    uVar5 = uVar6 + uVar18 ^ local_70;
    uVar26 = uVar24 ^ (uVar13 << 0x11 | uVar14 >> 0xf);
    uVar27 = uVar5 + uVar15;
    uVar21 = (uVar20 ^ uVar16) + uVar26 + (uint)CARRY4(uVar5,uVar15);
    uVar13 = uVar21 ^ (uVar26 << 0xd | uVar15 >> 0x13);
    uVar26 = uVar27 ^ (uVar15 << 0xd | uVar26 >> 0x13);
    uVar20 = (uVar19 << 0x15 | uVar6 >> 0xb) ^ uVar20;
    uVar24 = uVar24 ^ 0xff;
    uVar5 = (uVar6 << 0x15 | uVar19 >> 0xb) ^ uVar6 + uVar18;
    uVar16 = uVar5 + uVar24;
    uVar15 = uVar20 + uVar23 + uVar14 + (uint)CARRY4(uVar5,uVar24);
    uVar23 = uVar13 + uVar15 + (uint)CARRY4(uVar26,uVar16);
    uVar14 = uVar23 ^ (uVar13 << 0x11 | uVar26 >> 0xf);
    uVar6 = uVar26 + uVar16 ^ (uVar26 << 0x11 | uVar13 >> 0xf);
    uVar15 = (uVar20 << 0x10 | uVar5 >> 0x10) ^ uVar15;
    uVar18 = (uVar5 << 0x10 | uVar20 >> 0x10) ^ uVar16;
    uVar24 = uVar18 + uVar21;
    uVar19 = uVar15 + uVar27 + (uint)CARRY4(uVar18,uVar21);
    uVar21 = uVar14 + uVar19 + (uint)CARRY4(uVar6,uVar24);
    uVar5 = (uVar14 << 0xd | uVar6 >> 0x13) ^ uVar21;
    uVar13 = (uVar6 << 0xd | uVar14 >> 0x13) ^ uVar6 + uVar24;
    uVar19 = (uVar15 << 0x15 | uVar18 >> 0xb) ^ uVar19;
    uVar14 = (uVar18 << 0x15 | uVar15 >> 0xb) ^ uVar24;
    uVar18 = uVar14 + uVar23;
    uVar15 = uVar19 + uVar26 + uVar16 + (uint)CARRY4(uVar14,uVar23);
    uVar16 = (uVar19 << 0x10 | uVar14 >> 0x10) ^ uVar15;
    uVar14 = (uVar14 << 0x10 | uVar19 >> 0x10) ^ uVar18;
    uVar20 = uVar5 + uVar15 + (uint)CARRY4(uVar13,uVar18);
    uVar15 = uVar14 + uVar21;
    uVar24 = uVar16 + uVar6 + uVar24 + (uint)CARRY4(uVar14,uVar21);
    uVar19 = (uVar14 << 0x15 | uVar16 >> 0xb) ^ uVar15;
    uVar26 = (uVar5 << 0x11 | uVar13 >> 0xf) ^ uVar20;
    uVar16 = (uVar16 << 0x15 | uVar14 >> 0xb) ^ uVar24;
    uVar14 = uVar19 + uVar20;
    uVar5 = (uVar13 << 0x11 | uVar5 >> 0xf) ^ uVar13 + uVar18;
    uVar18 = uVar16 + uVar13 + uVar18 + (uint)CARRY4(uVar19,uVar20);
    uVar6 = (uVar5 << 0xd | uVar26 >> 0x13) ^ uVar5 + uVar15;
    uVar15 = (uVar26 << 0xd | uVar5 >> 0x13) ^ uVar26 + uVar24 + (uint)CARRY4(uVar5,uVar15);
    uVar26 = uVar15 + uVar18 + (uint)CARRY4(uVar6,uVar14);
    uVar18 = (uVar16 << 0x10 | uVar19 >> 0x10) ^ uVar18;
    uVar5 = (uVar19 << 0x10 | uVar16 >> 0x10) ^ uVar14;
    uVar13 = (uVar18 << 0x15 | uVar5 >> 0xb) ^ (uVar15 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar14 ^
             uVar26;
    uVar14 = (uVar5 << 0x15 | uVar18 >> 0xb) ^ (uVar6 << 0x11 | uVar15 >> 0xf) ^ uVar26 ^
             uVar6 + uVar14;
    uVar6 = param_1[7] & 0x3f;
    uVar5 = uVar14 >> uVar6 | uVar13 << (0x20 - uVar6 & 0xff);
    if (-1 < (int)(uVar6 - 0x20)) {
      uVar5 = uVar13 >> (uVar6 - 0x20 & 0xff);
    }
    uVar6 = 0;
    if (param_1[7] != 0x40) {
      uVar6 = uVar5;
    }
    if ((uint)param_1[1] <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,param_1[1],&DAT_01cf3dd8);
    }
    iVar17 = *param_1;
    uVar7 = FUN_013f0d78();
    iVar17 = iVar17 + uVar6 * 8;
    local_5c = uVar7;
    puVar8 = (uint *)FUN_0140b398(iVar17);
    piVar25 = (int *)(iVar17 + 4);
    iVar9 = iVar12 + 0x20;
    puVar22 = puVar8;
LAB_0140866c:
    uVar6 = puVar22[1];
    uVar5 = uVar6 - 1;
    if ((uVar6 ^ uVar5) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
    }
    puVar11 = puVar22 + 5;
    cVar3 = FUN_0160a118(uVar6 >> 1,puVar11,piVar25);
    if (cVar3 != '\x03') goto LAB_01408778;
    local_84 = CONCAT31(local_84._1_3_,1);
    local_88 = 0;
    local_98 = &local_5c;
    local_94 = uVar5 & uVar14;
    local_a0 = *puVar22;
    local_90 = local_a0 + local_94 * 4;
    local_9c = uVar6;
    local_8c = local_94;
LAB_014086dc:
    FUN_013f4d28(&local_34,&local_a0);
    uVar5 = local_28;
    puVar2 = local_30;
    if (local_34 != 1) goto LAB_014087a8;
    if (local_30 == (uint *)0x0) break;
    uVar6 = local_28 & 0xfffffff8;
    if (uVar6 == 0) goto LAB_014087a8;
    if ((*(int *)(uVar6 + 0x28) != *(int *)(iVar12 + 0x18)) ||
       (iVar10 = thunk_FUN_01bed842(*(undefined4 *)(uVar6 + 0x24),*(undefined4 *)(iVar12 + 0x14)),
       iVar10 != 0)) goto LAB_014086dc;
    if ((uVar5 & 2) != 0) {
LAB_014087a8:
      local_48 = 0x80000000;
      goto LAB_014087b4;
    }
    if (*puVar2 != uVar5) {
      ClearExclusiveLocal();
LAB_01408768:
      local_84 = CONCAT31(local_84._1_3_,1);
      goto LAB_014086dc;
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (!bVar1) goto LAB_01408768;
    *puVar2 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar1);
    *piVar25 = *piVar25 + -1;
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar1);
    *puVar11 = *puVar11 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + -1;
    FUN_01408d28(&local_a0,uVar6);
    local_58 = local_a0;
    uStack_54 = local_9c;
    puStack_50 = local_98;
    uStack_4c = local_94;
    local_48 = local_90;
    uStack_44 = local_8c;
    uStack_40 = local_88;
    uStack_3c = local_84;
    FUN_013f50bc(uVar7,uVar6 | 2);
LAB_014087b4:
    FUN_0140b280(iVar17,uVar7,puVar8,puVar22);
    local_a0 = local_58;
    local_9c = uStack_54;
    local_98 = puStack_50;
    local_94 = uStack_4c;
    local_90 = local_48;
    local_8c = uStack_44;
    local_88 = uStack_40;
    local_84 = uStack_3c;
    FUN_013f0f2c(uVar7);
    if (local_90 != 0x80000000) {
      FUN_01406d64(&local_a0);
    }
    iVar12 = iVar9;
    if (iVar9 == param_2 + param_3 * 0x20) goto LAB_01408890;
  } while( true );
  cVar3 = '\0';
LAB_01408778:
  puVar11 = (uint *)FUN_013f608c(puVar22,&local_5c,param_1[2],param_1[3],param_1[4],param_1[5],cVar3
                                );
  if (puVar11 != (uint *)0x0) {
    puVar22 = puVar11;
  }
  goto LAB_0140866c;
}

