// FUN_0126117c @ 0126117c size=2000 calls_out=30 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0126117c(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint **ppuVar10;
  uint **ppuVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int extraout_r2;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint **local_100;
  uint **local_fc;
  uint local_ec;
  uint local_e8;
  int local_e0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int *local_b0;
  undefined1 local_ac;
  uint *local_a8;
  int *local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int iStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_64;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  uint **local_50;
  uint **local_4c;
  uint **local_48;
  undefined4 local_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar22 = *(undefined4 *)(param_2 + 4);
  uVar26 = *(undefined4 *)(param_2 + 8);
  uVar28 = FUN_019aff98(uVar22,uVar26);
  iVar12 = (int)uVar28;
  uVar29 = FUN_019b00d0(uVar22,uVar26);
  iVar19 = extraout_r2;
  if (iVar12 != 0) {
    iVar19 = (int)uVar29;
  }
  if (iVar12 == 0 || (int)uVar29 == 0) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  uVar23 = (uint)*(byte *)(param_2 + 0xd);
  FUN_006643f0(&local_a8,iVar19,(int)((ulonglong)uVar29 >> 0x20));
  if (cVar1 == '\0') {
    uVar23 = 2;
  }
  local_4c = (uint **)&LAB_012b97d8;
  local_50 = &local_a8;
  FUN_00664898(&local_80,&DAT_005ad067,&local_50);
  if (local_a8 != (uint *)0x80000000) {
    FUN_019bb7e0(local_a8,local_a4);
  }
  uVar17 = local_78;
  uVar9 = local_7c;
  uVar8 = local_80;
  local_b4 = 0;
  local_b8 = 4;
  local_bc = 0;
  FUN_019adfac(&local_a8,iVar12,(int)((ulonglong)uVar28 >> 0x20));
  if (local_a8 != (uint *)0x0) {
    *param_1 = (uint)local_a4;
    param_1[1] = local_a0;
LAB_01261294:
    FUN_01261a50(&local_bc);
    goto LAB_0126129c;
  }
  local_b0 = local_a4;
  local_e8 = 0;
  local_ec = 4;
  local_ac = (char)local_a0;
  while (FUN_019bb288(&local_a8,&local_b0), iVar19 = iStack_88, uVar20 = local_9c, uVar18 = local_a0
        , ((uint)local_a8 & 1) != 0) {
    if (local_a0 == 0) {
      *param_1 = local_9c;
      param_1[1] = local_98;
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *local_b0;
        bVar6 = (bool)hasExclusiveAccess(local_b0);
      } while (!bVar6);
      *local_b0 = iVar19 + -1;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(local_b0);
      }
      goto LAB_01261294;
    }
    iVar25 = local_9c - 1;
    local_74 = local_94;
    uStack_70 = local_90;
    uStack_6c = local_8c;
    uStack_64 = uStack_84;
    local_80 = local_a0;
    *(uint *)((uint)&local_80 | 4) = local_9c;
    ((uint *)((uint)&local_80 | 4))[1] = local_98;
    FUN_019a66e4(&local_50,*(undefined4 *)(iStack_88 + 0xc),*(undefined4 *)(iStack_88 + 0x10),
                 local_a0,iVar25);
    ppuVar10 = local_4c;
    iVar12 = FUN_01982d98(local_4c,local_48);
    FUN_019bb7e0(local_50,ppuVar10);
    if (iVar12 != 0) {
      FUN_019a68c8(&local_50,uVar18,uVar20);
      ppuVar10 = local_4c;
      FUN_006643f0(&local_30,local_4c,local_48);
      FUN_0160ec7c(&local_5c,&local_30);
      FUN_019bb7e0(local_50,ppuVar10);
      uVar20 = local_54;
      iVar12 = local_58;
      if ((uVar17 <= local_54) && (iVar13 = thunk_FUN_01bed842(uVar9,local_58,uVar17), iVar13 == 0))
      {
        FUN_01341130(&local_50,iVar12 + uVar17,uVar20 - uVar17);
        ppuVar11 = local_4c;
        ppuVar10 = local_50;
        uVar20 = (uint)local_48 & 0xff;
        iVar13 = FUN_013411b0(local_50,local_4c);
        if (iVar13 != 0) {
          uVar22 = 0;
          if ((int)ppuVar11 < 0) {
LAB_01261930:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar22,local_fc);
          }
          if (ppuVar11 == (uint **)0x0) {
            local_fc = (uint **)&DAT_00000001;
            local_100 = (uint **)0x0;
          }
          else {
            uVar22 = 1;
            local_fc = (uint **)FUN_01298504(ppuVar11,1);
            if (local_fc == (uint **)0x0) {
              local_fc = ppuVar11;
              goto LAB_01261930;
            }
            local_100 = ppuVar11;
          }
          FUN_01bed4e2(local_fc,ppuVar10,ppuVar11);
          FUN_019a66e4(&local_30,*(undefined4 *)(iVar19 + 0xc),*(undefined4 *)(iVar19 + 0x10),uVar18
                       ,iVar25);
          local_50 = local_100;
          local_48 = ppuVar11;
          local_44 = CONCAT31(local_44._1_3_,uVar23 == uVar20);
          local_40 = local_30;
          uStack_3c = uStack_2c;
          uStack_38 = uStack_28;
          local_4c = local_fc;
          if (local_e8 == local_bc) {
            FUN_0126724c(&local_bc);
            local_ec = local_b8;
          }
          local_b4 = local_e8 + 1;
          puVar14 = (undefined4 *)(local_ec + local_e8 * 0x1c);
          *puVar14 = local_50;
          puVar14[1] = local_4c;
          puVar14[2] = local_48;
          puVar14[3] = local_44;
          puVar14[4] = local_40;
          puVar14[5] = uStack_3c;
          puVar14[6] = uStack_38;
          local_e8 = local_b4;
        }
      }
      FUN_019bb7e0(local_5c,iVar12);
    }
    FUN_019db4b0(&local_80);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *local_b0;
    bVar6 = (bool)hasExclusiveAccess(local_b0);
  } while (!bVar6);
  *local_b0 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(local_b0);
  }
  uVar17 = local_b4;
  uVar23 = local_b8;
  uVar18 = local_b8;
  if (1 < local_b4) {
    if (local_b4 < 0x15) {
      iVar12 = 0x1c;
      iVar19 = local_b4 * 0x1c;
      do {
        uVar18 = FUN_012646a0(uVar23,uVar23 + iVar12);
        iVar12 = iVar12 + 0x1c;
      } while (iVar19 != iVar12);
    }
    else {
      uVar18 = FUN_012683ac(local_b8,local_b4);
    }
  }
  uVar28 = thunk_FUN_01bee35a(uVar18,0x2c0);
  puVar21 = (uint *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
  if ((char)puVar21[4] == '\0') {
    FUN_019ae6ac(&local_80);
    *puVar21 = local_80;
    puVar21[1] = local_7c;
    puVar21[2] = local_78;
    puVar21[3] = local_74;
    *(undefined1 *)(puVar21 + 4) = 1;
  }
  local_98 = *puVar21;
  local_94 = puVar21[1];
  local_90 = puVar21[2];
  local_8c = puVar21[3];
  *puVar21 = local_98 + 1;
  puVar21[1] = local_94 + (0xfffffffe < local_98);
  local_a8 = &DAT_0056d238;
  local_a4 = (int *)0x0;
  local_a0 = 0;
  local_9c = 0;
  if (uVar17 != 0) {
    uVar17 = uVar23 + uVar17 * 0x1c;
LAB_01261600:
    uVar27 = local_8c;
    uVar15 = local_90;
    uVar20 = local_94;
    uVar18 = local_98;
    uVar28 = FUN_0126680c(local_98,local_94,local_90,local_8c,*(undefined4 *)(uVar17 - 0x18),
                          *(undefined4 *)(uVar17 - 0x14));
    uVar24 = (uint)uVar28;
    if (local_a0 == 0) {
      FUN_0126917c(&local_a8,(int)((ulonglong)uVar28 >> 0x20),uVar18,uVar20,uVar15,uVar27);
    }
    piVar7 = local_a4;
    puVar21 = local_a8;
    uVar20 = uVar17 - 0x1c;
    uVar18 = uVar24 >> 0x19;
    bVar6 = false;
    local_e0 = 0;
    do {
      uVar24 = (uint)piVar7 & uVar24;
      uVar27 = *(uint *)((int)puVar21 + uVar24);
      uVar15 = uVar27 ^ uVar18 * 0x1010101;
      uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
      while (uVar15 != 0) {
        uVar16 = uVar15 >> 8;
        uVar2 = uVar15 >> 0x10;
        uVar3 = uVar15 >> 0x18;
        uVar4 = uVar15 << 0x18;
        uVar15 = uVar15 - 1 & uVar15;
        if ((*(int *)(uVar17 - 0x14) ==
             *(int *)(puVar21[-1 - (uVar24 + ((uint)LZCOUNT(uVar4 | (uVar16 & 0xff) << 0x10 |
                                                            (uVar2 & 0xff) << 8 | uVar3) >> 3) &
                                   (uint)piVar7)] + 8)) &&
           (iVar19 = thunk_FUN_01bed842(*(undefined4 *)(uVar17 - 0x18),
                                        *(undefined4 *)
                                         (puVar21[-1 - (uVar24 + ((uint)LZCOUNT(uVar4 | (uVar16 & 
                                                  0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3)
                                                  & (uint)piVar7)] + 4)), iVar19 == 0)) {
          FUN_019ac798(&local_80,*(undefined4 *)(uVar17 - 8),*(undefined4 *)(uVar17 - 4));
          if (((char)local_80 == '\x04') || ((local_80 & 0xff) == 4)) goto LAB_01261788;
          *param_1 = local_80;
          param_1[1] = local_7c;
          FUN_01269150(local_a8,local_a4);
          goto LAB_01261294;
        }
      }
      uVar16 = uVar27 & 0x80808080;
      uVar15 = local_e8;
      if (bVar6) {
LAB_0126171c:
        if ((uVar16 & uVar27 << 1) != 0) goto LAB_01261798;
        bVar6 = true;
        local_e8 = uVar15;
      }
      else {
        if (uVar16 != 0) {
          uVar15 = uVar24 + ((uint)LZCOUNT((uVar27 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                   (uint)piVar7;
          goto LAB_0126171c;
        }
        bVar6 = false;
      }
      local_e0 = local_e0 + 4;
      uVar24 = local_e0 + uVar24;
    } while( true );
  }
  *(undefined1 *)param_1 = 4;
LAB_012618b4:
  FUN_01261a50(&local_bc);
LAB_0126129c:
  FUN_019bb7e0(uVar8,uVar9);
  return;
LAB_01261798:
  uVar17 = (uint)*(char *)((int)puVar21 + uVar15);
  if (-1 < (int)uVar17) {
    uVar17 = *puVar21 & 0x80808080;
    uVar15 = LZCOUNT((*puVar21 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
    uVar17 = (uint)*(byte *)((int)puVar21 + (uVar15 >> 3));
    uVar15 = uVar15 >> 3;
  }
  local_a0 = local_a0 - (uVar17 & 1);
  bVar5 = (byte)((ulonglong)uVar28 >> 0x18) >> 1;
  *(byte *)((int)puVar21 + uVar15) = bVar5;
  *(byte *)((int)puVar21 + ((uint)piVar7 & uVar15 - 4) + 4) = bVar5;
  puVar21[-1 - uVar15] = uVar20;
  local_9c = local_9c + 1;
LAB_01261788:
  uVar17 = uVar20;
  if (uVar23 == uVar20) goto LAB_01261868;
  goto LAB_01261600;
LAB_01261868:
  *(undefined1 *)param_1 = 4;
  if ((local_a4 != (int *)0x0) && (iVar19 = (int)local_a4 * 4 + 4, (int)local_a4 + iVar19 != -5)) {
    thunk_FUN_01be4678((int)local_a8 - iVar19);
  }
  goto LAB_012618b4;
}

