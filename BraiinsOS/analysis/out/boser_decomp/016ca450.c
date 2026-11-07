// FUN_016ca450 @ 016ca450 size=1276 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016ca450(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int extraout_r1;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  int local_d8;
  int local_d0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int iStack_6c;
  int *local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  uint *puStack_48;
  uint *puStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_34;
  int local_30;
  int *piStack_2c;
  int iStack_28;
  
  local_34 = 0;
  local_30 = 0;
  FUN_01691d3c(&local_78,param_4,&local_34);
  piVar2 = local_74;
  if (local_78 == 0x2a) {
    local_b4 = 0;
    local_b8 = 4;
    local_bc = 0;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d09818);
    }
    FUN_016caa44(&local_b0,param_2);
    iVar13 = 0;
    piVar3 = (int *)((uint)&local_78 | 4);
    local_d8 = 4;
LAB_016ca4f4:
    local_d0 = local_b4;
    while( true ) {
      while( true ) {
        while (puVar5 = local_80, iVar8 = local_9c, local_80 != local_7c) {
          puVar7 = local_80 + 2;
          uVar4 = *local_80;
          if (param_3 <= uVar4) {
            local_b4 = local_d0;
            local_80 = puVar7;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar4,param_3,&DAT_01d09828);
          }
          uVar1 = (undefined1)local_80[1];
          if (*(int *)(param_2 + uVar4 * 0x18 + 8) != 0) {
            local_b4 = local_d0;
            local_80 = puVar7;
            if (local_9c == local_a4) {
              FUN_015f5ab8(&local_a4);
            }
            local_a0[iVar8 * 2] = 0;
            (local_a0 + iVar8 * 2)[1] = (uint)CONCAT11(uVar1,uVar1);
            local_9c = iVar8 + 1;
            if (iVar13 == local_bc) {
              FUN_016b7b50(&local_bc);
              local_d8 = local_b8;
            }
            FUN_01bed864(local_d8 + iVar13 * 0x38,&local_b0,0x38);
            uVar4 = *puVar5;
            iVar13 = iVar13 + 1;
            local_b4 = iVar13;
            if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar4,param_3,&DAT_01d09838);
            }
            FUN_016caa44(&local_78,param_2 + uVar4 * 0x18);
            local_b0 = local_78;
            local_ac = local_74;
            local_a8 = local_70;
            local_a4 = iStack_6c;
            local_a0 = local_68;
            local_9c = local_64;
            iStack_98 = local_60;
            iStack_94 = iStack_5c;
            iStack_90 = iStack_58;
            local_8c = local_54;
            iStack_88 = iStack_50;
            iStack_84 = local_4c;
            local_80 = puStack_48;
            local_7c = puStack_44;
            goto LAB_016ca4f4;
          }
          local_80 = puVar7;
          if (local_9c == local_a4) {
            FUN_015f5ab8(&local_a4);
          }
          local_a0[iVar8 * 2] = (int)piVar2;
          (local_a0 + iVar8 * 2)[1] = (uint)CONCAT11(uVar1,uVar1);
          local_9c = iVar8 + 1;
        }
        if (local_9c != 0) {
          if (local_9c == 1) {
            local_9c = 0;
            local_30 = *local_a0;
            piStack_2c = (int *)local_a0[1];
            local_34 = 1;
            FUN_01691d3c(&local_78,param_4,&local_34);
          }
          else {
            local_30 = local_a4;
            piStack_2c = local_a0;
            iStack_28 = local_9c;
            local_9c = 0;
            local_a4 = 0;
            local_a0 = (int *)&SUB_00000004;
            local_34 = 2;
            FUN_01691d3c(&local_78,param_4,&local_34);
          }
          piVar6 = local_74;
          iVar8 = local_a8;
          if (local_78 != 0x2a) {
            local_b4 = local_d0;
            param_1[2] = local_70;
            param_1[3] = iStack_6c;
            param_1[4] = (int)local_68;
            param_1[5] = local_64;
            param_1[6] = local_60;
            param_1[7] = iStack_5c;
            param_1[8] = iStack_58;
            param_1[9] = local_54;
            param_1[10] = iStack_50;
            param_1[0xb] = local_4c;
            param_1[0xc] = (int)puStack_48;
            param_1[0xd] = (int)puStack_44;
            param_1[0xe] = iStack_40;
            param_1[0xf] = iStack_3c;
            *param_1 = local_78;
            param_1[1] = (int)local_74;
            FUN_0134aee0(local_b0,local_ac,4,4);
            goto LAB_016ca888;
          }
          if (local_a8 == local_b0) {
            FUN_01a54b48(&local_b0);
          }
          local_ac[iVar8] = (int)piVar6;
          local_a8 = iVar8 + 1;
        }
        uVar15 = FUN_016ca380(&iStack_98);
        iVar8 = local_a8;
        puVar5 = (uint *)uVar15;
        if (puVar5 == (uint *)0x0) break;
        if (local_a8 == local_b0) {
          FUN_01a54b48(&local_b0);
        }
        local_ac[iVar8] = (int)piVar2;
        local_7c = puVar5 + (int)((ulonglong)uVar15 >> 0x20) * 2;
        local_a8 = iVar8 + 1;
        local_80 = puVar5;
      }
      local_30 = local_b0;
      piStack_2c = local_ac;
      iStack_28 = local_a8;
      local_34 = 6;
      FUN_01691d3c(&local_78,param_4,&local_34);
      if (local_78 != 0x2a) break;
      piVar6 = (int *)0x0;
      iVar8 = extraout_r1;
      if (iVar13 != 0) {
        local_d0 = iVar13 + -1;
        piVar6 = (int *)(local_d8 + local_d0 * 0x38);
        iVar8 = *piVar6;
      }
      if (iVar13 == 0 || iVar8 == -0x80000000) {
        *param_1 = 0x2a;
        param_1[1] = (int)local_74;
        param_1[2] = (int)piVar2;
        local_b4 = local_d0;
        goto LAB_016ca888;
      }
      iVar13 = piVar6[2];
      iVar10 = piVar6[3];
      iVar11 = piVar6[4];
      *piVar3 = piVar6[1];
      piVar3[1] = iVar13;
      piVar3[2] = iVar10;
      piVar3[3] = iVar11;
      iVar13 = piVar6[6];
      iVar10 = piVar6[7];
      iVar11 = piVar6[8];
      piVar3[4] = piVar6[5];
      piVar3[5] = iVar13;
      piVar3[6] = iVar10;
      piVar3[7] = iVar11;
      piVar9 = (int *)piVar6[9];
      iVar13 = piVar6[10];
      iVar10 = piVar6[0xb];
      iVar11 = piVar6[0xc];
      iVar12 = piVar6[0xd];
      piVar3[8] = (int)piVar9;
      piVar3[9] = iVar13;
      piVar3[10] = iVar10;
      piVar3[0xb] = iVar11;
      piVar3[0xc] = iVar12;
      bVar14 = local_64 == 0;
      if (!bVar14) {
        piVar9 = local_68 + local_64 * 2 + -2;
        bVar14 = piVar9 == (int *)0x0;
      }
      local_78 = iVar8;
      if (bVar14) {
        local_b4 = local_d0;
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d09848);
      }
      *piVar9 = (int)local_74;
      FUN_0134aee0(local_a4,local_a0,4,8);
      local_b0 = local_78;
      local_ac = local_74;
      local_a8 = local_70;
      local_a4 = iStack_6c;
      local_a0 = local_68;
      local_9c = local_64;
      iStack_98 = local_60;
      iStack_94 = iStack_5c;
      iStack_90 = iStack_58;
      local_8c = local_54;
      iStack_88 = iStack_50;
      iStack_84 = local_4c;
      local_80 = puStack_48;
      local_7c = puStack_44;
      iVar13 = local_d0;
    }
    local_b4 = local_d0;
    param_1[2] = local_70;
    param_1[3] = iStack_6c;
    param_1[4] = (int)local_68;
    param_1[5] = local_64;
    param_1[6] = local_60;
    param_1[7] = iStack_5c;
    param_1[8] = iStack_58;
    param_1[9] = local_54;
    param_1[10] = iStack_50;
    param_1[0xb] = local_4c;
    param_1[0xc] = (int)puStack_48;
    param_1[0xd] = (int)puStack_44;
    param_1[0xe] = iStack_40;
    param_1[0xf] = iStack_3c;
    *param_1 = local_78;
    param_1[1] = (int)local_74;
LAB_016ca888:
    FUN_0134aee0(local_a4,local_a0,4,8);
    FUN_016caa00(&local_bc);
  }
  else {
    param_1[2] = local_70;
    param_1[3] = iStack_6c;
    param_1[4] = (int)local_68;
    param_1[5] = local_64;
    param_1[6] = local_60;
    param_1[7] = iStack_5c;
    param_1[8] = iStack_58;
    param_1[9] = local_54;
    param_1[10] = iStack_50;
    param_1[0xb] = local_4c;
    param_1[0xc] = (int)puStack_48;
    param_1[0xd] = (int)puStack_44;
    param_1[0xe] = iStack_40;
    param_1[0xf] = iStack_3c;
    *param_1 = local_78;
    param_1[1] = (int)local_74;
  }
  return;
}

