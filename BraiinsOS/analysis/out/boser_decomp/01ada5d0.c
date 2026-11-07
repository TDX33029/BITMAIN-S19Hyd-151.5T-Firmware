// FUN_01ada5d0 @ 01ada5d0 size=1456 calls_out=8 calls_in=1
// strings: Hash table capacity overflow

undefined4
FUN_01ada5d0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar16 = param_1[3];
  uVar3 = uVar16 + param_2;
  if (!CARRY4(uVar16,param_2)) {
    uVar15 = param_1[1];
    uVar10 = uVar15 + 1;
    uVar6 = uVar15;
    if (7 < uVar15) {
      uVar6 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
    }
    if (uVar3 <= uVar6 >> 1) {
      if (uVar10 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar10 >> 2;
        if ((uVar10 & 3) != 0) {
          uVar3 = (uVar10 >> 2) + 1;
        }
        puVar14 = (uint *)*param_1;
        iVar4 = 0;
        do {
          puVar14[-iVar4] = (~(puVar14[-iVar4] >> 7) & 0x1010101) + (puVar14[-iVar4] | 0x7f7f7f7f);
          iVar4 = iVar4 + -1;
        } while (-iVar4 != uVar3);
        if (uVar10 < 4) {
          FUN_01bed864(puVar14 + 1,puVar14);
        }
        else {
          *(uint *)((int)puVar14 + uVar10) = *puVar14;
        }
        iVar4 = 0;
        uVar3 = uVar15;
        uVar16 = 0;
        do {
          puVar17 = puVar14;
          if (*(char *)((int)puVar14 + uVar16) == -0x80) {
            puVar7 = puVar14;
            while( true ) {
              uVar10 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar7[uVar16 * -10 + -9],
                                    puVar7[uVar16 * -10 + -8]);
              uVar5 = uVar3 & uVar10;
              uVar9 = *(uint *)((int)puVar7 + uVar5) & 0x80808080;
              uVar6 = uVar5;
              if (uVar9 == 0) {
                iVar8 = 4;
                do {
                  uVar6 = uVar6 + iVar8 & uVar3;
                  iVar8 = iVar8 + 4;
                  uVar9 = *(uint *)((int)puVar7 + uVar6) & 0x80808080;
                } while (uVar9 == 0);
              }
              uVar6 = uVar6 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                             (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                      uVar3;
              if (-1 < *(char *)((int)puVar7 + uVar6)) {
                uVar6 = *puVar7 & 0x80808080;
                uVar6 = (uint)LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar10 >> 0x18);
              if (((uVar6 - uVar5 ^ uVar16 - uVar5) & uVar3) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar7 + uVar16) = bVar2;
                puVar17 = (uint *)*param_1;
                *(byte *)((int)puVar17 + (uVar3 & uVar16 - 4) + 4) = bVar2;
                goto LAB_01ada820;
              }
              cVar1 = *(char *)((int)puVar7 + uVar6);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar7 + uVar6) = bVar2;
              puVar17 = (uint *)*param_1;
              *(byte *)((int)puVar17 + (uVar6 - 4 & uVar3) + 4) = bVar2;
              if (cVar1 == -1) break;
              iVar8 = -0x28;
              do {
                uVar12 = *(undefined4 *)((int)puVar14 + iVar8 + iVar4);
                *(undefined4 *)((int)puVar14 + iVar8 + iVar4) =
                     *(undefined4 *)((int)puVar7 + iVar8 + uVar6 * -0x28);
                *(undefined4 *)((int)puVar7 + iVar8 + uVar6 * -0x28) = uVar12;
                iVar8 = iVar8 + 4;
              } while (iVar8 != 0);
              puVar7 = (uint *)*param_1;
              uVar3 = param_1[1];
            }
            uVar3 = param_1[1];
            *(undefined1 *)((int)puVar17 + uVar16) = 0xff;
            *(undefined1 *)((int)puVar17 + (uVar3 & uVar16 - 4) + 4) = 0xff;
            FUN_01bed4e2(puVar7 + uVar6 * -10 + -10,puVar14 + (uVar16 + 1) * -10,0x28);
          }
LAB_01ada820:
          iVar4 = iVar4 + -0x28;
          bVar18 = uVar16 != uVar15;
          puVar14 = puVar17;
          uVar16 = uVar16 + 1;
        } while (bVar18);
        uVar3 = param_1[1];
        uVar16 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - uVar16;
      return 0x80000001;
    }
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 0xf) {
      uVar6 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar6 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01adaac0;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar6 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar6 * 0x28);
    if ((int)((ulonglong)uVar6 * 0x28 >> 0x20) == 0) {
      uVar10 = uVar6 + 4;
      uVar15 = uVar10 + uVar3;
      if ((!CARRY4(uVar10,uVar3)) && (uVar15 < 0x7ffffff9)) {
        iVar4 = FUN_01298504(uVar15,8);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,uVar15);
        }
        puVar14 = (uint *)(iVar4 + uVar3);
        FUN_01bed93e(puVar14,0xff,uVar10);
        uVar10 = uVar6 - 1;
        uVar3 = uVar10;
        if (8 < uVar6) {
          uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
        }
        uVar6 = 0;
        local_28 = 0;
        local_30 = uVar10;
        local_34 = puVar14;
        if (uVar16 != 0) {
          puVar7 = (uint *)*param_1;
          iVar4 = 0;
          uVar15 = ~*puVar7 & 0x80808080;
          puVar17 = puVar7;
          uVar6 = uVar16;
          local_2c = uVar3;
          do {
            if (uVar15 == 0) {
              do {
                puVar17 = puVar17 + 1;
                iVar4 = iVar4 + 4;
              } while ((*puVar17 & 0x80808080) == 0x80808080);
              uVar15 = *puVar17 & 0x80808080 ^ 0x80808080;
            }
            iVar8 = iVar4 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
            uVar5 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar7[iVar8 * -10 + -9],
                                 puVar7[iVar8 * -10 + -8],uVar3,uVar6);
            uVar9 = uVar10 & uVar5;
            uVar13 = *(uint *)((int)puVar14 + uVar9) & 0x80808080;
            if (uVar13 == 0) {
              iVar11 = 4;
              do {
                uVar9 = uVar9 + iVar11;
                iVar11 = iVar11 + 4;
                uVar9 = uVar9 & uVar10;
                uVar13 = *(uint *)((int)puVar14 + uVar9) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar10;
            if (-1 < *(char *)((int)puVar14 + uVar9)) {
              uVar9 = *puVar14 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            uVar15 = uVar15 - 1 & uVar15;
            bVar2 = (byte)(uVar5 >> 0x19);
            *(byte *)((int)puVar14 + uVar9) = bVar2;
            uVar16 = uVar16 - 1;
            *(byte *)((int)puVar14 + (uVar9 - 4 & uVar10) + 4) = bVar2;
            FUN_01bed4e2(puVar14 + uVar9 * -10 + -10,puVar7 + iVar8 * -10 + -10,0x28);
          } while (uVar16 != 0);
        }
        local_28 = uVar6;
        local_2c = uVar3 - uVar6;
        iVar4 = 0;
        do {
          puVar14 = (uint *)param_1[iVar4];
          param_1[iVar4] = (&local_34)[iVar4];
          iVar8 = iVar4 + 1;
          (&local_34)[iVar4] = puVar14;
          iVar4 = iVar8;
        } while (iVar8 != 4);
        if (local_30 == 0) {
          return 0x80000001;
        }
        iVar4 = local_30 * 0x28 + 0x28;
        if (local_30 + iVar4 == -5) {
          return 0x80000001;
        }
        thunk_FUN_01be4678((int)local_34 - iVar4);
        return 0x80000001;
      }
    }
  }
LAB_01adaac0:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

