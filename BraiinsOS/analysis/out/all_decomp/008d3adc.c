// FUN_008d3adc @ 008d3adc size=1380 calls_out=7 calls_in=2
// strings: 

undefined4
FUN_008d3adc(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  
  uVar16 = param_1[3];
  uVar10 = uVar16 + param_2;
  if (!CARRY4(uVar16,param_2)) {
    uVar19 = param_1[1];
    uVar6 = uVar19 + 1;
    uVar15 = uVar19;
    if (7 < uVar19) {
      uVar15 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
    }
    if (uVar10 <= uVar15 >> 1) {
      if (uVar6 == 0) {
        uVar15 = 0;
      }
      else {
        uVar10 = uVar6 >> 2;
        puVar7 = (uint *)*param_1;
        if ((uVar6 & 3) != 0) {
          uVar10 = (uVar6 >> 2) + 1;
        }
        iVar3 = 0;
        do {
          puVar7[-iVar3] = (~(puVar7[-iVar3] >> 7) & 0x1010101) + (puVar7[-iVar3] | 0x7f7f7f7f);
          iVar3 = iVar3 + -1;
        } while (-iVar3 != uVar10);
        puVar13 = puVar7 + 1;
        if (uVar6 < 4) {
          FUN_016dd52c(puVar13,puVar7);
        }
        else {
          *(uint *)((int)puVar7 + uVar6) = *puVar7;
        }
        uVar10 = 0;
        do {
          if (*(char *)((int)puVar7 + uVar10) == -0x80) {
            puVar17 = puVar7 + (uVar10 + 1) * -3;
            while( true ) {
              uVar12 = FUN_008c3a18(param_3,param_4,param_5,param_6,puVar7[uVar10 * -3 + -2],
                                    puVar7[uVar10 * -3 + -1]);
              uVar4 = uVar19 & uVar12;
              uVar5 = *(uint *)((int)puVar7 + uVar4) & 0x80808080;
              uVar6 = uVar4;
              if (uVar5 == 0) {
                iVar3 = 4;
                do {
                  uVar6 = uVar6 + iVar3 & uVar19;
                  uVar5 = *(uint *)((int)puVar7 + uVar6) & 0x80808080;
                  iVar3 = iVar3 + 4;
                } while (uVar5 == 0);
              }
              uVar6 = uVar6 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                      uVar19;
              if (-1 < *(char *)((int)puVar7 + uVar6)) {
                uVar6 = *puVar7 & 0x80808080;
                uVar6 = (uint)LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar12 >> 0x18);
              if (((uVar6 - uVar4 ^ uVar10 - uVar4) & uVar19) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar7 + uVar10) = bVar2;
                *(byte *)((int)puVar13 + (uVar19 & uVar10 - 4)) = bVar2;
                goto LAB_008d3cfc;
              }
              cVar1 = *(char *)((int)puVar7 + uVar6);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar7 + uVar6) = bVar2;
              *(byte *)((int)puVar13 + (uVar6 - 4 & uVar19)) = bVar2;
              if (cVar1 == -1) break;
              uVar12 = *puVar17;
              *puVar17 = puVar7[uVar6 * -3 + -3];
              puVar7[uVar6 * -3 + -3] = uVar12;
              uVar12 = puVar7[uVar6 * -3 + -2];
              puVar7[uVar6 * -3 + -2] = puVar17[1];
              puVar17[1] = uVar12;
              uVar12 = puVar17[2];
              puVar17[2] = puVar7[uVar6 * -3 + -1];
              puVar7[uVar6 * -3 + -1] = uVar12;
            }
            *(undefined1 *)((int)puVar7 + uVar10) = 0xff;
            *(undefined1 *)((int)puVar13 + (uVar19 & uVar10 - 4)) = 0xff;
            uVar12 = *puVar17;
            uVar4 = puVar17[1];
            puVar7[uVar6 * -3 + -1] = puVar17[2];
            puVar7[uVar6 * -3 + -2] = uVar4;
            puVar7[uVar6 * -3 + -3] = uVar12;
          }
LAB_008d3cfc:
          bVar20 = uVar10 != uVar19;
          uVar10 = uVar10 + 1;
        } while (bVar20);
      }
      param_1[2] = uVar15 - uVar16;
      return 0x80000001;
    }
    if (uVar10 < uVar15 + 1) {
      uVar10 = uVar15 + 1;
    }
    if (uVar10 < 0xf) {
      uVar15 = (uVar10 & 8) + 8;
      if (uVar10 < 4) {
        uVar15 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar10) goto LAB_008d3f8c;
      iVar3 = (int)((ulonglong)(uVar10 << 3) * 0x24924925 >> 0x20);
      uVar15 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar10 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar10 = (uint)((ulonglong)uVar15 * 0xc);
    if ((int)((ulonglong)uVar15 * 0xc >> 0x20) == 0) {
      uVar6 = uVar15 + 4;
      uVar12 = uVar10 + uVar6;
      if ((!CARRY4(uVar10,uVar6)) && (uVar12 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar12);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar12);
        }
        puVar13 = (uint *)(iVar3 + uVar10);
        FUN_016dd606(puVar13,0xff,uVar6);
        uVar6 = uVar15 - 1;
        puVar7 = (uint *)*param_1;
        uVar10 = uVar6;
        if (7 < uVar6) {
          uVar10 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
        }
        if (uVar16 == 0) {
          uVar16 = 0;
        }
        else {
          uVar12 = ~*puVar7 & 0x80808080;
          iVar3 = 0;
          uVar15 = uVar16;
          puVar17 = puVar7;
          do {
            if (uVar12 == 0) {
              do {
                puVar17 = puVar17 + 1;
                iVar3 = iVar3 + 4;
              } while ((*puVar17 & 0x80808080) == 0x80808080);
              uVar12 = *puVar17 & 0x80808080 ^ 0x80808080;
            }
            iVar18 = iVar3 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                            (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
            uVar4 = FUN_008c3a18(param_3,param_4,param_5,param_6,puVar7[iVar18 * -3 + -2],
                                 puVar7[iVar18 * -3 + -1]);
            uVar5 = uVar6 & uVar4;
            uVar11 = *(uint *)((int)puVar13 + uVar5) & 0x80808080;
            if (uVar11 == 0) {
              iVar9 = 4;
              do {
                uVar5 = uVar5 + iVar9;
                iVar9 = iVar9 + 4;
                uVar5 = uVar5 & uVar6;
                uVar11 = *(uint *)((int)puVar13 + uVar5) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar5 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar13 + uVar5)) {
              uVar5 = *puVar13 & 0x80808080;
              uVar5 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
            }
            uVar12 = uVar12 - 1 & uVar12;
            bVar2 = (byte)(uVar4 >> 0x19);
            *(byte *)((int)puVar13 + uVar5) = bVar2;
            uVar15 = uVar15 - 1;
            *(byte *)((int)puVar13 + (uVar5 - 4 & uVar6) + 4) = bVar2;
            puVar8 = puVar7 + iVar18 * -3 + -3;
            uVar11 = puVar8[1];
            uVar4 = puVar8[2];
            puVar14 = puVar13 + uVar5 * -3 + -3;
            *puVar14 = *puVar8;
            puVar14[2] = uVar4;
            puVar14[1] = uVar11;
          } while (uVar15 != 0);
        }
        *param_1 = puVar13;
        param_1[1] = uVar6;
        param_1[2] = uVar10 - uVar16;
        if (uVar19 == 0) {
          return 0x80000001;
        }
        iVar3 = uVar19 * 0xc + 0xc;
        if (uVar19 + iVar3 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4((int)puVar7 - iVar3);
        return 0x80000001;
      }
    }
  }
LAB_008d3f8c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

