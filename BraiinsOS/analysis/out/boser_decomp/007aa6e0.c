// FUN_007aa6e0 @ 007aa6e0 size=1552 calls_out=12 calls_in=2
// strings: 

void FUN_007aa6e0(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  uint local_1e0;
  undefined *local_1dc;
  uint local_1d0;
  uint local_1a0;
  undefined1 *local_19c;
  uint local_198;
  int local_194;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_38;
  uint local_30;
  
  uVar12 = *(uint *)(param_2 + 0x1068);
  if (uVar12 == 1) {
    uVar15 = *(undefined4 *)(param_3 + 0x30);
    iVar17 = *(int *)(param_3 + 0x34);
    if ((iVar17 == *(int *)(*(int *)(param_2 + 0x1064) + 0xb4)) &&
       (iVar14 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(*(int *)(param_2 + 0x1064) + 0xb0),iVar17
                                   ), iVar14 == 0)) {
LAB_007aaac4:
      local_19c = &LAB_01433c48;
      local_1a0 = param_3 + 0x28;
      FUN_00664898(&local_e8,&DAT_005bb41a,&local_1a0);
      *param_1 = local_e8;
      param_1[1] = uStack_e4;
      param_1[2] = uStack_e0;
      FUN_007a910c(param_3);
      return;
    }
  }
  else if (uVar12 == 0) {
    uVar15 = *(undefined4 *)(param_3 + 0x30);
    iVar17 = *(int *)(param_3 + 0x34);
  }
  else {
    uVar15 = *(undefined4 *)(param_3 + 0x30);
    iVar17 = *(int *)(param_3 + 0x34);
    uVar11 = FUN_01af9974(*(undefined4 *)(param_2 + 0x1050),*(undefined4 *)(param_2 + 0x1054),
                          *(undefined4 *)(param_2 + 0x1058),*(undefined4 *)(param_2 + 0x105c),uVar15
                          ,iVar17);
    uVar10 = uVar11 >> 0x19;
    uVar5 = *(uint *)(param_2 + 0x1070);
    iVar7 = *(int *)(param_2 + 0x1064);
    iVar14 = *(int *)(param_2 + 0x106c);
    iVar18 = 0;
    while( true ) {
      uVar11 = uVar5 & uVar11;
      uVar6 = *(uint *)(iVar14 + uVar11);
      uVar4 = uVar6 ^ uVar10 * 0x1010101;
      for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4)
      {
        uVar8 = *(uint *)(iVar14 + -4 +
                         (uVar11 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3)
                         & uVar5) * -4);
        if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,uVar12,&DAT_01d307c8);
        }
        iVar9 = iVar7 + uVar8 * 0xc0;
        if ((iVar17 == *(int *)(iVar9 + 0xb4)) &&
           (iVar9 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar9 + 0xb0),iVar17), iVar9 == 0))
        goto LAB_007aaac4;
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      iVar18 = iVar18 + 4;
      uVar11 = iVar18 + uVar11;
    }
  }
  uVar19 = FUN_013d4df8(uVar15,iVar17);
  iVar14 = (int)((ulonglong)uVar19 >> 0x20);
  uVar12 = FUN_01af9974(*(undefined4 *)(param_2 + 0x1050),*(undefined4 *)(param_2 + 0x1054),
                        *(undefined4 *)(param_2 + 0x1058),*(undefined4 *)(param_2 + 0x105c),uVar19);
  iVar17 = *(int *)(param_2 + 0x1064);
  local_1d0 = *(uint *)(param_2 + 0x1068);
  if (*(int *)(param_2 + 0x1074) == 0) {
    FUN_01afab9c(param_2 + 0x106c,iVar17,local_1d0);
  }
  puVar13 = *(uint **)(param_2 + 0x106c);
  uVar11 = *(uint *)(param_2 + 0x1070);
  piVar16 = (int *)(param_2 + 0x1060);
  bVar2 = false;
  iVar18 = 0;
  bVar3 = false;
  uVar10 = uVar12;
  do {
    local_1dc = &DAT_01d307c8;
    uVar10 = uVar11 & uVar10;
    uVar4 = *(uint *)((int)puVar13 + uVar10);
    uVar5 = uVar4 ^ (uVar12 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = puVar13[-1 - (uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >>
                                     3) & uVar11)];
      if (local_1d0 <= uVar6) {
LAB_007aacd0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,local_1d0,local_1dc);
      }
      iVar7 = iVar17 + uVar6 * 0xc0;
      if ((iVar14 == *(int *)(iVar7 + 0xb4)) &&
         (iVar7 = thunk_FUN_01bed842((int)uVar19,*(undefined4 *)(iVar7 + 0xb0)), iVar7 == 0)) {
        local_1d0 = *(uint *)(param_2 + 0x1068);
        if (local_1d0 <= uVar6) {
          local_1dc = &DAT_01d307d8;
          goto LAB_007aacd0;
        }
        iVar17 = *(int *)(param_2 + 0x1064) + uVar6 * 0xc0;
        FUN_01bed4e2(&local_198,iVar17,0xb0);
        FUN_01bed4e2(iVar17,param_3,0xb0);
        local_1a0 = uVar6;
        if (iVar14 != 0) {
          thunk_FUN_01be4678((int)uVar19);
        }
        goto LAB_007aac44;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_007aa8d0;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar5 = uVar4 & 0x80808080;
      if (uVar5 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_1e0 = uVar10 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                    uVar11;
LAB_007aa8d0:
        if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar18 = iVar18 + 4;
    uVar10 = uVar10 + iVar18;
  } while( true );
  uVar10 = (uint)*(char *)((int)puVar13 + local_1e0);
  if (-1 < (int)uVar10) {
    uVar10 = *puVar13 & 0x80808080;
    uVar5 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)puVar13 + (uVar5 >> 3));
    local_1e0 = uVar5 >> 3;
  }
  uVar6 = *(uint *)(param_2 + 0x1068);
  iVar18 = *(int *)(param_2 + 0x1074);
  iVar17 = *(int *)(param_2 + 0x1078);
  bVar1 = (byte)(uVar12 >> 0x19);
  *(byte *)((int)puVar13 + local_1e0) = bVar1;
  *(byte *)((int)puVar13 + (uVar11 & local_1e0 - 4) + 4) = bVar1;
  puVar13[-1 - local_1e0] = uVar6;
  iVar14 = *(int *)(param_2 + 0x1068);
  *(uint *)(param_2 + 0x1074) = iVar18 - (uVar10 & 1);
  *(int *)(param_2 + 0x1078) = iVar17 + 1;
  if (iVar14 == *(int *)(param_2 + 0x1060)) {
    uVar11 = *(int *)(param_2 + 0x1074) + *(int *)(param_2 + 0x1078);
    uVar10 = 0xaaaaaa;
    if (uVar11 < 0xaaaaaa) {
      uVar10 = uVar11;
    }
    if (1 < uVar10 - iVar14) {
      iVar17 = FUN_01afaa1c(piVar16,iVar14,uVar10 - iVar14,8,0xc0);
      iVar14 = *(int *)(param_2 + 0x1068);
      if (iVar17 == -0x7fffffff) goto LAB_007aabdc;
    }
    FUN_01afa9f8(piVar16,iVar14,1,8,0xc0);
    iVar14 = *(int *)(param_2 + 0x1068);
  }
LAB_007aabdc:
  FUN_01bed4e2(&local_e8,param_3,0xb0);
  local_30 = uVar12;
  local_38 = uVar19;
  if (iVar14 == *piVar16) {
    FUN_01afa998(piVar16);
  }
  FUN_01bed4e2(*(int *)(param_2 + 0x1064) + iVar14 * 0xc0,&local_e8,0xc0);
  *(int *)(param_2 + 0x1068) = iVar14 + 1;
  local_194 = 0;
  local_198 = 2;
  local_1a0 = uVar6;
LAB_007aac44:
  if (local_198 != 2 || local_194 != 0) {
    FUN_007a910c(&local_198);
  }
  *param_1 = 0x80000007;
  param_1[1] = uVar6;
  return;
}

