// FUN_0123d368 @ 0123d368 size=976 calls_out=8 calls_in=2
// strings: capacity overflow

void FUN_0123d368(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (param_3 == 0) {
    uVar5 = param_5 * 4;
    bVar17 = 0x3ffffffe < param_5;
    bVar18 = param_5 == 0x3fffffff;
    uVar6 = 0;
    if (param_5 < 0x40000000) {
      bVar17 = 0x7ffffffb < uVar5;
      bVar18 = uVar5 == 0x7ffffffc;
    }
    if (bVar17 && !bVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar5);
    }
    if (uVar5 == 0) {
      uVar7 = 4;
    }
    else {
      uVar7 = thunk_FUN_016d4a50(uVar5);
      uVar6 = param_5;
      if (uVar7 == 0) goto LAB_0123d6d8;
    }
    *param_1 = uVar6;
    param_1[1] = uVar7;
    FUN_016dd1aa(uVar7,param_4,uVar5);
    param_1[2] = param_5;
    return;
  }
  if (param_5 == 0) {
    uVar5 = param_3 << 2;
    uVar6 = thunk_FUN_016d4a50(uVar5);
    if (uVar6 != 0) {
      *param_1 = param_3;
      param_1[1] = uVar6;
      FUN_016dd1aa(uVar6,param_2,uVar5);
      param_1[2] = param_3;
      return;
    }
LAB_0123d6d8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar5);
  }
  iVar16 = param_3 << 2;
  uVar5 = thunk_FUN_016d4a50(iVar16);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar16);
  }
  FUN_016dd1aa(uVar5,param_2,iVar16);
  iVar14 = param_5 << 2;
  local_38 = param_3;
  local_34 = uVar5;
  local_30 = param_3;
  uVar6 = thunk_FUN_016d4a50(iVar14);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar14);
  }
  FUN_016dd1aa(uVar6,param_4,iVar14);
  uVar7 = 0;
  local_24 = param_5;
  local_2c = param_5;
  iVar8 = iVar14;
  do {
    if (*(int *)(uVar6 + uVar7 * 4) != 0) {
      uVar9 = *(undefined4 *)(uVar6 + uVar7 * 4);
      bVar15 = (byte)uVar9;
      bVar1 = (byte)((uint)uVar9 >> 8);
      bVar2 = (byte)((uint)uVar9 >> 0x10);
      bVar4 = (byte)((uint)uVar9 >> 0x18);
      uVar10 = LZCOUNT((uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 |
                                        bVar15 >> 2 & 1) << 1 | bVar15 >> 3 & 1) << 1 |
                                      bVar15 >> 4 & 1) << 1 | bVar15 >> 5 & 1) << 1 |
                                    bVar15 >> 6 & 1) << 1 | bVar15 >> 7) << 0x18 |
                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                        << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                     bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                               bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                             bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 8 |
                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7));
      param_4 = uVar10 + uVar7 * 0x20;
      param_5 = (uVar7 >> 0x1b) + (uint)CARRY4(uVar10,uVar7 * 0x20);
      bVar4 = 1;
      goto LAB_0123d48c;
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + -4;
  } while (iVar8 != 0);
  bVar4 = 0;
LAB_0123d48c:
  uVar7 = 0;
  do {
    if (*(int *)(uVar5 + uVar7 * 4) != 0) {
      uVar9 = *(undefined4 *)(uVar5 + uVar7 * 4);
      uVar10 = uVar7 >> 0x1b;
      bVar1 = (byte)uVar9;
      bVar2 = (byte)((uint)uVar9 >> 8);
      bVar3 = (byte)((uint)uVar9 >> 0x10);
      bVar15 = (byte)((uint)uVar9 >> 0x18);
      uVar11 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                        << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                     bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                               bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                             bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 8
                       | (uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 |
                                          bVar15 >> 2 & 1) << 1 | bVar15 >> 3 & 1) << 1 |
                                        bVar15 >> 4 & 1) << 1 | bVar15 >> 5 & 1) << 1 |
                                      bVar15 >> 6 & 1) << 1 | bVar15 >> 7));
      uVar5 = uVar7 * 0x20;
      uVar7 = uVar11 + uVar5;
      uVar10 = uVar10 + CARRY4(uVar11,uVar5);
      bVar15 = 1;
      goto LAB_0123d4d4;
    }
    uVar7 = uVar7 + 1;
    iVar16 = iVar16 + -4;
  } while (iVar16 != 0);
  bVar15 = 0;
  uVar10 = 0;
LAB_0123d4d4:
  if (uVar10 <= param_5 && (uint)(param_4 <= uVar7) <= uVar10 - param_5) {
    param_5 = uVar10;
    param_4 = uVar7;
  }
  if (!(bool)(bVar15 & bVar4)) {
    param_4 = 0;
    param_5 = 0;
  }
  uVar5 = 0;
  do {
    if (*(int *)(uVar6 + uVar5 * 4) != 0) {
      uVar9 = *(undefined4 *)(uVar6 + uVar5 * 4);
      bVar15 = (byte)uVar9;
      bVar1 = (byte)((uint)uVar9 >> 8);
      bVar2 = (byte)((uint)uVar9 >> 0x10);
      bVar4 = (byte)((uint)uVar9 >> 0x18);
      uVar7 = LZCOUNT((uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 | bVar15 >> 2 & 1
                                       ) << 1 | bVar15 >> 3 & 1) << 1 | bVar15 >> 4 & 1) << 1 |
                                    bVar15 >> 5 & 1) << 1 | bVar15 >> 6 & 1) << 1 | bVar15 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 8 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7));
      iVar16 = uVar7 + uVar5 * 0x20;
      iVar14 = (uVar5 >> 0x1b) + (uint)CARRY4(uVar7,uVar5 * 0x20);
      goto LAB_0123d53c;
    }
    uVar5 = uVar5 + 1;
    iVar14 = iVar14 + -4;
  } while (iVar14 != 0);
  iVar16 = 0;
  iVar14 = 0;
  uVar7 = 0;
LAB_0123d53c:
  local_28 = uVar6;
  FUN_0123d7b0(&local_2c,uVar7,iVar16,iVar14);
  uVar5 = local_24;
  uVar6 = local_2c;
  while (local_30 != 0) {
    iVar16 = local_30 << 2;
    uVar7 = 0;
    do {
      if (*(int *)(local_34 + uVar7 * 4) != 0) {
        uVar9 = *(undefined4 *)(local_34 + uVar7 * 4);
        bVar15 = (byte)uVar9;
        bVar1 = (byte)((uint)uVar9 >> 8);
        bVar2 = (byte)((uint)uVar9 >> 0x10);
        bVar4 = (byte)((uint)uVar9 >> 0x18);
        uVar10 = LZCOUNT((uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 |
                                          bVar15 >> 2 & 1) << 1 | bVar15 >> 3 & 1) << 1 |
                                        bVar15 >> 4 & 1) << 1 | bVar15 >> 5 & 1) << 1 |
                                      bVar15 >> 6 & 1) << 1 | bVar15 >> 7) << 0x18 |
                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                         0x10 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                 bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 8 |
                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7));
        iVar16 = uVar10 + uVar7 * 0x20;
        iVar14 = (uVar7 >> 0x1b) + (uint)CARRY4(uVar10,uVar7 * 0x20);
        goto LAB_0123d5b8;
      }
      uVar7 = uVar7 + 1;
      iVar16 = iVar16 + -4;
    } while (iVar16 != 0);
    iVar16 = 0;
    iVar14 = 0;
    uVar10 = local_34;
LAB_0123d5b8:
    FUN_0123d7b0(&local_38,uVar10,iVar16,iVar14);
    uVar7 = local_34;
    bVar18 = local_30 <= uVar5;
    uVar10 = uVar5;
    uVar11 = uVar6;
    if (uVar5 == local_30) {
      iVar16 = uVar5 << 2;
      do {
        if (iVar16 == 0) goto LAB_0123d554;
        uVar12 = *(uint *)((local_34 - 4) + iVar16);
        uVar13 = *(uint *)((local_28 - 4) + iVar16);
        iVar16 = iVar16 + -4;
        bVar18 = uVar12 <= uVar13;
      } while (uVar13 == uVar12);
    }
    if (bVar18) {
      local_34 = local_28;
      local_28 = uVar7;
      uVar10 = local_30;
      uVar11 = local_38;
      local_38 = uVar6;
      local_30 = uVar5;
    }
LAB_0123d554:
    FUN_01273cac(&local_38,local_28,uVar10);
    uVar5 = uVar10;
    uVar6 = uVar11;
  }
  local_2c = uVar6;
  local_24 = uVar5;
  if (uVar6 == 0x80000000) {
    if (*(int *)(local_28 + 8) != 0) {
LAB_0123d658:
      if (0x1f < param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("capacity overflow",0x11,&DAT_0188ac18);
      }
      FUN_0127ae58(param_1,&local_2c,param_4 >> 5 | param_5 << 0x1b,param_4 & 0x1f);
      goto joined_r0x0123d680;
    }
    uVar7 = 4;
    uVar6 = 0;
  }
  else {
    uVar7 = local_28;
    if (uVar5 != 0) goto LAB_0123d658;
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = 0;
joined_r0x0123d680:
  if (local_38 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_34);
  return;
}

