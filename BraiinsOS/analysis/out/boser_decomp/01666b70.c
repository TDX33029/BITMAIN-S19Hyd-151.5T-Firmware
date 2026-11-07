// FUN_01666b70 @ 01666b70 size=1340 calls_out=7 calls_in=2
// strings: Hash table capacity overflow

uint FUN_01666b70(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
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
        iVar8 = (uVar3 & 8) + 8;
        if (uVar3 < 4) {
          iVar8 = 4;
        }
      }
      else {
        if (0x1fffffff < uVar3) goto LAB_01667084;
        iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
      }
      FUN_016502cc(&local_34,0xc,iVar8);
      if (local_34 == (uint *)0x0) {
        return local_30;
      }
      FUN_01bed93e(local_34,0xff,local_30 + 5);
      local_40 = local_30;
      local_48 = 4;
      uVar3 = 0;
      local_38 = local_28;
      local_3c = local_2c;
      local_44 = local_34;
      local_4c = 0xc;
      local_50 = param_1 + 4;
      if (uVar16 != 0) {
        puVar13 = (uint *)*param_1;
        iVar15 = 0;
        uVar4 = ~*puVar13 & 0x80808080;
        puVar6 = puVar13;
        iVar8 = local_2c;
        uVar3 = uVar16;
        do {
          if (uVar4 == 0) {
            do {
              puVar6 = puVar6 + 1;
              iVar15 = iVar15 + 4;
            } while ((*puVar6 & 0x80808080) == 0x80808080);
            uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
          }
          uVar14 = iVar15 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar10 = *(undefined4 *)(puVar13[uVar14 * -3 + -3] + 0x10);
          uVar7 = FUN_01676068(param_3,*(undefined4 *)(puVar13[uVar14 * -3 + -3] + 0xc),uVar10,
                               uVar10,iVar8,uVar3);
          uVar5 = local_30 & uVar7;
          uVar11 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          if (uVar11 == 0) {
            iVar9 = 4;
            do {
              uVar5 = uVar5 + iVar9;
              iVar9 = iVar9 + 4;
              uVar5 = uVar5 & local_30;
              uVar11 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar5 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar5)) {
            uVar5 = *local_34 & 0x80808080;
            uVar5 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
          }
          uVar4 = uVar4 - 1 & uVar4;
          bVar2 = (byte)(uVar7 >> 0x19);
          *(byte *)((int)local_34 + uVar5) = bVar2;
          uVar16 = uVar16 - 1;
          *(byte *)((int)local_34 + (uVar5 - 4 & local_30) + 4) = bVar2;
          local_2c = iVar8;
          FUN_01bed4e2(local_34 + ~uVar5 * 3,puVar13 + ~uVar14 * 3,0xc);
          iVar8 = local_2c;
        } while (uVar16 != 0);
      }
      local_38 = uVar3;
      local_3c = local_2c - uVar3;
      iVar8 = 0;
      do {
        puVar6 = (uint *)param_1[iVar8];
        param_1[iVar8] = (&local_44)[iVar8];
        iVar15 = iVar8 + 1;
        (&local_44)[iVar8] = puVar6;
        iVar8 = iVar15;
      } while (iVar15 != 4);
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
        iVar8 = 0;
        do {
          puVar6[-iVar8] = (~(puVar6[-iVar8] >> 7) & 0x1010101) + (puVar6[-iVar8] | 0x7f7f7f7f);
          iVar8 = iVar8 + -1;
        } while (-iVar8 != uVar3);
        if (uVar7 < 4) {
          FUN_01bed864(puVar6 + 1,puVar6);
        }
        else {
          *(uint *)((int)puVar6 + uVar7) = *puVar6;
        }
        iVar8 = 0;
        uVar3 = 0;
        uVar16 = uVar14;
        do {
          puVar13 = puVar6;
          if (*(char *)((int)puVar6 + uVar3) == -0x80) {
            puVar12 = puVar6;
            while( true ) {
              uVar7 = FUN_01676068(param_3,*(undefined4 *)(puVar12[uVar3 * -3 + -3] + 0xc),
                                   *(undefined4 *)(puVar12[uVar3 * -3 + -3] + 0x10));
              uVar5 = uVar16 & uVar7;
              uVar11 = *(uint *)((int)puVar12 + uVar5) & 0x80808080;
              uVar4 = uVar5;
              if (uVar11 == 0) {
                iVar15 = 4;
                do {
                  uVar4 = uVar4 + iVar15 & uVar16;
                  iVar15 = iVar15 + 4;
                  uVar11 = *(uint *)((int)puVar12 + uVar4) & 0x80808080;
                } while (uVar11 == 0);
              }
              uVar4 = uVar4 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                      uVar16;
              if (-1 < *(char *)((int)puVar12 + uVar4)) {
                uVar4 = *puVar12 & 0x80808080;
                uVar4 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar4 - uVar5 ^ uVar3 - uVar5) & uVar16) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar12 + uVar3) = bVar2;
                puVar13 = (uint *)*param_1;
                *(byte *)((int)puVar13 + (uVar16 & uVar3 - 4) + 4) = bVar2;
                goto LAB_01666db8;
              }
              cVar1 = *(char *)((int)puVar12 + uVar4);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar12 + uVar4) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar4 - 4 & uVar16) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar15 = -0xc;
              do {
                uVar10 = *(undefined4 *)((int)puVar6 + iVar15 + iVar8);
                *(undefined4 *)((int)puVar6 + iVar15 + iVar8) =
                     *(undefined4 *)((int)puVar12 + iVar15 + uVar4 * -0xc);
                *(undefined4 *)((int)puVar12 + iVar15 + uVar4 * -0xc) = uVar10;
                iVar15 = iVar15 + 4;
              } while (iVar15 != 0);
              puVar12 = (uint *)*param_1;
              uVar16 = param_1[1];
            }
            uVar16 = param_1[1];
            *(undefined1 *)((int)puVar13 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar13 + (uVar16 & uVar3 - 4) + 4) = 0xff;
            FUN_01bed4e2(puVar12 + ~uVar4 * 3,puVar6 + ~uVar3 * 3,0xc);
          }
LAB_01666db8:
          iVar8 = iVar8 + -0xc;
          bVar17 = uVar3 != uVar14;
          uVar3 = uVar3 + 1;
          puVar6 = puVar13;
        } while (bVar17);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - param_1[3];
    }
    return 0x80000001;
  }
LAB_01667084:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

