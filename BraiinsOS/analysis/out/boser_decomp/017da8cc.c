// FUN_017da8cc @ 017da8cc size=1516 calls_out=11 calls_in=2
// strings: ttp://Sensitive

void FUN_017da8cc(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined ***extraout_r2;
  undefined ***extraout_r2_00;
  undefined2 extraout_r3;
  undefined2 extraout_r3_00;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  uint uVar13;
  undefined **extraout_r12;
  undefined **extraout_r12_00;
  undefined **ppuVar14;
  undefined8 uVar15;
  uint *local_e0;
  char *local_dc;
  undefined **local_d0;
  undefined ***local_cc;
  undefined ***local_c8;
  undefined ***pppuStack_c4;
  undefined **local_c0;
  undefined ***local_bc;
  undefined ***local_b8;
  undefined ***local_b4;
  undefined2 local_b0;
  ushort local_ae;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined **local_78;
  undefined ***local_74;
  undefined ***local_70;
  undefined ***local_6c;
  undefined **local_68;
  undefined ***pppuStack_64;
  undefined ***pppuStack_60;
  undefined ***pppuStack_5c;
  undefined **local_58;
  undefined ***local_54;
  undefined ***local_50;
  undefined ***local_4c;
  undefined **local_48;
  undefined ***pppuStack_44;
  undefined ***pppuStack_40;
  undefined ***pppuStack_3c;
  undefined **local_38;
  undefined ***local_34;
  undefined ***local_30;
  undefined ***local_2c;
  
  pppuVar11 = (undefined ***)param_2[6];
  uVar4 = param_2[5];
  pppuVar10 = &local_38;
  FUN_012834b0(&local_d0,uVar4,pppuVar11);
  uVar13 = 3;
  if (local_c8 < (undefined ***)0xffff) {
    if (((uint)local_c8 & 0xffff) == 0) {
      pcVar5 = (char *)0x9;
      goto LAB_017da95c;
    }
    if (local_c8 == (undefined ***)&DAT_00000001) {
      if (*(char *)local_cc == '*') {
        local_dc = "*";
      }
      else {
        if (*(char *)local_cc != '/') {
          local_c0 = local_d0;
          local_bc = local_cc;
          local_b8 = local_c8;
          local_b4 = pppuStack_c4;
          FUN_0140d3a0(&local_38);
          if (local_38 == (undefined **)0x0) goto LAB_017da9a0;
          local_b0 = 0xffff;
          pppuVar10 = (undefined ***)0x0;
          local_b4 = (undefined ***)0x0;
          local_dc._0_1_ = 1;
          local_b8 = (undefined ***)0x0;
          local_c0 = &PTR_FUN_01cf4050;
          local_58 = local_38;
          goto LAB_017dac90;
        }
        local_dc = &DAT_005327c4;
      }
      pppuVar10 = (undefined ***)((uint)local_dc >> 8);
      pcVar5 = (char *)0x0;
      uVar13 = 0;
      goto LAB_017da95c;
    }
    if (*(char *)local_cc == '/') {
      local_38 = local_d0;
      local_34 = local_cc;
      local_30 = local_c8;
      local_2c = pppuStack_c4;
      FUN_014134f0(&local_c0,pppuVar10);
      if (local_c0 == (undefined **)0x0) goto LAB_017da9a0;
      local_dc._0_1_ = SUB41(local_bc,0);
      local_30 = (undefined ***)0x0;
      pppuVar10 = (undefined ***)((uint)local_bc >> 8);
      local_58 = &PTR_FUN_01cf3fcc;
      local_38 = (undefined **)(uint)local_ae;
      local_34 = (undefined ***)&DAT_00000001;
      local_2c = (undefined ***)0x0;
LAB_017dac90:
      uVar15 = CONCAT44(local_b4,local_b8);
      pcVar5 = (char *)0x0;
      uVar13 = 0;
      local_4c = local_2c;
      local_54 = local_34;
      local_50 = local_30;
      ppuVar14 = local_c0;
      goto LAB_017dac98;
    }
    local_78 = local_d0;
    local_74 = local_cc;
    local_70 = local_c8;
    local_6c = pppuStack_c4;
    if (local_c8 < &DAT_00000007) {
LAB_017dab3c:
      if (&DAT_00000003 < local_c8) goto LAB_017dab44;
      bVar1 = true;
      uVar13 = 0;
LAB_017dad3c:
      pppuVar12 = local_70;
      pppuVar8 = local_74;
      FUN_0140ce9c(&local_c0,local_74,local_70);
      if ((char)local_c0 != '\0') {
        pcVar7 = (char *)((uint)local_c0 >> 8 & 0xff);
LAB_017dad64:
        FUN_01414eb8(uVar13,local_e0);
        goto LAB_017dad78;
      }
      if (!bVar1) {
        if (local_bc == (undefined ***)0x0) {
          pcVar7 = (char *)0x4;
          goto LAB_017dad64;
        }
        pppuVar8 = &local_78;
        FUN_0128371c(&local_58,pppuVar8);
        local_48 = local_58;
        pppuStack_44 = local_54;
        pppuStack_40 = local_50;
        pppuStack_3c = local_4c;
        pppuVar10 = &local_38;
        local_38 = local_78;
        local_34 = local_74;
        local_30 = local_70;
        local_2c = local_6c;
        FUN_014134f0(&local_c0,pppuVar10);
        uVar15 = CONCAT44(local_b4,local_b8);
        pcVar7 = (char *)((uint)local_bc & 0xff);
        if (local_c0 != (undefined **)0x0) {
          pcVar5 = (char *)(uVar13 >> 8);
          pppuVar10 = (undefined ***)((uint)local_bc >> 8);
          uVar13 = uVar13 & 0xff;
          local_38 = (undefined **)CONCAT22(local_38._2_2_,local_ae);
          ppuVar14 = local_c0;
          local_dc = pcVar7;
          goto LAB_017da998;
        }
        (*(code *)local_48[4])(&pppuStack_3c,pppuStack_44,pppuStack_40);
        ppuVar14 = (undefined **)0x17daea0;
        uVar15 = FUN_01414eb8(uVar13,local_e0);
        local_4c = extraout_r2_00;
        local_58 = extraout_r12_00;
        local_b0 = extraout_r3_00;
        goto LAB_017dad90;
      }
      pcVar7 = (char *)0x4;
      if (local_bc != pppuVar12) goto LAB_017dad64;
      pcVar5 = (char *)(uVar13 >> 8);
      local_dc = (char *)0x1;
      uVar13 = uVar13 & 0xff;
      local_b0 = 0xffff;
      pppuVar10 = (undefined ***)0x0;
      uVar15 = 0;
      local_4c = local_6c;
      local_54 = pppuVar8;
      local_50 = pppuVar12;
      local_58 = local_78;
      ppuVar14 = &PTR_FUN_01cf4050;
    }
    else {
      iVar6 = 0;
      iVar3 = 0;
      do {
        if (iVar3 == 7) goto LAB_017dad00;
        pppuVar10 = (undefined ***)(uint)*(byte *)((int)local_cc + iVar3);
        pppuVar8 = (undefined ***)(uint)(byte)"h"[iVar3];
        iVar3 = iVar3 + 1;
        if ((char *)((int)pppuVar10 + -0x41) < &DAT_0000001a) {
          pppuVar10 = (undefined ***)((uint)pppuVar10 | 0x20);
        }
        if ((char *)((int)pppuVar8 + -0x41) < &DAT_0000001a) {
          pppuVar8 = (undefined ***)((uint)pppuVar8 | 0x20);
        }
      } while (pppuVar10 == pppuVar8);
      if (local_c8 != (undefined ***)&DAT_00000007) {
        iVar3 = 0;
LAB_017dab08:
        if (iVar3 != 8) goto code_r0x017dab10;
        iVar6 = 1;
LAB_017dad00:
        uVar2 = 7;
        if (iVar6 != 0) {
          uVar2 = 8;
        }
        FUN_0128371c(&local_c0,&local_78,uVar2);
        (*(code *)local_c0[4])(&local_b4,local_bc,local_b8);
        uVar13 = iVar6 << 8 | 1;
        bVar1 = false;
        goto LAB_017dad3c;
      }
LAB_017dab44:
      uVar13 = 0;
      bVar1 = true;
      pppuVar8 = (undefined ***)0x0;
      do {
        pppuVar9 = pppuVar8;
        if (local_c8 == pppuVar9) goto LAB_017dad3c;
        pppuVar10 = pppuVar9;
        if (""[*(byte *)((int)local_cc + (int)pppuVar9)] == '\0') {
          uVar13 = 0;
          goto LAB_017dad3c;
        }
        pppuVar8 = (undefined ***)((int)pppuVar9 + 1);
      } while (""[*(byte *)((int)local_cc + (int)pppuVar9)] != ':');
      if ((local_c8 < (undefined ***)((int)pppuVar9 + 3)) ||
         (pppuVar8 = (undefined ***)0x2f2f,
         *(short *)((char *)((int)local_cc + (int)pppuVar9) + 1) != 0x2f2f)) goto LAB_017dad3c;
      pcVar7 = (char *)0xa;
      pppuVar12 = pppuVar11;
      if (pppuVar9 < &DAT_00000041) {
        FUN_0128371c(&local_38,&local_78,(undefined ***)((int)pppuVar9 + 3));
        FUN_01283834(&local_c0,&local_38,pppuVar9);
        (*(code *)local_c0[4])(&local_b4,local_bc,local_b8);
        local_68 = local_38;
        pppuStack_64 = local_34;
        pppuStack_60 = local_30;
        pppuStack_5c = local_2c;
        local_e0 = (uint *)thunk_FUN_01be5118(0x10);
        if (local_e0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        uVar13 = 2;
        bVar1 = false;
        *local_e0 = (uint)local_38;
        local_e0[1] = (uint)local_34;
        local_e0[2] = (uint)local_30;
        local_e0[3] = (uint)local_2c;
        pppuVar10 = local_2c;
        goto LAB_017dad3c;
      }
LAB_017dad78:
      ppuVar14 = (undefined **)0x17dad8c;
      uVar15 = (*(code *)local_78[4])(&local_6c,local_74,local_70);
      local_4c = extraout_r2;
      local_58 = extraout_r12;
      local_b0 = extraout_r3;
LAB_017dad90:
      uVar13 = 3;
      pcVar5 = pcVar7;
      local_54 = pppuVar8;
      local_50 = pppuVar12;
    }
  }
  else {
    pcVar5 = (char *)0x8;
LAB_017da95c:
    (*(code *)local_d0[4])(&pppuStack_c4,local_cc);
    local_b0 = 0xffff;
    uVar15 = 1;
    local_4c = (undefined ***)0x0;
    local_54 = (undefined ***)&DAT_00000001;
    local_50 = (undefined ***)0x0;
    local_58 = &PTR_FUN_01cf3fcc;
    ppuVar14 = &PTR_FUN_01cf4050;
  }
LAB_017da998:
  if (uVar13 == 3) {
LAB_017da9a0:
    FUN_006666fc(&local_b0,uVar4,pppuVar11);
    local_a0 = param_2[8];
    local_9c = param_2[9];
    local_98 = param_2[10];
    local_94 = param_2[0xb];
    local_8c = param_2[0xd];
    uStack_88 = param_2[0xe];
    uStack_84 = param_2[0xf];
    uStack_80 = param_2[0x10];
    local_7c = *(undefined1 *)(param_2 + 0x11);
    local_c0 = (undefined **)*param_2;
    local_bc = (undefined ***)param_2[1];
    local_b8 = (undefined ***)param_2[2];
    local_b4 = (undefined ***)param_2[3];
    local_a4 = param_2[7];
    local_90 = param_2[0xc];
    uVar13 = FUN_017f0768(&local_c0);
    param_1[1] = uVar13;
    *(undefined1 *)param_1 = 3;
    return;
  }
LAB_017dac98:
  *(undefined8 *)(param_1 + 8) = uVar15;
  *(undefined1 *)(param_1 + 7) = local_dc._0_1_;
  *param_1 = uVar13 | (int)pcVar5 << 8;
  param_1[1] = (uint)local_e0;
  param_1[2] = (uint)local_58;
  *(short *)((int)param_1 + 0x1d) = (short)pppuVar10;
  *(undefined2 *)(param_1 + 10) = local_b0;
  param_1[3] = (uint)local_54;
  param_1[4] = (uint)local_50;
  param_1[5] = (uint)local_4c;
  param_1[6] = (uint)ppuVar14;
  *(undefined2 *)((int)param_1 + 0x2a) = local_38._0_2_;
  *(char *)((int)param_1 + 0x1f) = (char)((uint)pppuVar10 >> 0x10);
  return;
code_r0x017dab10:
  pppuVar8 = (undefined ***)(uint)*(byte *)((int)local_cc + iVar3);
  pppuVar10 = (undefined ***)(uint)(byte)(&DAT_0056fd20)[iVar3];
  iVar3 = iVar3 + 1;
  if ((char *)((int)pppuVar8 + -0x41) < &DAT_0000001a) {
    pppuVar8 = (undefined ***)((uint)pppuVar8 | 0x20);
  }
  if ((char *)((int)pppuVar10 + -0x41) < &DAT_0000001a) {
    pppuVar10 = (undefined ***)((uint)pppuVar10 | 0x20);
  }
  if (pppuVar8 != pppuVar10) goto LAB_017dab3c;
  goto LAB_017dab08;
}

