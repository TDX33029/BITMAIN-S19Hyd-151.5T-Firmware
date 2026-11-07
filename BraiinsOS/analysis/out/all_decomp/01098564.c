// FUN_01098564 @ 01098564 size=1524 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_01098564(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  bool bVar23;
  int local_48;
  
  local_48 = param_1[3];
  uVar3 = local_48 + 1;
  if (local_48 != -1) {
    uVar21 = param_1[1];
    uVar9 = uVar21 + 1;
    uVar11 = uVar21;
    if (7 < uVar21) {
      uVar11 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
    }
    if (uVar3 <= uVar11 >> 1) {
      if (uVar9 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar9 >> 2;
        if ((uVar9 & 3) != 0) {
          uVar3 = (uVar9 >> 2) + 1;
        }
        puVar12 = (undefined4 *)*param_1;
        iVar4 = 0;
        do {
          puVar12[-iVar4] =
               (~((uint)puVar12[-iVar4] >> 7) & 0x1010101) + (puVar12[-iVar4] | 0x7f7f7f7f);
          iVar4 = iVar4 + -1;
        } while (-iVar4 != uVar3);
        if (uVar9 < 4) {
          FUN_016dd52c(puVar12 + 1,puVar12);
        }
        else {
          *(undefined4 *)((int)puVar12 + uVar9) = *puVar12;
        }
        uVar6 = *param_2;
        iVar4 = 0;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar5 = param_2[3];
        uVar3 = 0;
        do {
          iVar10 = *param_1;
          if (*(char *)(iVar10 + uVar3) == -0x80) {
            iVar15 = iVar10 + iVar4;
            iVar18 = ~uVar3 * 0x118 + iVar10;
            while( true ) {
              uVar9 = FUN_01090fd0(uVar6,uVar7,uVar8,uVar5,uVar3 * -0x118 + iVar10 + -0x118);
              puVar16 = (uint *)*param_1;
              uVar14 = param_1[1];
              uVar20 = uVar14 & uVar9;
              uVar19 = *(uint *)((int)puVar16 + uVar20) & 0x80808080;
              uVar11 = uVar20;
              if (uVar19 == 0) {
                iVar10 = 4;
                do {
                  uVar11 = uVar11 + iVar10 & uVar14;
                  uVar19 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
                  iVar10 = iVar10 + 4;
                } while (uVar19 == 0);
              }
              uVar11 = uVar11 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                               (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3)
                       & uVar14;
              if (-1 < *(char *)((int)puVar16 + uVar11)) {
                uVar11 = *puVar16 & 0x80808080;
                uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar9 >> 0x18);
              if (((uVar11 - uVar20 ^ uVar3 - uVar20) & uVar14) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                *(byte *)(*param_1 + (uVar14 & uVar3 - 4) + 4) = bVar2;
                goto LAB_010987bc;
              }
              cVar1 = *(char *)((int)puVar16 + uVar11);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar11) = bVar2;
              *(byte *)(*param_1 + (uVar11 - 4 & uVar14) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar10 = -0x118;
              do {
                uVar13 = *(undefined4 *)(iVar15 + iVar10);
                *(undefined4 *)(iVar15 + iVar10) =
                     *(undefined4 *)((int)puVar16 + iVar10 + uVar11 * -0x118);
                *(undefined4 *)((int)puVar16 + iVar10 + uVar11 * -0x118) = uVar13;
                iVar10 = iVar10 + 4;
              } while (iVar10 != 0);
              iVar10 = *param_1;
            }
            uVar9 = param_1[1];
            *(undefined1 *)(*param_1 + uVar3) = 0xff;
            *(undefined1 *)(*param_1 + (uVar9 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar16 + ~uVar11 * 0x46,iVar18,0x118);
          }
LAB_010987bc:
          iVar4 = iVar4 + -0x118;
          bVar23 = uVar3 != uVar21;
          uVar3 = uVar3 + 1;
        } while (bVar23);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - param_1[3];
      return 0x80000001;
    }
    if (uVar3 < uVar11 + 1) {
      uVar3 = uVar11 + 1;
    }
    if (uVar3 < 0xf) {
      uVar11 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01098aa0;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar11 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar11 * 0x118);
    if ((int)((ulonglong)uVar11 * 0x118 >> 0x20) == 0) {
      uVar20 = uVar11 + 4;
      uVar9 = uVar20 + uVar3;
      if ((!CARRY4(uVar20,uVar3)) && (uVar9 < 0x7ffffff9)) {
        iVar4 = thunk_FUN_016d4a50(uVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar9);
        }
        puVar16 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar16,0xff,uVar20);
        uVar9 = uVar11 - 1;
        puVar17 = (uint *)*param_1;
        uVar3 = uVar9;
        if (7 < uVar9) {
          uVar3 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
        }
        iVar4 = 0;
        if (local_48 != 0) {
          uVar5 = *param_2;
          uVar11 = ~*puVar17 & 0x80808080;
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          iVar4 = 0;
          puVar22 = puVar17;
          do {
            if (uVar11 == 0) {
              do {
                puVar22 = puVar22 + 1;
                iVar4 = iVar4 + 4;
              } while ((*puVar22 & 0x80808080) == 0x80808080);
              uVar11 = *puVar22 & 0x80808080 ^ 0x80808080;
            }
            uVar19 = iVar4 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                            (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3);
            uVar21 = FUN_01090fd0(uVar5,uVar6,uVar7,uVar8,puVar17 + uVar19 * -0x46 + -0x46);
            uVar20 = uVar9 & uVar21;
            uVar14 = *(uint *)((int)puVar16 + uVar20) & 0x80808080;
            if (uVar14 == 0) {
              iVar10 = 4;
              do {
                uVar20 = uVar20 + iVar10;
                iVar10 = iVar10 + 4;
                uVar20 = uVar20 & uVar9;
                uVar14 = *(uint *)((int)puVar16 + uVar20) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar20 = uVar20 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar16 + uVar20)) {
              uVar20 = *puVar16 & 0x80808080;
              uVar20 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                     (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
            }
            uVar11 = uVar11 - 1 & uVar11;
            bVar2 = (byte)(uVar21 >> 0x19);
            *(byte *)((int)puVar16 + uVar20) = bVar2;
            puVar17 = (uint *)*param_1;
            local_48 = local_48 + -1;
            *(byte *)((int)puVar16 + (uVar20 - 4 & uVar9) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar20 * 0x46,puVar17 + ~uVar19 * 0x46,0x118);
          } while (local_48 != 0);
          uVar21 = param_1[1];
          iVar4 = param_1[3];
        }
        *param_1 = (int)puVar16;
        param_1[1] = uVar9;
        param_1[2] = uVar3 - iVar4;
        if (uVar21 == 0) {
          return 0x80000001;
        }
        iVar4 = uVar21 * 0x118 + 0x118;
        if (uVar21 + iVar4 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4((int)puVar17 - iVar4);
        return 0x80000001;
      }
    }
  }
LAB_01098aa0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

