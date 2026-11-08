// FUN_010b29b4 @ 010b29b4 size=1372 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_010b29b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  
  iVar16 = param_1[3];
  uVar3 = iVar16 + 1;
  if (iVar16 != -1) {
    uVar18 = param_1[1];
    uVar7 = uVar18 + 1;
    uVar5 = uVar18;
    if (7 < uVar18) {
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
        puVar15 = (uint *)*param_1;
        iVar16 = 0;
        do {
          puVar15[-iVar16] =
               (~(puVar15[-iVar16] >> 7) & 0x1010101) + (puVar15[-iVar16] | 0x7f7f7f7f);
          iVar16 = iVar16 + -1;
        } while (-iVar16 != uVar3);
        if (uVar7 < 4) {
          FUN_016dd52c(puVar15 + 1,puVar15);
        }
        else {
          *(uint *)((int)puVar15 + uVar7) = *puVar15;
        }
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar15 + uVar3) == -0x80) {
            puVar17 = puVar15 + (uVar3 + 1) * -3;
            puVar14 = puVar15;
            while( true ) {
              uVar7 = FUN_006a526c(param_3,param_4,param_5,param_6,puVar14[uVar3 * -3 + -2],
                                   puVar14[uVar3 * -3 + -1]);
              uVar6 = param_1[1];
              uVar10 = uVar6 & uVar7;
              uVar11 = *(uint *)((int)puVar14 + uVar10) & 0x80808080;
              uVar5 = uVar10;
              if (uVar11 == 0) {
                iVar16 = 4;
                do {
                  uVar5 = uVar5 + iVar16;
                  iVar16 = iVar16 + 4;
                  uVar5 = uVar5 & uVar6;
                  uVar11 = *(uint *)((int)puVar14 + uVar5) & 0x80808080;
                } while (uVar11 == 0);
              }
              uVar5 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                      uVar6;
              if (-1 < *(char *)((int)puVar14 + uVar5)) {
                uVar5 = *puVar14 & 0x80808080;
                uVar5 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar5 - uVar10 ^ uVar3 - uVar10) & uVar6) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar14 + uVar3) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar6 & uVar3 - 4) + 4) = bVar2;
                goto LAB_010b2bdc;
              }
              cVar1 = *(char *)((int)puVar14 + uVar5);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar5) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar5 - 4 & uVar6) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar7 = *puVar17;
              *puVar17 = puVar14[uVar5 * -3 + -3];
              puVar14[uVar5 * -3 + -3] = uVar7;
              uVar7 = puVar14[uVar5 * -3 + -2];
              puVar14[uVar5 * -3 + -2] = puVar17[1];
              puVar17[1] = uVar7;
              uVar7 = puVar17[2];
              puVar17[2] = puVar14[uVar5 * -3 + -1];
              puVar14[uVar5 * -3 + -1] = uVar7;
              puVar14 = (uint *)*param_1;
            }
            uVar7 = param_1[1];
            *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar15 + (uVar7 & uVar3 - 4) + 4) = 0xff;
            uVar7 = *puVar17;
            uVar6 = puVar17[1];
            puVar14[uVar5 * -3 + -1] = puVar17[2];
            puVar14[uVar5 * -3 + -2] = uVar6;
            puVar14[uVar5 * -3 + -3] = uVar7;
          }
LAB_010b2bdc:
          bVar20 = uVar3 != uVar18;
          uVar3 = uVar3 + 1;
        } while (bVar20);
        uVar3 = param_1[1];
        iVar16 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - iVar16;
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
      if (0x1fffffff < uVar3) goto LAB_010b2e5c;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar5 * 0xc);
    if ((int)((ulonglong)uVar5 * 0xc >> 0x20) == 0) {
      uVar7 = uVar5 + 4;
      uVar18 = uVar3 + uVar7;
      if ((!CARRY4(uVar3,uVar7)) && (uVar18 < 0x7ffffffd)) {
        iVar4 = thunk_FUN_016d4a50(uVar18);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar18);
        }
        puVar15 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar15,0xff,uVar7);
        uVar7 = uVar5 - 1;
        uVar3 = uVar7;
        if (7 < uVar7) {
          uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (iVar16 == 0) {
          iVar16 = 0;
        }
        else {
          iVar19 = 0;
          puVar17 = (uint *)*param_1;
          uVar5 = ~*puVar17 & 0x80808080;
          iVar4 = iVar16;
          puVar14 = puVar17;
          do {
            if (uVar5 == 0) {
              do {
                puVar14 = puVar14 + 1;
                iVar19 = iVar19 + 4;
              } while ((*puVar14 & 0x80808080) == 0x80808080);
              uVar5 = *puVar14 & 0x80808080 ^ 0x80808080;
            }
            iVar12 = iVar19 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar18 = FUN_006a526c(param_3,param_4,param_5,param_6,puVar17[iVar12 * -3 + -2],
                                  puVar17[iVar12 * -3 + -1]);
            uVar6 = uVar7 & uVar18;
            uVar10 = *(uint *)((int)puVar15 + uVar6) & 0x80808080;
            if (uVar10 == 0) {
              iVar9 = 4;
              do {
                uVar6 = uVar6 + iVar9;
                iVar9 = iVar9 + 4;
                uVar6 = uVar6 & uVar7;
                uVar10 = *(uint *)((int)puVar15 + uVar6) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar6 = uVar6 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar7;
            if (-1 < *(char *)((int)puVar15 + uVar6)) {
              uVar6 = *puVar15 & 0x80808080;
              uVar6 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar2 = (byte)(uVar18 >> 0x19);
            *(byte *)((int)puVar15 + uVar6) = bVar2;
            iVar4 = iVar4 + -1;
            *(byte *)((int)puVar15 + (uVar6 - 4 & uVar7) + 4) = bVar2;
            puVar8 = puVar17 + iVar12 * -3 + -3;
            uVar10 = puVar8[1];
            uVar18 = puVar8[2];
            puVar13 = puVar15 + uVar6 * -3 + -3;
            *puVar13 = *puVar8;
            puVar13[2] = uVar18;
            puVar13[1] = uVar10;
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar19 = param_1[1];
        *param_1 = (int)puVar15;
        param_1[1] = uVar7;
        param_1[2] = uVar3 - iVar16;
        param_1[3] = iVar16;
        if (iVar19 == 0) {
          return 0x80000001;
        }
        iVar16 = iVar19 * 0xc + 0xc;
        if (iVar19 + iVar16 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar16);
        return 0x80000001;
      }
    }
  }
LAB_010b2e5c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

