// FUN_009ec520 @ 009ec520 size=1508 calls_out=7 calls_in=115
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009ec520(uint *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  undefined1 uVar9;
  int *piVar10;
  uint uVar11;
  uint unaff_r8;
  int *unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint uVar12;
  uint local_d0;
  int *local_cc;
  int *local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  uint local_c0;
  uint local_bc;
  undefined2 local_a4;
  undefined1 local_a2;
  uint local_a0;
  uint local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  int *local_7c;
  int **local_78;
  int *local_74;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  int *local_6c;
  uint local_68;
  uint local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int **local_30;
  int local_2c;
  
  piVar2 = (int *)param_2[1];
  piVar10 = (int *)param_2[2];
  iVar6 = *param_2;
  piVar5 = piVar2 + (int)piVar10 * 2;
  if (piVar10 < (int *)0x1f) {
    piVar8 = (int *)0x0;
    local_88 = piVar2;
    local_84 = piVar2;
    local_80 = iVar6;
    local_7c = piVar5;
    if (piVar10 == (int *)0x0) {
      local_94 = (int *)0x8;
      piVar10 = (int *)0x0;
    }
    else {
      local_94 = (int *)FUN_01298504((int)piVar10 * 0x38,8);
      if (local_94 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)piVar10 * 0x38);
      }
    }
    local_58 = local_88;
    local_54 = local_84;
    local_50 = (int *)local_80;
    local_4c = local_7c;
    uVar11 = local_80;
    if (local_84 != local_7c) {
      puVar4 = (undefined4 *)((int)local_94 + 0x18);
      piVar8 = (int *)0x0;
      do {
        uVar11 = *local_54;
        iVar6 = local_54[1];
        local_54 = local_54 + 2;
        *puVar4 = 0x80000007;
        piVar8 = (int *)((int)piVar8 + 1);
        puVar4[-6] = uVar11;
        puVar4[-5] = iVar6;
        puVar4 = puVar4 + 0xe;
      } while (local_54 != local_7c);
    }
    uVar9 = (undefined1)uVar11;
    ppiVar3 = &local_58;
    local_98 = piVar10;
    local_90 = piVar8;
    FUN_009495dc(ppiVar3);
    local_58 = local_98;
    local_54 = local_94;
    local_50 = local_90;
    uVar11 = extraout_r12;
    if (local_90 < local_98) {
      iVar6 = FUN_0189bb64(&local_58,local_90,8,0x38);
      uVar11 = extraout_r12_00;
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar12 = 0x80000000;
    local_c8 = local_50;
  }
  else {
    local_30 = (int **)&DAT_ffffffff;
    local_40 = (int *)0x0;
    local_50 = (int *)0x0;
    local_54 = (int *)0x1;
    local_58 = (int *)0x1;
    local_3c = (int *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_2c = CONCAT22(local_2c._2_2_,1);
    piVar10 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x30);
    }
    *piVar10 = (int)local_58;
    piVar10[1] = (int)local_54;
    piVar10[2] = (int)local_50;
    piVar10[3] = (int)local_4c;
    piVar10[4] = (int)local_48;
    piVar10[5] = (int)local_44;
    piVar10[6] = (int)local_40;
    piVar10[7] = (int)local_3c;
    piVar10[8] = local_38;
    piVar10[9] = local_34;
    piVar10[10] = (int)local_30;
    piVar10[0xb] = local_2c;
    local_40 = piVar10 + 2;
    local_44 = (int *)0x0;
    local_4c = (int *)0x0;
    local_54 = (int *)0x1;
    local_58 = (int *)0x1;
    local_50 = piVar10;
    local_3c = local_40;
    ppiVar3 = (int **)thunk_FUN_01be5118(0x20);
    if (ppiVar3 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *ppiVar3 = local_58;
    ppiVar3[1] = local_54;
    ppiVar3[2] = local_50;
    ppiVar3[3] = local_4c;
    ppiVar3[4] = local_48;
    ppiVar3[5] = local_44;
    ppiVar3[6] = local_40;
    ppiVar3[7] = local_3c;
    local_9c = 0;
    local_a0 = 0;
    local_98 = piVar2;
    local_90 = (int *)iVar6;
    local_8c = piVar5;
    if (piVar2 != piVar5) {
      local_68 = 8;
      local_6c = (int *)0x0;
      local_64 = 0;
      local_d0 = 0;
      local_c8 = (int *)0x0;
      local_cc = (int *)0x0;
      local_78 = ppiVar3;
      do {
        local_70 = 0;
        local_5c = (int *)piVar2[1];
        local_60 = (int *)*piVar2;
        piVar2 = piVar2 + 2;
        local_6d = local_a2;
        local_74 = local_cc;
        local_88 = (int *)(local_d0 + 1);
        local_84 = (int *)((int)local_c8 + (uint)(0xfffffffe < local_d0));
        local_80 = local_a0;
        local_7c = (int *)local_9c;
        local_6f = local_a4;
        ppiVar3 = local_78 + 1;
LAB_009ec74c:
        piVar10 = *ppiVar3;
        do {
          if (piVar10 == (int *)0xffffffff) goto LAB_009ec7a0;
          local_94 = piVar2;
          if ((int)piVar10 < 0) {
            local_54 = (int *)&DAT_0132b6a0;
            local_58 = (int *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_58,&DAT_01d2e880);
          }
          piVar8 = *ppiVar3;
          if (piVar8 == piVar10) {
            bVar1 = (bool)hasExclusiveAccess(ppiVar3);
            if (bVar1) {
              *ppiVar3 = (int *)((int)piVar10 + 1);
            }
            bVar7 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar7 = true;
            }
          }
          else {
            bVar7 = false;
            ClearExclusiveLocal();
          }
          piVar10 = piVar8;
        } while (!bVar7);
        local_40 = local_78[2] + 2;
        local_48 = (int *)local_d0;
        local_44 = local_c8;
        local_2c = CONCAT22(local_2c._2_2_,1);
        local_54 = (int *)0x1;
        local_58 = (int *)0x1;
        local_34 = 0;
        local_38 = 0;
        local_3c = (int *)0x0;
        local_50 = local_60;
        local_4c = local_5c;
        local_30 = local_78;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0x30);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x30);
        }
        *puVar4 = local_58;
        puVar4[1] = local_54;
        puVar4[2] = local_50;
        puVar4[3] = local_4c;
        puVar4[4] = local_48;
        puVar4[5] = local_44;
        puVar4[6] = local_40;
        puVar4[7] = local_3c;
        puVar4[8] = local_38;
        puVar4[9] = local_34;
        puVar4[10] = local_30;
        puVar4[0xb] = local_2c;
        local_cc = puVar4 + 2;
        local_70 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(&local_74);
        } while (!bVar7);
        DataMemoryBarrier(0xb);
        if (local_74 == (int *)0x0) {
          puVar4[8] = 1;
          DataMemoryBarrier(0xb);
          puVar4[6] = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while ((int *)local_74[4] == local_78[2] + 2);
          puVar4[8] = local_74[6] + 1;
          DataMemoryBarrier(0xb);
          puVar4[6] = local_74;
          local_74[5] = (int)local_cc;
        }
        puVar4[9] = 0;
        ppiVar3 = local_78 + 6;
        DataMemoryBarrier(0xb);
        do {
          piVar10 = *ppiVar3;
          bVar7 = (bool)hasExclusiveAccess(ppiVar3);
        } while (!bVar7);
        *ppiVar3 = local_cc;
        DataMemoryBarrier(0xb);
        piVar10[7] = (int)local_cc;
        local_d0 = (uint)local_88;
        local_c8 = local_84;
        local_a0 = local_80;
        local_9c = (uint)local_7c;
        local_a4 = local_6f;
        local_a2 = local_6d;
        unaff_r8 = local_68;
        piVar8 = local_6c;
        uVar11 = local_64;
        ppiVar3 = local_78;
        local_74 = local_cc;
        if (piVar2 == piVar5) goto LAB_009eca0c;
      } while( true );
    }
    local_d0 = 0;
    local_c8 = (int *)0x0;
    local_cc = (int *)0x0;
    unaff_r8 = 8;
    piVar8 = (int *)0x0;
    uVar11 = 0;
    local_94 = piVar2;
LAB_009eca0c:
    uVar9 = 0;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_c4 = local_a4;
    local_c2 = local_a2;
    FUN_009495dc(&local_98);
    uVar12 = 0;
    local_54 = (int *)local_d0;
    unaff_r11 = local_cc;
  }
  *(undefined1 *)(param_1 + 6) = uVar9;
  param_1[2] = local_c0;
  param_1[3] = local_bc;
  param_1[4] = (uint)ppiVar3;
  param_1[5] = (uint)unaff_r11;
  *(undefined1 *)((int)param_1 + 0x1b) = local_c2;
  *param_1 = (uint)local_54;
  param_1[1] = (uint)local_c8;
  *(undefined2 *)((int)param_1 + 0x19) = local_c4;
  param_1[7] = (uint)piVar8;
  param_1[8] = unaff_r8;
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_009ec7a0:
  HintYield();
  goto LAB_009ec74c;
}

