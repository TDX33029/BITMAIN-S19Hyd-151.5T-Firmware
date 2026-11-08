// FUN_015d694c @ 015d694c size=1452 calls_out=7 calls_in=2
// strings: Hash table capacity overflow

uint FUN_015d694c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
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
  
  uVar18 = param_1[3];
  uVar4 = uVar18 + param_2;
  if (!CARRY4(uVar18,param_2)) {
    uVar22 = param_1[1];
    uVar12 = uVar22 + 1;
    uVar9 = uVar22;
    if (7 < uVar22) {
      uVar9 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
    }
    if (uVar9 >> 1 < uVar4) {
      if (uVar4 < uVar9 + 1) {
        uVar4 = uVar9 + 1;
      }
      if (uVar4 < 0xf) {
        iVar15 = (uVar4 & 8) + 8;
        if (uVar4 < 4) {
          iVar15 = 4;
        }
      }
      else {
        if (0x1fffffff < uVar4) goto LAB_015d6ed0;
        iVar15 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
        iVar15 = (0xffffffffU >> LZCOUNT((iVar15 + (uVar4 * 8 - iVar15 >> 1) >> 2) - 1)) + 1;
      }
      FUN_014533a8(&local_34,0x32,4,iVar15);
      if (local_34 == (uint *)0x0) {
        return local_30;
      }
      FUN_01bed93e(local_34,0xff,local_30 + 5);
      local_38 = local_28;
      local_40 = local_30;
      uVar4 = 0;
      local_3c = local_2c;
      local_44 = local_34;
      local_48 = 4;
      local_4c = 0x32;
      local_50 = param_1 + 4;
      if (uVar18 != 0) {
        puVar21 = (uint *)*param_1;
        iVar20 = 0;
        uVar9 = ~*puVar21 & 0x80808080;
        uVar5 = *param_3;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        puVar11 = puVar21;
        iVar15 = local_2c;
        uVar4 = uVar18;
        do {
          if (uVar9 == 0) {
            do {
              puVar11 = puVar11 + 1;
              iVar20 = iVar20 + 4;
            } while ((*puVar11 & 0x80808080) == 0x80808080);
            uVar9 = *puVar11 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar20 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3);
          uVar22 = FUN_015f6a28(uVar5,uVar6,uVar7,uVar8,(int)puVar21 + uVar12 * -0x32 + -0x32,iVar15
                                ,uVar4);
          uVar10 = local_30 & uVar22;
          uVar16 = *(uint *)((int)local_34 + uVar10) & 0x80808080;
          if (uVar16 == 0) {
            iVar14 = 4;
            do {
              uVar10 = uVar10 + iVar14;
              iVar14 = iVar14 + 4;
              uVar10 = uVar10 & local_30;
              uVar16 = *(uint *)((int)local_34 + uVar10) & 0x80808080;
            } while (uVar16 == 0);
          }
          uVar10 = uVar10 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar10)) {
            uVar10 = *local_34 & 0x80808080;
            uVar10 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                   (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
          }
          uVar9 = uVar9 - 1 & uVar9;
          bVar3 = (byte)(uVar22 >> 0x19);
          *(byte *)((int)local_34 + uVar10) = bVar3;
          uVar18 = uVar18 - 1;
          *(byte *)((int)local_34 + (uVar10 - 4 & local_30) + 4) = bVar3;
          local_2c = iVar15;
          FUN_01bed4e2(~uVar10 * 0x32 + (int)local_34,~uVar12 * 0x32 + (int)puVar21,0x32);
          iVar15 = local_2c;
        } while (uVar18 != 0);
      }
      local_38 = uVar4;
      local_3c = local_2c - uVar4;
      iVar15 = 0;
      do {
        puVar11 = (uint *)param_1[iVar15];
        param_1[iVar15] = (&local_44)[iVar15];
        iVar20 = iVar15 + 1;
        (&local_44)[iVar15] = puVar11;
        iVar15 = iVar20;
      } while (iVar20 != 4);
      FUN_016660b8(&local_50);
    }
    else {
      if (uVar12 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar12 >> 2;
        if ((uVar12 & 3) != 0) {
          uVar4 = (uVar12 >> 2) + 1;
        }
        puVar11 = (uint *)*param_1;
        iVar15 = 0;
        do {
          puVar11[-iVar15] =
               (~(puVar11[-iVar15] >> 7) & 0x1010101) + (puVar11[-iVar15] | 0x7f7f7f7f);
          iVar15 = iVar15 + -1;
        } while (-iVar15 != uVar4);
        if (uVar12 < 4) {
          FUN_01bed864(puVar11 + 1,puVar11);
        }
        else {
          *(uint *)((int)puVar11 + uVar12) = *puVar11;
        }
        uVar5 = *param_3;
        iVar15 = 0;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        uVar4 = 0;
        uVar18 = uVar22;
        do {
          puVar21 = puVar11;
          if (*(char *)((int)puVar11 + uVar4) == -0x80) {
            iVar20 = ~uVar4 * 0x32 + (int)puVar11;
            puVar17 = puVar11;
            while( true ) {
              uVar12 = FUN_015f6a28(uVar5,uVar6,uVar7,uVar8,(int)puVar17 + uVar4 * -0x32 + -0x32);
              uVar10 = uVar18 & uVar12;
              uVar16 = *(uint *)((int)puVar17 + uVar10) & 0x80808080;
              uVar9 = uVar10;
              if (uVar16 == 0) {
                iVar14 = 4;
                do {
                  uVar9 = uVar9 + iVar14 & uVar18;
                  iVar14 = iVar14 + 4;
                  uVar16 = *(uint *)((int)puVar17 + uVar9) & 0x80808080;
                } while (uVar16 == 0);
              }
              uVar9 = uVar9 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                      uVar18;
              if (-1 < *(char *)((int)puVar17 + uVar9)) {
                uVar9 = *puVar17 & 0x80808080;
                uVar9 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                      (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
              }
              bVar3 = (byte)(uVar12 >> 0x18);
              if (((uVar9 - uVar10 ^ uVar4 - uVar10) & uVar18) < 4) {
                bVar3 = bVar3 >> 1;
                *(byte *)((int)puVar17 + uVar4) = bVar3;
                puVar21 = (uint *)*param_1;
                *(byte *)((int)puVar21 + (uVar18 & uVar4 - 4) + 4) = bVar3;
                goto LAB_015d6bd8;
              }
              cVar1 = *(char *)((int)puVar17 + uVar9);
              bVar3 = bVar3 >> 1;
              *(byte *)((int)puVar17 + uVar9) = bVar3;
              puVar21 = (uint *)*param_1;
              iVar14 = ~uVar9 * 0x32 + (int)puVar17;
              *(byte *)((int)puVar21 + (uVar9 - 4 & uVar18) + 4) = bVar3;
              if (cVar1 == -1) break;
              iVar13 = 0x32;
              do {
                uVar19 = *(undefined4 *)((int)puVar11 + (iVar15 - iVar13));
                *(undefined4 *)((int)puVar11 + (iVar15 - iVar13)) =
                     *(undefined4 *)((int)puVar17 + (uVar9 * -0x32 - iVar13));
                *(undefined4 *)((int)puVar17 + (uVar9 * -0x32 - iVar13)) = uVar19;
                iVar13 = iVar13 + -4;
              } while (iVar13 != 2);
              uVar2 = *(undefined2 *)(iVar14 + 0x30);
              *(undefined2 *)(iVar14 + 0x30) = *(undefined2 *)(iVar20 + 0x30);
              *(undefined2 *)(iVar20 + 0x30) = uVar2;
              puVar17 = (uint *)*param_1;
              uVar18 = param_1[1];
            }
            uVar18 = param_1[1];
            *(undefined1 *)((int)puVar21 + uVar4) = 0xff;
            *(undefined1 *)((int)puVar21 + (uVar18 & uVar4 - 4) + 4) = 0xff;
            FUN_01bed4e2(iVar14,iVar20,0x32);
          }
LAB_015d6bd8:
          iVar15 = iVar15 + -0x32;
          bVar23 = uVar4 != uVar22;
          uVar4 = uVar4 + 1;
          puVar11 = puVar21;
        } while (bVar23);
        uVar4 = param_1[1];
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 & 0xfffffff8) - (uVar4 + 1 >> 3);
        }
      }
      param_1[2] = uVar4 - param_1[3];
    }
    return 0x80000001;
  }
LAB_015d6ed0:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

