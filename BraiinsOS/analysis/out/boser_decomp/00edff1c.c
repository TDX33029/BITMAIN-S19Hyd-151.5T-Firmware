// FUN_00edff1c @ 00edff1c size=1572 calls_out=19 calls_in=1
// strings: terahash_per_second | terahash_per_second | terahash_per_second | terahash_per_second | terahash_per_second

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00edff1c(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  char **ppcVar5;
  int iVar6;
  uint uVar7;
  char **ppcVar8;
  char **ppcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char **unaff_r10;
  undefined8 unaff_d8;
  char **local_9c;
  char **local_98;
  char *local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int iStack_80;
  char **local_78;
  int local_74;
  char **local_70;
  char **local_6c;
  undefined8 local_68;
  char **local_60;
  char **local_5c;
  int local_58;
  undefined4 local_50;
  char **local_4c;
  undefined8 local_48;
  char **local_40;
  char *local_38;
  undefined4 local_34;
  
  local_78 = &local_90;
  local_90 = (char *)*param_2;
  iStack_8c = param_2[1];
  local_88 = param_2[2];
  local_84 = param_2[3];
  iStack_80 = param_2[4];
  iVar10 = param_2[5];
  iVar12 = param_2[6];
  uVar7 = *(uint *)(iVar10 + 0x14);
  local_74 = iVar12;
  if (uVar7 < *(uint *)(iVar10 + 0x10)) {
    ppcVar8 = (char **)&DAT_00800013;
    do {
      uVar11 = (uint)*(byte *)(*(int *)(iVar10 + 0xc) + uVar7);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 != 0x5b) {
          if (uVar11 != 0x7b) {
            ppcVar8 = (char **)FUN_012c7788(iVar10,&local_78,&DAT_01c1ceb8);
            goto LAB_00ee02fc;
          }
          cVar3 = *(char *)(iVar10 + 0x1c) + -1;
          *(char *)(iVar10 + 0x1c) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(iVar10 + 0x14) = uVar7 + 1;
            bVar1 = true;
            local_70 = (char **)&DAT_80000000;
            local_60 = (char **)CONCAT31(local_60._1_3_,1);
            bVar2 = false;
            local_5c = local_78;
            local_58 = iVar12;
            goto LAB_00ee0064;
          }
          local_70 = (char **)&DAT_00000018;
          uVar4 = FUN_012c6b30(iVar10,&local_70);
          goto LAB_00edffb0;
        }
        cVar3 = *(char *)(iVar10 + 0x1c) + -1;
        *(char *)(iVar10 + 0x1c) = cVar3;
        if (cVar3 == '\0') {
          local_70 = (char **)&DAT_00000018;
          uVar4 = FUN_012c6b30(iVar10,&local_70);
          goto LAB_00edffb0;
        }
        *(uint *)(iVar10 + 0x14) = uVar7 + 1;
        local_60 = (char **)CONCAT31(local_60._1_3_,1);
        local_68 = CONCAT44(iVar10,iVar12);
        local_70 = (char **)0x0;
        local_6c = local_78;
        FUN_00e62cf4(&local_50,&local_70);
        if (local_50 == (char **)0x2 && local_4c == (char **)0x0) {
          ppcVar8 = (char **)local_48;
LAB_00ee0284:
          local_70 = ppcVar8;
          FUN_0196bf0c(iVar12,&local_90);
          ppcVar9 = (char **)&DAT_00000001;
        }
        else {
          if (((uint)local_50 & 1) == 0) {
            ppcVar8 = (char **)FUN_012cc2c0(0,&DAT_01c1676c,&DAT_01d064b8);
            goto LAB_00ee0284;
          }
          ppcVar9 = (char **)0x0;
          unaff_d8 = local_48;
        }
        *(char *)(iVar10 + 0x1c) = *(char *)(iVar10 + 0x1c) + '\x01';
        local_50 = ppcVar9;
        local_4c = ppcVar8;
        local_60 = (char **)FUN_014d9568(iVar10);
        local_70 = ppcVar9;
        local_6c = ppcVar8;
        local_68 = unaff_d8;
        if (ppcVar9 == (char **)0x0) goto LAB_00ee03f0;
        if (local_60 != (char **)0x0) {
          FUN_00f80260(&local_60);
        }
        goto LAB_00ee02fc;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(iVar10 + 0x14) = uVar7;
    } while (*(uint *)(iVar10 + 0x10) != uVar7);
  }
  local_70 = (char **)&DAT_00000005;
  uVar4 = FUN_012c6b30(iVar10,&local_70);
  goto LAB_00edffb0;
  while (unaff_r10 = (char **)FUN_00e620c0(&local_70), unaff_r10 == (char **)0x0) {
LAB_00ee0064:
    iVar6 = local_58;
    ppcVar8 = local_5c;
    FUN_01278730(&local_50,(int)&local_68 + 4);
    if ((char)local_50 == '\x01') {
LAB_00ee030c:
      unaff_r10 = local_4c;
      ppcVar5 = local_6c;
      ppcVar9 = local_70;
      local_70 = (char **)&DAT_80000000;
      if (ppcVar9 == (char **)&DAT_80000000) {
        local_50 = (char **)&DAT_00000008;
      }
      else {
        local_50 = (char **)0x2;
        local_48 = CONCAT44(local_6c,ppcVar9);
        local_40 = (char **)local_68;
      }
      local_4c = ppcVar8;
      FUN_0196bf0c(iVar6,&local_50);
      if (ppcVar9 != (char **)&DAT_80000000) {
        FUN_019bb7e0(ppcVar9,ppcVar5);
      }
      break;
    }
    if (local_50._1_1_ != '\x01') {
      if (bVar2) {
        if (local_70 != (char **)&DAT_80000000) {
          FUN_019bb7e0(local_70,local_6c);
        }
        ppcVar8 = (char **)0x0;
        goto LAB_00ee0398;
      }
      local_34 = 0x13;
      local_4c = (char **)&DAT_0132b6a0;
      local_50 = &local_38;
      local_38 = "terahash_per_second";
      unaff_r10 = (char **)FUN_019676ac(&DAT_0057cd64,&local_50);
      break;
    }
    *(undefined4 *)(iVar10 + 8) = 0;
    *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
    FUN_01968828(&local_50,iVar10 + 0xc);
    unaff_r10 = local_4c;
    if (local_50 == (char **)0x2) goto LAB_00ee030c;
    ppcVar8 = (char **)local_48;
    ppcVar9 = (char **)0x0;
    if (((uint)local_50 & 1) == 0) {
      ppcVar5 = local_9c;
      if ((int)(char **)local_48 < 0) goto LAB_00ee0538;
      if ((char **)local_48 == (char **)0x0) {
        ppcVar5 = (char **)&DAT_00000001;
      }
      else {
        ppcVar5 = (char **)FUN_01298504((char **)local_48,1);
        if (ppcVar5 == (char **)0x0) goto LAB_00ee0534;
        ppcVar9 = ppcVar8;
      }
      FUN_01bed4e2(ppcVar5,unaff_r10,ppcVar8);
      local_9c = ppcVar5;
    }
    else {
      ppcVar5 = local_98;
      if ((int)(char **)local_48 < 0) goto LAB_00ee0538;
      if ((char **)local_48 == (char **)0x0) {
        ppcVar5 = (char **)&DAT_00000001;
      }
      else {
        ppcVar5 = (char **)FUN_01298504((char **)local_48,1);
        if (ppcVar5 == (char **)0x0) {
LAB_00ee0534:
          ppcVar9 = (char **)&DAT_00000001;
          ppcVar5 = ppcVar8;
LAB_00ee0538:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(ppcVar9,ppcVar5);
        }
        ppcVar9 = ppcVar8;
      }
      FUN_01bed4e2(ppcVar5,unaff_r10,ppcVar8);
      local_98 = ppcVar5;
    }
    if (local_70 != (char **)&DAT_80000000) {
      FUN_019bb7e0(local_70,local_6c);
    }
    local_68._0_4_ = ppcVar8;
    local_70 = ppcVar9;
    local_6c = ppcVar5;
    if (ppcVar8 == (char **)&DAT_00000013) {
      iVar6 = thunk_FUN_01bed842(unaff_r10,"terahash_per_second",0x13);
      if (iVar6 == 0) {
        if (!bVar1) {
          local_34 = 0x13;
          local_4c = (char **)&DAT_0132b6a0;
          local_50 = &local_38;
          local_38 = "terahash_per_second";
          unaff_r10 = (char **)FUN_019676ac(&DAT_005ab34f,&local_50);
          break;
        }
        FUN_00e616c8(&local_50,&local_70);
        if (local_50 != (char **)0x0) {
          unaff_r10 = local_4c;
          break;
        }
        bVar2 = true;
        bVar1 = false;
        unaff_d8 = local_48;
        goto LAB_00ee0064;
      }
    }
  }
  if (local_70 != (char **)&DAT_80000000) {
    FUN_019bb7e0(local_70,local_6c);
  }
  local_70 = unaff_r10;
  FUN_0196bf0c(iVar12,&local_90);
  ppcVar8 = (char **)&DAT_00000001;
LAB_00ee0398:
  *(char *)(iVar10 + 0x1c) = *(char *)(iVar10 + 0x1c) + '\x01';
  local_50 = ppcVar8;
  local_4c = unaff_r10;
  local_60 = (char **)FUN_012c7b64(iVar10);
  local_70 = ppcVar8;
  local_6c = unaff_r10;
  local_68 = unaff_d8;
  if (ppcVar8 == (char **)0x0) {
LAB_00ee03f0:
    ppcVar8 = local_60;
    if (local_60 == (char **)0x0) {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 2) = local_68;
      goto LAB_00edffc8;
    }
  }
  else {
    ppcVar8 = unaff_r10;
    if (local_60 == (char **)0x0) {
      local_6c = unaff_r10;
    }
    else {
      local_6c = unaff_r10;
      FUN_00f80260(&local_60);
    }
  }
LAB_00ee02fc:
  uVar4 = FUN_0127dee8(ppcVar8,iVar10);
LAB_00edffb0:
  FUN_0196bf0c(iVar12,&local_90);
  param_1[1] = uVar4;
  uVar4 = 1;
LAB_00edffc8:
  *param_1 = uVar4;
  if (local_90 == (char *)0x4 || local_90 == (char *)0x2) {
    FUN_019bb7e0(local_88,local_84);
  }
  return;
}

