// FUN_0150f614 @ 0150f614 size=1260 calls_out=13 calls_in=0
// strings: 

void FUN_0150f614(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  int local_d4;
  uint local_c8;
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
    uVar10 = *(uint *)(param_3 + 0xc);
    uVar14 = 0;
    uVar2 = uVar10 * 0xc;
    if (0xaaaaaaa < uVar10) {
LAB_0150f654:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,uVar2);
    }
    uVar15 = 0;
    if (uVar2 == 0) {
      local_d4 = 4;
      local_b8 = 0;
    }
    else {
      uVar14 = 4;
      local_d4 = FUN_01298504(uVar2,4);
      local_b8 = uVar10;
      if (local_d4 == 0) goto LAB_0150f654;
    }
    local_b0 = 0;
    local_b4 = local_d4;
    if ((0x3ffffff < uVar10) || (uVar2 = uVar10 * 0x40, 0x7ffffffc < uVar2)) {
LAB_0150f714:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,uVar2);
    }
    if (uVar2 == 0) {
      local_bc = 4;
      local_ac = 0;
    }
    else {
      uVar15 = 4;
      local_bc = FUN_01298504(uVar2,4);
      if (local_bc == 0) goto LAB_0150f714;
      local_ac = uVar10;
    }
    uVar2 = param_2[1];
    uVar16 = 0;
    iVar3 = param_2[3];
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    local_c8 = 0;
    if (local_a0[2] == 0) {
      uVar10 = 0;
    }
    iVar9 = *param_2;
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_a4 = 0;
    local_8c = 0;
    local_a0[1] = 0;
    local_a8 = local_bc;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar10;
LAB_0150f7c0:
    uVar18 = FUN_01a41998(local_a0);
    uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
    iVar4 = (int)uVar18;
    if (iVar4 != 0) {
      local_74 = *(undefined4 *)(iVar4 + 4);
      uStack_70 = *(undefined4 *)(iVar4 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar3 != 0) {
        iVar11 = *(int *)(iVar4 + 8);
        uVar15 = *(undefined4 *)(iVar4 + 4);
        uVar5 = FUN_0155d010(param_2 + 4,uVar15,iVar11);
        uVar10 = uVar5 >> 0x19;
        iVar17 = 0;
        while( true ) {
          uVar5 = uVar2 & uVar5;
          uVar12 = *(uint *)(iVar9 + uVar5);
          uVar6 = uVar12 ^ uVar10 * 0x1010101;
          for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0;
              uVar6 = uVar6 - 1 & uVar6) {
            uVar13 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                     uVar2;
            iVar7 = iVar9 + -0x20 + uVar13 * -0x20;
            if ((iVar11 == *(int *)(iVar7 + 8)) &&
               (iVar7 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar7 + 4),iVar11), iVar7 == 0)) {
              FUN_015737d4(&local_68,iVar9 + -0x14 + uVar13 * -0x20,uVar14,&local_78,param_5,param_6
                          );
              if (uVar16 == local_ac) {
                FUN_0155ab78(&local_ac);
                local_bc = local_a8;
              }
              puVar8 = (undefined4 *)(local_bc + uVar16 * 0x40);
              uVar16 = uVar16 + 1;
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
              local_a4 = uVar16;
              goto LAB_0150f7c0;
            }
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
          iVar17 = iVar17 + 4;
          uVar5 = uVar5 + iVar17;
        }
      }
      FUN_015737d4(&local_68,param_2 + 0xc,uVar14,&local_78,param_5,param_6);
      if (uVar16 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_bc = local_a8;
      }
      puVar8 = (undefined4 *)(local_bc + uVar16 * 0x40);
      uVar16 = uVar16 + 1;
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
      local_a4 = uVar16;
      FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      if (local_c8 == local_b8) {
        FUN_019abd3c(&local_b8);
        local_d4 = local_b4;
      }
      local_b0 = local_c8 + 1;
      puVar8 = (undefined4 *)(local_d4 + local_c8 * 0xc);
      *puVar8 = local_68;
      puVar8[1] = local_64;
      puVar8[2] = local_60;
      local_c8 = local_b0;
      goto LAB_0150f7c0;
    }
    iVar3 = local_a4 << 6;
    iVar9 = local_a8;
    do {
      if (iVar3 == 0) {
        local_64 = local_ac;
        local_68 = 0x80000000;
        local_58 = 0;
        local_5c = local_a4;
        local_60 = local_a8;
        goto LAB_0150faa0;
      }
      pcVar1 = (char *)(iVar9 + 0x3c);
      iVar3 = iVar3 + -0x40;
      iVar9 = iVar9 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_68 = 0;
    local_54 = local_a4;
    local_58 = local_a8;
    local_50 = 0;
    local_60 = 0;
    local_64 = 4;
LAB_0150faa0:
    if (local_c8 == 0) {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
      FUN_006a41c0(&local_b8);
    }
    else {
      FUN_01538264(local_a0,&local_b8);
      uVar14 = FUN_01531708(local_a0);
      FUN_0155ff10(&local_68,uVar14);
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
    }
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

