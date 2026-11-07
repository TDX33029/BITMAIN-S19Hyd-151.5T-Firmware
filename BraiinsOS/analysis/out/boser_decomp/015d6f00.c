// FUN_015d6f00 @ 015d6f00 size=1424 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015d6f00(undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  uint local_54;
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
  uVar3 = local_54 + param_2;
  if (CARRY4(local_54,param_2)) {
LAB_015d7468:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar20 = param_1[1];
  uVar7 = uVar20 + 1;
  uVar4 = uVar20;
  if (7 < uVar20) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar13 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar13 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_015d7468;
      iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar13 = (0xffffffffU >> LZCOUNT((iVar13 + (uVar3 * 8 - iVar13 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,0x2c,4,iVar13);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar13 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 0x2c;
    local_50 = param_1 + 4;
    if (local_54 != 0) {
      puVar18 = (uint *)*param_1;
      uVar8 = *param_3;
      uVar9 = param_3[1];
      uVar3 = ~*puVar18 & 0x80808080;
      uVar10 = param_3[2];
      iVar19 = 0;
      uVar11 = param_3[3];
      puVar6 = puVar18;
      iVar13 = local_2c;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar19 = iVar19 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar19 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar7 = FUN_015f62bc(uVar8,uVar9,uVar10,uVar11,puVar18 + uVar4 * -0xb + -0xb,iVar13);
        uVar20 = local_30 & uVar7;
        uVar16 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
        if (uVar16 == 0) {
          iVar12 = 4;
          do {
            uVar20 = uVar20 + iVar12;
            iVar12 = iVar12 + 4;
            uVar20 = uVar20 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar20 = uVar20 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar20)) {
          uVar20 = *local_34 & 0x80808080;
          uVar20 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                 (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar20) = bVar2;
        *(byte *)((int)local_34 + (uVar20 - 4 & local_30) + 4) = bVar2;
        local_54 = local_54 - 1;
        puVar18 = (uint *)*param_1;
        local_2c = iVar13;
        FUN_01bed4e2(local_34 + ~uVar20 * 0xb,puVar18 + ~uVar4 * 0xb,0x2c);
        iVar13 = local_2c;
      } while (local_54 != 0);
      iVar13 = param_1[3];
    }
    local_38 = iVar13;
    local_3c = local_2c - iVar13;
    iVar13 = 0;
    do {
      puVar6 = (uint *)param_1[iVar13];
      param_1[iVar13] = (&local_44)[iVar13];
      iVar19 = iVar13 + 1;
      (&local_44)[iVar13] = puVar6;
      iVar13 = iVar19;
    } while (iVar19 != 4);
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
      iVar13 = 0;
      do {
        puVar6[-iVar13] = (~(puVar6[-iVar13] >> 7) & 0x1010101) + (puVar6[-iVar13] | 0x7f7f7f7f);
        iVar13 = iVar13 + -1;
      } while (-iVar13 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      uVar8 = *param_3;
      iVar13 = 0;
      uVar9 = param_3[1];
      uVar10 = param_3[2];
      uVar11 = param_3[3];
      uVar3 = 0;
      uVar4 = uVar20;
      do {
        puVar18 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar17 = puVar6;
          while( true ) {
            uVar16 = FUN_015f62bc(uVar8,uVar9,uVar10,uVar11,puVar17 + uVar3 * -0xb + -0xb);
            uVar5 = uVar4 & uVar16;
            uVar14 = *(uint *)((int)puVar17 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar14 == 0) {
              iVar19 = 4;
              do {
                uVar7 = uVar7 + iVar19 & uVar4;
                iVar19 = iVar19 + 4;
                uVar14 = *(uint *)((int)puVar17 + uVar7) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar17 + uVar7)) {
              uVar7 = *puVar17 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar16 >> 0x18);
            if (((uVar7 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar3) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_015d7160;
            }
            cVar1 = *(char *)((int)puVar17 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar7) = bVar2;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar19 = -0x2c;
            do {
              uVar15 = *(undefined4 *)((int)puVar6 + iVar19 + iVar13);
              *(undefined4 *)((int)puVar6 + iVar19 + iVar13) =
                   *(undefined4 *)((int)puVar17 + iVar19 + uVar7 * -0x2c);
              *(undefined4 *)((int)puVar17 + iVar19 + uVar7 * -0x2c) = uVar15;
              iVar19 = iVar19 + 4;
            } while (iVar19 != 0);
            puVar17 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar17 + ~uVar7 * 0xb,puVar6 + ~uVar3 * 0xb,0x2c);
        }
LAB_015d7160:
        iVar13 = iVar13 + -0x2c;
        bVar21 = uVar3 != uVar20;
        uVar3 = uVar3 + 1;
        puVar6 = puVar18;
      } while (bVar21);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}

