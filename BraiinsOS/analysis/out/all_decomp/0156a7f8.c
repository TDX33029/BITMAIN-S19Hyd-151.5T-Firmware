// FUN_0156a7f8 @ 0156a7f8 size=1520 calls_out=7 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x0156ad64) */

undefined4 FUN_0156a7f8(undefined4 *param_1,ushort param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined2 *puVar14;
  ushort *puVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  uint local_2c;
  
  puVar10 = (undefined4 *)*param_1;
  if (puVar10 != (undefined4 *)0x0) {
    iVar17 = param_1[1];
    do {
      uVar13 = 0xffffffff;
      iVar9 = 0;
      do {
        if ((uint)*(ushort *)((int)puVar10 + 6) * 2 == iVar9) {
          uVar13 = (uint)*(ushort *)((int)puVar10 + 6);
          goto LAB_0156a878;
        }
        uVar13 = uVar13 + 1;
        uVar1 = *(ushort *)((int)puVar10 + iVar9 + 8);
        bVar18 = param_2 < uVar1;
        bVar3 = !bVar18 && param_2 != uVar1;
        iVar9 = iVar9 + 2;
      } while ((char)(bVar3 - bVar18) == '\x01');
      if (bVar3 == bVar18) {
        return 1;
      }
LAB_0156a878:
      if (iVar17 == 0) goto LAB_0156a89c;
      iVar17 = iVar17 + -1;
      puVar10 = (undefined4 *)puVar10[uVar13 + 8];
    } while( true );
  }
LAB_0156a8e8:
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar10 == (undefined4 *)0x0) {
LAB_0156ad28:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x20);
  }
  *(ushort *)(puVar10 + 2) = param_2;
  *(undefined2 *)((int)puVar10 + 6) = 1;
  *puVar10 = 0;
  *param_1 = puVar10;
  param_1[1] = 0;
LAB_0156a910:
  param_1[2] = param_1[2] + 1;
  return 0;
LAB_0156a89c:
  if (puVar10 != (undefined4 *)0x0) {
    uVar1 = *(ushort *)((int)puVar10 + 6);
    uVar11 = (uint)uVar1;
    if (10 < uVar11) {
      uVar11 = 4;
      bVar3 = false;
      if (4 < uVar13) {
        if (uVar13 == 5) {
          uVar11 = 5;
        }
        else {
          if (uVar13 == 6) {
            uVar11 = 5;
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 - 7;
            uVar11 = 6;
          }
          bVar3 = true;
        }
      }
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)((int)puVar4 + 6) = 0;
        *puVar4 = 0;
        uVar6 = (uint)*(ushort *)((int)puVar10 + 6) + ~uVar11;
        *(short *)((int)puVar4 + 6) = (short)uVar6;
        if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar6,0xb,&DAT_018ac47c);
        }
        uVar12 = *(undefined2 *)((int)puVar10 + uVar11 * 2 + 8);
        FUN_016dd1aa(puVar4 + 2,(int)puVar10 + uVar11 * 2 + 10,uVar6 * 2);
        puVar8 = puVar4;
        if (!bVar3) {
          puVar8 = puVar10;
        }
        *(short *)((int)puVar10 + 6) = (short)uVar11;
        uVar1 = *(ushort *)((int)puVar8 + 6);
        puVar15 = (ushort *)((int)puVar8 + uVar13 * 2 + 8);
        if (uVar13 < uVar1) {
          FUN_016dd52c(puVar15 + 1,puVar15,(uVar1 - uVar13) * 2);
        }
        *(ushort *)((int)puVar8 + 6) = uVar1 + 1;
        *puVar15 = param_2;
        if ((undefined4 *)*puVar10 == (undefined4 *)0x0) {
          local_2c = 0;
        }
        else {
          local_2c = 0;
          puVar8 = (undefined4 *)*puVar10;
          puVar16 = puVar4;
          uVar2 = uVar12;
          do {
            puVar5 = puVar8;
            uVar11 = (uint)*(ushort *)((int)puVar5 + 6);
            uVar13 = (uint)*(ushort *)(puVar10 + 1);
            if (uVar11 < 0xb) {
              puVar14 = (undefined2 *)((int)puVar5 + uVar13 * 2 + 8);
              if (uVar13 < uVar11) {
                FUN_016dd52c((int)puVar5 + (uVar13 + 1) * 2 + 8,puVar14,(uVar11 - uVar13) * 2);
                FUN_016dd52c(puVar5 + uVar13 + 10,puVar5 + uVar13 + 9,(uVar11 - uVar13) * 4);
              }
              *puVar14 = uVar2;
              *(short *)((int)puVar5 + 6) = (short)(uVar11 + 1);
              puVar5[uVar13 + 9] = puVar16;
              if (uVar13 + 1 < uVar11 + 2) {
                do {
                  puVar10 = (undefined4 *)puVar5[uVar13 + 9];
                  uVar13 = uVar13 + 1;
                  *(short *)(puVar10 + 1) = (short)uVar13;
                  *puVar10 = puVar5;
                } while (uVar11 + 1 != uVar13);
              }
              goto LAB_0156a910;
            }
            uVar6 = 4;
            if (uVar13 < 5) {
              bVar3 = false;
            }
            else if (uVar13 == 5) {
              bVar3 = false;
              uVar6 = 5;
            }
            else if (uVar13 == 6) {
              uVar13 = 0;
              uVar6 = 5;
              bVar3 = true;
            }
            else {
              uVar13 = uVar13 - 7;
              bVar3 = true;
              uVar6 = 6;
            }
            puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x50);
            if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x50);
            }
            *(undefined2 *)((int)puVar4 + 6) = 0;
            *puVar4 = 0;
            uVar7 = (uint)*(ushort *)((int)puVar5 + 6) + ~uVar6;
            *(short *)((int)puVar4 + 6) = (short)uVar7;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar7,0xb,&DAT_018ac47c);
            }
            uVar12 = *(undefined2 *)((int)puVar5 + uVar6 * 2 + 8);
            FUN_016dd1aa(puVar4 + 2,(int)puVar5 + uVar6 * 2 + 10,uVar7 * 2);
            *(short *)((int)puVar5 + 6) = (short)uVar6;
            uVar7 = (uint)*(ushort *)((int)puVar4 + 6);
            iVar17 = uVar7 + 1;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar17,0xc,&DAT_018ac48c);
            }
            if (uVar11 - uVar6 != iVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            local_2c = local_2c + 1;
            FUN_016dd1aa(puVar4 + 8,puVar5 + uVar6 + 9,iVar17 * 4);
            uVar11 = 0;
            do {
              puVar10 = (undefined4 *)(puVar4 + 8)[uVar11];
              *(short *)(puVar10 + 1) = (short)uVar11;
              *puVar10 = puVar4;
              if (uVar7 <= uVar11) break;
              uVar11 = uVar11 + 1;
            } while (uVar11 <= uVar7);
            puVar10 = puVar4;
            if (!bVar3) {
              puVar10 = puVar5;
            }
            uVar11 = (uint)*(ushort *)((int)puVar10 + 6);
            puVar14 = (undefined2 *)((int)puVar10 + uVar13 * 2 + 8);
            if (uVar13 < uVar11) {
              FUN_016dd52c((int)puVar10 + (uVar13 + 1) * 2 + 8,puVar14,(uVar11 - uVar13) * 2);
              FUN_016dd52c(puVar10 + uVar13 + 10,puVar10 + uVar13 + 9,(uVar11 - uVar13) * 4);
            }
            *puVar14 = uVar2;
            puVar10[uVar13 + 9] = puVar16;
            *(short *)((int)puVar10 + 6) = (short)(uVar11 + 1);
            if (uVar13 + 1 < uVar11 + 2) {
              do {
                uVar6 = uVar13 + 1;
                puVar8 = (undefined4 *)puVar10[uVar13 + 9];
                *(short *)(puVar8 + 1) = (short)uVar6;
                *puVar8 = puVar10;
                uVar13 = uVar6;
              } while (uVar11 + 1 != uVar6);
            }
            puVar8 = (undefined4 *)*puVar5;
            puVar10 = puVar5;
            puVar16 = puVar4;
            uVar2 = uVar12;
          } while ((undefined4 *)*puVar5 != (undefined4 *)0x0);
        }
        puVar10 = (undefined4 *)*param_1;
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar13 = param_1[1];
        puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x50);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x50);
        }
        puVar8[8] = puVar10;
        *(undefined2 *)((int)puVar8 + 6) = 0;
        *puVar8 = 0;
        if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined2 *)(puVar10 + 1) = 0;
        *param_1 = puVar8;
        *puVar10 = puVar8;
        param_1[1] = uVar13 + 1;
        if (local_2c != uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        puVar8[9] = puVar4;
        *(undefined2 *)(puVar8 + 2) = uVar12;
        *(undefined2 *)((int)puVar8 + 6) = 1;
        *(undefined2 *)(puVar4 + 1) = 1;
        *puVar4 = puVar8;
        goto LAB_0156a910;
      }
      goto LAB_0156ad28;
    }
    if (uVar13 + 1 <= uVar11) {
      FUN_016dd52c((int)puVar10 + (uVar13 + 1) * 2 + 8,(int)puVar10 + uVar13 * 2 + 8,
                   (uVar11 - uVar13) * 2);
    }
    *(ushort *)((int)puVar10 + 6) = uVar1 + 1;
    *(ushort *)((int)puVar10 + uVar13 * 2 + 8) = param_2;
    goto LAB_0156a910;
  }
  goto LAB_0156a8e8;
}

