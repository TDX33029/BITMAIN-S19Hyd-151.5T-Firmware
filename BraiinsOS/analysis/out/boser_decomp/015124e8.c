// FUN_015124e8 @ 015124e8 size=1224 calls_out=16 calls_in=0
// strings: 

void FUN_015124e8(uint *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_cc;
  int local_bc;
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
  uint local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  if (*param_3 == '\x05') {
    uVar10 = *(uint *)(param_3 + 0xc);
    uVar13 = 0;
    uVar12 = uVar10 * 0xc;
    if (0xaaaaaaa < uVar10) {
LAB_01512528:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,uVar12);
    }
    uVar11 = 0;
    if (uVar12 == 0) {
      local_bc = 4;
      local_b8 = 0;
    }
    else {
      uVar13 = 4;
      local_bc = FUN_01298504(uVar12,4);
      local_b8 = uVar10;
      if (local_bc == 0) goto LAB_01512528;
    }
    local_b0 = 0;
    local_b4 = local_bc;
    if ((0x3ffffff < uVar10) || (uVar12 = uVar10 * 0x40, 0x7ffffffc < uVar12)) {
LAB_015125f0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,uVar12);
    }
    if (uVar12 == 0) {
      local_cc = 4;
      local_ac = 0;
    }
    else {
      uVar11 = 4;
      local_cc = FUN_01298504(uVar12,4);
      if (local_cc == 0) goto LAB_015125f0;
      local_ac = uVar10;
    }
    local_a4 = 0;
    uVar12 = 0;
    local_98 = *(uint *)(param_3 + 4);
    iVar6 = *(int *)(param_2 + 8);
    puVar3 = *(uint **)(param_2 + 4);
    if (local_98 == 0) {
      uVar10 = 0;
    }
    local_94 = *(uint *)(param_3 + 8);
    local_a0 = (uint)(local_98 != 0);
    local_8c = 0;
    local_9c = 0;
    puVar9 = param_1;
    uVar7 = 0;
    local_a8 = local_cc;
    local_90 = local_a0;
    local_88 = local_98;
    local_84 = local_94;
    local_80 = uVar10;
LAB_01512674:
    uVar15 = FUN_01a41998(&local_a0);
    iVar14 = (int)uVar15;
    if (iVar14 != 0) {
      uVar13 = *(undefined4 *)(iVar14 + 4);
      uVar10 = *(uint *)(iVar14 + 8);
      if (iVar6 != 0) {
        puVar9 = puVar3;
        iVar14 = iVar6 << 5;
        do {
          if ((puVar9[2] == uVar10) &&
             (iVar4 = thunk_FUN_01bed842(puVar9[1],uVar13,uVar10), iVar4 == 0)) {
            local_34 = 0x80000000;
            local_30 = uVar13;
            local_2c = uVar10;
            local_28 = param_4;
            FUN_015737d4(&local_78,puVar9 + 3,(int)((ulonglong)uVar15 >> 0x20),&local_34,param_5,
                         param_6);
            if (uVar12 == local_ac) {
              FUN_0155ab78(&local_ac);
              local_cc = local_a8;
            }
            puVar5 = (undefined4 *)(local_cc + uVar12 * 0x40);
            uVar12 = uVar12 + 1;
            *puVar5 = local_78;
            puVar5[1] = uStack_74;
            puVar5[2] = uStack_70;
            puVar5[3] = local_6c;
            puVar5[4] = local_68;
            puVar5[5] = local_64;
            puVar5[6] = (undefined4)local_60;
            puVar5[7] = local_60._4_4_;
            puVar5[8] = uStack_58;
            puVar5[9] = uStack_54;
            puVar5[10] = local_50;
            puVar5[0xb] = uStack_4c;
            puVar5[0xc] = uStack_48;
            puVar5[0xd] = uStack_44;
            puVar5[0xe] = puStack_40;
            puVar5[0xf] = uStack_3c;
            puVar9 = puStack_40;
            local_a4 = uVar12;
            goto LAB_01512674;
          }
          puVar9 = puVar9 + 8;
          iVar14 = iVar14 + -0x20;
        } while (iVar14 != 0);
      }
      FUN_006666fc(&local_78,uVar13,uVar10);
      if (uVar7 == local_b8) {
        FUN_019abd3c(&local_b8);
        local_bc = local_b4;
      }
      local_b0 = uVar7 + 1;
      puVar5 = (undefined4 *)(local_bc + uVar7 * 0xc);
      *puVar5 = local_78;
      puVar5[1] = uStack_74;
      puVar5[2] = uStack_70;
      uVar7 = local_b0;
      goto LAB_01512674;
    }
    iVar6 = local_a4 << 6;
    uVar10 = local_a8;
    do {
      if (iVar6 == 0) {
        uVar13 = 0;
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = 0;
        local_94 = local_a4;
        local_98 = local_a8;
        goto LAB_01512820;
      }
      puVar9 = (uint *)(uint)*(byte *)(uVar10 + 0x3c);
      iVar6 = iVar6 + -0x40;
      uVar10 = uVar10 + 0x40;
    } while (puVar9 != (uint *)0x0);
    local_94 = local_ac;
    local_a0 = 0;
    uVar13 = 4;
    local_8c = local_a4;
    local_90 = local_a8;
    local_88 = 0;
    local_98 = 0;
    local_9c = 4;
LAB_01512820:
    local_60 = CONCAT44(uVar13,local_a0);
    if (uVar7 == 0) {
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
    piVar8 = *(int **)(param_2 + 0xc);
    if (param_5 == 0) {
      local_78 = 0;
    }
    else {
      uVar10 = *(uint *)(param_2 + 0x10);
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      puVar9 = *(uint **)(param_5 + 0xc);
      do {
        uVar12 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar12 + 1;
      if ((int)uVar12 < 0) goto LAB_015129b0;
      piVar8 = piVar8 + 2;
      uVar12 = *(uint *)(param_5 + 0x10);
      uVar7 = (*(int **)(param_5 + 4))[1];
      if (uVar10 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar6 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar8,uVar7);
        if (iVar6 != 0) {
          uVar7 = 0;
        }
        piVar8 = (int *)((int)piVar8 + uVar7);
      }
      local_60 = FUN_016bc0ec(piVar8,uVar10 - uVar7);
      local_78 = 2;
      piVar8 = *(int **)(param_2 + 0xc);
    }
    do {
      iVar6 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_015129b0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15129b0);
      (*pcVar1)();
    }
    uVar13 = *(undefined4 *)(param_2 + 0x10);
    local_6c = 3;
    local_68 = puVar9;
    local_64 = uVar12;
    uVar15 = FUN_01531840(param_4);
    local_34 = FUN_01595b0c(piVar8,uVar13,&local_78,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
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
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

