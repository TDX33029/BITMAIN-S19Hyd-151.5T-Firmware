// FUN_016d3b30 @ 016d3b30 size=1636 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d3b30(int *param_1,uint *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int extraout_r3;
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int extraout_r12;
  bool bVar19;
  int *local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  uint *local_c0;
  int local_b8;
  int iStack_b4;
  uint *puStack_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c [13];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  bVar1 = *(byte *)((int)param_2 + 0xb);
  bVar19 = (bVar1 & 1) != 0;
  if (bVar19) {
    bVar1 = *(byte *)((int)param_2 + 0xd);
  }
  if (bVar19 && bVar1 != 2) {
    local_68 = 0x29;
LAB_016d3e88:
    *param_1 = local_68;
    return;
  }
  if (param_2[8] == 0) {
    param_2[8] = 0xffffffff;
    FUN_01693d68(param_2 + 9);
    uVar4 = param_2[8];
    param_2[8] = uVar4 + 1;
    if (uVar4 == 0xffffffff) {
      param_2[8] = 0xffffffff;
      uVar13 = *(undefined1 *)((int)param_2 + 9);
      if ((char)param_2[2] == '\0') {
        uVar13 = 10;
      }
      *(undefined1 *)((int)param_2 + 0x5e) = uVar13;
      uVar4 = 0;
      if (*param_2 != 2) {
        uVar4 = *param_2;
      }
      uVar8 = param_2[1];
      param_2[0xc] = uVar8;
      *(byte *)((int)param_2 + 0x5d) = *(byte *)((int)param_2 + 0xb) & 1;
      param_2[0xb] = uVar4;
      *(byte *)(param_2 + 0x17) =
           *(byte *)((int)param_2 + 10) == 2 | *(byte *)((int)param_2 + 10) & 1;
      if (((uVar4 & 1) != 0) && (uVar8 < param_2[0x16] + param_2[0xf] * 0x10)) {
        *param_1 = 0x27;
        param_1[1] = uVar8;
        uVar4 = 0;
LAB_016d4060:
        param_2[8] = uVar4;
        return;
      }
      uVar4 = 2;
      iVar5 = 0x20;
      iVar9 = 0;
      if ((*(byte *)((int)param_2 + 0xb) & 1) == 0) {
        uVar4 = 1;
        iVar5 = 0x1c;
      }
      param_2[8] = 0;
      do {
        if (param_4 * 4 == iVar9) {
          FUN_016ce364(&local_68,param_2);
          if (local_68 != 0x2a) {
            param_1[3] = local_5c;
            param_1[4] = iStack_58;
            param_1[5] = iStack_54;
            param_1[6] = local_50;
            param_1[7] = local_4c;
            param_1[8] = iStack_48;
            param_1[9] = iStack_44;
            param_1[10] = iStack_40;
            param_1[0xb] = local_3c;
            param_1[0xc] = iStack_38;
            param_1[0xd] = iStack_34;
            param_1[0xe] = iStack_30;
            param_1[0xf] = iStack_2c;
            *param_1 = local_68;
            param_1[1] = local_64;
            param_1[2] = local_60;
            return;
          }
          local_10c = local_64;
          iVar9 = local_64;
          goto LAB_016d3cdc;
        }
        piVar10 = (int *)(param_3 + iVar9);
        iVar9 = iVar9 + 4;
      } while ((uVar4 & *(uint *)(*(int *)(*piVar10 + 0x18) + iVar5)) != 0);
      local_108 = CONCAT31(local_108._1_3_,1);
      FUN_016ce3d0(&local_a8,&local_108);
      FUN_016ce6f4(&local_68,param_2,&local_a8,0,0);
      iVar9 = local_60;
      if (local_68 != 0x2a) {
        param_1[3] = local_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = local_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = local_3c;
        param_1[0xc] = iStack_38;
        param_1[0xd] = iStack_34;
        param_1[0xe] = iStack_30;
        param_1[0xf] = iStack_2c;
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = local_60;
        FUN_016ce25c(&local_a8);
        return;
      }
      local_10c = local_64;
      FUN_016ce25c(&local_a8);
LAB_016d3cdc:
      local_c8 = param_3;
      local_c4 = param_3 + param_4 * 4;
      local_c0 = param_2;
      FUN_016d39dc(&local_68,&local_c8);
      iVar14 = local_60;
      iVar5 = local_64;
      if (local_68 == 0x2b) {
        FUN_016cf04c(&local_108,param_2);
        iVar16 = local_108;
      }
      else {
        if (local_68 == 0x2a) {
          FUN_016d39dc(&local_68,&local_c8);
          iVar3 = local_60;
          iVar16 = local_64;
          if (local_68 == 0x2b) {
            iVar16 = 0x2a;
          }
          else {
            if (local_68 == 0x2a) {
              FUN_016cf0f8(&local_68,param_2);
              iVar18 = local_64;
              if (local_68 == 0x2a) {
                FUN_016ce364(&local_68,param_2);
                iVar2 = local_64;
                if (local_68 == 0x2a) {
                  FUN_016ced90(&local_68,param_2,iVar18,iVar5);
                  if ((((local_68 == 0x2a) &&
                       (FUN_016ced90(&local_68,param_2,iVar14,iVar2), local_68 == 0x2a)) &&
                      (FUN_016ced90(&local_68,param_2,iVar18,iVar16), local_68 == 0x2a)) &&
                     (FUN_016ced90(&local_68,param_2,iVar3,iVar2), local_68 == 0x2a)) {
                    local_b8 = local_c8;
                    iStack_b4 = local_c4;
                    puStack_b0 = local_c0;
                    local_110 = local_9c;
                    do {
                      FUN_016d39dc(&local_a8,&local_b8);
                      iVar5 = local_a0;
                      if (local_a8 == 0x2b) goto LAB_016d3df8;
                      if (local_a8 != 0x2a) goto LAB_016d413c;
                      FUN_016ced90(&local_68,param_2,iVar18);
                    } while ((local_68 == 0x2a) &&
                            (FUN_016ced90(&local_68,param_2,iVar5,iVar2), local_68 == 0x2a));
                  }
                  puVar6 = (undefined4 *)((uint)&local_68 | 4);
                  puVar11 = (undefined4 *)((uint)&local_108 | 4);
                  uVar7 = puVar6[1];
                  uVar12 = puVar6[2];
                  uVar15 = puVar6[3];
                  uVar17 = puVar6[4];
                  *puVar11 = *puVar6;
                  puVar11[1] = uVar7;
                  puVar11[2] = uVar12;
                  puVar11[3] = uVar15;
                  puVar11[4] = uVar17;
                  uVar7 = puVar6[6];
                  uVar12 = puVar6[7];
                  uVar15 = puVar6[8];
                  uVar17 = puVar6[9];
                  puVar11[5] = puVar6[5];
                  puVar11[6] = uVar7;
                  puVar11[7] = uVar12;
                  puVar11[8] = uVar15;
                  puVar11[9] = uVar17;
                  uVar7 = puVar6[0xb];
                  uVar12 = puVar6[0xc];
                  uVar15 = puVar6[0xd];
                  uVar17 = puVar6[0xe];
                  puVar11[10] = puVar6[10];
                  puVar11[0xb] = uVar7;
                  puVar11[0xc] = uVar12;
                  puVar11[0xd] = uVar15;
                  puVar11[0xe] = uVar17;
                  iVar16 = local_68;
                }
                else {
                  local_100 = local_60;
                  local_fc = local_5c;
                  iStack_f8 = iStack_58;
                  iStack_f4 = iStack_54;
                  local_f0 = local_50;
                  local_ec = local_4c;
                  iStack_e8 = iStack_48;
                  iStack_e4 = iStack_44;
                  iStack_e0 = iStack_40;
                  local_dc = local_3c;
                  iStack_d8 = iStack_38;
                  iStack_d4 = iStack_34;
                  iStack_d0 = iStack_30;
                  iStack_cc = iStack_2c;
                  local_104 = local_64;
                  iVar16 = local_68;
                }
              }
              else {
                local_100 = local_60;
                local_fc = local_5c;
                iStack_f8 = iStack_58;
                iStack_f4 = iStack_54;
                local_f0 = local_50;
                local_ec = local_4c;
                iStack_e8 = iStack_48;
                iStack_e4 = iStack_44;
                iStack_e0 = iStack_40;
                local_dc = local_3c;
                iStack_d8 = iStack_38;
                iStack_d4 = iStack_34;
                iStack_d0 = iStack_30;
                iStack_cc = iStack_2c;
                local_104 = local_64;
                iVar16 = local_68;
              }
              goto LAB_016d40e8;
            }
            local_fc = local_5c;
            iStack_f8 = iStack_58;
            iStack_f4 = iStack_54;
            local_f0 = local_50;
            local_ec = local_4c;
            iStack_e8 = iStack_48;
            iStack_e4 = iStack_44;
            iStack_e0 = iStack_40;
            local_dc = local_3c;
            iStack_d8 = iStack_38;
            iStack_d4 = iStack_34;
            iStack_d0 = iStack_30;
            iStack_cc = iStack_2c;
            iVar5 = local_64;
            iVar16 = local_68;
            iVar14 = local_60;
          }
        }
        else {
          local_fc = local_5c;
          iStack_f8 = iStack_58;
          iStack_f4 = iStack_54;
          local_f0 = local_50;
          local_ec = local_4c;
          iStack_e8 = iStack_48;
          iStack_e4 = iStack_44;
          iStack_e0 = iStack_40;
          local_dc = local_3c;
          iStack_d8 = iStack_38;
          iStack_d4 = iStack_34;
          iStack_d0 = iStack_30;
          iStack_cc = iStack_2c;
          iVar16 = local_68;
        }
        local_104 = iVar5;
        local_100 = iVar14;
      }
      iVar18 = local_104;
      if (iVar16 == 0x2a) {
LAB_016d3df8:
        FUN_016ced90(&local_68,param_2,iVar9,iVar18);
        if (local_68 != 0x2a) {
          piVar10 = (int *)((uint)&local_68 | 4);
          iVar5 = piVar10[1];
          iVar9 = piVar10[2];
          iVar14 = piVar10[3];
          iVar16 = piVar10[4];
          param_1[1] = *piVar10;
          param_1[2] = iVar5;
          param_1[3] = iVar9;
          param_1[4] = iVar14;
          param_1[5] = iVar16;
          iVar5 = piVar10[6];
          iVar9 = piVar10[7];
          iVar14 = piVar10[8];
          iVar16 = piVar10[9];
          param_1[6] = piVar10[5];
          param_1[7] = iVar5;
          param_1[8] = iVar9;
          param_1[9] = iVar14;
          param_1[10] = iVar16;
          iVar5 = piVar10[0xb];
          iVar9 = piVar10[0xc];
          iVar14 = piVar10[0xd];
          iVar16 = piVar10[0xe];
          param_1[0xb] = piVar10[10];
          param_1[0xc] = iVar5;
          param_1[0xd] = iVar9;
          param_1[0xe] = iVar14;
          param_1[0xf] = iVar16;
          goto LAB_016d3e88;
        }
        if (param_2[8] != 0) {
          uVar7 = FUN_01306fc8(&DAT_01d09c58);
          param_2[8] = param_2[8] + 1;
                    /* WARNING: Subroutine does not return */
          FUN_01be040c(uVar7);
        }
        param_2[8] = 0xffffffff;
        FUN_01691e64(&local_68,param_2 + 9,iVar18,local_10c);
        if (local_68 == 0x2a) {
          uVar4 = param_2[8];
          *param_1 = 0x2a;
          param_1[1] = local_64;
        }
        else {
          param_1[2] = local_60;
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = iStack_54;
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = local_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
          *param_1 = local_68;
          uVar4 = param_2[8];
          param_1[1] = local_64;
        }
        uVar4 = uVar4 + 1;
        goto LAB_016d4060;
      }
      goto LAB_016d40e8;
    }
  }
  else {
    FUN_01306fc8(&DAT_01d09c38);
  }
  iVar5 = 0x16d413c;
  FUN_01306fc8(&DAT_01d09c48);
  local_a4 = extraout_r3;
  local_a8 = extraout_r12;
LAB_016d413c:
  local_fc = *local_110;
  iStack_f8 = local_110[1];
  iStack_f4 = local_110[2];
  local_f0 = local_110[3];
  local_ec = local_110[4];
  iStack_e8 = local_110[5];
  iStack_e4 = local_110[6];
  iStack_e0 = local_110[7];
  local_dc = local_110[8];
  iStack_d8 = local_110[9];
  iStack_d4 = local_110[10];
  iStack_d0 = local_110[0xb];
  iStack_cc = local_110[0xc];
  iVar16 = local_a8;
  local_104 = local_a4;
  local_100 = iVar5;
LAB_016d40e8:
  param_1[3] = local_fc;
  param_1[4] = iStack_f8;
  param_1[5] = iStack_f4;
  param_1[6] = local_f0;
  param_1[7] = local_ec;
  param_1[8] = iStack_e8;
  param_1[9] = iStack_e4;
  param_1[10] = iStack_e0;
  param_1[0xb] = local_dc;
  param_1[0xc] = iStack_d8;
  param_1[0xd] = iStack_d4;
  param_1[0xe] = iStack_d0;
  param_1[0xf] = iStack_cc;
  *param_1 = iVar16;
  param_1[1] = local_104;
  param_1[2] = local_100;
  return;
}

