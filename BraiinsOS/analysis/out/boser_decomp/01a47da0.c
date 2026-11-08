// FUN_01a47da0 @ 01a47da0 size=2440 calls_out=15 calls_in=1
// strings: digit | floating-point number | internal error: entered unreachable code: one_of should prevent this

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a47da0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  double dVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  double unaff_d8;
  ulonglong uVar21;
  uint local_f0;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int local_d4;
  undefined8 *local_cc;
  byte *local_b8;
  uint local_b4;
  int local_b0;
  int *local_ac;
  undefined8 local_a8;
  int *local_a0;
  int *local_9c;
  int local_98;
  int *local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int *local_84;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  int **local_70;
  int *local_68;
  int *piStack_64;
  undefined4 local_60;
  int *local_5c;
  int local_58;
  int iStack_54;
  byte **local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  pbVar15 = *(byte **)(param_2 + 8);
  uVar19 = *(uint *)(param_2 + 0xc);
  local_b8 = pbVar15;
  local_b4 = uVar19;
  FUN_01a48800(&local_48);
  if (local_48 == 3) {
    pcVar17 = *(char **)(param_2 + 8);
    uVar20 = *(uint *)(param_2 + 0xc);
    FUN_01a479d4(&local_48,param_2);
    piVar10 = local_44;
    if (local_48 != 3) {
      iVar16 = (int)local_40;
      piVar6 = (int *)local_38;
      piVar4 = local_38._4_4_;
      local_98 = local_48;
      local_94 = local_44;
      local_90 = (int)local_40;
      local_8c = local_40._4_4_;
      local_88 = (int *)local_38;
      local_84 = local_38._4_4_;
      if (local_48 == 1) {
        *(char **)(param_2 + 8) = pcVar17;
        *(uint *)(param_2 + 0xc) = uVar20;
        if ((uVar20 == 0) || (*pcVar17 != '.')) {
          local_d4 = 4;
          iVar9 = 0;
          local_dc = (int *)0x0;
          local_e0 = (int *)0x0;
          local_d8 = (int *)0x0;
LAB_01a48070:
          piVar6 = local_84;
          piVar10 = local_88;
          FUN_0134aee0(local_94,local_90,4,0xc);
          FUN_012d40d0(piVar10,piVar6);
          local_b0 = 1;
        }
        else {
          piStack_64 = (int *)(uVar20 - 1);
          local_68 = (int *)(pcVar17 + 1);
          *(int **)(param_2 + 8) = local_68;
          *(int **)(param_2 + 0xc) = piStack_64;
          FUN_01a47b40(&local_48,param_2);
          if (local_48 == 3) {
LAB_01a47f88:
            iVar9 = *(int *)(param_2 + 8);
            *(char **)(param_2 + 8) = pcVar17;
            *(uint *)(param_2 + 0xc) = uVar20;
            uVar8 = iVar9 - (int)pcVar17;
            if (uVar20 < uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
            }
            iVar9 = uVar20 - uVar8;
            *(char **)(param_2 + 8) = pcVar17 + uVar8;
            *(int *)(param_2 + 0xc) = iVar9;
            FUN_01a479d4(&local_48,param_2);
            if (local_48 == 3) {
LAB_01a47ffc:
              local_f0 = 0;
              local_b0 = 3;
              piVar13 = (int *)0x0;
            }
            else {
              piVar13 = (int *)local_38;
              piVar5 = local_38._4_4_;
              if (local_48 == 1) {
                *(char **)(param_2 + 8) = pcVar17 + uVar8;
                *(int *)(param_2 + 0xc) = iVar9;
                FUN_0134aee0(local_44,(int)local_40,4,0xc);
                FUN_012d40d0(piVar13,piVar5);
                goto LAB_01a47ffc;
              }
              local_e0 = local_38._4_4_;
              local_d4 = (int)local_40;
              local_f0 = (uint)local_44 & 0xffffff00;
              local_dc = (int *)local_38;
              local_b0 = local_48;
              piVar13 = local_44;
              iVar9 = local_40._4_4_;
            }
          }
          else {
            local_70 = &local_68;
            local_78 = 5;
            local_80 = 4.187702672781085e-307;
            local_74 = param_2;
            FUN_01a5cbd0(&local_60,&local_48,&local_80);
            if (local_60 == 3) goto LAB_01a47f88;
            local_dc = (int *)local_50;
            local_d4 = local_58;
            local_e0 = local_4c;
            iVar9 = iStack_54;
            if (local_60 == 1) {
              local_d8 = local_5c;
              goto LAB_01a48070;
            }
            local_f0 = (uint)local_5c & 0xffffff00;
            local_b0 = local_60;
            piVar13 = local_5c;
          }
          FUN_0134aee0(piVar10,iVar16,4,0xc);
          FUN_012d40d0(piVar6,piVar4);
          local_d8 = (int *)((uint)piVar13 & 0xff | local_f0);
        }
      }
      else {
        local_d4 = (int)local_40;
        local_d8 = local_44;
        local_b0 = local_48;
        iVar9 = local_40._4_4_;
        local_dc = (int *)local_38;
        local_e0 = local_38._4_4_;
      }
      local_cc = &local_a8;
      if (local_b0 != 3) goto LAB_01a47e3c;
    }
    iVar9 = *(int *)(param_2 + 8);
    *(byte **)(param_2 + 8) = pbVar15;
    uVar20 = iVar9 - (int)pbVar15;
    *(uint *)(param_2 + 0xc) = uVar19;
    if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
    }
    *(byte **)(param_2 + 8) = pbVar15 + uVar20;
    *(uint *)(param_2 + 0xc) = uVar19 - uVar20;
    iVar9 = 0;
    uVar14 = 0;
    local_40 = (double)((ulonglong)local_40 & 0xffffffff00000000);
    local_44 = (int *)0x1;
    local_48 = 0;
    local_d4 = 1;
    uVar8 = 0;
LAB_01a48414:
    do {
      uVar12 = uVar20 - uVar14;
      if (uVar12 < 8) {
        uVar11 = 0;
        if (uVar12 == 0) {
          uVar21 = 0;
        }
        else {
          do {
            if ((pbVar15 + uVar14)[uVar11] == 0x5f) {
              uVar21 = CONCAT44(uVar11,1);
              goto LAB_01a48470;
            }
            uVar11 = uVar11 + 1;
          } while (uVar12 != uVar11);
          uVar21 = (ulonglong)uVar12 << 0x20;
        }
      }
      else {
        uVar21 = FUN_01307168(0x5f,pbVar15 + uVar14);
      }
LAB_01a48470:
      if ((uVar21 & 1) == 0) break;
      uVar12 = (int)(uVar21 >> 0x20) + uVar14;
      uVar14 = uVar12 + 1;
      if ((uVar12 < uVar20) && (pbVar15[uVar12] == 0x5f)) {
        uVar12 = uVar12 - uVar8;
        if ((uint)(local_48 - iVar9) < uVar12) {
          FUN_006520b4(&local_48,iVar9,uVar12,1,1);
          local_d4 = (int)local_44;
          iVar9 = (int)local_40;
        }
        FUN_01bed4e2(local_d4 + iVar9,pbVar15 + uVar8,uVar12);
        iVar9 = iVar9 + uVar12;
        local_40 = (double)CONCAT44(local_40._4_4_,iVar9);
        uVar8 = uVar14;
        goto LAB_01a48414;
      }
    } while (uVar14 <= uVar20);
    uVar20 = uVar20 - uVar8;
    if ((uint)(local_48 - iVar9) < uVar20) {
      FUN_006520b4(&local_48,iVar9,uVar20,1,1);
      local_d4 = (int)local_44;
      iVar9 = (int)local_40;
    }
    FUN_01bed4e2(local_d4 + iVar9,pbVar15 + uVar8,uVar20);
    piVar10 = local_44;
    iVar16 = local_48;
    FUN_01305878(&local_60,local_44,iVar9 + uVar20);
    FUN_0134bd64(iVar16,piVar10);
    if ((char)local_60 == '\x01') {
      local_40 = 0.0;
      local_48 = 0;
      local_44 = (int *)0x4;
      piVar10 = (int *)thunk_FUN_01be5118(1);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,1);
      }
      *(char *)piVar10 = local_60._1_1_;
      FUN_012d40d0(0,(int *)local_38);
      local_38._0_4_ = (int *)&DAT_01d2c220;
    }
    else {
      if ((double)CONCAT44(iStack_54,local_58) != INFINITY) {
        local_b0 = 3;
        local_a8 = (double)CONCAT44(iStack_54,local_58);
        goto LAB_01a48630;
      }
      local_44 = (int *)0x4;
      piVar10 = (int *)0x0;
      local_38._0_4_ = (int *)0x0;
    }
    *(byte **)(param_2 + 8) = pbVar15;
    local_a8 = (double)CONCAT44(local_a8._4_4_,local_44);
    local_ac = (int *)0x0;
    local_b0 = 2;
    *(uint *)(param_2 + 0xc) = uVar19;
    local_a0 = piVar10;
    local_9c = (int *)local_38;
  }
  else {
    local_d4 = (int)local_40;
    local_d8 = local_44;
    local_b0 = local_48;
    iVar9 = local_40._4_4_;
    local_dc = (int *)local_38;
    local_e0 = local_38._4_4_;
LAB_01a47e3c:
    piVar10 = local_44;
    local_a8 = (double)CONCAT44(iVar9,local_d4);
    local_ac = local_d8;
    local_a0 = local_dc;
    local_9c = local_e0;
    if (local_b0 == 1) {
      piVar6 = (int *)((uint)&local_b0 | 4);
      local_98 = *piVar6;
      local_94 = (int *)piVar6[1];
      local_90 = piVar6[2];
      local_8c = piVar6[3];
      local_88 = (int *)piVar6[4];
      *(byte **)(param_2 + 8) = pbVar15;
      *(uint *)(param_2 + 0xc) = uVar19;
      if (uVar19 == 0) {
LAB_01a480b0:
        *(byte **)(param_2 + 8) = pbVar15;
        bVar1 = false;
        *(uint *)(param_2 + 0xc) = uVar19;
        FUN_0134aee0(0,4,4,0xc);
        FUN_012d40d0(0,piVar10);
        pbVar18 = *(byte **)(param_2 + 8);
        iVar9 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar9 = uVar19 - 1;
        pbVar18 = pbVar15 + 1;
        puVar7 = (undefined8 *)(uint)*pbVar15;
        *(byte **)(param_2 + 8) = pbVar18;
        *(int *)(param_2 + 0xc) = iVar9;
        if (puVar7 != (undefined8 *)&DAT_0000002d && puVar7 != (undefined8 *)&DAT_0000002b) {
          *(byte **)(param_2 + 8) = pbVar15;
          *(uint *)(param_2 + 0xc) = uVar19;
          goto LAB_01a480b0;
        }
        bVar1 = true;
        local_cc = puVar7;
      }
      FUN_01a45090(&local_48,param_2,"inf",3);
      piVar10 = local_44;
      if (local_48 == 3) {
        iStack_54 = 0x7ff00000;
        local_58 = 0;
        iVar16 = 3;
LAB_01a481ac:
        local_80 = (double)CONCAT44(iStack_54,local_58);
        local_68 = (int *)local_50;
        piStack_64 = local_4c;
        piVar13 = local_5c;
      }
      else {
        uVar3 = (int)local_40;
        piVar6 = (int *)local_38;
        piVar4 = local_38._4_4_;
        local_60 = local_48;
        local_5c = local_44;
        local_58 = (int)local_40;
        iStack_54 = local_40._4_4_;
        local_50 = (byte **)(int *)local_38;
        local_4c = local_38._4_4_;
        iVar16 = local_48;
        if (local_48 != 1) goto LAB_01a481ac;
        *(byte **)(param_2 + 8) = pbVar18;
        *(int *)(param_2 + 0xc) = iVar9;
        FUN_01a45090(&local_48,param_2,&DAT_0052d610,3);
        if (local_48 == 3) {
          local_38._0_4_ = &local_48;
          local_38._4_4_ = piVar6;
          piVar13 = piVar4;
          iVar16 = 3;
          unaff_d8 = NAN;
LAB_01a482e0:
          local_80 = unaff_d8;
          local_68 = (int *)local_38;
          piStack_64 = local_38._4_4_;
          FUN_0134aee0(piVar10,uVar3,4,0xc);
          FUN_012d40d0(piVar6,piVar4);
        }
        else {
          piVar13 = local_44;
          unaff_d8 = local_40;
          if (local_48 != 1) {
            iVar16 = local_48;
            goto LAB_01a482e0;
          }
          FUN_0134aee0(piVar10,uVar3,4,0xc);
          FUN_012d40d0(piVar6,piVar4);
          iVar16 = 1;
          local_80 = local_40;
          local_68 = (int *)local_38;
          piStack_64 = local_38._4_4_;
        }
      }
      dVar2 = local_80;
      local_40 = local_80;
      local_44 = piVar13;
      if (iVar16 == 3) {
        iVar16 = 3;
        if ((bVar1) && (((uint)local_cc & 0xff) != 0x2b)) {
          if (((uint)local_cc & 0xff) != 0x2d) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("internal error: entered unreachable code: one_of should prevent this",0x89
                         ,&DAT_01d2c064);
          }
          local_40 = -local_80;
        }
      }
      else {
        unaff_d8 = (double)CONCAT44(piStack_64,local_68);
        if (iVar16 == 1) {
          FUN_0134aee0(local_d8,local_d4,4,0xc);
          FUN_012d40d0(local_dc,local_e0);
          iVar16 = 1;
          local_40 = dVar2;
          local_48 = 1;
          local_38 = unaff_d8;
          goto LAB_01a48640;
        }
      }
      local_48 = iVar16;
      local_38 = unaff_d8;
      FUN_0134aee0(local_98,local_94,4,0xc);
      FUN_012d40d0(local_8c,local_88);
      goto LAB_01a48640;
    }
  }
LAB_01a48630:
  local_48 = local_b0;
  local_44 = local_ac;
  local_40 = local_a8;
  local_38 = (double)CONCAT44(local_9c,local_a0);
  iVar16 = local_b0;
LAB_01a48640:
  if (iVar16 == 3) {
    *param_1 = 3;
    *(double *)(param_1 + 2) = local_40;
  }
  else {
    local_50 = &local_b8;
    local_58 = 0x15;
    local_60 = 3;
    local_5c = (int *)0x52d212;
    iStack_54 = param_2;
    FUN_01a5cbd0(param_1,&local_48,&local_60);
  }
  return;
}

