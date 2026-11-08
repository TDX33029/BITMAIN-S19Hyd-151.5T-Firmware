// FUN_0140d9d0 @ 0140d9d0 size=1396 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

undefined4 FUN_0140d9d0(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar12 = param_1[3];
  uVar3 = iVar12 + 1;
  if (iVar12 != -1) {
    uVar16 = param_1[1];
    uVar7 = uVar16 + 1;
    uVar5 = uVar16;
    if (7 < uVar16) {
      uVar5 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
    }
    if (uVar3 <= uVar5 >> 1) {
      if (uVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar7 >> 2;
        if ((uVar7 & 3) != 0) {
          uVar3 = (uVar7 >> 2) + 1;
        }
        puVar10 = (uint *)*param_1;
        iVar12 = 0;
        do {
          puVar10[-iVar12] =
               (~(puVar10[-iVar12] >> 7) & 0x1010101) + (puVar10[-iVar12] | 0x7f7f7f7f);
          iVar12 = iVar12 + -1;
        } while (-iVar12 != uVar3);
        if (uVar7 < 4) {
          FUN_01bed864(puVar10 + 1,puVar10);
        }
        else {
          *(uint *)((int)puVar10 + uVar7) = *puVar10;
        }
        iVar12 = 0;
        uVar3 = 0;
        uVar5 = uVar16;
        do {
          puVar15 = puVar10;
          if (*(char *)((int)puVar10 + uVar3) == -0x80) {
            puVar11 = puVar10;
            while( true ) {
              uVar8 = uVar5 & puVar11[uVar3 * -6 + -4];
              uVar14 = *(uint *)((int)puVar11 + uVar8) & 0x80808080;
              uVar7 = uVar8;
              if (uVar14 == 0) {
                iVar4 = 4;
                do {
                  uVar7 = uVar7 + iVar4 & uVar5;
                  uVar14 = *(uint *)((int)puVar11 + uVar7) & 0x80808080;
                  iVar4 = iVar4 + 4;
                } while (uVar14 == 0);
              }
              uVar7 = uVar7 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                      uVar5;
              if (-1 < *(char *)((int)puVar11 + uVar7)) {
                uVar7 = *puVar11 & 0x80808080;
                uVar7 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
              }
              bVar2 = (byte)(puVar11[uVar3 * -6 + -4] >> 0x18);
              if (((uVar7 - uVar8 ^ uVar3 - uVar8) & uVar5) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar11 + uVar3) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar5 & uVar3 - 4) + 4) = bVar2;
                goto LAB_0140dc08;
              }
              cVar1 = *(char *)((int)puVar11 + uVar7);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar11 + uVar7) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar7 - 4 & uVar5) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar4 = -0x18;
              do {
                uVar9 = *(undefined4 *)((int)puVar10 + iVar4 + iVar12);
                *(undefined4 *)((int)puVar10 + iVar4 + iVar12) =
                     *(undefined4 *)((int)puVar11 + iVar4 + uVar7 * -0x18);
                *(undefined4 *)((int)puVar11 + iVar4 + uVar7 * -0x18) = uVar9;
                iVar4 = iVar4 + 4;
              } while (iVar4 != 0);
              puVar11 = (uint *)*param_1;
              uVar5 = param_1[1];
            }
            *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
            uVar5 = param_1[1];
            *(undefined1 *)((int)puVar15 + (uVar5 & uVar3 - 4) + 4) = 0xff;
            FUN_01bed4e2(puVar11 + uVar7 * -6 + -6,puVar10 + (uVar3 + 1) * -6,0x18);
          }
LAB_0140dc08:
          iVar12 = iVar12 + -0x18;
          bVar18 = uVar3 != uVar16;
          puVar10 = puVar15;
          uVar3 = uVar3 + 1;
        } while (bVar18);
        uVar3 = param_1[1];
        iVar12 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - iVar12;
      return 0x80000001;
    }
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      uVar5 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar5 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_0140de84;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar5 * 0x18);
    if ((int)((ulonglong)uVar5 * 0x18 >> 0x20) == 0) {
      uVar16 = uVar5 + 4;
      uVar7 = uVar16 + uVar3;
      if ((!CARRY4(uVar16,uVar3)) && (uVar7 < 0x7ffffffd)) {
        iVar4 = FUN_01298504(uVar7,4);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,uVar7);
        }
        puVar10 = (uint *)(iVar4 + uVar3);
        FUN_01bed93e(puVar10,0xff,uVar16);
        uVar7 = uVar5 - 1;
        uVar3 = uVar7;
        if (8 < uVar5) {
          uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        iVar4 = 0;
        local_28 = 0;
        local_30 = uVar7;
        local_34 = puVar10;
        if (iVar12 != 0) {
          puVar11 = (uint *)*param_1;
          iVar13 = 0;
          uVar5 = ~*puVar11 & 0x80808080;
          puVar15 = puVar11;
          iVar4 = iVar12;
          local_2c = uVar3;
          do {
            if (uVar5 == 0) {
              do {
                puVar15 = puVar15 + 1;
                iVar13 = iVar13 + 4;
              } while ((*puVar15 & 0x80808080) == 0x80808080);
              uVar5 = *puVar15 & 0x80808080 ^ 0x80808080;
            }
            iVar6 = iVar13 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar16 = uVar7 & puVar11[iVar6 * -6 + -4];
            uVar8 = *(uint *)((int)puVar10 + uVar16) & 0x80808080;
            if (uVar8 == 0) {
              iVar17 = 4;
              do {
                uVar16 = uVar16 + iVar17;
                iVar17 = iVar17 + 4;
                uVar16 = uVar16 & uVar7;
                uVar8 = *(uint *)((int)puVar10 + uVar16) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                             (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                     uVar7;
            if (-1 < *(char *)((int)puVar10 + uVar16)) {
              uVar16 = *puVar10 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar2 = (byte)(puVar11[iVar6 * -6 + -4] >> 0x19);
            *(byte *)((int)puVar10 + uVar16) = bVar2;
            uVar8 = uVar16 - 4 & uVar7;
            iVar12 = iVar12 + -1;
            *(byte *)((int)puVar10 + uVar8 + 4) = bVar2;
            FUN_01bed4e2(puVar10 + uVar16 * -6 + -6,puVar11 + iVar6 * -6 + -6,0x18,uVar8,uVar3,iVar4
                        );
          } while (iVar12 != 0);
        }
        local_28 = iVar4;
        local_2c = uVar3 - iVar4;
        iVar12 = 0;
        do {
          puVar10 = (uint *)param_1[iVar12];
          param_1[iVar12] = (&local_34)[iVar12];
          iVar4 = iVar12 + 1;
          (&local_34)[iVar12] = puVar10;
          iVar12 = iVar4;
        } while (iVar4 != 4);
        if (local_30 == 0) {
          return 0x80000001;
        }
        iVar12 = local_30 * 0x18 + 0x18;
        if (local_30 + iVar12 == -5) {
          return 0x80000001;
        }
        thunk_FUN_01be4678((int)local_34 - iVar12);
        return 0x80000001;
      }
    }
  }
LAB_0140de84:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

