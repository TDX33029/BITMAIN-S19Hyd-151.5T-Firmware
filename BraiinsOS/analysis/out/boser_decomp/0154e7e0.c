// FUN_0154e7e0 @ 0154e7e0 size=1460 calls_out=24 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0154e7e0(int *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  int local_118;
  int local_108;
  int local_104;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  int local_bc;
  int *local_b8;
  uint local_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  uint *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_3 == '\x05') {
    uVar12 = *(undefined4 *)(param_3 + 0xc);
    FUN_0153c238(&local_108,uVar12);
    iVar15 = 0;
    FUN_0154ef30(param_2 + 2,param_3,&local_108,param_6,0);
    local_b8 = *(int **)(param_3 + 4);
    local_b4 = *(uint *)(param_3 + 8);
    if (local_b8 == (int *)0x0) {
      uVar12 = 0;
    }
    local_c0 = (int *)(uint)(local_b8 != (int *)0x0);
    iVar7 = param_2[0x13];
    bVar3 = false;
    local_d0 = 0;
    local_d4 = 4;
    local_d8 = 0;
    local_c4 = 0;
    local_c8 = 4;
    local_cc = 0;
    local_ac = 0;
    local_bc = 0;
    local_b0 = local_c0;
    local_a8._0_4_ = local_b8;
    local_a8._4_4_ = local_b4;
    local_a0 = uVar12;
    local_118 = local_c8;
    iVar10 = local_c4;
    while( true ) {
      uVar16 = FUN_01a41998(&local_c0);
      iVar6 = (int)uVar16;
      if (iVar6 == 0) break;
      puVar8 = *(undefined **)(iVar6 + 4);
      uVar12 = *(undefined4 *)(iVar6 + 8);
      iVar4 = FUN_01540d6c(&local_108,puVar8,uVar12);
      if (iVar4 == 0) {
        if (iVar7 == 0) {
          FUN_006666fc(&local_38,puVar8,uVar12);
          if (iVar10 == local_cc) {
            FUN_019abd3c(&local_cc);
          }
          puVar5 = (undefined4 *)(local_c8 + iVar10 * 0xc);
          *puVar5 = local_38;
          puVar5[1] = local_34;
          puVar5[2] = local_30;
          bVar3 = true;
          local_c4 = iVar10 + 1;
          local_118 = local_c8;
          iVar10 = local_c4;
        }
        else {
          local_38 = (uint *)&DAT_80000000;
          local_34 = puVar8;
          local_30 = uVar12;
          local_2c = param_4;
          FUN_015737d4(&local_98,param_2 + 0x13,(int)((ulonglong)uVar16 >> 0x20),&local_38,param_5,
                       param_6);
          if ((char)local_5c == '\0') {
            FUN_006666fc(&local_38,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
            if (iVar10 == local_cc) {
              FUN_019abd3c(&local_cc);
              local_118 = local_c8;
            }
            puVar5 = (undefined4 *)(local_118 + iVar10 * 0xc);
            *puVar5 = local_38;
            puVar5[1] = local_34;
            puVar5[2] = local_30;
            iVar10 = iVar10 + 1;
            bVar3 = true;
            iVar15 = local_d0;
            local_c4 = iVar10;
          }
          if (iVar15 == local_d8) {
            FUN_0155ab78(&local_d8);
          }
          puVar5 = (undefined4 *)(local_d4 + iVar15 * 0x40);
          local_d0 = iVar15 + 1;
          *puVar5 = local_98;
          puVar5[1] = uStack_94;
          puVar5[2] = uStack_90;
          puVar5[3] = uStack_8c;
          puVar5[4] = uStack_88;
          puVar5[5] = local_84;
          puVar5[6] = uStack_80;
          puVar5[7] = uStack_7c;
          puVar5[8] = uStack_78;
          puVar5[9] = uStack_74;
          puVar5[10] = local_70;
          puVar5[0xb] = uStack_6c;
          puVar5[0xc] = uStack_68;
          puVar5[0xd] = uStack_64;
          puVar5[0xe] = uStack_60;
          puVar5[0xf] = local_5c;
          iVar15 = local_d0;
        }
      }
    }
    local_50 = 0;
    local_54 = 4;
    local_58 = 0;
    if (iVar10 != 0) {
      piVar13 = (int *)*param_2;
      do {
        iVar15 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar15 + 1;
      if (iVar15 < 0) {
LAB_0154ed94:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x154ed94);
        (*pcVar1)();
      }
      uVar14 = param_2[1];
      if (param_5 == 0) {
        local_c0 = (int *)0x0;
      }
      else {
        iVar15 = *param_2;
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
        }
        piVar9 = *(int **)(param_5 + 0xc);
        do {
          iVar7 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_0154ed94;
        iVar15 = iVar15 + 8;
        uVar12 = *(undefined4 *)(param_5 + 0x10);
        uVar11 = (*(int **)(param_5 + 4))[1];
        if (uVar14 < uVar11) {
          uVar11 = 0;
        }
        else {
          iVar7 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar15,uVar11);
          if (iVar7 != 0) {
            uVar11 = 0;
          }
          iVar15 = iVar15 + uVar11;
        }
        local_a8 = FUN_016bc0ec(iVar15,uVar14 - uVar11);
        local_b4 = 3;
        local_c0 = (int *)0x2;
        local_b0 = piVar9;
        local_ac = uVar12;
      }
      uVar16 = FUN_01531840(param_4);
      local_4c = FUN_01595bb8(piVar13,uVar14,&local_c0,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                              param_3,&local_cc);
      lVar17 = FUN_0159662c(local_4c + 0x20);
      piVar9 = (int *)((ulonglong)lVar17 >> 0x20);
      if (lVar17 < 0) {
        uVar12 = 0;
        piVar9 = piVar13;
LAB_0154ebb0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,piVar9);
      }
      iVar15 = 1;
      piVar13 = (int *)0x0;
      if (piVar9 != (int *)0x0) {
        uVar12 = 1;
        iVar15 = FUN_01298504(piVar9,1);
        if (iVar15 == 0) goto LAB_0154ebb0;
        piVar13 = piVar9;
      }
      FUN_01bed4e2(iVar15,(int)lVar17,piVar9);
      local_38 = &local_48;
      local_40 = 0;
      local_44 = (int *)&DAT_00000001;
      local_48 = 0;
      local_2c = 0;
      local_30 = 0x60000020;
      local_34 = &DAT_01cfb9a0;
      iVar6 = FUN_01592e4c(&local_4c,&local_38);
      iVar7 = local_50;
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_c0,&DAT_01cfb9b8,&DAT_01d30334);
      }
      local_b4 = local_48;
      local_b0 = local_44;
      local_ac = local_40;
      local_c0 = piVar13;
      local_bc = iVar15;
      local_b8 = piVar9;
      if (local_50 == local_58) {
        FUN_013e6234(&local_58);
      }
      puVar5 = (undefined4 *)(local_54 + iVar7 * 0x18);
      *puVar5 = local_c0;
      puVar5[1] = local_bc;
      puVar5[2] = local_b8;
      puVar5[3] = local_b4;
      puVar5[4] = local_b0;
      puVar5[5] = local_ac;
      local_50 = iVar7 + 1;
      FUN_0154f5a8(&local_4c);
    }
    if (bVar3) {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_d8;
      param_1[4] = local_d4;
      param_1[5] = local_d0;
      param_1[6] = 0;
    }
    else {
      param_1[1] = local_d8;
      param_1[2] = local_d4;
      param_1[3] = local_d0;
      *param_1 = -0x80000000;
      param_1[4] = 0;
      FUN_0074dd34(&local_58);
    }
    if (iVar10 == 0) {
      FUN_006a41c0(&local_cc);
    }
    if ((local_104 != 0) && (iVar15 = local_104 * 4 + 4, local_104 + iVar15 != -5)) {
      thunk_FUN_01be4678(local_108 - iVar15);
    }
  }
  else {
    param_1[2] = 4;
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

