// FUN_012b98b8 @ 012b98b8 size=900 calls_out=7 calls_in=1
// strings: 

void FUN_012b98b8(uint *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *extraout_r2;
  int iVar8;
  uint *extraout_r2_00;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 extraout_s1;
  double dVar18;
  uint local_ac;
  uint local_a8;
  uint *local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  
  uVar6 = param_4[7];
  local_84 = param_4[5];
  local_78 = 8;
  local_88 = (uint *)param_4[8];
  puVar7 = (uint *)param_4[9];
  uVar12 = *param_4;
  puVar11 = (uint *)param_4[3];
  puVar16 = (uint *)param_4[4];
  uVar13 = param_4[10];
  uVar14 = param_4[0xb];
  uVar2 = param_4[1];
  uVar15 = param_4[2];
  local_74 = 0;
  local_7c = 0;
  puVar9 = (uint *)&local_70;
  uVar4 = param_4[6];
LAB_012b9ab4:
  uVar3 = local_74;
  local_80 = uVar4;
  if (uVar12 == 2) {
LAB_012b9ae0:
    if (!(uVar13 == 0 || uVar13 == uVar14)) {
      puVar11 = *(uint **)(uVar13 + 0x24);
      piVar1 = (int *)(uVar13 + 0x28);
      puVar9 = (uint *)(*piVar1 * 3);
      uVar2 = *(uint *)(uVar13 + 0x11c);
      uVar15 = *(uint *)(uVar13 + 0x120);
      uVar13 = uVar13 + 0x16c;
      puVar16 = puVar11 + *piVar1 * 3;
      uVar12 = 1;
      goto LAB_012b9ab4;
    }
    if (local_84 == 2) {
LAB_012b9b48:
      uVar2 = 0;
      local_50 = local_7c;
      local_54 = local_78;
      local_58 = local_78;
      local_4c = local_78 + local_74 * 0x18;
      if (local_74 == 0) {
        uVar4 = 4;
        uVar3 = 0;
      }
      else {
        iVar5 = local_74 * 0xc;
        uVar4 = FUN_01298504(iVar5,4);
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,iVar5);
        }
      }
      iVar5 = local_4c;
      local_40 = 0;
      local_70 = (double)CONCAT44(local_70._4_4_,local_58);
      local_68 = local_50;
      local_64 = local_4c;
      local_48 = uVar3;
      local_44 = uVar4;
      if (local_70._4_4_ != local_4c) {
        uVar2 = 0;
        iVar8 = local_70._4_4_;
        do {
          FUN_01bed864(uVar4,iVar8 + 8,0xc);
          iVar8 = iVar8 + 0x18;
          uVar4 = uVar4 + 0xc;
          uVar2 = uVar2 + 1;
        } while (iVar8 != iVar5);
        local_70 = (double)CONCAT44(iVar8,(uint)local_70);
      }
      local_40 = uVar2;
      FUN_012ba324(&local_70);
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      return;
    }
    if (((local_84 & 1) != 0) && (local_80 = 0, uVar4 != 0)) {
      uVar12 = 2;
      local_80 = 0;
      local_84 = 1;
      uVar3 = uVar4;
      uVar10 = uVar6;
      goto LAB_012b9958;
    }
    if (local_88 != (uint *)0x0) {
      puVar9 = puVar7;
    }
    if (!(local_88 != (uint *)0x0 && local_88 != puVar9)) goto LAB_012b9b48;
    uVar12 = 2;
    uVar3 = *local_88;
    puVar9 = local_88 + 1;
    local_88 = local_88 + 3;
    local_84 = 0;
    uVar10 = *puVar9;
  }
  else if ((uVar12 & 1) == 0) {
LAB_012b9ad4:
    if (puVar11 == (uint *)0x0 || puVar11 == puVar16) goto LAB_012b9ae0;
    uVar3 = *puVar11;
    puVar9 = puVar11 + 1;
    puVar11 = puVar11 + 3;
    uVar12 = 0;
    uVar10 = *puVar9;
  }
  else {
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_012b9ad4;
    }
    uVar12 = 1;
    uVar3 = uVar2;
    uVar10 = uVar15;
    uVar2 = 0;
  }
LAB_012b9958:
  uVar17 = FUN_019bb830(param_2,param_3);
  dVar18 = (double)CONCAT44(extraout_s1,uVar17);
  puVar9 = extraout_r2;
  uVar4 = local_80;
  if (0.7 < dVar18) {
    uVar17 = 0;
    if ((int)uVar10 < 0) {
LAB_012b9c38:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,local_a8);
    }
    if (uVar10 == 0) {
      local_a8 = 1;
      local_ac = 0;
    }
    else {
      local_a8 = FUN_01298504(uVar10,1);
      if (local_a8 == 0) {
        uVar17 = 1;
        local_a8 = uVar10;
        goto LAB_012b9c38;
      }
      local_ac = uVar10;
    }
    FUN_01bed4e2(local_a8,uVar3);
    if (local_74 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      uVar3 = local_74;
      if (local_74 != 1) {
        do {
          iVar8 = iVar5 + (uVar3 >> 1);
          uVar3 = uVar3 - (uVar3 >> 1);
          if (*(double *)(local_78 + iVar8 * 0x18) <= dVar18) {
            iVar5 = iVar8;
          }
        } while (1 < uVar3);
      }
      if (*(double *)(local_78 + iVar5 * 0x18) <= dVar18) {
        iVar5 = iVar5 + 1;
      }
    }
    local_68 = local_ac;
    local_70 = dVar18;
    local_64 = local_a8;
    local_60 = uVar10;
    FUN_01298e08(&local_7c,iVar5,&local_70);
    puVar9 = extraout_r2_00;
  }
  goto LAB_012b9ab4;
}

