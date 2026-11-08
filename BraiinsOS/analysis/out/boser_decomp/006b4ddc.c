// FUN_006b4ddc @ 006b4ddc size=1420 calls_out=6 calls_in=3
// strings: Hash table capacity overflow

uint FUN_006b4ddc(undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
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
  
  uVar16 = param_1[3];
  uVar3 = uVar16 + param_2;
  if (!CARRY4(uVar16,param_2)) {
    uVar18 = param_1[1];
    uVar7 = uVar18 + 1;
    uVar4 = uVar18;
    if (7 < uVar18) {
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
        if (0x1fffffff < uVar3) goto LAB_006b5340;
        iVar12 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar12 = (0xffffffffU >> LZCOUNT((iVar12 + (uVar3 * 8 - iVar12 >> 1) >> 2) - 1)) + 1;
      }
      FUN_01412c2c(&local_34,8,4,iVar12);
      if (local_34 == (uint *)0x0) {
        return local_30;
      }
      FUN_01bed93e(local_34,0xff,local_30 + 5);
      local_40 = local_30;
      uVar3 = 0;
      local_4c = 8;
      local_38 = local_28;
      local_3c = local_2c;
      local_44 = local_34;
      local_48 = 4;
      local_50 = param_1 + 4;
      if (uVar16 != 0) {
        uVar8 = *param_3;
        puVar19 = (uint *)*param_1;
        iVar12 = 0;
        uVar9 = param_3[1];
        uVar4 = ~*puVar19 & 0x80808080;
        uVar10 = param_3[2];
        uVar11 = param_3[3];
        puVar6 = puVar19;
        uVar3 = uVar16;
        do {
          if (uVar4 == 0) {
            do {
              puVar6 = puVar6 + 1;
              iVar12 = iVar12 + 4;
            } while ((*puVar6 & 0x80808080) == 0x80808080);
            uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
          }
          uVar7 = iVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar18 = FUN_006c561c(uVar8,uVar9,uVar10,uVar11,puVar19[uVar7 * -2 + -2],
                                puVar19[uVar7 * -2 + -1],local_2c,uVar3);
          uVar5 = local_30 & uVar18;
          uVar14 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          if (uVar14 == 0) {
            iVar17 = 4;
            do {
              uVar5 = uVar5 + iVar17;
              iVar17 = iVar17 + 4;
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
          bVar2 = (byte)(uVar18 >> 0x19);
          *(byte *)((int)local_34 + uVar5) = bVar2;
          uVar16 = uVar16 - 1;
          *(byte *)((int)local_34 + (uVar5 - 4 & local_30) + 4) = bVar2;
          uVar18 = (puVar19 + ~uVar7 * 2)[1];
          local_34[~uVar5 * 2] = puVar19[~uVar7 * 2];
          (local_34 + ~uVar5 * 2)[1] = uVar18;
        } while (uVar16 != 0);
      }
      local_38 = uVar3;
      local_3c = local_2c - uVar3;
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
        uVar8 = *param_3;
        iVar12 = 0;
        uVar9 = param_3[1];
        uVar10 = param_3[2];
        uVar11 = param_3[3];
        uVar3 = 0;
        uVar16 = uVar18;
        do {
          puVar19 = puVar6;
          if (*(char *)((int)puVar6 + uVar3) == -0x80) {
            puVar15 = puVar6;
            while( true ) {
              uVar7 = FUN_006c561c(uVar8,uVar9,uVar10,uVar11,puVar15[uVar3 * -2 + -2],
                                   puVar15[uVar3 * -2 + -1]);
              uVar5 = uVar16 & uVar7;
              uVar14 = *(uint *)((int)puVar15 + uVar5) & 0x80808080;
              uVar4 = uVar5;
              if (uVar14 == 0) {
                iVar17 = 4;
                do {
                  uVar4 = uVar4 + iVar17 & uVar16;
                  iVar17 = iVar17 + 4;
                  uVar14 = *(uint *)((int)puVar15 + uVar4) & 0x80808080;
                } while (uVar14 == 0);
              }
              uVar4 = uVar4 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                      uVar16;
              if (-1 < *(char *)((int)puVar15 + uVar4)) {
                uVar4 = *puVar15 & 0x80808080;
                uVar4 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar4 - uVar5 ^ uVar3 - uVar5) & uVar16) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar15 + uVar3) = bVar2;
                puVar19 = (uint *)*param_1;
                *(byte *)((int)puVar19 + (uVar16 & uVar3 - 4) + 4) = bVar2;
                goto LAB_006b5048;
              }
              cVar1 = *(char *)((int)puVar15 + uVar4);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar4) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar4 - 4 & uVar16) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar17 = -8;
              do {
                uVar13 = *(undefined4 *)((int)puVar6 + iVar17 + iVar12);
                *(undefined4 *)((int)puVar6 + iVar17 + iVar12) =
                     *(undefined4 *)((int)puVar15 + iVar17 + uVar4 * -8);
                *(undefined4 *)((int)puVar15 + iVar17 + uVar4 * -8) = uVar13;
                iVar17 = iVar17 + 4;
              } while (iVar17 != 0);
              puVar15 = (uint *)*param_1;
              uVar16 = param_1[1];
            }
            uVar16 = param_1[1];
            *(undefined1 *)((int)puVar19 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar19 + (uVar16 & uVar3 - 4) + 4) = 0xff;
            uVar7 = (puVar6 + ~uVar3 * 2)[1];
            puVar15[~uVar4 * 2] = puVar6[~uVar3 * 2];
            (puVar15 + ~uVar4 * 2)[1] = uVar7;
          }
LAB_006b5048:
          iVar12 = iVar12 + -8;
          bVar20 = uVar3 != uVar18;
          uVar3 = uVar3 + 1;
          puVar6 = puVar19;
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
LAB_006b5340:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

