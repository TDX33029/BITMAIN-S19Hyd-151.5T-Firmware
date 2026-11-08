// FUN_015c48dc @ 015c48dc size=1132 calls_out=10 calls_in=3
// strings: 

void FUN_015c48dc(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  uint local_f8;
  undefined4 local_f4;
  int local_e8;
  int local_e0;
  uint *local_b8;
  uint local_b4;
  uint *local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  uint *local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  char *local_80;
  undefined4 uStack_7c;
  char *pcStack_78;
  undefined4 local_74;
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char **local_40;
  undefined1 *local_3c;
  int *local_38;
  undefined1 *local_34;
  uint **local_30;
  undefined1 *local_2c;
  undefined *local_28;
  
  local_b8 = *(uint **)(param_1 + 0x120);
  local_a8 = *(undefined4 *)(param_1 + 300);
  local_ac = (int)local_b8 + *(int *)(param_1 + 0x124) + 1;
  iVar7 = param_2[3];
  iVar17 = *param_2;
  uVar19 = param_2[1];
  local_b0 = local_b8 + 1;
  iVar8 = param_2[4];
  local_b4 = ~*local_b8 & 0x80808080;
  iVar9 = param_2[5];
  iVar10 = param_2[6];
  iVar11 = param_2[7];
LAB_015c495c:
  do {
    do {
      uVar22 = FUN_015da848(&local_b8);
      iVar1 = (int)uVar22;
      if (iVar1 == 0) {
        FUN_015d1734(param_2);
        return;
      }
      local_a4 = iVar1;
    } while (iVar7 == 0);
    uVar2 = *(undefined4 *)(iVar1 + 4);
    iVar14 = *(int *)(iVar1 + 8);
    uVar3 = FUN_01adafd4(iVar8,iVar9,iVar10,iVar11,uVar2,iVar14);
    uVar15 = uVar3 >> 0x19;
    iVar12 = 0;
    while( true ) {
      uVar3 = uVar19 & uVar3;
      uVar16 = *(uint *)(iVar17 + uVar3);
      uVar4 = uVar16 ^ uVar15 * 0x1010101;
      for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4)
      {
        uVar5 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                       (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar19;
        iVar6 = iVar17 + -0x30 + uVar5 * -0x30;
        if ((iVar14 == *(int *)(iVar6 + 8)) &&
           (iVar6 = thunk_FUN_01bed842(uVar2,*(undefined4 *)(iVar6 + 4),iVar14), iVar6 == 0)) {
          iVar12 = iVar17 + uVar5 * -0x30;
          puVar13 = *(uint **)(iVar12 + -0x20);
          iVar12 = *(int *)(iVar12 + -0x14);
          puVar21 = puVar13 + 1;
          uVar15 = ~*puVar13 & 0x80808080;
          goto LAB_015c4a98;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      iVar12 = iVar12 + 4;
      uVar3 = uVar3 + iVar12;
    }
  } while( true );
LAB_015c4a98:
  if (iVar12 == 0) goto LAB_015c495c;
  puVar20 = puVar21;
  if (uVar15 == 0) {
    do {
      puVar21 = puVar20 + 1;
      uVar15 = *puVar20;
      puVar13 = puVar13 + -0xc;
      puVar20 = puVar21;
    } while ((uVar15 & 0x80808080) == 0x80808080);
    uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
  }
  uVar2 = 0;
  uVar3 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8
                        | uVar15 >> 0x18) >> 3;
  local_a0 = puVar13 + uVar3 * -3 + -3;
  iVar14 = *(int *)(iVar1 + 8);
  if (iVar14 < 0) {
LAB_015c4d24:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,local_e0);
  }
  uVar18 = *(undefined4 *)(iVar1 + 4);
  local_f4 = 0;
  if (iVar14 == 0) {
    local_e0 = 1;
    local_e8 = 0;
  }
  else {
    uVar2 = 1;
    local_e0 = FUN_01298504(iVar14,1);
    if (local_e0 == 0) {
      local_e0 = iVar14;
      goto LAB_015c4d24;
    }
    local_e8 = iVar14;
  }
  FUN_01bed4e2(local_e0,uVar18,iVar14);
  uVar4 = puVar13[uVar3 * -3 + -1];
  if ((int)uVar4 < 0) {
LAB_015c4d40:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_f4,local_f8);
  }
  uVar3 = puVar13[uVar3 * -3 + -2];
  if (uVar4 == 0) {
    local_f8 = 1;
    uVar16 = 0;
  }
  else {
    local_f8 = FUN_01298504(uVar4,1);
    if (local_f8 == 0) {
      local_f4 = 1;
      local_f8 = uVar4;
      goto LAB_015c4d40;
    }
    uVar16 = uVar4;
  }
  FUN_01bed4e2(local_f8,uVar3,uVar4);
  local_98 = local_e8;
  local_9c = 3;
  local_94 = local_e0;
  local_90 = iVar14;
  local_8c = uVar16;
  local_88 = local_f8;
  local_84 = uVar4;
  FUN_015ecfec(&local_80,*(undefined4 *)((ulonglong)uVar22 >> 0x20),&local_9c);
  if (local_80 == (char *)0x5) {
    if (3 < DAT_01d51b00) {
      local_30 = &local_a0;
      local_38 = &local_a4;
      local_2c = &LAB_0193a90c;
      local_34 = &LAB_0193a90c;
      local_54 = 0x17;
      local_50 = &DAT_01cfcd98;
      local_5c = 0x17;
      local_58 = "m";
      local_60 = "m";
      FUN_015fb650(&DAT_00571379,&local_38,4,&local_60);
    }
  }
  else {
    local_60 = local_80;
    local_5c = uStack_7c;
    local_58 = pcStack_78;
    local_54 = local_74;
    local_50 = puStack_70;
    uStack_4c = uStack_6c;
    uStack_48 = uStack_68;
    if (3 < DAT_01d51b00) {
      local_3c = &LAB_015eeba0;
      local_2c = (undefined1 *)0x17;
      local_28 = &DAT_01cfcda8;
      local_34 = (undefined1 *)0x17;
      local_30 = (uint **)0x4b3d9f;
      local_38 = (int *)0x4b3d9f;
      local_40 = &local_60;
      FUN_015fb650(&DAT_005bd2a9,&local_40,4,&local_38);
    }
    FUN_015a8e68(&local_60);
  }
  iVar12 = iVar12 + -1;
  uVar15 = uVar15 - 1 & uVar15;
  goto LAB_015c4a98;
}

