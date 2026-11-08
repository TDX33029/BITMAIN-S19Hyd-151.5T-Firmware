// FUN_01aa37a0 @ 01aa37a0 size=1420 calls_out=7 calls_in=8
// strings: Hash table capacity overflow

uint FUN_01aa37a0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + param_2;
  if (!CARRY4(uVar15,param_2)) {
    uVar14 = param_1[1];
    uVar7 = uVar14 + 1;
    uVar4 = uVar14;
    if (7 < uVar14) {
      uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
    }
    if (uVar4 >> 1 < uVar3) {
      if (uVar3 < uVar4 + 1) {
        uVar3 = uVar4 + 1;
      }
      if (uVar3 < 0xf) {
        iVar9 = (uVar3 & 8) + 8;
        if (uVar3 < 4) {
          iVar9 = 4;
        }
      }
      else {
        if (0x1fffffff < uVar3) goto LAB_01aa3d04;
        iVar9 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar9 = (0xffffffffU >> LZCOUNT((iVar9 + (uVar3 * 8 - iVar9 >> 1) >> 2) - 1)) + 1;
      }
      FUN_019790d4(&local_34,0x18,4,iVar9);
      if (local_34 == (uint *)0x0) {
        return local_30;
      }
      FUN_01bed93e(local_34,0xff,local_30 + 5);
      local_38 = local_28;
      local_40 = local_30;
      uVar3 = 0;
      local_3c = local_2c;
      local_44 = local_34;
      if (uVar15 != 0) {
        puVar17 = (uint *)*param_1;
        iVar16 = 0;
        uVar4 = ~*puVar17 & 0x80808080;
        puVar6 = puVar17;
        iVar9 = local_2c;
        uVar3 = uVar15;
        do {
          if (uVar4 == 0) {
            do {
              puVar6 = puVar6 + 1;
              iVar16 = iVar16 + 4;
            } while ((*puVar6 & 0x80808080) == 0x80808080);
            uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
          }
          iVar5 = iVar16 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar7 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar17[iVar5 * -6 + -5],
                               puVar17[iVar5 * -6 + -4],iVar9,uVar3);
          uVar14 = local_30 & uVar7;
          uVar12 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
          if (uVar12 == 0) {
            iVar8 = 4;
            do {
              uVar14 = uVar14 + iVar8;
              iVar8 = iVar8 + 4;
              uVar14 = uVar14 & local_30;
              uVar12 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar14 = uVar14 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar14)) {
            uVar14 = *local_34 & 0x80808080;
            uVar14 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                   (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
          }
          uVar4 = uVar4 - 1 & uVar4;
          bVar2 = (byte)(uVar7 >> 0x19);
          *(byte *)((int)local_34 + uVar14) = bVar2;
          uVar15 = uVar15 - 1;
          *(byte *)((int)local_34 + (uVar14 - 4 & local_30) + 4) = bVar2;
          local_2c = iVar9;
          FUN_01bed4e2(local_34 + uVar14 * -6 + -6,puVar17 + iVar5 * -6 + -6,0x18);
          iVar9 = local_2c;
        } while (uVar15 != 0);
      }
      local_38 = uVar3;
      local_3c = local_2c - uVar3;
      iVar9 = 0;
      do {
        puVar6 = (uint *)param_1[iVar9];
        param_1[iVar9] = (&local_44)[iVar9];
        iVar16 = iVar9 + 1;
        (&local_44)[iVar9] = puVar6;
        iVar9 = iVar16;
      } while (iVar16 != 4);
      if ((local_40 != 0) && (iVar9 = local_40 * 0x18 + 0x18, local_40 + iVar9 != -5)) {
        thunk_FUN_01be4678((int)local_44 - iVar9);
      }
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
        iVar9 = 0;
        do {
          puVar6[-iVar9] = (~(puVar6[-iVar9] >> 7) & 0x1010101) + (puVar6[-iVar9] | 0x7f7f7f7f);
          iVar9 = iVar9 + -1;
        } while (-iVar9 != uVar3);
        if (uVar7 < 4) {
          FUN_01bed864(puVar6 + 1,puVar6);
        }
        else {
          *(uint *)((int)puVar6 + uVar7) = *puVar6;
        }
        iVar9 = 0;
        uVar3 = uVar14;
        uVar15 = 0;
        do {
          puVar17 = puVar6;
          if (*(char *)((int)puVar6 + uVar15) == -0x80) {
            puVar13 = puVar6;
            while( true ) {
              uVar7 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar13[uVar15 * -6 + -5],
                                   puVar13[uVar15 * -6 + -4]);
              uVar12 = uVar3 & uVar7;
              uVar10 = *(uint *)((int)puVar13 + uVar12) & 0x80808080;
              uVar4 = uVar12;
              if (uVar10 == 0) {
                iVar16 = 4;
                do {
                  uVar4 = uVar4 + iVar16 & uVar3;
                  iVar16 = iVar16 + 4;
                  uVar10 = *(uint *)((int)puVar13 + uVar4) & 0x80808080;
                } while (uVar10 == 0);
              }
              uVar4 = uVar4 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                      uVar3;
              if (-1 < *(char *)((int)puVar13 + uVar4)) {
                uVar4 = *puVar13 & 0x80808080;
                uVar4 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar4 - uVar12 ^ uVar15 - uVar12) & uVar3) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar13 + uVar15) = bVar2;
                puVar17 = (uint *)*param_1;
                *(byte *)((int)puVar17 + (uVar3 & uVar15 - 4) + 4) = bVar2;
                goto LAB_01aa3a00;
              }
              cVar1 = *(char *)((int)puVar13 + uVar4);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar13 + uVar4) = bVar2;
              puVar17 = (uint *)*param_1;
              *(byte *)((int)puVar17 + (uVar4 - 4 & uVar3) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar16 = -0x18;
              do {
                uVar11 = *(undefined4 *)((int)puVar6 + iVar16 + iVar9);
                *(undefined4 *)((int)puVar6 + iVar16 + iVar9) =
                     *(undefined4 *)((int)puVar13 + iVar16 + uVar4 * -0x18);
                *(undefined4 *)((int)puVar13 + iVar16 + uVar4 * -0x18) = uVar11;
                iVar16 = iVar16 + 4;
              } while (iVar16 != 0);
              puVar13 = (uint *)*param_1;
              uVar3 = param_1[1];
            }
            *(undefined1 *)((int)puVar17 + uVar15) = 0xff;
            uVar3 = param_1[1];
            *(undefined1 *)((int)puVar17 + (uVar3 & uVar15 - 4) + 4) = 0xff;
            FUN_01bed4e2(puVar13 + uVar4 * -6 + -6,puVar6 + (uVar15 + 1) * -6,0x18);
          }
LAB_01aa3a00:
          iVar9 = iVar9 + -0x18;
          bVar18 = uVar15 != uVar14;
          puVar6 = puVar17;
          uVar15 = uVar15 + 1;
        } while (bVar18);
        uVar3 = param_1[1];
        uVar15 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - uVar15;
    }
    return 0x80000001;
  }
LAB_01aa3d04:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

