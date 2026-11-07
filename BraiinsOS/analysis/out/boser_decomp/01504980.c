// FUN_01504980 @ 01504980 size=1716 calls_out=14 calls_in=0
// strings: 

void FUN_01504980(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  uint *puVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined8 uVar27;
  int local_d4;
  uint local_cc;
  int local_bc;
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
    uVar16 = *(uint *)(param_3 + 0xc);
    uVar22 = 0;
    uVar3 = uVar16 * 0xc;
    if (0xaaaaaaa < uVar16) {
LAB_015049c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar22,uVar3);
    }
    uVar25 = 0;
    if (uVar3 == 0) {
      local_d4 = 4;
      local_b8 = 0;
    }
    else {
      uVar22 = 4;
      local_d4 = FUN_01298504(uVar3,4);
      local_b8 = uVar16;
      if (local_d4 == 0) goto LAB_015049c0;
    }
    local_b0 = 0;
    local_b4 = local_d4;
    if ((0x3ffffff < uVar16) || (uVar3 = uVar16 * 0x40, 0x7ffffffc < uVar3)) {
LAB_01504a80:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar25,uVar3);
    }
    if (uVar3 == 0) {
      local_bc = 4;
      local_ac = 0;
    }
    else {
      uVar25 = 4;
      local_bc = FUN_01298504(uVar3,4);
      if (local_bc == 0) goto LAB_01504a80;
      local_ac = uVar16;
    }
    uVar3 = param_2[0x16];
    uVar24 = 0;
    local_94 = *(undefined4 *)(param_3 + 8);
    iVar12 = param_2[0x15];
    local_a0[2] = *(uint *)(param_3 + 4);
    iVar26 = iVar12 + uVar3 * 0x28;
    if (local_a0[2] == 0) {
      uVar16 = 0;
    }
    iVar4 = param_2[0x12];
    iVar13 = param_2[0x13];
    uVar5 = param_2[1];
    local_a0[0] = (uint)(local_a0[2] != 0);
    iVar6 = param_2[3];
    iVar14 = *param_2;
    local_cc = 0;
    local_a4 = 0;
    local_8c = 0;
    local_a0[1] = 0;
    local_a8 = local_bc;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar16;
LAB_01504b4c:
    uVar27 = FUN_01a41998(local_a0);
    uVar22 = (undefined4)((ulonglong)uVar27 >> 0x20);
    iVar15 = (int)uVar27;
    if (iVar15 != 0) {
      local_74 = *(undefined4 *)(iVar15 + 4);
      uStack_70 = *(undefined4 *)(iVar15 + 8);
      local_78 = 0x80000000;
      uVar25 = *(undefined4 *)(iVar15 + 4);
      iVar20 = *(int *)(iVar15 + 8);
      uStack_6c = param_4;
      if (iVar13 != 0) {
        iVar17 = iVar13 << 5;
        iVar18 = iVar4;
        do {
          if ((*(int *)(iVar18 + 8) == iVar20) &&
             (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar18 + 4),uVar25,iVar20), iVar7 == 0)) {
            FUN_015737d4(&local_68,iVar18 + 0xc,uVar22,&local_78,param_5,param_6);
            if (uVar24 == local_ac) {
              FUN_0155ab78(&local_ac);
              local_bc = local_a8;
            }
            puVar8 = (undefined4 *)(local_bc + uVar24 * 0x40);
            uVar24 = uVar24 + 1;
            *puVar8 = local_68;
            puVar8[1] = local_64;
            puVar8[2] = local_60;
            puVar8[3] = local_5c;
            puVar8[4] = local_58;
            puVar8[5] = local_54;
            puVar8[6] = local_50;
            puVar8[7] = uStack_4c;
            puVar8[8] = uStack_48;
            puVar8[9] = uStack_44;
            puVar8[10] = local_40;
            puVar8[0xb] = uStack_3c;
            puVar8[0xc] = uStack_38;
            puVar8[0xd] = uStack_34;
            puVar8[0xe] = uStack_30;
            puVar8[0xf] = uStack_2c;
            local_a4 = uVar24;
            if (iVar6 != 0) {
              uVar25 = *(undefined4 *)(iVar15 + 4);
              iVar20 = *(int *)(iVar15 + 8);
              uVar9 = FUN_01676700(param_2 + 4,uVar25,iVar20);
              uVar16 = uVar9 >> 0x19;
              iVar15 = 0;
              while( true ) {
                uVar9 = uVar5 & uVar9;
                uVar19 = *(uint *)(iVar14 + uVar9);
                uVar10 = uVar19 ^ uVar16 * 0x1010101;
                for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                    uVar10 = uVar10 - 1 & uVar10) {
                  uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                  (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >>
                                   3) & uVar5;
                  iVar17 = iVar14 + -0x14 + uVar11 * -0x14;
                  if ((iVar20 == *(int *)(iVar17 + 8)) &&
                     (iVar17 = thunk_FUN_01bed842(uVar25,*(undefined4 *)(iVar17 + 4),iVar20),
                     iVar17 == 0)) {
                    iVar20 = iVar14 + uVar11 * -0x14;
                    iVar15 = *(int *)(iVar20 + -4);
                    if (iVar15 != 0) {
                      iVar15 = iVar15 << 2;
                      puVar23 = *(uint **)(iVar20 + -8);
                      do {
                        uVar16 = *puVar23;
                        if (uVar3 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                          FUN_012fb12c(uVar16,uVar3,&DAT_01cfa978);
                        }
                        FUN_015737d4(&local_68,iVar12 + uVar16 * 0x28 + 0x14,uVar22,&local_78,
                                     param_5,param_6);
                        if (uVar24 == local_ac) {
                          FUN_0155ab78(&local_ac);
                          local_bc = local_a8;
                        }
                        puVar8 = (undefined4 *)(local_bc + uVar24 * 0x40);
                        uVar24 = uVar24 + 1;
                        iVar15 = iVar15 + -4;
                        *puVar8 = local_68;
                        puVar8[1] = local_64;
                        puVar8[2] = local_60;
                        puVar8[3] = local_5c;
                        puVar8[4] = local_58;
                        puVar8[5] = local_54;
                        puVar8[6] = local_50;
                        puVar8[7] = uStack_4c;
                        puVar8[8] = uStack_48;
                        puVar8[9] = uStack_44;
                        puVar8[10] = local_40;
                        puVar8[0xb] = uStack_3c;
                        puVar8[0xc] = uStack_38;
                        puVar8[0xd] = uStack_34;
                        puVar8[0xe] = uStack_30;
                        puVar8[0xf] = uStack_2c;
                        puVar23 = puVar23 + 1;
                        local_a4 = uVar24;
                      } while (iVar15 != 0);
                    }
                    goto LAB_01504b4c;
                  }
                }
                if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
                iVar15 = iVar15 + 4;
                uVar9 = uVar9 + iVar15;
              }
            }
            goto LAB_01504b4c;
          }
          iVar18 = iVar18 + 0x20;
          iVar17 = iVar17 + -0x20;
        } while (iVar17 != 0);
      }
      if (uVar3 == 0) {
LAB_01504c98:
        FUN_006666fc(&local_68,uVar25,iVar20);
        if (local_cc == local_b8) {
          FUN_019abd3c(&local_b8);
          local_d4 = local_b4;
        }
        puVar8 = (undefined4 *)(local_d4 + local_cc * 0xc);
        *puVar8 = local_68;
        puVar8[1] = local_64;
        puVar8[2] = local_60;
        local_b0 = local_cc + 1;
        FUN_015737d4(&local_68,param_2 + 0xc,uVar22,&local_78,param_5,param_6);
        uVar16 = local_a4;
        if (local_a4 == local_ac) {
          FUN_0155ab78(&local_ac);
        }
        local_bc = local_a8;
        uVar24 = uVar16 + 1;
        puVar8 = (undefined4 *)(local_a8 + uVar16 * 0x40);
        *puVar8 = local_68;
        puVar8[1] = local_64;
        puVar8[2] = local_60;
        puVar8[3] = local_5c;
        puVar8[4] = local_58;
        puVar8[5] = local_54;
        puVar8[6] = local_50;
        puVar8[7] = uStack_4c;
        puVar8[8] = uStack_48;
        puVar8[9] = uStack_44;
        puVar8[10] = local_40;
        puVar8[0xb] = uStack_3c;
        puVar8[0xc] = uStack_38;
        puVar8[0xd] = uStack_34;
        puVar8[0xe] = uStack_30;
        puVar8[0xf] = uStack_2c;
        local_cc = local_cc + 1;
        local_a4 = uVar24;
      }
      else {
        bVar21 = false;
        iVar20 = iVar12;
        do {
          iVar17 = iVar20;
          while( true ) {
            cVar2 = FUN_015050f0(iVar17,*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
            iVar20 = iVar17 + 0x28;
            if (cVar2 != '\0') break;
            iVar17 = iVar20;
            if (iVar20 == iVar26) {
              if (bVar21) goto LAB_01504b4c;
              uVar25 = *(undefined4 *)(iVar15 + 4);
              iVar20 = *(int *)(iVar15 + 8);
              goto LAB_01504c98;
            }
          }
          FUN_015737d4(&local_68,iVar17 + 0x14,uVar22,&local_78,param_5,param_6);
          if (uVar24 == local_ac) {
            FUN_0155ab78(&local_ac);
            local_bc = local_a8;
          }
          puVar8 = (undefined4 *)(local_bc + uVar24 * 0x40);
          uVar24 = uVar24 + 1;
          bVar21 = true;
          *puVar8 = local_68;
          puVar8[1] = local_64;
          puVar8[2] = local_60;
          puVar8[3] = local_5c;
          puVar8[4] = local_58;
          puVar8[5] = local_54;
          puVar8[6] = local_50;
          puVar8[7] = uStack_4c;
          puVar8[8] = uStack_48;
          puVar8[9] = uStack_44;
          puVar8[10] = local_40;
          puVar8[0xb] = uStack_3c;
          puVar8[0xc] = uStack_38;
          puVar8[0xd] = uStack_34;
          puVar8[0xe] = uStack_30;
          puVar8[0xf] = uStack_2c;
          local_a4 = uVar24;
        } while (iVar20 != iVar26);
      }
      goto LAB_01504b4c;
    }
    iVar12 = uVar24 << 6;
    iVar26 = local_bc;
    do {
      if (iVar12 == 0) {
        local_64 = local_ac;
        local_58 = 0;
        local_68 = 0x80000000;
        local_60 = local_bc;
        local_5c = uVar24;
        goto LAB_01504fe8;
      }
      pcVar1 = (char *)(iVar26 + 0x3c);
      iVar12 = iVar12 + -0x40;
      iVar26 = iVar26 + 0x40;
    } while (*pcVar1 != '\0');
    local_58 = local_bc;
    local_5c = local_ac;
    local_68 = 0;
    local_50 = 0;
    local_60 = 0;
    local_64 = 4;
    local_54 = uVar24;
LAB_01504fe8:
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
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

