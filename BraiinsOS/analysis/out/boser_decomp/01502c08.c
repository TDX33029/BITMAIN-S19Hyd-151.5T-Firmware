// FUN_01502c08 @ 01502c08 size=1912 calls_out=15 calls_in=0
// strings: 

void FUN_01502c08(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  undefined8 uVar27;
  int local_108;
  uint local_d8;
  int local_c8;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0 [3];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == '\x05') {
    uVar19 = *(uint *)(param_3 + 0xc);
    uVar16 = 0;
    iVar5 = uVar19 * 0xc;
    if (0xaaaaaaa < uVar19) {
LAB_01502c4c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,iVar5);
    }
    uVar22 = 0;
    if (iVar5 == 0) {
      local_108 = 4;
      local_b8 = 0;
    }
    else {
      uVar16 = 4;
      local_108 = FUN_01298504(iVar5,4);
      local_b8 = uVar19;
      if (local_108 == 0) goto LAB_01502c4c;
    }
    local_b0 = 0;
    local_b4 = local_108;
    if ((0x3ffffff < uVar19) || (uVar16 = uVar19 * 0x40, 0x7ffffffc < uVar16)) {
LAB_01502d00:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar22,uVar16);
    }
    if (uVar16 == 0) {
      local_c8 = 4;
      local_ac = 0;
    }
    else {
      uVar22 = 4;
      local_c8 = FUN_01298504(uVar16,4);
      if (local_c8 == 0) goto LAB_01502d00;
      local_ac = uVar19;
    }
    uVar3 = param_2[0x1f];
    uVar16 = 0;
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    if (local_a0[2] == 0) {
      uVar19 = 0;
    }
    iVar12 = param_2[0x1e];
    iVar23 = uVar3 * 100 + iVar12;
    uVar4 = param_2[0xd];
    iVar5 = param_2[0xf];
    uVar6 = param_2[1];
    iVar13 = param_2[0xc];
    iVar7 = param_2[3];
    local_a0[0] = (uint)(local_a0[2] != 0);
    iVar14 = *param_2;
    local_d8 = 0;
    local_a4 = 0;
    local_8c = 0;
    local_a0[1] = 0;
    local_a8 = local_c8;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar19;
LAB_01502dec:
    uVar27 = FUN_01a41998(local_a0);
    uVar22 = (undefined4)((ulonglong)uVar27 >> 0x20);
    iVar15 = (int)uVar27;
    if (iVar15 != 0) {
      local_74 = *(undefined4 *)(iVar15 + 4);
      uStack_70 = *(undefined4 *)(iVar15 + 8);
      local_78 = 0x80000000;
      uVar20 = *(undefined4 *)(iVar15 + 4);
      iVar17 = *(int *)(iVar15 + 8);
      uStack_6c = param_4;
      if (iVar7 != 0) {
        uVar8 = FUN_0155d010(param_2 + 4,uVar20,iVar17);
        uVar19 = uVar8 >> 0x19;
        iVar26 = 0;
        while( true ) {
          uVar8 = uVar6 & uVar8;
          uVar21 = *(uint *)(iVar14 + uVar8);
          uVar9 = uVar21 ^ uVar19 * 0x1010101;
          for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
              uVar9 = uVar9 - 1 & uVar9) {
            uVar25 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                     uVar6;
            iVar10 = iVar14 + -0x20 + uVar25 * -0x20;
            if ((iVar17 == *(int *)(iVar10 + 8)) &&
               (iVar10 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar10 + 4),iVar17), iVar10 == 0)
               ) {
              FUN_015737d4(&local_68,iVar14 + -0x14 + uVar25 * -0x20,uVar22,&local_78,param_5,
                           param_6);
              if (uVar16 == local_ac) {
                FUN_0155ab78(&local_ac);
                local_c8 = local_a8;
              }
              puVar11 = (undefined4 *)(local_c8 + uVar16 * 0x40);
              uVar16 = uVar16 + 1;
              *puVar11 = local_68;
              puVar11[1] = local_64;
              puVar11[2] = local_60;
              puVar11[3] = local_5c;
              puVar11[4] = local_58;
              puVar11[5] = local_54;
              puVar11[6] = local_50;
              puVar11[7] = uStack_4c;
              puVar11[8] = uStack_48;
              puVar11[9] = uStack_44;
              puVar11[10] = local_40;
              puVar11[0xb] = uStack_3c;
              puVar11[0xc] = uStack_38;
              puVar11[0xd] = uStack_34;
              puVar11[0xe] = uStack_30;
              puVar11[0xf] = uStack_2c;
              local_a4 = uVar16;
              if (iVar5 == 0) goto LAB_015031f0;
              uVar20 = *(undefined4 *)(iVar15 + 4);
              iVar17 = *(int *)(iVar15 + 8);
              uVar8 = FUN_01676700(param_2 + 0x10,uVar20,iVar17);
              uVar19 = uVar8 >> 0x19;
              iVar15 = 0;
              goto LAB_01502fc8;
            }
          }
          if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
          iVar26 = iVar26 + 4;
          uVar8 = uVar8 + iVar26;
        }
      }
      if (uVar3 == 0) {
LAB_01503208:
        FUN_006666fc(&local_68,uVar20,iVar17);
        if (local_d8 == local_b8) {
          FUN_019abd3c(&local_b8);
          local_108 = local_b4;
        }
        puVar11 = (undefined4 *)(local_108 + local_d8 * 0xc);
        *puVar11 = local_68;
        puVar11[1] = local_64;
        puVar11[2] = local_60;
        local_b0 = local_d8 + 1;
        FUN_015737d4(&local_68,param_2 + 0x18,uVar22,&local_78,param_5,param_6);
        uVar16 = local_a4;
        if (local_a4 == local_ac) {
          FUN_0155ab78(&local_ac);
        }
        local_c8 = local_a8;
        puVar11 = (undefined4 *)(local_a8 + uVar16 * 0x40);
        uVar16 = uVar16 + 1;
        *puVar11 = local_68;
        puVar11[1] = local_64;
        puVar11[2] = local_60;
        puVar11[3] = local_5c;
        puVar11[4] = local_58;
        puVar11[5] = local_54;
        puVar11[6] = local_50;
        puVar11[7] = uStack_4c;
        puVar11[8] = uStack_48;
        puVar11[9] = uStack_44;
        puVar11[10] = local_40;
        puVar11[0xb] = uStack_3c;
        puVar11[0xc] = uStack_38;
        puVar11[0xd] = uStack_34;
        puVar11[0xe] = uStack_30;
        puVar11[0xf] = uStack_2c;
        local_d8 = local_d8 + 1;
        local_a4 = uVar16;
      }
      else {
        bVar18 = false;
        iVar17 = iVar12;
        do {
          iVar26 = iVar17;
          while( true ) {
            cVar2 = FUN_01501468(iVar26,*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
            iVar17 = iVar26 + 100;
            if (cVar2 != '\0') break;
            iVar26 = iVar17;
            if (iVar17 == iVar23) {
              if (bVar18) goto LAB_01502dec;
              uVar20 = *(undefined4 *)(iVar15 + 4);
              iVar17 = *(int *)(iVar15 + 8);
              goto LAB_01503208;
            }
          }
          FUN_015737d4(&local_68,iVar26 + 0x50,uVar22,&local_78,param_5,param_6);
          if (uVar16 == local_ac) {
            FUN_0155ab78(&local_ac);
            local_c8 = local_a8;
          }
          puVar11 = (undefined4 *)(local_c8 + uVar16 * 0x40);
          uVar16 = uVar16 + 1;
          *puVar11 = local_68;
          puVar11[1] = local_64;
          puVar11[2] = local_60;
          puVar11[3] = local_5c;
          puVar11[4] = local_58;
          puVar11[5] = local_54;
          puVar11[6] = local_50;
          puVar11[7] = uStack_4c;
          puVar11[8] = uStack_48;
          puVar11[9] = uStack_44;
          puVar11[10] = local_40;
          puVar11[0xb] = uStack_3c;
          puVar11[0xc] = uStack_38;
          puVar11[0xd] = uStack_34;
          puVar11[0xe] = uStack_30;
          puVar11[0xf] = uStack_2c;
          bVar18 = true;
          local_a4 = uVar16;
        } while (iVar17 != iVar23);
      }
      goto LAB_01502dec;
    }
    iVar5 = uVar16 << 6;
    iVar7 = local_c8;
    do {
      if (iVar5 == 0) {
        local_58 = 0;
        local_64 = local_ac;
        local_60 = local_c8;
        local_68 = 0x80000000;
        local_5c = uVar16;
        goto LAB_01503334;
      }
      pcVar1 = (char *)(iVar7 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar7 = iVar7 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_58 = local_c8;
    local_68 = 0;
    local_50 = 0;
    local_60 = 0;
    local_64 = 4;
    local_54 = uVar16;
LAB_01503334:
    FUN_01538264(local_a0,&local_b8);
    uVar22 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_68,uVar22);
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
    param_1[5] = local_54;
    param_1[6] = local_50;
  }
  else {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
LAB_01502fc8:
  uVar8 = uVar4 & uVar8;
  uVar21 = *(uint *)(iVar13 + uVar8);
  uVar9 = uVar21 ^ uVar19 * 0x1010101;
  for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
    uVar25 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar4;
    iVar26 = iVar13 + -0x14 + uVar25 * -0x14;
    if ((iVar17 == *(int *)(iVar26 + 8)) &&
       (iVar26 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar26 + 4),iVar17), iVar26 == 0)) {
      iVar17 = iVar13 + uVar25 * -0x14;
      iVar15 = *(int *)(iVar17 + -4);
      if (iVar15 != 0) {
        iVar15 = iVar15 << 2;
        puVar24 = *(uint **)(iVar17 + -8);
        do {
          uVar19 = *puVar24;
          if (uVar3 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar19,uVar3,&DAT_01cfa978);
          }
          FUN_015737d4(&local_68,uVar19 * 100 + iVar12 + 0x50,uVar22,&local_78,param_5,param_6);
          if (uVar16 == local_ac) {
            FUN_0155ab78(&local_ac);
            local_c8 = local_a8;
          }
          puVar11 = (undefined4 *)(local_c8 + uVar16 * 0x40);
          uVar16 = uVar16 + 1;
          iVar15 = iVar15 + -4;
          *puVar11 = local_68;
          puVar11[1] = local_64;
          puVar11[2] = local_60;
          puVar11[3] = local_5c;
          puVar11[4] = local_58;
          puVar11[5] = local_54;
          puVar11[6] = local_50;
          puVar11[7] = uStack_4c;
          puVar11[8] = uStack_48;
          puVar11[9] = uStack_44;
          puVar11[10] = local_40;
          puVar11[0xb] = uStack_3c;
          puVar11[0xc] = uStack_38;
          puVar11[0xd] = uStack_34;
          puVar11[0xe] = uStack_30;
          puVar11[0xf] = uStack_2c;
          puVar24 = puVar24 + 1;
          local_a4 = uVar16;
        } while (iVar15 != 0);
      }
      goto LAB_015031f0;
    }
  }
  if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) goto LAB_015031f0;
  iVar15 = iVar15 + 4;
  uVar8 = uVar8 + iVar15;
  goto LAB_01502fc8;
LAB_015031f0:
  goto LAB_01502dec;
}

