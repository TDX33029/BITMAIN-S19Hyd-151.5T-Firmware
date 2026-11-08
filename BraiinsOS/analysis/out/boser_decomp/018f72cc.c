// FUN_018f72cc @ 018f72cc size=1428 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_018f72cc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar18 = param_1[3];
  uVar3 = iVar18 + 1;
  if (iVar18 == -1) {
LAB_018f7838:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar21 = param_1[1];
  uVar12 = uVar21 + 1;
  uVar15 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  uVar10 = uVar15;
  if (uVar21 < 8) {
    uVar10 = uVar21;
  }
  if (uVar10 >> 1 < uVar3) {
    if (uVar3 < uVar10 + 1) {
      uVar3 = uVar10 + 1;
    }
    if (uVar3 < 0xf) {
      iVar8 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar8 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_018f7838;
      iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_018f66d4(&local_34,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar8 = 0;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    if (iVar18 != 0) {
      puVar13 = (uint *)*param_1;
      uVar3 = ~*puVar13 & 0x80808080;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      iVar20 = 0;
      uVar7 = param_2[3];
      puVar11 = puVar13;
      iVar23 = local_2c;
      iVar8 = iVar18;
      do {
        if (uVar3 == 0) {
          do {
            puVar11 = puVar11 + 1;
            iVar20 = iVar20 + 4;
          } while ((*puVar11 & 0x80808080) == 0x80808080);
          uVar3 = *puVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = iVar20 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar15 = FUN_0192fb20(uVar4,uVar5,uVar6,uVar7,puVar13 + uVar10 * -0x24 + -0x24,iVar23,iVar8)
        ;
        uVar12 = local_30 & uVar15;
        uVar21 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
        if (uVar21 == 0) {
          iVar14 = 4;
          do {
            uVar12 = uVar12 + iVar14;
            iVar14 = iVar14 + 4;
            uVar12 = uVar12 & local_30;
            uVar21 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
          } while (uVar21 == 0);
        }
        uVar12 = uVar12 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar12)) {
          uVar12 = *local_34 & 0x80808080;
          uVar12 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar15 >> 0x19);
        *(byte *)((int)local_34 + uVar12) = bVar2;
        iVar18 = iVar18 + -1;
        *(byte *)((int)local_34 + (uVar12 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar23;
        FUN_01bed4e2(local_34 + ~uVar12 * 0x24,puVar13 + ~uVar10 * 0x24,0x90);
        iVar23 = local_2c;
      } while (iVar18 != 0);
    }
    local_38 = iVar8;
    local_3c = local_2c - iVar8;
    iVar18 = 0;
    do {
      puVar11 = (uint *)param_1[iVar18];
      param_1[iVar18] = (&local_44)[iVar18];
      iVar8 = iVar18 + 1;
      (&local_44)[iVar18] = puVar11;
      iVar18 = iVar8;
    } while (iVar8 != 4);
    if ((local_40 != 0) && (iVar18 = local_40 * 0x90 + 0x90, local_40 + iVar18 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar18);
    }
  }
  else {
    if (uVar12 == 0) {
      uVar15 = 0;
    }
    else {
      uVar3 = uVar12 >> 2;
      if ((uVar12 & 3) != 0) {
        uVar3 = (uVar12 >> 2) + 1;
      }
      puVar11 = (uint *)*param_1;
      iVar8 = 0;
      do {
        puVar11[-iVar8] = (~(puVar11[-iVar8] >> 7) & 0x1010101) + (puVar11[-iVar8] | 0x7f7f7f7f);
        iVar8 = iVar8 + -1;
      } while (-iVar8 != uVar3);
      puVar13 = puVar11 + 1;
      if (uVar12 < 4) {
        FUN_01bed864(puVar13,puVar11);
      }
      else {
        *(uint *)((int)puVar11 + uVar12) = *puVar11;
      }
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar3 = 0;
      puVar19 = puVar11;
      do {
        if (*(char *)((int)puVar11 + uVar3) == -0x80) {
          while( true ) {
            uVar12 = FUN_0192fb20(uVar4,uVar5,uVar6,uVar7,puVar11 + uVar3 * -0x24 + -0x24);
            uVar9 = uVar21 & uVar12;
            uVar16 = *(uint *)((int)puVar11 + uVar9) & 0x80808080;
            uVar10 = uVar9;
            if (uVar16 == 0) {
              iVar8 = 4;
              do {
                uVar10 = uVar10 + iVar8 & uVar21;
                iVar8 = iVar8 + 4;
                uVar16 = *(uint *)((int)puVar11 + uVar10) & 0x80808080;
              } while (uVar16 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                     uVar21;
            if (-1 < *(char *)((int)puVar11 + uVar10)) {
              uVar10 = *puVar11 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar12 >> 0x18);
            if (((uVar10 - uVar9 ^ uVar3 - uVar9) & uVar21) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar11 + uVar3) = bVar2;
              *(byte *)((int)puVar13 + (uVar21 & uVar3 - 4)) = bVar2;
              goto LAB_018f7528;
            }
            cVar1 = *(char *)((int)puVar11 + uVar10);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar11 + uVar10) = bVar2;
            *(byte *)((int)puVar13 + (uVar10 - 4 & uVar21)) = bVar2;
            if (cVar1 == -1) break;
            iVar8 = -0x90;
            do {
              uVar17 = *(undefined4 *)((int)puVar19 + iVar8);
              *(undefined4 *)((int)puVar19 + iVar8) =
                   *(undefined4 *)((int)puVar11 + iVar8 + uVar10 * -0x90);
              *(undefined4 *)((int)puVar11 + iVar8 + uVar10 * -0x90) = uVar17;
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0);
          }
          *(undefined1 *)((int)puVar11 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar21 & uVar3 - 4)) = 0xff;
          FUN_01bed4e2(puVar11 + ~uVar10 * 0x24,puVar11 + ~uVar3 * 0x24,0x90);
        }
LAB_018f7528:
        puVar19 = puVar19 + -0x24;
        bVar22 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
      } while (bVar22);
      if (uVar21 < 8) {
        uVar15 = uVar21;
      }
    }
    param_1[2] = uVar15 - iVar18;
  }
  return 0x80000001;
}

