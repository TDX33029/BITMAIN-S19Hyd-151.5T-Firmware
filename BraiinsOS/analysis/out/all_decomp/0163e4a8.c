// FUN_0163e4a8 @ 0163e4a8 size=1752 calls_out=4 calls_in=2
// strings: assertion failed: self.tail.is_none()

void FUN_0163e4a8(uint *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_2[2] != 0) {
    uVar15 = 0;
    uVar8 = 0;
    lVar6 = *(longlong *)param_2;
    goto LAB_0163eb00;
  }
  if (param_2[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.tail.is_none()",0x25,&DAT_018acf1c);
  }
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[4];
  uVar8 = *(uint *)(uVar15 + 0x204);
  uVar12 = *(uint *)(uVar15 + 0x200);
  if (uVar12 == 0 && uVar8 == 0) {
    uVar12 = *(uint *)(uVar15 + 0x410);
    uVar8 = *(uint *)(uVar15 + 0x414);
    *param_1 = 0;
    param_1[1] = 0;
    if (uVar12 == 0 && uVar8 == 0) {
      uVar12 = *(uint *)(uVar15 + 0x620);
      uVar8 = *(uint *)(uVar15 + 0x624);
      if (uVar12 == 0 && uVar8 == 0) {
        uVar12 = *(uint *)(uVar15 + 0x830);
        uVar8 = *(uint *)(uVar15 + 0x834);
        if (uVar12 == 0 && uVar8 == 0) {
          uVar12 = *(uint *)(uVar15 + 0xa40);
          uVar8 = *(uint *)(uVar15 + 0xa44);
          if (uVar12 == 0 && uVar8 == 0) {
            FUN_01653a5c(param_1,*(undefined4 *)(uVar15 + 0xc58),*(undefined4 *)(uVar15 + 0xc50),
                         *(undefined4 *)(uVar15 + 0xc54),*(undefined4 *)(uVar15 + 0xc58));
            if ((*param_1 & 1) == 0) {
              *param_1 = 0;
              param_1[1] = 0;
            }
            return;
          }
          uVar15 = *(uint *)(uVar15 + 0xa48);
          iVar10 = 1;
          if (uVar15 != 0) {
            iVar9 = 0x40;
            for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (iVar10 = iVar9 * iVar10, uVar11 != 1));
                uVar11 = uVar11 >> 1) {
              iVar9 = iVar9 * iVar9;
            }
            if (iVar10 == 0) goto LAB_0163eb74;
          }
          uVar7 = FUN_01846088(uVar13,uVar14,iVar10,0);
          uVar11 = uVar12;
          if ((uVar7 & 0x20) == 0) {
            uVar11 = uVar8;
            uVar8 = uVar12;
          }
          uVar12 = (uVar8 << 1) << (~uVar7 & 0x1f) | uVar11 >> (uVar7 & 0x1f);
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar1 = (byte)(uVar12 >> 0x18);
          uVar8 = (uVar11 << 1) << (~uVar7 & 0x1f) | uVar8 >> (uVar7 & 0x1f);
          iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                            bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                          bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                        bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                            bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                          bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                        bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                            bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                          bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                        bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
          bVar3 = (byte)uVar8;
          bVar4 = (byte)(uVar8 >> 8);
          bVar5 = (byte)(uVar8 >> 0x10);
          bVar1 = (byte)(uVar8 >> 0x18);
          if (uVar8 != 0) {
            iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                              bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                            bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
          }
          uVar8 = iVar10 + uVar7 & 0x3f;
          if (uVar15 == 0) goto LAB_0163eacc;
          iVar10 = 0x40;
          uVar11 = 1;
          for (uVar12 = uVar15; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
              uVar12 = uVar12 >> 1) {
            iVar10 = iVar10 * iVar10;
          }
          uVar12 = uVar11 >> 0x1a;
          iVar10 = uVar11 * 0x40;
          iVar9 = 0x40;
          uVar7 = 1;
          for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (uVar7 = iVar9 * uVar7, uVar11 != 1));
              uVar11 = uVar11 >> 1) {
            iVar9 = iVar9 * iVar9;
          }
        }
        else {
          uVar15 = *(uint *)(uVar15 + 0x838);
          iVar10 = 1;
          if (uVar15 != 0) {
            iVar9 = 0x40;
            for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (iVar10 = iVar9 * iVar10, uVar11 != 1));
                uVar11 = uVar11 >> 1) {
              iVar9 = iVar9 * iVar9;
            }
            if (iVar10 == 0) {
LAB_0163eb74:
                    /* WARNING: Subroutine does not return */
              FUN_00faf2a4(&DAT_018acf2c);
            }
          }
          uVar7 = FUN_01846088(uVar13,uVar14,iVar10,0);
          uVar11 = uVar12;
          if ((uVar7 & 0x20) == 0) {
            uVar11 = uVar8;
            uVar8 = uVar12;
          }
          uVar12 = (uVar8 << 1) << (~uVar7 & 0x1f) | uVar11 >> (uVar7 & 0x1f);
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar1 = (byte)(uVar12 >> 0x18);
          uVar8 = (uVar11 << 1) << (~uVar7 & 0x1f) | uVar8 >> (uVar7 & 0x1f);
          iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                            bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                          bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                        bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                            bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                          bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                        bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                            bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                          bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                        bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
          bVar3 = (byte)uVar8;
          bVar4 = (byte)(uVar8 >> 8);
          bVar5 = (byte)(uVar8 >> 0x10);
          bVar1 = (byte)(uVar8 >> 0x18);
          if (uVar8 != 0) {
            iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                              bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                            bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
          }
          uVar8 = iVar10 + uVar7 & 0x3f;
          if (uVar15 == 0) {
LAB_0163eacc:
            uVar7 = 1;
            uVar12 = 0;
            iVar10 = 0x40;
          }
          else {
            iVar10 = 0x40;
            uVar11 = 1;
            for (uVar12 = uVar15; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
                uVar12 = uVar12 >> 1) {
              iVar10 = iVar10 * iVar10;
            }
            uVar12 = uVar11 >> 0x1a;
            iVar10 = uVar11 * 0x40;
            iVar9 = 0x40;
            uVar7 = 1;
            for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (uVar7 = iVar9 * uVar7, uVar11 != 1));
                uVar11 = uVar11 >> 1) {
              iVar9 = iVar9 * iVar9;
            }
          }
        }
      }
      else {
        uVar15 = *(uint *)(uVar15 + 0x628);
        iVar10 = 1;
        if (uVar15 != 0) {
          iVar9 = 0x40;
          for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (iVar10 = iVar9 * iVar10, uVar11 != 1));
              uVar11 = uVar11 >> 1) {
            iVar9 = iVar9 * iVar9;
          }
          if (iVar10 == 0) goto LAB_0163eb74;
        }
        uVar7 = FUN_01846088(uVar13,uVar14,iVar10,0);
        uVar11 = uVar12;
        if ((uVar7 & 0x20) == 0) {
          uVar11 = uVar8;
          uVar8 = uVar12;
        }
        uVar12 = (uVar8 << 1) << (~uVar7 & 0x1f) | uVar11 >> (uVar7 & 0x1f);
        bVar3 = (byte)uVar12;
        bVar4 = (byte)(uVar12 >> 8);
        bVar5 = (byte)(uVar12 >> 0x10);
        bVar1 = (byte)(uVar12 >> 0x18);
        uVar8 = (uVar11 << 1) << (~uVar7 & 0x1f) | uVar8 >> (uVar7 & 0x1f);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
        bVar3 = (byte)uVar8;
        bVar4 = (byte)(uVar8 >> 8);
        bVar5 = (byte)(uVar8 >> 0x10);
        bVar1 = (byte)(uVar8 >> 0x18);
        if (uVar8 != 0) {
          iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                            bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                          bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                        bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                            bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                          bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                        bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                            bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                          bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                        bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        }
        uVar8 = iVar10 + uVar7 & 0x3f;
        if (uVar15 == 0) goto LAB_0163eacc;
        iVar10 = 0x40;
        uVar11 = 1;
        for (uVar12 = uVar15; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
            uVar12 = uVar12 >> 1) {
          iVar10 = iVar10 * iVar10;
        }
        uVar12 = uVar11 >> 0x1a;
        iVar10 = uVar11 * 0x40;
        iVar9 = 0x40;
        uVar7 = 1;
        for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (uVar7 = iVar9 * uVar7, uVar11 != 1));
            uVar11 = uVar11 >> 1) {
          iVar9 = iVar9 * iVar9;
        }
      }
    }
    else {
      uVar15 = *(uint *)(uVar15 + 0x418);
      iVar10 = 1;
      if (uVar15 != 0) {
        iVar9 = 0x40;
        for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (iVar10 = iVar9 * iVar10, uVar11 != 1));
            uVar11 = uVar11 >> 1) {
          iVar9 = iVar9 * iVar9;
        }
        if (iVar10 == 0) goto LAB_0163eb74;
      }
      uVar7 = FUN_01846088(uVar13,uVar14,iVar10,0);
      uVar11 = uVar12;
      if ((uVar7 & 0x20) == 0) {
        uVar11 = uVar8;
        uVar8 = uVar12;
      }
      uVar12 = (uVar8 << 1) << (~uVar7 & 0x1f) | uVar11 >> (uVar7 & 0x1f);
      bVar3 = (byte)uVar12;
      bVar4 = (byte)(uVar12 >> 8);
      bVar5 = (byte)(uVar12 >> 0x10);
      bVar1 = (byte)(uVar12 >> 0x18);
      uVar8 = (uVar11 << 1) << (~uVar7 & 0x1f) | uVar8 >> (uVar7 & 0x1f);
      iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) +
               0x20;
      bVar3 = (byte)uVar8;
      bVar4 = (byte)(uVar8 >> 8);
      bVar5 = (byte)(uVar8 >> 0x10);
      bVar1 = (byte)(uVar8 >> 0x18);
      if (uVar8 != 0) {
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      }
      uVar8 = iVar10 + uVar7 & 0x3f;
      if (uVar15 == 0) goto LAB_0163eacc;
      iVar10 = 0x40;
      uVar11 = 1;
      for (uVar12 = uVar15; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
          uVar12 = uVar12 >> 1) {
        iVar10 = iVar10 * iVar10;
      }
      uVar12 = uVar11 >> 0x1a;
      iVar10 = uVar11 * 0x40;
      iVar9 = 0x40;
      uVar7 = 1;
      for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (uVar7 = iVar9 * uVar7, uVar11 != 1));
          uVar11 = uVar11 >> 1) {
        iVar9 = iVar9 * iVar9;
      }
    }
  }
  else {
    uVar15 = *(uint *)(uVar15 + 0x208);
    iVar10 = 1;
    if (uVar15 != 0) {
      iVar9 = 0x40;
      for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (iVar10 = iVar9 * iVar10, uVar11 != 1));
          uVar11 = uVar11 >> 1) {
        iVar9 = iVar9 * iVar9;
      }
      if (iVar10 == 0) goto LAB_0163eb74;
    }
    uVar7 = FUN_01846088(uVar13,uVar14,iVar10,0);
    uVar11 = uVar12;
    if ((uVar7 & 0x20) == 0) {
      uVar11 = uVar8;
      uVar8 = uVar12;
    }
    uVar12 = (uVar8 << 1) << (~uVar7 & 0x1f) | uVar11 >> (uVar7 & 0x1f);
    bVar3 = (byte)uVar12;
    bVar4 = (byte)(uVar12 >> 8);
    bVar5 = (byte)(uVar12 >> 0x10);
    bVar1 = (byte)(uVar12 >> 0x18);
    uVar8 = (uVar11 << 1) << (~uVar7 & 0x1f) | uVar8 >> (uVar7 & 0x1f);
    iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                      1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                   bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20
    ;
    bVar3 = (byte)uVar8;
    bVar4 = (byte)(uVar8 >> 8);
    bVar5 = (byte)(uVar8 >> 0x10);
    bVar1 = (byte)(uVar8 >> 0x18);
    if (uVar8 != 0) {
      iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    }
    uVar8 = iVar10 + uVar7 & 0x3f;
    if (uVar15 == 0) goto LAB_0163eacc;
    iVar10 = 0x40;
    uVar11 = 1;
    for (uVar12 = uVar15; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
        uVar12 = uVar12 >> 1) {
      iVar10 = iVar10 * iVar10;
    }
    uVar12 = uVar11 >> 0x1a;
    iVar10 = uVar11 * 0x40;
    iVar9 = 0x40;
    uVar7 = 1;
    for (uVar11 = uVar15; ((uVar11 & 1) == 0 || (uVar7 = iVar9 * uVar7, uVar11 != 1));
        uVar11 = uVar11 >> 1) {
      iVar9 = iVar9 * iVar9;
    }
  }
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar7 +
          CONCAT44(uVar14 & -(uVar12 + (iVar10 != 0)),uVar13 & -iVar10);
  uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar6 = lVar2 + CONCAT44(uVar12,iVar10);
  if (uVar14 <= uVar11 && (uint)((uint)lVar2 <= uVar13) <= uVar14 - uVar11) {
    lVar6 = lVar2;
  }
LAB_0163eb00:
  param_1[5] = uVar8;
  *(longlong *)(param_1 + 2) = lVar6;
  param_1[4] = uVar15;
  *param_1 = 1;
  param_1[1] = 0;
  return;
}

