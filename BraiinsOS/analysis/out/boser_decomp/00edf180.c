// FUN_00edf180 @ 00edf180 size=1840 calls_out=19 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00edf180(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *unaff_r10;
  int *local_c4;
  int *local_c0;
  int *local_a8;
  int *local_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int *local_88;
  int *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int *local_78;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  undefined4 local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  local_88 = &local_a0;
  local_a0 = *param_2;
  iStack_9c = param_2[1];
  local_98 = param_2[2];
  local_94 = param_2[3];
  iStack_90 = param_2[4];
  piVar12 = (int *)param_2[5];
  piVar14 = (int *)param_2[6];
  uVar9 = piVar12[5];
  local_84 = piVar14;
  if (uVar9 < (uint)piVar12[4]) {
    piVar11 = (int *)&DAT_00800013;
    do {
      uVar13 = (uint)*(byte *)(piVar12[3] + uVar9);
      if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar13 != 0x5b) {
          if (uVar13 != 0x7b) {
            piVar11 = (int *)FUN_012c7788(piVar12,&local_88,&DAT_01c1d048);
            goto LAB_00edf630;
          }
          cVar6 = (char)piVar12[7] + -1;
          *(char *)(piVar12 + 7) = cVar6;
          if (cVar6 != '\0') {
            piVar12[5] = uVar9 + 1;
            bVar1 = true;
            local_70 = (int *)&DAT_80000000;
            local_60 = (int *)CONCAT31(local_60._1_3_,1);
            bVar2 = false;
            local_64 = piVar12;
            local_5c = local_88;
            local_58 = piVar14;
            goto LAB_00edf2c8;
          }
          local_70 = (int *)&DAT_00000018;
          uVar7 = FUN_012c6b30(piVar12,&local_70);
          goto LAB_00edf20c;
        }
        cVar6 = (char)piVar12[7] + -1;
        *(char *)(piVar12 + 7) = cVar6;
        if (cVar6 == '\0') {
          local_70 = (int *)&DAT_00000018;
          uVar7 = FUN_012c6b30(piVar12,&local_70);
          goto LAB_00edf20c;
        }
        piVar12[5] = uVar9 + 1;
        local_30 = (int *)CONCAT31(local_30._1_3_,1);
        local_40 = (int *)0x1;
        local_6c = (int *)0x0;
        local_70 = (int *)&DAT_00000001;
        local_68 = local_88;
        local_5c = piVar14;
        local_3c = local_88;
        local_38 = piVar14;
        local_34 = piVar12;
        FUN_014db6fc(&local_50,&local_34);
        if ((char)local_50 == '\x01') {
LAB_00edf550:
          piVar11 = local_4c;
          local_7c = 0;
          local_80 = 2;
          local_78 = local_4c;
          FUN_0196bf0c(piVar14,&local_a0);
LAB_00edf5d4:
          local_70 = piVar11;
          FUN_0196bf0c(piVar14,&local_a0);
          piVar10 = (int *)&DAT_00000001;
          local_48 = (int *)0x5b;
        }
        else {
          if (local_50._1_1_ != '\x01') {
            piVar11 = (int *)FUN_012cc2c0(0,&DAT_01c1671c,&DAT_01d064b8);
            goto LAB_00edf5d4;
          }
          FUN_00e7069c(&local_50,&local_70,local_34);
          if (local_50 == (undefined *)0x1) goto LAB_00edf550;
          piVar10 = (int *)0x0;
          unaff_r10 = local_44;
        }
        *(char *)(piVar12 + 7) = (char)piVar12[7] + '\x01';
        local_40 = piVar10;
        local_3c = piVar11;
        local_38 = local_48;
        local_34 = unaff_r10;
        local_60 = (int *)FUN_014d9568(piVar12);
        local_70 = piVar10;
        local_6c = piVar11;
        local_68 = local_48;
        local_64 = unaff_r10;
        if (piVar10 != (int *)0x0) {
          if (local_60 != (int *)0x0) {
            FUN_00f80260(&local_60);
          }
          goto LAB_00edf630;
        }
        piVar11 = local_60;
        if (local_60 == (int *)0x0) goto LAB_00edf648;
        goto LAB_00edf630;
      }
      uVar9 = uVar9 + 1;
      piVar12[5] = uVar9;
    } while (piVar12[4] != uVar9);
  }
  local_70 = (int *)&DAT_00000005;
  uVar7 = FUN_012c6b30(piVar12,&local_70);
  goto LAB_00edf20c;
  while (unaff_r10 = (int *)FUN_00e620c0(&local_70), unaff_r10 == (int *)0x0) {
LAB_00edf2c8:
    piVar10 = local_58;
    piVar11 = local_5c;
    FUN_01278730(&local_40,&local_64);
    if ((char)local_40 == '\x01') {
LAB_00edf65c:
      unaff_r10 = local_3c;
      piVar3 = local_6c;
      piVar8 = local_70;
      local_70 = (int *)&DAT_80000000;
      if (piVar8 == (int *)&DAT_80000000) {
        local_40 = (int *)&DAT_00000008;
      }
      else {
        local_40 = (int *)0x2;
        local_38 = piVar8;
        local_34 = local_6c;
        local_30 = local_68;
      }
      local_3c = piVar11;
      FUN_0196bf0c(piVar10,&local_40);
      if (piVar8 != (int *)&DAT_80000000) {
        FUN_019bb7e0(piVar8,piVar3);
      }
      break;
    }
    if (local_40._1_1_ != '\x01') {
      if (bVar2) {
        if (local_70 != (int *)&DAT_80000000) {
          FUN_019bb7e0(local_70,local_6c);
        }
        piVar11 = (int *)0x0;
        goto LAB_00edf6e8;
      }
      local_3c = (int *)&LAB_018a13b8;
      local_40 = &local_50;
      local_4c = (int *)&SUB_00000004;
      local_50 = &DAT_0056f4bc;
      unaff_r10 = (int *)FUN_019676ac(&DAT_0057cd64,&local_40);
      break;
    }
    local_64[2] = 0;
    local_64[5] = local_64[5] + 1;
    FUN_01968828(&local_40,local_64 + 3);
    piVar3 = local_38;
    piVar8 = local_3c;
    if (local_40 == (int *)0x2) goto LAB_00edf65c;
    piVar11 = (int *)0x0;
    if (((uint)local_40 & 1) == 0) {
      piVar10 = local_a8;
      if ((int)local_38 < 0) goto LAB_00edf8a8;
      if (local_38 == (int *)0x0) {
        unaff_r10 = (int *)&DAT_00000001;
      }
      else {
        unaff_r10 = (int *)FUN_01298504(local_38,1);
        if (unaff_r10 == (int *)0x0) goto LAB_00edf8a4;
        piVar11 = piVar3;
      }
      FUN_01bed4e2(unaff_r10,piVar8,piVar3);
      local_a8 = unaff_r10;
    }
    else {
      piVar10 = local_a4;
      if ((int)local_38 < 0) goto LAB_00edf8a8;
      if (local_38 == (int *)0x0) {
        unaff_r10 = (int *)&DAT_00000001;
      }
      else {
        unaff_r10 = (int *)FUN_01298504(local_38,1);
        if (unaff_r10 == (int *)0x0) {
LAB_00edf8a4:
          piVar11 = (int *)&DAT_00000001;
          piVar10 = piVar3;
LAB_00edf8a8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(piVar11,piVar10);
        }
        piVar11 = piVar3;
      }
      FUN_01bed4e2(unaff_r10,piVar8,piVar3);
      local_a4 = unaff_r10;
    }
    if (local_70 != (int *)&DAT_80000000) {
      FUN_019bb7e0(local_70,local_6c);
    }
    piVar5 = local_58;
    piVar4 = local_5c;
    piVar10 = local_64;
    local_68 = piVar3;
    local_70 = piVar11;
    local_6c = unaff_r10;
    if ((piVar3 == (int *)&SUB_00000004) && (*piVar8 == 0x74746177)) {
      if (!bVar1) {
        local_3c = (int *)&DAT_0132b6a0;
        local_40 = &local_50;
        local_4c = (int *)&SUB_00000004;
        local_50 = &DAT_0056f4bc;
        unaff_r10 = (int *)FUN_019676ac(&DAT_005ab34f,&local_40);
        break;
      }
      local_70 = (int *)&DAT_80000000;
      local_30 = piVar3;
      local_40 = (int *)0x2;
      if (piVar11 == (int *)&DAT_80000000) {
        local_40 = (int *)&DAT_00000008;
      }
      local_3c = local_5c;
      local_2c = local_58;
      local_38 = piVar11;
      local_34 = unaff_r10;
      piVar8 = (int *)FUN_0167459c(local_64);
      if (piVar8 == (int *)0x0) {
        FUN_00e7069c(&local_50,&local_40,piVar10);
        if (local_50 == (undefined *)0x0) {
          local_c0 = local_48;
          local_c4 = local_44;
          bVar2 = true;
          bVar1 = false;
          goto LAB_00edf2c8;
        }
      }
      else {
        local_4c = piVar8;
        if (piVar11 != (int *)&DAT_80000000) {
          FUN_019bb7e0(piVar11,unaff_r10);
        }
      }
      unaff_r10 = local_4c;
      FUN_0196bf0c(piVar5,piVar4);
      break;
    }
  }
  if (local_70 != (int *)&DAT_80000000) {
    FUN_019bb7e0(local_70,local_6c);
  }
  local_70 = unaff_r10;
  FUN_0196bf0c(piVar14,&local_a0);
  piVar11 = (int *)&DAT_00000001;
LAB_00edf6e8:
  *(char *)(piVar12 + 7) = (char)piVar12[7] + '\x01';
  local_34 = local_c4;
  local_40 = piVar11;
  local_3c = unaff_r10;
  local_38 = local_c0;
  local_60 = (int *)FUN_012c7b64(piVar12);
  local_64 = local_c4;
  local_70 = piVar11;
  if (piVar11 == (int *)0x0) {
    piVar11 = local_60;
    local_6c = unaff_r10;
    local_68 = local_c0;
    if (local_60 == (int *)0x0) {
LAB_00edf648:
      uVar7 = 0;
      param_1[2] = local_68;
      param_1[3] = local_64;
      goto LAB_00edf224;
    }
  }
  else {
    piVar11 = unaff_r10;
    if (local_60 == (int *)0x0) {
      local_6c = unaff_r10;
      local_68 = local_c0;
    }
    else {
      local_6c = unaff_r10;
      local_68 = local_c0;
      FUN_00f80260(&local_60);
    }
  }
LAB_00edf630:
  uVar7 = FUN_0127dee8(piVar11,piVar12);
LAB_00edf20c:
  FUN_0196bf0c(piVar14,&local_a0);
  param_1[1] = uVar7;
  uVar7 = 1;
LAB_00edf224:
  *param_1 = uVar7;
  if (local_a0 == 4 || local_a0 == 2) {
    FUN_019bb7e0(local_98,local_94);
  }
  return;
}

