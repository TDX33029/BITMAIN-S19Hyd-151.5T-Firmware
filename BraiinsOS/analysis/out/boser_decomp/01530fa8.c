// FUN_01530fa8 @ 01530fa8 size=1520 calls_out=22 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01530fa8(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 local_f0;
  int local_ec;
  int local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_84 [3];
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  uint *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 uStack_25;
  
  if (*param_3 == '\x04') {
    uVar5 = *(uint *)(param_3 + 0xc);
    uVar9 = 0;
    bVar15 = 0x3fffffe < uVar5;
    bVar14 = uVar5 == 0x3ffffff;
    uVar6 = uVar5 * 0x40;
    if (uVar5 < 0x4000000) {
      bVar15 = 0x7ffffffb < uVar6;
      bVar14 = uVar6 == 0x7ffffffc;
      local_f0 = param_4;
      local_ec = param_2;
    }
    if (bVar15 && !bVar14) {
LAB_01530fe4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,uVar6);
    }
    if (uVar6 == 0) {
      local_dc = 4;
      local_e0 = 0;
    }
    else {
      uVar9 = 4;
      local_dc = FUN_01298504(uVar6,4);
      local_e0 = uVar5;
      if (local_dc == 0) goto LAB_01530fe4;
    }
    local_d8 = 0;
    if (uVar5 == 0) {
      local_cc = 0;
      local_d0 = 4;
      local_d4 = 0;
    }
    else {
      local_e4 = FUN_01298504(uVar5 << 2,4);
      if (local_e4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,uVar5 << 2);
      }
      iVar10 = *(int *)(param_3 + 8);
      iVar13 = 0;
      iVar12 = uVar5 * 0x18;
      uVar6 = 0;
      local_cc = 0;
      local_d4 = uVar5;
      local_d0 = local_e4;
      do {
        local_60 = (uint *)0x80000001;
        local_5c = (undefined *)iVar13;
        local_54 = local_f0;
        FUN_015737d4(&local_c8,local_ec,iVar10,&local_60,param_5,param_6);
        if ((char)local_8c == '\0') {
          FUN_015012ac(&local_c8);
        }
        else {
          if (uVar6 == local_d4) {
            FUN_019ee1a8(&local_d4);
            local_e4 = local_d0;
          }
          uVar5 = local_d8;
          *(int *)(local_e4 + uVar6 * 4) = iVar13;
          uVar6 = uVar6 + 1;
          local_cc = uVar6;
          if (local_d8 == local_e0) {
            FUN_0155ab78(&local_e0);
          }
          puVar2 = (undefined4 *)(local_dc + uVar5 * 0x40);
          *puVar2 = local_c8;
          puVar2[1] = uStack_c4;
          puVar2[2] = uStack_c0;
          puVar2[3] = uStack_bc;
          puVar2[4] = uStack_b8;
          puVar2[5] = local_b4;
          puVar2[6] = uStack_b0;
          puVar2[7] = uStack_ac;
          puVar2[8] = uStack_a8;
          puVar2[9] = uStack_a4;
          puVar2[10] = local_a0;
          puVar2[0xb] = uStack_9c;
          puVar2[0xc] = uStack_98;
          puVar2[0xd] = uStack_94;
          puVar2[0xe] = uStack_90;
          puVar2[0xf] = local_8c;
          local_d8 = uVar5 + 1;
        }
        iVar3 = local_d0;
        uVar5 = local_d4;
        iVar10 = iVar10 + 0x18;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + -0x18;
      } while (iVar12 != 0);
      if (uVar6 != 0) {
        uVar9 = 0;
        iVar12 = uVar6 * 0x18;
        if (0x5555555 < uVar6) {
LAB_01531214:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar9,iVar12);
        }
        if (iVar12 == 0) {
          local_3c = 8;
          local_40 = 0;
        }
        else {
          uVar9 = 8;
          local_3c = FUN_01298504(iVar12,8);
          local_40 = uVar6;
          if (local_3c == 0) goto LAB_01531214;
        }
        puVar4 = (uint *)((uint)&local_60 | 4);
        puVar2 = (undefined4 *)(local_3c + 8);
        iVar12 = uVar6 << 2;
        local_38 = 0;
        do {
          uVar9 = *(undefined4 *)(iVar3 + local_38 * 4);
          local_38 = local_38 + 1;
          *(undefined1 *)(puVar2 + -2) = 2;
          *puVar2 = 0;
          iVar12 = iVar12 + -4;
          puVar2[1] = 0;
          puVar2[2] = uVar9;
          puVar2[3] = 0;
          puVar2 = puVar2 + 6;
        } while (iVar12 != 0);
        FUN_0134aee0(uVar5,iVar3,4,4);
        *puVar4 = local_40;
        puVar4[1] = local_3c;
        puVar4[2] = local_38;
        local_60 = (uint *)CONCAT31(local_60._1_3_,4);
        uVar9 = FUN_01531708(&local_60);
        param_1[1] = local_e0;
        param_1[2] = local_dc;
        param_1[3] = local_d8;
        *param_1 = 0x80000000;
        param_1[4] = uVar9;
        return;
      }
    }
    if (param_5 == 0) {
      local_84[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar7 = *(int **)(param_5 + 0xc);
      do {
        iVar12 = *piVar7;
        bVar14 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar14);
      *piVar7 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_015315a4;
      uVar9 = *(undefined4 *)(param_5 + 0x10);
      uVar11 = *(uint *)(local_ec + 8);
      uVar6 = 0;
      uVar5 = (*(int **)(param_5 + 4))[1];
      iVar12 = *(int *)(local_ec + 4) + 8;
      if (uVar5 <= uVar11) {
        iVar10 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar12,uVar5);
        uVar6 = uVar5;
        if (iVar10 != 0) {
          uVar6 = 0;
        }
      }
      local_6c = FUN_016bc0ec(iVar12 + uVar6,uVar11 - uVar6);
      local_78 = 3;
      local_84[0] = 2;
      local_74 = piVar7;
      local_70 = uVar9;
    }
    piVar7 = (int *)thunk_FUN_01be5118(0x18);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    piVar8 = *(int **)(local_ec + 4);
    do {
      iVar12 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_015315a4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15315a4);
      (*pcVar1)();
    }
    iVar10 = *(int *)(local_ec + 8);
    uVar16 = FUN_01531840(local_f0);
    local_64 = FUN_01596344(piVar8,iVar10,local_84,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                            param_3);
    lVar17 = FUN_0159662c(local_64 + 0x20);
    iVar12 = (int)((ulonglong)lVar17 >> 0x20);
    if (lVar17 < 0) {
      uVar9 = 0;
      iVar12 = iVar10;
LAB_01531378:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar12);
    }
    uVar9 = 1;
    iVar13 = 1;
    iVar10 = 0;
    if (iVar12 != 0) {
      iVar13 = FUN_01298504(iVar12,1);
      if (iVar13 == 0) goto LAB_01531378;
      iVar10 = iVar12;
    }
    FUN_01bed4e2(iVar13,(int)lVar17,iVar12);
    local_60 = &local_40;
    local_38 = 0;
    local_3c = 1;
    local_40 = 0;
    local_54 = 0;
    local_58 = 0x60000020;
    local_5c = &DAT_01cfb6a0;
    iVar3 = FUN_01592e4c(&local_64,&local_60);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfb6b8,&DAT_01d30334);
    }
    piVar7[3] = local_40;
    piVar7[4] = local_3c;
    piVar7[5] = local_38;
    *piVar7 = iVar10;
    piVar7[1] = iVar13;
    piVar7[2] = iVar12;
    *param_1 = 1;
    param_1[1] = piVar7;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_01531dec(&local_64);
    FUN_0134aee0(local_d4,local_d0,4,4);
    FUN_015015b0(&local_e0);
  }
  else {
    local_60 = (uint *)0x80000000;
    local_54 = 0;
    local_58 = 4;
    local_5c = (undefined *)0x0;
    local_50 = 0;
    local_34 = 0;
    local_38 = 8;
    local_3c = 0;
    local_40 = CONCAT31(local_40._1_3_,4);
    uVar9 = FUN_01531708(&local_40);
    FUN_0155ff10(&local_60,uVar9);
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
  }
  return;
}

