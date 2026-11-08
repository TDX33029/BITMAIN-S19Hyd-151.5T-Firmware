// FUN_01ab6cbc @ 01ab6cbc size=1604 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_01ab6cbc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  bool bVar20;
  uint *local_618;
  int local_614;
  uint local_604;
  undefined1 auStack_600 [336];
  int local_4b0 [84];
  int local_360;
  int local_358;
  uint local_354;
  undefined4 *******local_350 [8];
  int aiStack_330 [72];
  uint local_210 [4];
  int local_200;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  uint local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int *piStack_84;
  int *piStack_80;
  undefined4 ******local_78;
  undefined4 ******ppppppuStack_74;
  undefined4 ******ppppppuStack_70;
  undefined4 ******ppppppuStack_6c;
  undefined4 ******local_68;
  undefined4 ******ppppppuStack_64;
  undefined4 ******ppppppuStack_60;
  undefined4 ******ppppppuStack_5c;
  int local_58;
  int local_54;
  undefined4 ******local_50;
  undefined4 ******ppppppuStack_4c;
  undefined4 ******ppppppuStack_48;
  undefined4 ******ppppppuStack_44;
  undefined4 ******local_40;
  undefined4 ******ppppppuStack_3c;
  undefined4 ******ppppppuStack_38;
  undefined4 ******ppppppuStack_34;
  int local_30;
  int local_2c;
  
  bVar20 = *(char *)(param_1 + 0x318) != '\0';
  bVar1 = 0;
  if (bVar20) {
    bVar1 = *(byte *)(param_2 + 0x3c);
  }
  if (!bVar20 || (bVar1 & 2) == 0) {
LAB_01ab6ce4:
    iVar2 = FUN_01ab095c(param_1 + 0xe0,param_2);
    uVar12 = 2;
    if (iVar2 == 0) {
      uVar12 = *(undefined1 *)(param_1 + 0x318);
    }
    return uVar12;
  }
  local_1fc = 6;
  uVar3 = *(uint *)(param_1 + 0x310);
  local_604 = 0;
  if (uVar3 < 9) {
    iVar2 = param_1 + 0x1d0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1d0);
    iVar2 = *(int *)(param_1 + 0x1d4);
  }
  local_98 = &local_1fc;
  local_9c = &local_200;
  iVar17 = iVar2 + uVar3 * 0x28;
  local_358 = 0;
  local_210[0] = 0;
  local_200 = param_2;
  local_a8 = iVar2;
  local_a4 = iVar17;
  local_a0 = param_2;
  do {
    if (iVar2 == iVar17) {
LAB_01ab6f98:
      local_210[0] = local_604;
      goto LAB_01ab6fa4;
    }
    iVar10 = iVar2;
    while( true ) {
      iVar2 = iVar10 + 0x28;
      local_a8 = iVar2;
      iVar4 = FUN_01ab48ac(iVar10,param_2);
      if ((iVar4 != 0) &&
         (FUN_01ab5660(&local_50,&local_9c,iVar10), iVar10 = local_2c, local_30 != 6)) break;
      iVar10 = iVar2;
      if (iVar2 == iVar17) goto LAB_01ab6f98;
    }
    local_78 = local_50;
    ppppppuStack_74 = ppppppuStack_4c;
    ppppppuStack_70 = ppppppuStack_48;
    ppppppuStack_6c = ppppppuStack_44;
    local_68 = local_40;
    ppppppuStack_64 = ppppppuStack_3c;
    ppppppuStack_60 = ppppppuStack_38;
    ppppppuStack_5c = ppppppuStack_34;
    uVar3 = local_604 + 1;
    local_350[local_604 * 10] = (undefined4 *******)local_50;
    local_350[local_604 * 10 + 1] = (undefined4 *******)ppppppuStack_4c;
    local_350[local_604 * 10 + 2] = (undefined4 *******)ppppppuStack_48;
    local_350[local_604 * 10 + 3] = (undefined4 *******)ppppppuStack_44;
    local_350[local_604 * 10 + 4] = (undefined4 *******)local_40;
    local_350[local_604 * 10 + 5] = (undefined4 *******)ppppppuStack_3c;
    local_350[local_604 * 10 + 6] = (undefined4 *******)ppppppuStack_38;
    local_350[local_604 * 10 + 7] = (undefined4 *******)ppppppuStack_34;
    aiStack_330[local_604 * 10] = local_30;
    aiStack_330[local_604 * 10 + 1] = iVar10;
    iVar4 = local_a0;
    iVar10 = local_a4;
    local_618 = local_210;
    local_604 = uVar3;
  } while (uVar3 != 8);
  local_210[0] = 8;
  local_90 = local_a8;
  local_8c = local_a4;
  local_88 = local_a0;
  piStack_84 = local_9c;
  piStack_80 = local_98;
  if (local_a8 != local_a4) {
    iVar2 = local_a8;
    do {
      iVar17 = iVar2;
      while( true ) {
        iVar5 = FUN_01ab48ac(iVar17,iVar4);
        iVar2 = iVar17 + 0x28;
        if ((iVar5 != 0) && (FUN_01ab5660(&local_50,&piStack_84,iVar17), local_30 != 6)) break;
        iVar17 = iVar2;
        if (iVar2 == iVar10) goto LAB_01ab6fa4;
      }
      local_78 = local_50;
      ppppppuStack_74 = ppppppuStack_4c;
      ppppppuStack_70 = ppppppuStack_48;
      ppppppuStack_6c = ppppppuStack_44;
      local_68 = local_40;
      ppppppuStack_64 = ppppppuStack_3c;
      ppppppuStack_60 = ppppppuStack_38;
      ppppppuStack_5c = ppppppuStack_34;
      local_58 = local_30;
      uVar3 = 8;
      puVar8 = local_210;
      if (8 < local_210[0]) {
        uVar3 = local_210[0];
        puVar8 = (uint *)((uint)&local_358 | 4);
      }
      local_54 = local_2c;
      pppppppuVar6 = local_350;
      if (8 < local_210[0]) {
        pppppppuVar6 = local_350[0];
      }
      uVar7 = *puVar8;
      local_90 = iVar2;
      if (*puVar8 == uVar3) {
        FUN_01ab17d0(&local_358);
        pppppppuVar6 = local_350[0];
        uVar7 = local_354;
        puVar8 = (uint *)((uint)&local_358 | 4);
      }
      FUN_01bed864(pppppppuVar6 + uVar7 * 10,&local_78,0x28);
      *puVar8 = *puVar8 + 1;
    } while (iVar2 != iVar10);
  }
LAB_01ab6fa4:
  FUN_01bed4e2(&local_1f8,&local_358,0x150);
  iVar2 = local_1fc;
  if (local_1fc == 6) {
    iVar2 = 5;
    if (8 < local_b0) {
      local_b0 = local_1f4;
    }
    if (local_b0 == 0) {
      FUN_01ab2128(&local_1f8);
      goto LAB_01ab6ce4;
    }
  }
  FUN_01bed4e2(auStack_600,(uint)&local_1f8 | 4,0x14c);
  if (local_1f8 == 2) goto LAB_01ab6ce4;
  local_4b0[0] = local_1f8;
  FUN_01bed4e2((uint)local_4b0 | 4,auStack_600,0x14c);
  piVar18 = (int *)(param_1 + 0x30);
  local_360 = iVar2;
  if (*piVar18 == 0) {
    bVar20 = (bool)hasExclusiveAccess(piVar18);
    if (bVar20) {
      *piVar18 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_01ab7040;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar18);
LAB_01ab7040:
  uVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar3 = FUN_0197ac0c();
    uVar3 = uVar3 ^ 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531614,0xd,&DAT_01d2edc4);
    }
    uVar12 = *(undefined1 *)(param_1 + 0x318);
    FUN_01ac2a34(piVar18,uVar3);
    FUN_01ab2128(local_4b0);
    return uVar12;
  }
  uVar16 = *(uint *)(param_2 + 0x24);
  uVar13 = *(uint *)(param_2 + 0x28);
  uVar7 = FUN_01ab33ec(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),uVar16,uVar13
                      );
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_01aaf7f0(param_1 + 0x40,(undefined4 *)(param_1 + 0x50));
  }
  uVar9 = *(uint *)(param_1 + 0x44);
  puVar8 = *(uint **)(param_1 + 0x40);
  bVar20 = false;
  local_614 = 0;
  uVar11 = uVar7;
  do {
    uVar11 = uVar9 & uVar11;
    uVar19 = *(uint *)((int)puVar8 + uVar11);
    uVar14 = uVar19 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
    while (uVar14 != 0) {
      uVar15 = uVar11 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar9;
      uVar14 = uVar14 - 1 & uVar14;
      if (uVar16 == puVar8[uVar15 * -0x58 + -0x58]) {
        FUN_01bed4e2(&local_358,puVar8 + uVar15 * -0x58 + -0x56,0x158);
        FUN_01bed4e2(puVar8 + uVar15 * -0x58 + -0x56,local_4b0,0x158);
        if (local_358 != 2) {
          FUN_01ab2128(&local_358);
        }
        goto LAB_01ab71d4;
      }
    }
    uVar14 = uVar19 & 0x80808080;
    if (bVar20) goto LAB_01ab7158;
    if (uVar14 == 0) {
      bVar20 = false;
    }
    else {
      local_618 = (uint *)(uVar11 + ((uint)LZCOUNT((uVar19 & 0x80) << 0x18 |
                                                   (uVar14 >> 8 & 0xff) << 0x10 |
                                                   (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >>
                                    3) & uVar9);
LAB_01ab7158:
      if ((uVar14 & uVar19 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar8 + (int)local_618);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar8 & 0x80808080;
          uVar14 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar8 + (uVar14 >> 3));
          local_618 = (uint *)(uVar14 >> 3);
        }
        iVar2 = *(int *)(param_1 + 0x48);
        iVar17 = *(int *)(param_1 + 0x4c);
        bVar1 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar8 + (int)local_618) = bVar1;
        *(uint *)(param_1 + 0x48) = iVar2 - (uVar11 & 1);
        *(int *)(param_1 + 0x4c) = iVar17 + 1;
        *(byte *)((int)puVar8 + (uVar9 & (uint)(local_618 + -1)) + 4) = bVar1;
        puVar8[(int)local_618 * -0x58 + -0x57] = uVar13;
        puVar8[(int)local_618 * -0x58 + -0x58] = uVar16;
        FUN_01bed4e2(puVar8 + (int)local_618 * -0x58 + -0x56,local_4b0,0x158);
LAB_01ab71d4:
        FUN_01ac2a34(piVar18,uVar3);
        return 2;
      }
      bVar20 = true;
    }
    local_614 = local_614 + 4;
    uVar11 = local_614 + uVar11;
  } while( true );
}

