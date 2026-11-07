// FUN_0074dec8 @ 0074dec8 size=1592 calls_out=20 calls_in=2
// strings: 

void FUN_0074dec8(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint **ppuVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  int local_e4;
  uint *local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined2 *local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint *local_a8;
  uint *local_a4;
  uint **local_a0;
  uint *local_9c;
  int *local_98;
  uint *local_94;
  undefined *local_90;
  undefined2 *local_8c;
  undefined *local_88;
  undefined2 *local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint *local_70;
  int *local_6c;
  uint *local_68;
  uint *local_64;
  undefined *local_60;
  uint *local_5c;
  undefined *local_58;
  undefined2 *local_54;
  uint *local_50;
  int *local_4c;
  uint *local_48;
  int local_40;
  int local_3c;
  int iStack_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_2[1];
    if (param_3 != 1) {
      uVar5 = param_3 * 8 - 8 >> 3;
      puVar3 = param_2 + 3;
      do {
        if (uVar4 <= *puVar3) {
          uVar4 = *puVar3;
        }
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 2;
      } while (uVar5 != 0);
    }
  }
  puVar3 = param_2 + param_3 * 2;
  uVar15 = thunk_FUN_01bee35a(puVar3,uVar4,0x2c0);
  local_e4 = (int)((ulonglong)uVar15 >> 0x20);
  puVar12 = (uint *)((int)uVar15 + extraout_r2);
  if ((char)puVar12[4] == '\0') {
    FUN_019ae6ac(&local_a8);
    *puVar12 = (uint)local_a8;
    puVar12[1] = (uint)local_a4;
    puVar12[2] = (uint)local_a0;
    puVar12[3] = (uint)local_9c;
    *(undefined1 *)(puVar12 + 4) = 1;
  }
  local_d0 = *puVar12;
  uStack_cc = puVar12[1];
  uStack_c8 = puVar12[2];
  local_c4 = puVar12[3];
  puVar10 = &DAT_01d30848;
  *puVar12 = local_d0 + 1;
  puVar12[1] = uStack_cc + (0xfffffffe < local_d0);
  local_e0 = &DAT_0056d238;
  local_dc = 0;
  uStack_d8 = 0;
  local_d4 = (undefined2 *)0x0;
  local_98 = &local_e4;
  local_9c = &local_bc;
  uVar7 = 0;
  local_bc = 0;
  local_a8 = param_2;
  local_a4 = puVar3;
  local_a0 = &local_e0;
  if (0xaaaaaaa < param_3) {
LAB_0074dfb0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,puVar10);
  }
  if (param_3 == 0) {
    local_68 = (uint *)0x4;
    param_3 = 0;
  }
  else {
    uVar7 = 4;
    puVar10 = (undefined4 *)(param_3 * 0xc);
    local_68 = (uint *)FUN_01298504(puVar10,4);
    if (local_68 == (uint *)0x0) goto LAB_0074dfb0;
  }
  local_70 = &local_28;
  local_28 = 0;
  local_6c = (int *)0x0;
  local_30 = param_3;
  local_2c = (uint)local_68;
  FUN_0077efa0(&local_a8,&local_70);
  local_b8 = local_30;
  local_b4 = local_2c;
  local_b0 = local_28;
  if (local_28 == 0) {
    uVar7 = FUN_00667978(&DAT_003e0b85,0x23);
    *param_1 = 0x80000000;
    param_1[1] = uVar7;
    FUN_006a41c0(&local_b8);
    FUN_0126f23c(&local_e0);
  }
  else {
    if (0xffff < local_e4 + 2U) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0056adc8,0x41,&DAT_01c08394);
    }
    puVar8 = (uint *)0x0;
    puVar13 = &DAT_01c08384;
    puVar11 = (uint *)&DAT_01c0837c;
    local_9c = (uint *)CONCAT22(local_9c._2_2_,(short)(local_e4 + 2U));
    local_a0 = (uint **)0x0;
    local_84 = &DAT_0132b6a0;
    local_88 = &DAT_01c0838c;
    local_8c = &DAT_0132b6a0;
    local_90 = &DAT_01c08384;
    local_94 = (uint *)&DAT_0132b6a0;
    local_98 = (int *)&DAT_01c0837c;
    local_a4 = (uint *)&DAT_0132b6a0;
    local_a8 = (uint *)&DAT_01c08374;
    FUN_00664898(&local_70,&DAT_003e0b19,&local_a8);
    puVar12 = local_68;
    piVar2 = local_6c;
    puVar3 = local_70;
    if (local_dc != 0) {
      puVar8 = (uint *)0x4;
      puVar11 = local_e0 + local_dc * -6 + -6;
      puVar13 = (undefined *)(local_dc * 0x19 + 0x1d);
    }
    local_54 = local_d4;
    local_5c = local_e0 + 1;
    local_64 = local_e0;
    local_58 = (undefined *)((int)local_e0 + local_dc + 1);
    local_60 = (undefined *)(~*local_e0 & 0x80808080);
    local_70 = puVar8;
    local_6c = (int *)puVar13;
    local_68 = puVar11;
    FUN_00782638(&local_40);
    if (local_40 == -0x80000000) {
      local_a0 = (uint **)0x0;
      local_a8 = (uint *)0x0;
      local_a4 = (uint *)&SUB_00000004;
      FUN_00763280(&local_70);
    }
    else {
      piVar9 = (int *)&SUB_00000004;
      puVar8 = (uint *)((int)local_54 + 1);
      if (local_54 == (undefined2 *)0xffffffff) {
        puVar8 = (uint *)0xffffffff;
      }
      puVar11 = (uint *)0x4;
      if ((uint *)0x4 < puVar8) {
        puVar11 = puVar8;
      }
      uVar7 = 0;
      iVar14 = (int)puVar11 * 0xc;
      if ((uint *)0xaaaaaaa < puVar8) {
LAB_0074e1f4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,iVar14);
      }
      if (iVar14 == 0) {
        puVar11 = (uint *)0x0;
      }
      else {
        uVar7 = 4;
        piVar9 = (int *)FUN_01298504(iVar14,4);
        if (piVar9 == (int *)0x0) goto LAB_0074e1f4;
      }
      *piVar9 = local_40;
      piVar9[1] = local_3c;
      piVar9[2] = iStack_38;
      local_48 = (uint *)0x1;
      local_a8 = local_70;
      local_a4 = (uint *)local_6c;
      local_a0 = (uint **)local_68;
      local_9c = local_64;
      local_98 = (int *)local_60;
      local_94 = local_5c;
      local_90 = local_58;
      local_8c = local_54;
      iVar14 = 0xc;
      local_50 = puVar11;
      local_4c = piVar9;
      while (puVar8 = local_48, FUN_00782638(&local_30,&local_a8), local_30 != 0x80000000) {
        if (puVar8 == local_50) {
          iVar6 = (int)local_8c + 1;
          if (local_8c == (undefined2 *)0xffffffff) {
            iVar6 = -1;
          }
          FUN_006520b4(&local_50,puVar8,iVar6,4,0xc);
          piVar9 = local_4c;
        }
        puVar11 = (uint *)((int)piVar9 + iVar14);
        local_48 = (uint *)((int)puVar8 + 1);
        iVar14 = iVar14 + 0xc;
        *puVar11 = local_30;
        puVar11[1] = local_2c;
        puVar11[2] = local_28;
      }
      FUN_00763280(&local_a8);
      piVar9 = local_4c;
      local_a8 = local_50;
      local_a4 = (uint *)local_4c;
      local_a0 = (uint **)local_48;
      if ((uint *)0x1 < local_48) {
        if (local_48 < (uint *)0x15) {
          iVar6 = 0xc;
          iVar14 = (int)local_48 * 0xc;
          do {
            FUN_015388e0(piVar9,(undefined1 *)((int)piVar9 + iVar6));
            iVar6 = iVar6 + 0xc;
          } while (iVar14 != iVar6);
        }
        else {
          FUN_0076da14(local_4c);
        }
      }
    }
    local_70 = local_a8;
    local_6c = (int *)local_a4;
    local_68 = (uint *)local_a0;
    local_a0 = (uint **)0x0;
    local_a4 = (uint *)&SUB_00000004;
    local_a8 = (uint *)0x0;
    FUN_01aa1bc0(&local_a8);
    *local_a4 = (uint)&DAT_003e0b4d;
    local_a4[1] = 0x38;
    local_a0 = (uint **)0x1;
    if (local_a8 == (uint *)0x1) {
      FUN_01aa1bc0(&local_a8);
    }
    local_a4[2] = 1;
    local_a4[3] = 0;
    local_a0 = (uint **)0x2;
    if (local_a8 == (uint *)0x2) {
      FUN_01aa1bc0(&local_a8);
    }
    local_a4[4] = (uint)piVar2;
    local_a4[5] = (uint)puVar12;
    local_a0 = (uint **)0x3;
    FUN_00782fd0(&local_a8,local_b4,local_b4 + local_b0 * 0xc);
    ppuVar1 = local_a0;
    if (local_a0 == (uint **)local_a8) {
      FUN_01aa1bc0(&local_a8);
    }
    local_a4[(int)ppuVar1 * 2] = 1;
    (local_a4 + (int)ppuVar1 * 2)[1] = 0;
    local_a0 = (uint **)((int)ppuVar1 + 1);
    FUN_00782fd0(&local_a8,local_6c,local_6c + (int)local_68 * 3);
    ppuVar1 = local_a0;
    if (local_a0 == (uint **)local_a8) {
      FUN_01aa1bc0(&local_a8);
    }
    puVar12 = local_a4;
    local_a4[(int)ppuVar1 * 2] = 1;
    (local_a4 + (int)ppuVar1 * 2)[1] = 0;
    FUN_0078b2c8(&local_80,local_a4,(int)ppuVar1 + 1,"\n");
    FUN_01af7af8(local_a8,puVar12,4,8);
    *param_1 = local_80;
    param_1[1] = uStack_7c;
    param_1[2] = uStack_78;
    FUN_006a41c0(&local_70);
    FUN_019bb7e0(puVar3,piVar2);
    FUN_006a41c0(&local_b8);
  }
  return;
}

