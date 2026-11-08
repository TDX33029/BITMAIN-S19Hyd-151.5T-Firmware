// FUN_01588310 @ 01588310 size=976 calls_out=12 calls_in=0
// strings: 

void FUN_01588310(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  int local_cc;
  int local_c0;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0 [3];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
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
    uVar16 = 0;
    iVar7 = uVar10 * 0xc;
    if (0xaaaaaaa < uVar10) {
LAB_01588350:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,iVar7);
    }
    iVar15 = 0;
    local_c0 = 4;
    local_b8 = 0;
    if (iVar7 != 0) {
      uVar16 = 4;
      local_c0 = FUN_01298504(iVar7,4);
      local_b8 = uVar10;
      if (local_c0 == 0) goto LAB_01588350;
    }
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    local_cc = 4;
    if (local_a0[2] == 0) {
      uVar10 = 0;
    }
    iVar7 = *param_2;
    uVar8 = param_2[1];
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_a8 = 4;
    iVar9 = param_2[3];
    local_b0 = 0;
    local_a4 = 0;
    local_ac = 0;
    local_8c = 0;
    local_a0[1] = 0;
    uVar14 = 0;
    local_b4 = local_c0;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar10;
LAB_01588440:
    uVar18 = FUN_01a41998(local_a0);
    iVar2 = (int)uVar18;
    if (iVar2 != 0) {
      if (iVar9 != 0) {
        uVar16 = *(undefined4 *)(iVar2 + 4);
        iVar11 = *(int *)(iVar2 + 8);
        uVar3 = FUN_01676700(param_2 + 4,uVar16,iVar11);
        uVar10 = uVar3 >> 0x19;
        iVar17 = 0;
        while( true ) {
          uVar3 = uVar8 & uVar3;
          uVar12 = *(uint *)(iVar7 + uVar3);
          uVar4 = uVar12 ^ uVar10 * 0x1010101;
          for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0;
              uVar4 = uVar4 - 1 & uVar4) {
            uVar13 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar8;
            iVar5 = iVar7 + -0x20 + uVar13 * -0x20;
            if ((iVar11 == *(int *)(iVar5 + 8)) &&
               (iVar5 = thunk_FUN_01bed842(uVar16,*(undefined4 *)(iVar5 + 4),iVar11), iVar5 == 0)) {
              local_78 = 0x80000000;
              local_74 = uVar16;
              local_70 = iVar11;
              local_6c = param_4;
              FUN_006666fc(&local_68,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
              if (uVar14 == local_b8) {
                FUN_019abd3c(&local_b8);
                local_c0 = local_b4;
              }
              puVar6 = (undefined4 *)(local_c0 + uVar14 * 0xc);
              *puVar6 = local_68;
              puVar6[1] = local_64;
              puVar6[2] = local_60;
              local_b0 = uVar14 + 1;
              FUN_015737d4(&local_68,iVar7 + -0x14 + uVar13 * -0x20,(int)((ulonglong)uVar18 >> 0x20)
                           ,&local_78,param_5,param_6);
              iVar15 = local_a4;
              if (local_a4 == local_ac) {
                FUN_0155ab78(&local_ac);
              }
              local_cc = local_a8;
              puVar6 = (undefined4 *)(local_a8 + iVar15 * 0x40);
              iVar15 = iVar15 + 1;
              *puVar6 = local_68;
              puVar6[1] = local_64;
              puVar6[2] = local_60;
              puVar6[3] = local_5c;
              puVar6[4] = local_58;
              puVar6[5] = local_54;
              puVar6[6] = local_50;
              puVar6[7] = uStack_4c;
              puVar6[8] = uStack_48;
              puVar6[9] = uStack_44;
              puVar6[10] = local_40;
              puVar6[0xb] = uStack_3c;
              puVar6[0xc] = uStack_38;
              puVar6[0xd] = uStack_34;
              puVar6[0xe] = uStack_30;
              puVar6[0xf] = uStack_2c;
              uVar14 = uVar14 + 1;
              local_a4 = iVar15;
              goto LAB_01588440;
            }
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
          iVar17 = iVar17 + 4;
          uVar3 = uVar3 + iVar17;
        }
      }
      goto LAB_01588440;
    }
    iVar7 = iVar15 << 6;
    iVar9 = local_cc;
    do {
      if (iVar7 == 0) {
        local_58 = 0;
        local_64 = local_ac;
        local_60 = local_cc;
        local_68 = 0x80000000;
        local_5c = iVar15;
        goto LAB_015886a0;
      }
      pcVar1 = (char *)(iVar9 + 0x3c);
      iVar7 = iVar7 + -0x40;
      iVar9 = iVar9 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_58 = local_cc;
    local_68 = 0;
    local_50 = 0;
    local_60 = 0;
    local_64 = 4;
    local_54 = iVar15;
LAB_015886a0:
    FUN_01538264(local_a0,&local_b8);
    uVar16 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_68,uVar16);
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

