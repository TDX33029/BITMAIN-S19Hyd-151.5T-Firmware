// FUN_016e6b80 @ 016e6b80 size=1916 calls_out=16 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016e6b80(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint unaff_r6;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *unaff_r9;
  int iVar12;
  ulonglong uVar13;
  uint *local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50 [4];
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_b8 = 4;
  local_c4 = 4;
  local_bc = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_d4 = param_2;
  uStack_d0 = param_3;
  uStack_cc = param_4;
LAB_016e6be4:
  if (*param_5 - 7U < 5) {
    piVar5 = (int *)param_5[1];
    switch(*param_5) {
    case 7:
      if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
        local_70 = 0;
        local_74 = 4;
        local_78 = 0;
        FUN_016f68e8(&local_40,&local_78);
        unaff_r6 = uStack_38;
        local_74 = local_40;
        local_70 = uStack_3c;
        local_6c = uStack_38;
        uStack_68 = local_34;
        local_78 = 9;
        FUN_016e9184(param_2,&local_78);
      }
      else {
        local_70 = 0;
        local_74 = 1;
        local_78 = 0;
        FUN_016f6888(&local_40,&local_78);
        unaff_r6 = uStack_38;
        local_74 = local_40;
        local_70 = uStack_3c;
        local_6c = uStack_38;
        uStack_68 = local_34;
        local_78 = 10;
        FUN_016e9184(param_2,&local_78);
      }
      break;
    case 8:
      local_78 = 0xb;
      FUN_016e9184(param_2,&local_78);
      break;
    case 9:
      if (*piVar5 == -0x7ffffffe) {
        FUN_016e925c(&local_40,param_2,piVar5[2],piVar5[3]);
        puVar6 = &local_40;
        if ((char)local_40 == '\x03') {
          puVar6 = param_2 + 4;
        }
      }
      else {
        local_40 = CONCAT31(local_40._1_3_,3);
        puVar6 = param_2 + 4;
      }
      local_74 = *puVar6;
      local_70 = CONCAT22(local_70._2_2_,(short)puVar6[1]);
      local_78 = 0xc;
      FUN_016e9184(param_2,&local_78);
      break;
    case 10:
      local_78 = 0xe;
      FUN_016e9184(param_2,&local_78);
      if (piVar5[2] != 0) {
        local_78 = 0xf;
        FUN_016e9184(param_2,&local_78);
      }
      break;
    case 0xb:
      local_78 = 0xd;
      FUN_016e9184(param_2,&local_78);
    }
  }
  iVar10 = local_c0;
  iVar8 = local_b4;
  if (4 < *param_5 - 7U) goto LAB_016e7274;
  piVar5 = (int *)param_5[1];
  switch(*param_5) {
  case 7:
    piVar11 = piVar5 + 1;
    if (*piVar5 != 0x110008) {
      piVar11 = piVar5;
    }
    uVar1 = CONCAT44(piVar11,(uint)(*piVar5 == 0x110008));
    while( true ) {
      piVar5 = (int *)(uVar1 >> 0x20);
      if ((uVar1 & 1) == 0) {
        if (*piVar5 == 0x110006) {
          if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
            local_70 = 0;
            local_74 = 4;
            local_78 = 0;
            FUN_016f68e8(&local_40,&local_78);
            local_74 = local_40;
            local_70 = uStack_3c;
            local_6c = uStack_38;
            uStack_68 = local_34;
            local_78 = 9;
            FUN_016e9184(param_2,&local_78);
          }
          else {
            local_70 = 0;
            local_74 = 1;
            local_78 = 0;
            FUN_016f6888(&local_40,&local_78);
            local_74 = local_40;
            local_70 = uStack_3c;
            local_6c = uStack_38;
            uStack_68 = local_34;
            local_78 = 10;
            FUN_016e9184(param_2,&local_78);
          }
        }
      }
      else if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
        local_70 = 0;
        local_74 = 4;
        local_78 = 0;
        FUN_016f68e8(&local_40,&local_78);
        local_74 = local_40;
        local_70 = uStack_3c;
        local_6c = uStack_38;
        uStack_68 = local_34;
        local_78 = 9;
        FUN_016e9184(param_2,&local_78);
      }
      else {
        local_70 = 0;
        local_74 = 1;
        local_78 = 0;
        FUN_016f6888(&local_40,&local_78);
        local_74 = local_40;
        local_70 = uStack_3c;
        local_6c = uStack_38;
        uStack_68 = local_34;
        local_78 = 10;
        FUN_016e9184(param_2,&local_78);
      }
      FUN_016f1f2c(&local_98,(int)uVar1,piVar5);
      if (local_98 == 4) break;
      uVar13 = FUN_016f1ec8(&local_98);
      iVar10 = local_b4;
      if (local_b4 == local_bc) {
        FUN_015f5b18(&local_bc);
      }
      puVar2 = (ulonglong *)(local_b8 + iVar10 * 0x18);
      *puVar2 = uVar1;
      *(uint *)(puVar2 + 1) = local_98;
      *(undefined4 *)((int)puVar2 + 0xc) = uStack_94;
      *(undefined4 *)(puVar2 + 2) = uStack_90;
      *(undefined4 *)((int)puVar2 + 0x14) = uStack_8c;
      local_b4 = iVar10 + 1;
      uVar1 = uVar13;
    }
    FUN_016f1fec(&local_78,(int)uVar1,piVar5,&local_d4);
    if (local_78 == 0x80000000) {
      iVar8 = local_b4;
      if (local_b4 != 0) {
        iVar10 = local_b8 + local_b4 * 0x18;
        iVar8 = local_b4 + -1;
        if (*(int *)(iVar10 + -0x18) != 2) {
                    /* WARNING: Could not recover jumptable at 0x016e704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_016e7050 + *(int *)(&DAT_016e7050 + *(int *)(iVar10 + -0x10) * 4)))
                    (*(undefined4 *)(iVar10 + -8),*(undefined4 *)(iVar10 + -4));
          return;
        }
      }
      goto LAB_016e7274;
    }
    local_b0 = local_64;
    uStack_ac = uStack_60;
    uStack_a8 = uStack_5c;
    uStack_a4 = uStack_58;
    uStack_a0 = uStack_54;
    param_1[5] = local_64;
    param_1[6] = uStack_60;
    param_1[7] = uStack_5c;
    param_1[8] = uStack_58;
    param_1[9] = uStack_54;
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    param_1[3] = local_6c;
    param_1[4] = uStack_68;
LAB_016e743c:
    FUN_0134aee0(local_c8,local_c4,4,0x14);
    FUN_0134aee0(local_bc,local_b8,4,0x18);
    return;
  case 8:
    iVar8 = 0x24;
    uVar9 = 0;
    break;
  case 9:
    iVar8 = 0x2c;
    uVar9 = 1;
    break;
  case 10:
    iVar12 = piVar5[2];
    uVar9 = 3;
    goto LAB_016e71f4;
  case 0xb:
    iVar12 = piVar5[2];
    uVar9 = 2;
LAB_016e71f4:
    if (iVar12 != 0) {
      piVar5 = (int *)piVar5[1];
      unaff_r6 = iVar12 - 1;
      unaff_r9 = piVar5 + 2;
      piVar11 = piVar5;
      goto LAB_016e7220;
    }
LAB_016e7274:
    local_b4 = iVar8;
    FUN_016e774c(&local_78,&local_d4,*param_5,param_5[1]);
    if (local_78 == 0x80000000) {
      if (local_c0 != 0) {
        iVar8 = local_c0;
        puVar3 = (undefined4 *)(local_c4 + local_c0 * 0x14);
LAB_016e72ac:
        puVar7 = puVar3 + -5;
        unaff_r6 = puVar3[-4];
        iVar10 = iVar8 + -1;
        if (unaff_r6 == 4) goto LAB_016e737c;
        unaff_r9 = (int *)*puVar7;
        if (1 < unaff_r6) {
          piVar11 = (int *)puVar3[-2];
          iVar12 = puVar3[-1];
          if (unaff_r6 == 2) {
            if (iVar12 != 0) goto LAB_016e7338;
          }
          else if (iVar12 != 0) goto LAB_016e7320;
        }
        FUN_016e774c(&local_78,&local_d4,*unaff_r9,unaff_r9[1]);
        if (local_78 == 0x80000000) goto code_r0x016e7304;
        goto LAB_016e7354;
      }
LAB_016e7380:
      uVar4 = *param_2;
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0130701c(&DAT_01d13070);
      }
      local_50[0] = param_2[3];
      *param_2 = uVar4 + 1;
      if (local_50[0] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,local_50,&DAT_0056ed00,0);
      }
      *param_2 = uVar4;
      FUN_016e9df0(&local_78,param_2);
      if (local_78 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d13080);
      }
      local_40 = local_78;
      uStack_3c = local_74;
      uStack_38 = local_70;
      local_34 = local_6c;
      uStack_30 = uStack_68;
      uStack_2c = local_64;
      uStack_28 = uStack_60;
      FUN_016e9e60(param_1 + 1);
      *param_1 = 0x80000000;
    }
    else {
LAB_016e7354:
      param_1[1] = local_74;
      param_1[2] = local_70;
      param_1[3] = local_6c;
      param_1[4] = uStack_68;
      param_1[5] = local_64;
      param_1[6] = uStack_60;
      param_1[7] = uStack_5c;
      param_1[8] = uStack_58;
      param_1[9] = uStack_54;
      *param_1 = local_78;
    }
    goto LAB_016e743c;
  }
  piVar11 = *(int **)((int)piVar5 + iVar8);
LAB_016e7220:
  if (local_c0 == local_c8) {
    FUN_0161d664(&local_c8);
  }
  iVar8 = iVar10 + 1;
  puVar3 = (undefined4 *)(local_c4 + iVar10 * 0x14);
  *puVar3 = param_5;
  puVar3[1] = uVar9;
  puVar3[2] = piVar5;
  puVar3[3] = unaff_r9;
  puVar3[4] = unaff_r6;
  goto LAB_016e725c;
LAB_016e7320:
  local_78 = 0xf;
  local_c0 = iVar10;
  FUN_016e9184(param_2,&local_78);
LAB_016e7338:
  *puVar7 = unaff_r9;
  puVar3[-4] = unaff_r6;
  puVar3[-3] = piVar11;
  puVar3[-2] = piVar11 + 2;
  puVar3[-1] = iVar12 + -1;
LAB_016e725c:
  param_5 = piVar11;
  local_c0 = iVar8;
  goto LAB_016e6be4;
code_r0x016e7304:
  iVar8 = iVar10;
  puVar3 = puVar7;
  if (iVar10 == 0) {
    iVar10 = 0;
LAB_016e737c:
    local_c0 = iVar10;
    goto LAB_016e7380;
  }
  goto LAB_016e72ac;
}

