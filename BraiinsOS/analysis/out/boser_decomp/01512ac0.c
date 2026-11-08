// FUN_01512ac0 @ 01512ac0 size=1464 calls_out=17 calls_in=0
// strings: 

void FUN_01512ac0(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 uVar20;
  int local_f4;
  uint local_ec;
  uint local_c4;
  uint local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  uint *local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_3 == '\x05') {
    uVar14 = *(uint *)(param_3 + 0xc);
    uVar11 = 0;
    uVar4 = uVar14 * 0xc;
    if (0xaaaaaaa < uVar14) {
LAB_01512b00:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,uVar4);
    }
    uVar18 = 0;
    if (uVar4 == 0) {
      local_f4 = 4;
      local_b8 = 0;
    }
    else {
      uVar11 = 4;
      local_f4 = FUN_01298504(uVar4,4);
      local_b8 = uVar14;
      if (local_f4 == 0) goto LAB_01512b00;
    }
    local_b0 = 0;
    local_b4 = local_f4;
    if ((0x3ffffff < uVar14) || (uVar4 = uVar14 * 0x40, 0x7ffffffc < uVar4)) {
LAB_01512bc0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,uVar4);
    }
    if (uVar4 == 0) {
      local_c4 = 4;
      local_ac = 0;
    }
    else {
      uVar18 = 4;
      local_c4 = FUN_01298504(uVar4,4);
      if (local_c4 == 0) goto LAB_01512bc0;
      local_ac = uVar14;
    }
    uVar4 = param_2[1];
    local_94 = *(uint *)(param_3 + 8);
    iVar5 = param_2[3];
    iVar10 = *param_2;
    local_98 = *(uint *)(param_3 + 4);
    local_ec = 0;
    local_80 = uVar14;
    if (local_98 == 0) {
      local_80 = 0;
    }
    local_a0 = (uint)(local_98 != 0);
    local_a4 = 0;
    local_8c = 0;
    local_9c = 0;
    local_bc = 0;
    local_a8 = local_c4;
    local_90 = local_a0;
    local_88 = local_98;
    local_84 = local_94;
LAB_01512c74:
    uVar20 = FUN_01a41998(&local_a0);
    iVar12 = (int)uVar20;
    if (iVar12 != 0) {
      uVar11 = *(undefined4 *)(iVar12 + 4);
      iVar12 = *(int *)(iVar12 + 8);
      if (iVar5 != 0) {
        uVar6 = FUN_0155d010(param_2 + 4,uVar11,iVar12);
        uVar14 = uVar6 >> 0x19;
        iVar15 = 0;
        while( true ) {
          uVar6 = uVar4 & uVar6;
          uVar19 = *(uint *)(iVar10 + uVar6);
          uVar7 = uVar19 ^ uVar14 * 0x1010101;
          for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0;
              uVar7 = uVar7 - 1 & uVar7) {
            uVar16 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                            (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                     uVar4;
            iVar8 = iVar10 + -0x20 + uVar16 * -0x20;
            if ((iVar12 == *(int *)(iVar8 + 8)) &&
               (iVar8 = thunk_FUN_01bed842(uVar11,*(undefined4 *)(iVar8 + 4),iVar12), iVar8 == 0)) {
              local_34 = 0x80000000;
              local_30 = uVar11;
              local_2c = iVar12;
              local_28 = param_4;
              FUN_015737d4(&local_78,iVar10 + -0x14 + uVar16 * -0x20,
                           (int)((ulonglong)uVar20 >> 0x20),&local_34,param_5,param_6);
              if (local_bc == local_ac) {
                FUN_0155ab78(&local_ac);
                local_c4 = local_a8;
              }
              puVar9 = (undefined4 *)(local_c4 + local_bc * 0x40);
              *puVar9 = local_78;
              puVar9[1] = uStack_74;
              puVar9[2] = uStack_70;
              puVar9[3] = local_6c;
              puVar9[4] = local_68;
              local_bc = local_bc + 1;
              puVar9[5] = local_64;
              puVar9[6] = (undefined4)local_60;
              puVar9[7] = local_60._4_4_;
              puVar9[8] = uStack_58;
              puVar9[9] = uStack_54;
              puVar9[10] = local_50;
              puVar9[0xb] = uStack_4c;
              puVar9[0xc] = uStack_48;
              puVar9[0xd] = uStack_44;
              puVar9[0xe] = uStack_40;
              puVar9[0xf] = uStack_3c;
              local_a4 = local_bc;
              goto LAB_01512c74;
            }
          }
          if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
          iVar15 = iVar15 + 4;
          uVar6 = uVar6 + iVar15;
        }
      }
      FUN_006666fc(&local_78,uVar11,iVar12);
      if (local_ec == local_b8) {
        FUN_019abd3c(&local_b8);
        local_f4 = local_b4;
      }
      local_b0 = local_ec + 1;
      puVar9 = (undefined4 *)(local_f4 + local_ec * 0xc);
      *puVar9 = local_78;
      puVar9[1] = uStack_74;
      puVar9[2] = uStack_70;
      local_ec = local_b0;
      goto LAB_01512c74;
    }
    iVar5 = local_a4 << 6;
    uVar4 = local_a8;
    do {
      if (iVar5 == 0) {
        uVar11 = 0;
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = 0;
        local_94 = local_a4;
        local_98 = local_a8;
        goto LAB_01512ee8;
      }
      pcVar1 = (char *)(uVar4 + 0x3c);
      iVar5 = iVar5 + -0x40;
      uVar4 = uVar4 + 0x40;
    } while (*pcVar1 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    uVar11 = 4;
    local_8c = local_a4;
    local_90 = local_a8;
    local_88 = 0;
    local_98 = 0;
    local_9c = 4;
LAB_01512ee8:
    local_60 = CONCAT44(uVar11,local_ec);
    if (local_ec == 0) {
      *param_1 = local_a0;
      param_1[1] = local_9c;
      param_1[2] = local_98;
      param_1[3] = local_94;
      param_1[4] = local_90;
      param_1[5] = local_8c;
      param_1[6] = local_88;
      FUN_006a41c0(&local_b8);
      return;
    }
    piVar13 = (int *)param_2[0xc];
    if (param_5 == 0) {
      local_78 = 0;
      uVar11 = 0;
      local_68 = param_1;
    }
    else {
      uVar4 = param_2[0xd];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      puVar17 = *(uint **)(param_5 + 0xc);
      do {
        uVar14 = *puVar17;
        bVar3 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar3);
      *puVar17 = uVar14 + 1;
      if ((int)uVar14 < 0) goto LAB_01513078;
      piVar13 = piVar13 + 2;
      uVar11 = *(undefined4 *)(param_5 + 0x10);
      uVar14 = (*(int **)(param_5 + 4))[1];
      if (uVar4 < uVar14) {
        uVar14 = 0;
      }
      else {
        iVar5 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar13,uVar14);
        if (iVar5 != 0) {
          uVar14 = 0;
        }
        piVar13 = (int *)((int)piVar13 + uVar14);
      }
      local_60 = FUN_016bc0ec(piVar13,uVar4 - uVar14);
      local_78 = 2;
      piVar13 = (int *)param_2[0xc];
      local_68 = puVar17;
    }
    do {
      iVar5 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01513078:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x1513078);
      (*pcVar2)();
    }
    iVar5 = param_2[0xd];
    local_6c = 3;
    local_64 = uVar11;
    uVar20 = FUN_01531840(param_4);
    local_34 = FUN_01595b0c(piVar13,iVar5,&local_78,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),
                            param_3,&local_b8);
    FUN_01508738(&local_78,&local_34);
    FUN_01562ef4(&local_a0,&local_78);
    FUN_015019e4(&local_34);
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = local_8c;
    param_1[6] = local_88;
  }
  else {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

