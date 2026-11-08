// FUN_012c0348 @ 012c0348 size=1948 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x012c0a58) */

undefined4 FUN_012c0348(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint local_40;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    iVar15 = param_2[1];
    iVar18 = param_1[1];
    uVar16 = param_2[2];
    do {
      uVar1 = *(ushort *)((int)puVar3 + 0x8a);
      puVar5 = puVar3 + 1;
      uVar13 = 0xffffffff;
      iVar19 = (uint)uVar1 * 0xc;
      do {
        if (iVar19 == 0) {
          uVar13 = (uint)uVar1;
          goto LAB_012c03fc;
        }
        uVar14 = puVar5[2];
        uVar8 = uVar14;
        if (uVar16 < uVar14) {
          uVar8 = uVar16;
        }
        iVar4 = FUN_016dd50a(iVar15,puVar5[1],uVar8);
        if (iVar4 == 0) {
          iVar4 = uVar16 - uVar14;
        }
        iVar19 = iVar19 + -0xc;
        uVar13 = uVar13 + 1;
        puVar5 = puVar5 + 3;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) {
        if (*param_2 == 0) {
          return 1;
        }
        thunk_FUN_016d3fb4(iVar15);
        return 1;
      }
LAB_012c03fc:
      if (iVar18 == 0) goto LAB_012c0498;
      iVar18 = iVar18 + -1;
      puVar3 = (undefined4 *)puVar3[uVar13 + 0x23];
    } while( true );
  }
  iVar15 = *param_2;
  if (iVar15 == -0x80000000) {
    return 1;
  }
  iVar18 = param_2[1];
  iVar19 = param_2[2];
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x8c);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  puVar3[2] = iVar18;
  *(undefined2 *)((int)puVar3 + 0x8a) = 1;
  *param_1 = puVar3;
  param_1[1] = 0;
  *puVar3 = 0;
  puVar3[1] = iVar15;
  puVar3[3] = iVar19;
  goto LAB_012c0480;
LAB_012c0498:
  iVar15 = *param_2;
  if (iVar15 == -0x80000000) {
    return 1;
  }
  uVar1 = *(ushort *)((int)puVar3 + 0x8a);
  uVar16 = (uint)uVar1;
  iVar19 = param_2[1];
  iVar18 = param_2[2];
  if (uVar16 < 0xb) {
    if (uVar13 + 1 <= uVar16) {
      FUN_016dd52c(puVar3 + (uVar13 + 1) * 3 + 1,puVar3 + uVar13 * 3 + 1,(uVar16 - uVar13) * 0xc);
    }
    piVar17 = puVar3 + uVar13 * 3 + 1;
    *piVar17 = iVar15;
    *(ushort *)((int)puVar3 + 0x8a) = uVar1 + 1;
    piVar17[1] = iVar19;
    piVar17[2] = iVar18;
  }
  else {
    uVar16 = 4;
    bVar2 = false;
    if (4 < uVar13) {
      if (uVar13 == 5) {
        uVar16 = 5;
      }
      else {
        if (uVar13 == 6) {
          uVar16 = 5;
          uVar13 = 0;
        }
        else {
          uVar13 = uVar13 - 7;
          uVar16 = 6;
        }
        bVar2 = true;
      }
    }
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x8c);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x8c);
    }
    *(undefined2 *)((int)puVar5 + 0x8a) = 0;
    *puVar5 = 0;
    uVar8 = (uint)*(ushort *)((int)puVar3 + 0x8a) + ~uVar16;
    *(short *)((int)puVar5 + 0x8a) = (short)uVar8;
    iVar11 = puVar3[uVar16 * 3 + 1];
    iVar4 = puVar3[uVar16 * 3 + 2];
    if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar8,0xb,&DAT_018ac47c);
    }
    iVar6 = puVar3[uVar16 * 3 + 3];
    FUN_016dd1aa(puVar5 + 1,puVar3 + uVar16 * 3 + 4,uVar8 * 0xc);
    *(short *)((int)puVar3 + 0x8a) = (short)uVar16;
    puVar10 = puVar5;
    if (!bVar2) {
      puVar10 = puVar3;
    }
    uVar1 = *(ushort *)((int)puVar10 + 0x8a);
    if (uVar13 < uVar1) {
      FUN_016dd52c(puVar10 + uVar13 * 3 + 1 + 3,puVar10 + uVar13 * 3 + 1,(uVar1 - uVar13) * 0xc);
    }
    piVar17 = puVar10 + uVar13 * 3 + 1;
    *piVar17 = iVar15;
    *(ushort *)((int)puVar10 + 0x8a) = uVar1 + 1;
    piVar17[1] = iVar19;
    piVar17[2] = iVar18;
    if (iVar11 != -0x80000000) {
      if ((undefined4 *)*puVar3 == (undefined4 *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        puVar10 = (undefined4 *)*puVar3;
        iVar15 = iVar4;
        iVar18 = iVar11;
        puVar12 = puVar5;
        iVar19 = iVar6;
        do {
          puVar7 = puVar10;
          uVar16 = (uint)*(ushort *)(puVar3 + 0x22);
          uVar13 = (uint)*(ushort *)((int)puVar7 + 0x8a);
          if (uVar13 < 0xb) {
            piVar17 = puVar7 + uVar16 * 3 + 1;
            if (uVar16 < uVar13) {
              FUN_016dd52c(puVar7 + (uVar16 + 1) * 3 + 1,piVar17,(uVar13 - uVar16) * 0xc);
              piVar17[1] = iVar15;
              piVar17[2] = iVar19;
              *piVar17 = iVar18;
              FUN_016dd52c(puVar7 + uVar16 + 0x25,puVar7 + uVar16 + 0x24,(uVar13 - uVar16) * 4);
            }
            else {
              *piVar17 = iVar18;
              piVar17[1] = iVar15;
              piVar17[2] = iVar19;
            }
            *(short *)((int)puVar7 + 0x8a) = (short)(uVar13 + 1);
            puVar7[uVar16 + 0x24] = puVar12;
            if (uVar16 + 1 < uVar13 + 2) {
              do {
                puVar3 = (undefined4 *)puVar7[uVar16 + 0x24];
                uVar16 = uVar16 + 1;
                *(short *)(puVar3 + 0x22) = (short)uVar16;
                *puVar3 = puVar7;
              } while (uVar13 + 1 != uVar16);
            }
            goto LAB_012c0480;
          }
          bVar2 = false;
          uVar8 = 4;
          if (4 < uVar16) {
            if (uVar16 == 5) {
              uVar8 = 5;
            }
            else if (uVar16 == 6) {
              bVar2 = true;
              uVar16 = 0;
              uVar8 = 5;
            }
            else {
              uVar16 = uVar16 - 7;
              bVar2 = true;
              uVar8 = 6;
            }
          }
          puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xbc);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xbc);
          }
          *(undefined2 *)((int)puVar5 + 0x8a) = 0;
          *puVar5 = 0;
          iVar11 = puVar7[uVar8 * 3 + 1];
          uVar14 = (uint)*(ushort *)((int)puVar7 + 0x8a) + ~uVar8;
          iVar4 = puVar7[uVar8 * 3 + 2];
          iVar6 = puVar7[uVar8 * 3 + 3];
          *(short *)((int)puVar5 + 0x8a) = (short)uVar14;
          if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar14,0xb,&DAT_018ac47c);
          }
          FUN_016dd1aa(puVar5 + 1,puVar7 + uVar8 * 3 + 4,uVar14 * 0xc);
          *(short *)((int)puVar7 + 0x8a) = (short)uVar8;
          uVar14 = (uint)*(ushort *)((int)puVar5 + 0x8a);
          iVar9 = uVar14 + 1;
          if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar9,0xc,&DAT_018ac48c);
          }
          if (uVar13 - uVar8 != iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
          }
          local_40 = local_40 + 1;
          FUN_016dd1aa(puVar5 + 0x23,puVar7 + uVar8 + 0x24,iVar9 * 4);
          uVar13 = 0;
          do {
            puVar3 = (undefined4 *)(puVar5 + 0x23)[uVar13];
            *(short *)(puVar3 + 0x22) = (short)uVar13;
            *puVar3 = puVar5;
            if (uVar14 <= uVar13) break;
            uVar13 = uVar13 + 1;
          } while (uVar13 <= uVar14);
          puVar3 = puVar5;
          if (!bVar2) {
            puVar3 = puVar7;
          }
          uVar13 = (uint)*(ushort *)((int)puVar3 + 0x8a);
          piVar17 = puVar3 + uVar16 * 3 + 1;
          if (uVar16 < uVar13) {
            FUN_016dd52c(puVar3 + (uVar16 + 1) * 3 + 1,piVar17,(uVar13 - uVar16) * 0xc);
            *piVar17 = iVar18;
            piVar17[1] = iVar15;
            piVar17[2] = iVar19;
            FUN_016dd52c(puVar3 + uVar16 + 0x25,puVar3 + uVar16 + 0x24,(uVar13 - uVar16) * 4);
          }
          else {
            *piVar17 = iVar18;
            piVar17[1] = iVar15;
            piVar17[2] = iVar19;
          }
          *(short *)((int)puVar3 + 0x8a) = (short)(uVar13 + 1);
          puVar3[uVar16 + 0x24] = puVar12;
          if (uVar16 + 1 < uVar13 + 2) {
            do {
              uVar8 = uVar16 + 1;
              puVar10 = (undefined4 *)puVar3[uVar16 + 0x24];
              *(short *)(puVar10 + 0x22) = (short)uVar8;
              *puVar10 = puVar3;
              uVar16 = uVar8;
            } while (uVar13 + 1 != uVar8);
          }
          if (iVar11 == -0x80000000) goto LAB_012c0480;
          puVar10 = (undefined4 *)*puVar7;
          iVar15 = iVar4;
          iVar18 = iVar11;
          puVar12 = puVar5;
          puVar3 = puVar7;
          iVar19 = iVar6;
        } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)*param_1;
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      uVar16 = param_1[1];
      puVar10 = (undefined4 *)thunk_FUN_016d4a50(0xbc);
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xbc);
      }
      puVar10[0x23] = puVar3;
      *(undefined2 *)((int)puVar10 + 0x8a) = 0;
      *puVar10 = 0;
      if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(puVar3 + 0x22) = 0;
      *param_1 = puVar10;
      *puVar3 = puVar10;
      param_1[1] = uVar16 + 1;
      if (local_40 != uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
      }
      puVar10[0x24] = puVar5;
      puVar10[1] = iVar11;
      puVar10[2] = iVar4;
      puVar10[3] = iVar6;
      *(undefined2 *)((int)puVar10 + 0x8a) = 1;
      *(undefined2 *)(puVar5 + 0x22) = 1;
      *puVar5 = puVar10;
    }
  }
LAB_012c0480:
  param_1[2] = param_1[2] + 1;
  return 0;
}

