// FUN_01aaf7f0 @ 01aaf7f0 size=1436 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01aaf7f0(undefined4 *param_1,undefined4 *param_2)

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
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  local_54 = param_1[3];
  uVar3 = local_54 + 1;
  if (local_54 == -1) {
LAB_01aafd64:
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
      if (0x1fffffff < uVar3) goto LAB_01aafd64;
      iVar12 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar12 = (0xffffffffU >> LZCOUNT((iVar12 + (uVar3 * 8 - iVar12 >> 1) >> 2) - 1)) + 1;
    }
    FUN_016c94c4(&local_34,0x160,8,iVar12);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar12 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 8;
    local_4c = 0x160;
    local_50 = param_1 + 4;
    if (local_54 != 0) {
      puVar18 = (uint *)*param_1;
      uVar8 = *param_2;
      uVar9 = param_2[1];
      uVar3 = ~*puVar18 & 0x80808080;
      uVar10 = param_2[2];
      iVar12 = 0;
      uVar11 = param_2[3];
      puVar6 = puVar18;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar12 = iVar12 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar12 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar7 = FUN_01ab33ec(uVar8,uVar9,uVar10,uVar11,puVar18[uVar4 * -0x58 + -0x58],
                             puVar18[uVar4 * -0x58 + -0x57]);
        uVar19 = local_30 & uVar7;
        uVar15 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
        if (uVar15 == 0) {
          iVar17 = 4;
          do {
            uVar19 = uVar19 + iVar17;
            iVar17 = iVar17 + 4;
            uVar19 = uVar19 & local_30;
            uVar15 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
          } while (uVar15 == 0);
        }
        uVar19 = uVar19 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar19)) {
          uVar19 = *local_34 & 0x80808080;
          uVar19 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                 (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar19) = bVar2;
        *(byte *)((int)local_34 + (uVar19 - 4 & local_30) + 4) = bVar2;
        local_54 = local_54 + -1;
        puVar18 = (uint *)*param_1;
        FUN_01bed4e2(local_34 + ~uVar19 * 0x58,puVar18 + ~uVar4 * 0x58,0x160);
      } while (local_54 != 0);
      iVar12 = param_1[3];
    }
    local_38 = iVar12;
    local_3c = local_2c - iVar12;
    iVar12 = 0;
    do {
      puVar6 = (uint *)param_1[iVar12];
      param_1[iVar12] = (&local_44)[iVar12];
      iVar17 = iVar12 + 1;
      (&local_44)[iVar12] = puVar6;
      iVar12 = iVar17;
    } while (iVar17 != 4);
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
      uVar8 = *param_2;
      iVar12 = 0;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      uVar3 = 0;
      uVar4 = uVar19;
      do {
        puVar18 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar16 = puVar6;
          while( true ) {
            uVar15 = FUN_01ab33ec(uVar8,uVar9,uVar10,uVar11,puVar16[uVar3 * -0x58 + -0x58],
                                  puVar16[uVar3 * -0x58 + -0x57]);
            uVar5 = uVar4 & uVar15;
            uVar13 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar13 == 0) {
              iVar17 = 4;
              do {
                uVar7 = uVar7 + iVar17 & uVar4;
                iVar17 = iVar17 + 4;
                uVar13 = *(uint *)((int)puVar16 + uVar7) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar16 + uVar7)) {
              uVar7 = *puVar16 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar15 >> 0x18);
            if (((uVar7 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar3) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01aafa58;
            }
            cVar1 = *(char *)((int)puVar16 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar16 + uVar7) = bVar2;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar17 = -0x160;
            do {
              uVar14 = *(undefined4 *)((int)puVar6 + iVar17 + iVar12);
              *(undefined4 *)((int)puVar6 + iVar17 + iVar12) =
                   *(undefined4 *)((int)puVar16 + iVar17 + uVar7 * -0x160);
              *(undefined4 *)((int)puVar16 + iVar17 + uVar7 * -0x160) = uVar14;
              iVar17 = iVar17 + 4;
            } while (iVar17 != 0);
            puVar16 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar16 + ~uVar7 * 0x58,puVar6 + ~uVar3 * 0x58,0x160);
        }
LAB_01aafa58:
        iVar12 = iVar12 + -0x160;
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

