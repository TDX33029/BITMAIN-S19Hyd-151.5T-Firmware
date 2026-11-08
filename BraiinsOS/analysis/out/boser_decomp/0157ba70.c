// FUN_0157ba70 @ 0157ba70 size=1164 calls_out=6 calls_in=2
// strings: capacity overflow

void FUN_0157ba70(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint unaff_r5;
  uint unaff_r6;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  int local_60 [4];
  int local_50 [4];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 == 0) {
    param_2 = param_4;
    param_3 = param_5;
LAB_0157bafc:
    FUN_0164a9cc(param_1,param_2,param_3);
    return;
  }
  if (param_5 == 0) goto LAB_0157bafc;
  FUN_0164a9cc(local_60);
  FUN_0164a9cc(local_50,param_4,param_5);
  iVar7 = local_50[2] << 2;
  if (local_50[2] != 0) {
    param_5 = 0;
    iVar6 = iVar7;
    do {
      if (*(int *)(local_50[1] + param_5 * 4) != 0) {
        uVar11 = *(undefined4 *)(local_50[1] + param_5 * 4);
        param_4 = param_5 >> 0x1b;
        bVar13 = 1;
        bVar3 = (byte)uVar11;
        bVar4 = (byte)((uint)uVar11 >> 8);
        bVar5 = (byte)((uint)uVar11 >> 0x10);
        bVar8 = (byte)((uint)uVar11 >> 0x18);
        uVar9 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                        | (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                           bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                         bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                       bVar8 >> 6 & 1) << 1 | bVar8 >> 7));
        unaff_r5 = uVar9 + param_5 * 0x20;
        unaff_r6 = param_4 + CARRY4(uVar9,param_5 * 0x20);
        goto LAB_0157bb34;
      }
      param_5 = param_5 + 1;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    param_4 = 0;
  }
  bVar13 = 0;
LAB_0157bb34:
  if (local_60[2] != 0) {
    iVar6 = local_60[2] << 2;
    uVar9 = 0;
    do {
      if (*(int *)(local_60[1] + uVar9 * 4) != 0) {
        uVar11 = *(undefined4 *)(local_60[1] + uVar9 * 4);
        bVar3 = (byte)uVar11;
        bVar4 = (byte)((uint)uVar11 >> 8);
        bVar5 = (byte)((uint)uVar11 >> 0x10);
        bVar8 = (byte)((uint)uVar11 >> 0x18);
        uVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                              bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                            bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                          bVar8 >> 6 & 1) << 1 | bVar8 >> 7));
        param_5 = uVar10 + uVar9 * 0x20;
        param_4 = (uVar9 >> 0x1b) + (uint)CARRY4(uVar10,uVar9 * 0x20);
        bVar8 = 1;
        goto LAB_0157bb90;
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    param_5 = 0;
    param_4 = local_60[1];
  }
  bVar8 = 0;
LAB_0157bb90:
  if (param_4 <= unaff_r6 && (uint)(unaff_r5 <= param_5) <= param_4 - unaff_r6) {
    unaff_r6 = param_4;
    unaff_r5 = param_5;
  }
  if (!(bool)(bVar8 & bVar13)) {
    unaff_r6 = 0;
    unaff_r5 = 0;
  }
  if (local_50[2] == 0) {
    uVar9 = 0;
    uVar10 = 0;
    if (local_50[0] == -0x80000000) goto LAB_0157bc2c;
LAB_0157bc88:
    local_38 = local_50[2];
    local_3c = local_50[1];
    local_40 = local_50[0];
  }
  else {
    uVar10 = 0;
    do {
      if (*(int *)(local_50[1] + uVar10 * 4) != 0) {
        uVar11 = *(undefined4 *)(local_50[1] + uVar10 * 4);
        bVar3 = (byte)uVar11;
        bVar4 = (byte)((uint)uVar11 >> 8);
        bVar5 = (byte)((uint)uVar11 >> 0x10);
        bVar8 = (byte)((uint)uVar11 >> 0x18);
        uVar14 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                              bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                            bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                          bVar8 >> 6 & 1) << 1 | bVar8 >> 7));
        uVar9 = uVar14 + uVar10 * 0x20;
        uVar10 = (uVar10 >> 0x1b) + (uint)CARRY4(uVar14,uVar10 * 0x20);
        goto LAB_0157bc20;
      }
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + -4;
    } while (iVar7 != 0);
    uVar9 = 0;
    uVar10 = 0;
LAB_0157bc20:
    if (local_50[0] == -0x80000000) {
LAB_0157bc2c:
      if (*(int *)(local_50[1] + 8) == 0) {
        FUN_0164a9cc(&local_40,*(undefined4 *)(local_50[1] + 4),*(undefined4 *)(local_50[1] + 8));
        goto LAB_0157bc94;
      }
    }
    else if (local_50[2] == 0) goto LAB_0157bc88;
    local_2c = local_50[1];
    local_30 = local_50[0];
    uVar14 = 0xffffffff;
    local_28 = local_50[2];
    if (uVar10 < 0x20) {
      uVar14 = uVar9 >> 5 | uVar10 << 0x1b;
    }
    FUN_0164b86c(&local_40,&local_30,uVar14,uVar9 & 0x1f);
  }
LAB_0157bc94:
  FUN_0134aee0(0,4,4,4);
  local_50[0] = local_40;
  local_50[1] = local_3c;
  local_50[2] = local_38;
  while (local_60[2] != 0) {
    iVar7 = local_60[2] << 2;
    uVar9 = 0;
    do {
      if (*(int *)(local_60[1] + uVar9 * 4) != 0) {
        uVar11 = *(undefined4 *)(local_60[1] + uVar9 * 4);
        bVar3 = (byte)uVar11;
        bVar4 = (byte)((uint)uVar11 >> 8);
        bVar5 = (byte)((uint)uVar11 >> 0x10);
        bVar8 = (byte)((uint)uVar11 >> 0x18);
        uVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                              bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                            bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                          bVar8 >> 6 & 1) << 1 | bVar8 >> 7));
        uVar14 = uVar10 + uVar9 * 0x20;
        uVar9 = (uVar9 >> 0x1b) + (uint)CARRY4(uVar10,uVar9 * 0x20);
        goto LAB_0157bd18;
      }
      uVar9 = uVar9 + 1;
      iVar7 = iVar7 + -4;
    } while (iVar7 != 0);
    uVar14 = 0;
    uVar9 = 0;
LAB_0157bd18:
    iVar7 = 0;
    uVar11 = 4;
    uVar12 = 0;
    if (local_60[0] == -0x80000000) {
      if (*(int *)(local_60[1] + 8) == 0) {
        puVar1 = (undefined4 *)(local_60[1] + 4);
        puVar2 = (undefined4 *)(local_60[1] + 8);
        local_60[0] = iVar7;
        local_60[1] = uVar11;
        local_60[2] = uVar12;
        FUN_0164a9cc(&local_40,*puVar1,*puVar2);
      }
      else {
LAB_0157bd60:
        local_28 = local_60[2];
        local_30 = local_60[0];
        uVar10 = 0xffffffff;
        local_2c = local_60[1];
        if (uVar9 < 0x20) {
          uVar10 = uVar14 >> 5 | uVar9 << 0x1b;
        }
        local_60[0] = iVar7;
        local_60[1] = uVar11;
        local_60[2] = uVar12;
        FUN_0164b86c(&local_40,&local_30,uVar10,uVar14 & 0x1f);
      }
    }
    else {
      if (local_60[2] != 0) goto LAB_0157bd60;
      local_38 = local_60[2];
      local_3c = local_60[1];
      local_40 = local_60[0];
      local_60[0] = iVar7;
      local_60[1] = uVar11;
      local_60[2] = uVar12;
    }
    FUN_0134aee0(0,4,4,4);
    local_60[0] = local_40;
    local_60[1] = local_3c;
    local_60[2] = local_38;
    bVar15 = local_38 <= (uint)local_50[2];
    if (local_50[2] == local_38) {
      iVar7 = local_50[2] << 2;
      do {
        if (iVar7 == 0) goto LAB_0157be28;
        uVar10 = *(uint *)((local_3c - 4) + iVar7);
        uVar9 = *(uint *)((local_50[1] - 4U) + iVar7);
        iVar7 = iVar7 + -4;
        bVar15 = uVar10 <= uVar9;
      } while (uVar9 == uVar10);
    }
    if (bVar15) {
      iVar7 = 0;
      do {
        iVar6 = local_50[iVar7];
        local_50[iVar7] = local_60[iVar7];
        local_60[iVar7] = iVar6;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
    }
LAB_0157be28:
    FUN_0164650c(local_60,local_50[1],local_50[2]);
  }
  if (local_50[0] == -0x80000000) {
    if (*(int *)(local_50[1] + 8) == 0) {
      FUN_0164a9cc(param_1,*(undefined4 *)(local_50[1] + 4),*(undefined4 *)(local_50[1] + 8));
      goto LAB_0157bec8;
    }
  }
  else if (local_50[2] == 0) {
    *param_1 = local_50[0];
    param_1[1] = local_50[1];
    param_1[2] = 0;
    goto LAB_0157bec8;
  }
  if (0x1f < unaff_r6) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("capacity overflow",0x11,&DAT_01cfc148);
  }
  local_28 = local_50[2];
  local_2c = local_50[1];
  local_30 = local_50[0];
  FUN_0164b560(param_1,&local_30,unaff_r5 >> 5 | unaff_r6 << 0x1b,unaff_r5 & 0x1f);
LAB_0157bec8:
  FUN_0134aee0(local_60[0],local_60[1],4,4);
  return;
}

