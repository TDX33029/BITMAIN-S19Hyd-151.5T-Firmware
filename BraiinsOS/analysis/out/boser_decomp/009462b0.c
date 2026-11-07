// FUN_009462b0 @ 009462b0 size=1444 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_009462b0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar17 = param_1[3];
  uVar3 = uVar17 + param_2;
  if (CARRY4(uVar17,param_2)) {
LAB_0094682c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar19 = param_1[1];
  uVar7 = uVar19 + 1;
  uVar4 = uVar19;
  if (7 < uVar19) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar12 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar12 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_0094682c;
      iVar12 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar12 = (0xffffffffU >> LZCOUNT((iVar12 + (uVar3 * 8 - iVar12 >> 1) >> 2) - 1)) + 1;
    }
    FUN_0125e7e8(&local_34,0x18,8,iVar12);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 8;
    local_4c = 0x18;
    uVar3 = 0;
    local_50 = param_1 + 4;
    if (uVar17 != 0) {
      puVar18 = (uint *)*param_1;
      uVar8 = *param_3;
      uVar9 = param_3[1];
      uVar10 = param_3[2];
      uVar11 = param_3[3];
      uVar4 = ~*puVar18 & 0x80808080;
      iVar12 = 0;
      puVar6 = puVar18;
      uVar3 = uVar17;
      do {
        if (uVar4 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar12 = iVar12 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar19 = iVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
        uVar7 = FUN_00b06a38(uVar8,uVar9,uVar10,uVar11,puVar18[uVar19 * -6 + -6],
                             puVar18[uVar19 * -6 + -5],puVar18[uVar19 * -6 + -4]);
        uVar5 = local_30 & uVar7;
        uVar14 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
        if (uVar14 == 0) {
          iVar16 = 4;
          do {
            uVar5 = uVar5 + iVar16;
            iVar16 = iVar16 + 4;
            uVar5 = uVar5 & local_30;
            uVar14 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          } while (uVar14 == 0);
        }
        uVar5 = uVar5 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar5)) {
          uVar5 = *local_34 & 0x80808080;
          uVar5 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        }
        uVar4 = uVar4 - 1 & uVar4;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar5) = bVar2;
        uVar3 = uVar3 - 1;
        *(byte *)((int)local_34 + (uVar5 - 4 & local_30) + 4) = bVar2;
        FUN_01bed4e2(local_34 + ~uVar5 * 6,puVar18 + ~uVar19 * 6,0x18);
      } while (uVar3 != 0);
      uVar3 = uVar17;
    }
    local_38 = uVar3;
    local_3c = local_2c - uVar3;
    iVar12 = 0;
    do {
      puVar6 = (uint *)param_1[iVar12];
      param_1[iVar12] = (&local_44)[iVar12];
      iVar16 = iVar12 + 1;
      (&local_44)[iVar12] = puVar6;
      iVar12 = iVar16;
    } while (iVar16 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 >> 2;
      if ((uVar7 & 3) != 0) {
        uVar3 = (uVar7 >> 2) + 1;
      }
      puVar6 = (uint *)*param_1;
      iVar12 = 0;
      do {
        puVar6[-iVar12] = (~(puVar6[-iVar12] >> 7) & 0x1010101) + (puVar6[-iVar12] | 0x7f7f7f7f);
        iVar12 = iVar12 + -1;
      } while (-iVar12 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      uVar8 = *param_3;
      iVar12 = 0;
      uVar9 = param_3[1];
      uVar10 = param_3[2];
      uVar11 = param_3[3];
      uVar3 = 0;
      uVar17 = uVar19;
      do {
        puVar18 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar15 = puVar6;
          while( true ) {
            uVar7 = FUN_00b06a38(uVar8,uVar9,uVar10,uVar11,puVar15[uVar3 * -6 + -6],
                                 puVar15[uVar3 * -6 + -5],puVar15[uVar3 * -6 + -4]);
            uVar5 = uVar17 & uVar7;
            uVar14 = *(uint *)((int)puVar15 + uVar5) & 0x80808080;
            uVar4 = uVar5;
            if (uVar14 == 0) {
              iVar16 = 4;
              do {
                uVar4 = uVar4 + iVar16 & uVar17;
                iVar16 = iVar16 + 4;
                uVar14 = *(uint *)((int)puVar15 + uVar4) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar4 = uVar4 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                    uVar17;
            if (-1 < *(char *)((int)puVar15 + uVar4)) {
              uVar4 = *puVar15 & 0x80808080;
              uVar4 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar7 >> 0x18);
            if (((uVar4 - uVar5 ^ uVar3 - uVar5) & uVar17) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar3) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar17 & uVar3 - 4) + 4) = bVar2;
              goto LAB_00946528;
            }
            cVar1 = *(char *)((int)puVar15 + uVar4);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar15 + uVar4) = bVar2;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar4 - 4 & uVar17) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar16 = -0x18;
            do {
              uVar13 = *(undefined4 *)((int)puVar6 + iVar16 + iVar12);
              *(undefined4 *)((int)puVar6 + iVar16 + iVar12) =
                   *(undefined4 *)((int)puVar15 + iVar16 + uVar4 * -0x18);
              *(undefined4 *)((int)puVar15 + iVar16 + uVar4 * -0x18) = uVar13;
              iVar16 = iVar16 + 4;
            } while (iVar16 != 0);
            puVar15 = (uint *)*param_1;
            uVar17 = param_1[1];
          }
          uVar17 = param_1[1];
          *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar17 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar15 + ~uVar4 * 6,puVar6 + ~uVar3 * 6,0x18);
        }
LAB_00946528:
        iVar12 = iVar12 + -0x18;
        bVar20 = uVar3 != uVar19;
        uVar3 = uVar3 + 1;
        puVar6 = puVar18;
      } while (bVar20);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}

