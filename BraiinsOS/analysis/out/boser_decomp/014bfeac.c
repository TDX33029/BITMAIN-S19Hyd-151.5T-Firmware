// FUN_014bfeac @ 014bfeac size=1408 calls_out=7 calls_in=2
// strings: Hash table capacity overflow

uint FUN_014bfeac(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar20 = param_1[3];
  uVar3 = uVar20 + param_2;
  if (!CARRY4(uVar20,param_2)) {
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
        iVar10 = (uVar3 & 8) + 8;
        if (uVar3 < 4) {
          iVar10 = 4;
        }
      }
      else {
        if (0x1fffffff < uVar3) goto LAB_014c0404;
        iVar10 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar10 = (0xffffffffU >> LZCOUNT((iVar10 + (uVar3 * 8 - iVar10 >> 1) >> 2) - 1)) + 1;
      }
      FUN_019790d4(&local_34,0xe8,4,iVar10);
      if (local_34 == (uint *)0x0) {
        return local_30;
      }
      FUN_01bed93e(local_34,0xff,local_30 + 5);
      local_40 = local_30;
      local_38 = local_28;
      uStack_4c = 0xe8;
      uStack_48 = 4;
      uVar3 = 0;
      local_3c = local_2c;
      local_44 = local_34;
      local_50 = param_1 + 4;
      if (uVar20 != 0) {
        puVar18 = (uint *)*param_1;
        uVar12 = *param_3;
        iVar17 = 0;
        uVar13 = param_3[1];
        uVar4 = ~*puVar18 & 0x80808080;
        uVar14 = param_3[2];
        uVar8 = param_3[3];
        puVar6 = puVar18;
        iVar10 = local_2c;
        uVar3 = uVar20;
        do {
          if (uVar4 == 0) {
            do {
              puVar6 = puVar6 + 1;
              iVar17 = iVar17 + 4;
            } while ((*puVar6 & 0x80808080) == 0x80808080);
            uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
          }
          uVar7 = iVar17 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar19 = FUN_014c14b4(uVar12,uVar13,uVar14,uVar8,(char)puVar18[uVar7 * -0x3a + -0x3a],
                                *(undefined1 *)((int)puVar18 + uVar7 * -0xe8 + -0xe7),iVar10,uVar3);
          uVar5 = local_30 & uVar19;
          uVar15 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          if (uVar15 == 0) {
            iVar9 = 4;
            do {
              uVar5 = uVar5 + iVar9;
              iVar9 = iVar9 + 4;
              uVar5 = uVar5 & local_30;
              uVar15 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
            } while (uVar15 == 0);
          }
          uVar5 = uVar5 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar5)) {
            uVar5 = *local_34 & 0x80808080;
            uVar5 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
          }
          uVar4 = uVar4 - 1 & uVar4;
          bVar2 = (byte)(uVar19 >> 0x19);
          *(byte *)((int)local_34 + uVar5) = bVar2;
          uVar20 = uVar20 - 1;
          *(byte *)((int)local_34 + (uVar5 - 4 & local_30) + 4) = bVar2;
          local_2c = iVar10;
          FUN_01bed4e2(local_34 + ~uVar5 * 0x3a,puVar18 + ~uVar7 * 0x3a,0xe8);
          iVar10 = local_2c;
        } while (uVar20 != 0);
      }
      local_38 = uVar3;
      local_3c = local_2c - uVar3;
      iVar10 = 0;
      do {
        puVar6 = (uint *)param_1[iVar10];
        param_1[iVar10] = (&local_44)[iVar10];
        iVar17 = iVar10 + 1;
        (&local_44)[iVar10] = puVar6;
        iVar10 = iVar17;
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
        iVar10 = 0;
        do {
          puVar6[-iVar10] = (~(puVar6[-iVar10] >> 7) & 0x1010101) + (puVar6[-iVar10] | 0x7f7f7f7f);
          iVar10 = iVar10 + -1;
        } while (-iVar10 != uVar3);
        if (uVar7 < 4) {
          FUN_01bed864(puVar6 + 1,puVar6);
        }
        else {
          *(uint *)((int)puVar6 + uVar7) = *puVar6;
        }
        uVar8 = *param_3;
        iVar10 = 0;
        uVar12 = param_3[1];
        uVar13 = param_3[2];
        uVar14 = param_3[3];
        uVar3 = 0;
        uVar20 = uVar19;
        do {
          puVar18 = puVar6;
          if (*(char *)((int)puVar6 + uVar3) == -0x80) {
            puVar16 = puVar6;
            while( true ) {
              uVar7 = FUN_014c14b4(uVar8,uVar12,uVar13,uVar14,(char)puVar16[uVar3 * -0x3a + -0x3a],
                                   *(undefined1 *)((int)puVar16 + uVar3 * -0xe8 + -0xe7));
              uVar5 = uVar20 & uVar7;
              uVar15 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
              uVar4 = uVar5;
              if (uVar15 == 0) {
                iVar17 = 4;
                do {
                  uVar4 = uVar4 + iVar17 & uVar20;
                  iVar17 = iVar17 + 4;
                  uVar15 = *(uint *)((int)puVar16 + uVar4) & 0x80808080;
                } while (uVar15 == 0);
              }
              uVar4 = uVar4 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                      uVar20;
              if (-1 < *(char *)((int)puVar16 + uVar4)) {
                uVar4 = *puVar16 & 0x80808080;
                uVar4 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar4 - uVar5 ^ uVar3 - uVar5) & uVar20) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                puVar18 = (uint *)*param_1;
                *(byte *)((int)puVar18 + (uVar20 & uVar3 - 4) + 4) = bVar2;
                goto LAB_014c0110;
              }
              cVar1 = *(char *)((int)puVar16 + uVar4);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar4) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar4 - 4 & uVar20) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar17 = -0xe8;
              do {
                uVar11 = *(undefined4 *)((int)puVar6 + iVar17 + iVar10);
                *(undefined4 *)((int)puVar6 + iVar17 + iVar10) =
                     *(undefined4 *)((int)puVar16 + iVar17 + uVar4 * -0xe8);
                *(undefined4 *)((int)puVar16 + iVar17 + uVar4 * -0xe8) = uVar11;
                iVar17 = iVar17 + 4;
              } while (iVar17 != 0);
              puVar16 = (uint *)*param_1;
              uVar20 = param_1[1];
            }
            uVar20 = param_1[1];
            *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar18 + (uVar20 & uVar3 - 4) + 4) = 0xff;
            FUN_01bed4e2(puVar16 + ~uVar4 * 0x3a,puVar6 + ~uVar3 * 0x3a,0xe8);
          }
LAB_014c0110:
          iVar10 = iVar10 + -0xe8;
          bVar21 = uVar3 != uVar19;
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
LAB_014c0404:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

