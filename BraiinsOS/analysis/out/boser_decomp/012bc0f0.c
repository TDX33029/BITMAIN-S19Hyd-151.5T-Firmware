// FUN_012bc0f0 @ 012bc0f0 size=1152 calls_out=13 calls_in=2
// strings: 

undefined4 FUN_012bc0f0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 extraout_s1;
  double dVar15;
  int local_e4;
  int local_e0;
  int local_cc;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined1 auStack_9b [19];
  uint local_88;
  int local_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int local_48;
  undefined4 *local_44;
  uint local_40;
  
  uVar11 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  local_40 = 0;
  local_44 = (undefined4 *)0x8;
  local_48 = 0;
  if (param_4 != 0) {
    iVar13 = param_3;
    iVar2 = param_4 * 3;
    do {
      uVar7 = *(undefined4 *)(iVar13 + 4);
      iVar8 = *(int *)(iVar13 + 8);
      uVar14 = FUN_019bb830(uVar11,uVar1,uVar7,iVar8);
      dVar15 = (double)CONCAT44(extraout_s1,uVar14);
      if (0.7 < dVar15) {
        iVar10 = 0;
        if (iVar8 < 0) {
LAB_012bc568:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(iVar10,iVar2);
        }
        iVar12 = 0;
        if (iVar8 == 0) {
          iVar2 = 1;
        }
        else {
          iVar10 = 1;
          iVar2 = FUN_01298504(iVar8,1);
          if (iVar2 == 0) {
            iVar2 = iVar8;
            goto LAB_012bc568;
          }
          iVar10 = iVar8;
        }
        FUN_01bed4e2(iVar2,uVar7,iVar8);
        if (local_40 == 0) {
          iVar12 = 0;
        }
        else {
          if (local_40 != 1) {
            iVar12 = 0;
            uVar3 = local_40;
            do {
              iVar6 = iVar12 + (uVar3 >> 1);
              uVar3 = uVar3 - (uVar3 >> 1);
              if (*(double *)((int)local_44 + iVar6 * 0x18) <= dVar15) {
                iVar12 = iVar6;
              }
            } while (1 < uVar3);
          }
          if (*(double *)((int)local_44 + iVar12 * 0x18) <= dVar15) {
            iVar12 = iVar12 + 1;
          }
        }
        local_c8 = dVar15;
        local_c0 = iVar10;
        local_bc = iVar2;
        local_b8 = iVar8;
        FUN_01298e08(&local_48,iVar12,&local_c8);
      }
      iVar13 = iVar13 + 0xc;
      local_e0 = param_4 * 3;
    } while (iVar13 != param_3 + param_4 * 0xc);
  }
  uVar3 = local_40;
  local_64 = (int)local_44 + local_40 * 0x18;
  local_70 = (int)local_44;
  local_6c = (int)local_44;
  local_68 = local_48;
  if (local_40 == 0) {
    iVar13 = 4;
    uVar3 = 0;
  }
  else {
    iVar2 = local_40 * 0xc;
    iVar13 = FUN_01298504(iVar2,4);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar2);
    }
  }
  iVar2 = local_64;
  iVar10 = 0;
  local_80 = 0;
  local_c8 = (double)CONCAT44(local_6c,local_70);
  local_c0 = local_68;
  local_bc = local_64;
  iVar8 = local_6c;
  local_88 = uVar3;
  local_84 = iVar13;
  if (local_6c != local_64) {
    do {
      FUN_01bed864(iVar13,iVar8 + 8,0xc);
      iVar8 = iVar8 + 0x18;
      iVar13 = iVar13 + 0xc;
      iVar10 = iVar10 + 1;
    } while (iVar8 != iVar2);
    local_c8 = (double)CONCAT44(iVar8,(undefined4)local_c8);
  }
  local_80 = iVar10;
  FUN_012ba324(&local_c8);
  local_c8 = (double)CONCAT44(local_84,local_88);
  local_c0 = local_80;
  if (local_80 == 0) {
    local_cc = -0x80000000;
  }
  else {
    local_c0 = local_80 + -1;
    piVar5 = (int *)(local_84 + local_c0 * 0xc);
    local_cc = *piVar5;
    local_e4 = piVar5[2];
    local_e0 = piVar5[1];
  }
  FUN_006a41c0(&local_c8);
  uVar1 = FUN_012bc650(0);
  FUN_012bc780(uVar1,param_1);
  uVar3 = (uint)&local_c8 | 3;
  FUN_01bed4e2(uVar3,param_5,0xc);
  local_88 = CONCAT31(local_88._1_3_,1);
  local_84 = CONCAT31(local_84._1_3_,2);
  FUN_01bed4e2((uint)&local_88 | 5,&local_c8,0xf);
  FUN_01bed4e2(uVar3,param_2,0xc);
  local_70 = CONCAT31(local_70._1_3_,5);
  local_6c = CONCAT31(local_6c._1_3_,2);
  FUN_01bed4e2((uint)&local_70 | 5,&local_c8,0xf);
  if (param_4 == 0) {
    param_4 = 0;
    local_44 = (undefined4 *)&SUB_00000004;
    local_48 = 0;
  }
  else {
    puVar4 = (undefined4 *)FUN_01298504(param_4 * 0xc,4);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,param_4 * 0xc);
    }
    iVar13 = 0;
    local_40 = 0;
    puVar9 = (undefined4 *)(param_3 + 4);
    local_48 = param_4;
    local_44 = puVar4;
    do {
      FUN_006666fc(&local_c8,*puVar9,puVar9[1]);
      iVar13 = iVar13 + 1;
      puVar9 = puVar9 + 3;
      *puVar4 = (undefined4)local_c8;
      puVar4[1] = local_c8._4_4_;
      puVar4[2] = local_c0;
      puVar4 = puVar4 + 3;
    } while (param_4 != iVar13);
  }
  local_c8 = (double)CONCAT44(local_44,local_48);
  local_c0 = param_4;
  local_40 = param_4;
  FUN_01bed4e2((uint)auStack_58 | 3,&local_c8,0xc);
  local_c8 = (double)CONCAT44(local_84,local_88);
  local_c0 = local_80;
  local_bc = uStack_7c;
  local_b8 = uStack_78;
  local_b4 = local_70;
  uStack_b0 = local_6c;
  iStack_ac = local_68;
  iStack_a8 = local_64;
  uStack_a4 = uStack_60;
  local_9c = 3;
  local_a0 = 4;
  FUN_01bed4e2(auStack_9b,auStack_58,0xf);
  FUN_012bc91c(uVar1,&local_c8);
  if (local_cc != -0x80000000) {
    local_bc = local_e4;
    local_c8 = (double)CONCAT44(local_cc,(undefined4)local_c8);
    local_c0 = local_e0;
    local_c8 = (double)CONCAT71(local_c8._1_7_,2);
    FUN_012bca08(uVar1,0xc,&local_c8);
  }
  return uVar1;
}

