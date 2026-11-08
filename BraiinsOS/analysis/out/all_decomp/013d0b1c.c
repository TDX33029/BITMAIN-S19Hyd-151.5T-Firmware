// FUN_013d0b1c @ 013d0b1c size=1956 calls_out=7 calls_in=1
// strings: 

void FUN_013d0b1c(undefined1 *param_1,int *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  uint local_34;
  
  iVar13 = *param_2;
  if (iVar13 != 0) {
    iVar3 = param_2[1];
    do {
      uVar18 = (uint)*(ushort *)(iVar13 + 0x8a);
      iVar8 = uVar18 << 2;
      iVar16 = 0x17;
      do {
        iVar11 = iVar16;
        if (iVar8 == 0) goto LAB_013d0b9c;
        uVar10 = *(uint *)(iVar13 + iVar11 * 4);
        iVar8 = iVar8 + -4;
        bVar21 = param_3 < uVar10;
        bVar2 = !bVar21 && param_3 != uVar10;
        iVar16 = iVar11 + 1;
      } while ((char)(bVar2 - bVar21) == '\x01');
      if (bVar2 == bVar21) {
        puVar4 = (undefined4 *)(iVar13 + (iVar11 + -0x17) * 8);
        *(undefined4 *)(param_1 + 1) = *puVar4;
        *(undefined4 *)(param_1 + 5) = puVar4[1];
        *puVar4 = param_5;
        puVar4[1] = param_6;
        *param_1 = 1;
        return;
      }
      uVar18 = iVar11 - 0x17;
LAB_013d0b9c:
      if (iVar3 == 0) goto LAB_013d0c2c;
      iVar3 = iVar3 + -1;
      iVar13 = *(int *)(iVar13 + uVar18 * 4 + 0x8c);
    } while( true );
  }
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x8c);
  if (puVar4 == (undefined4 *)0x0) {
LAB_013d1210:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  *puVar4 = param_5;
  *(undefined2 *)((int)puVar4 + 0x8a) = 1;
  puVar4[0x16] = 0;
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  puVar4[0x17] = param_3;
  puVar4[1] = param_6;
LAB_013d0c10:
  param_2[2] = param_2[2] + 1;
  *param_1 = 0;
  return;
LAB_013d0c2c:
  uVar1 = *(ushort *)(iVar13 + 0x8a);
  uVar10 = (uint)uVar1;
  if (uVar10 < 0xb) {
    iVar3 = iVar13 + 0x5c;
    uVar15 = uVar18 + 1;
    puVar6 = (uint *)(iVar3 + uVar18 * 4);
    if (uVar10 < uVar15) {
      *puVar6 = param_3;
    }
    else {
      FUN_016dd52c(iVar3 + uVar15 * 4,puVar6,(uVar10 - uVar18) * 4);
      *(uint *)(iVar3 + uVar18 * 4) = param_3;
      FUN_016dd52c(iVar13 + uVar15 * 8,iVar13 + uVar18 * 8,(uVar10 - uVar18) * 8);
    }
    puVar4 = (undefined4 *)(iVar13 + uVar18 * 8);
    *puVar4 = param_5;
    puVar4[1] = param_6;
    *(ushort *)(iVar13 + 0x8a) = uVar1 + 1;
  }
  else {
    uVar10 = 4;
    bVar2 = false;
    if (4 < uVar18) {
      if (uVar18 == 5) {
        uVar10 = 5;
      }
      else {
        if (uVar18 == 6) {
          uVar10 = 5;
          uVar18 = 0;
        }
        else {
          uVar18 = uVar18 - 7;
          uVar10 = 6;
        }
        bVar2 = true;
      }
    }
    iVar3 = thunk_FUN_016d4a50(0x8c);
    if (iVar3 == 0) goto LAB_013d1210;
    *(undefined2 *)(iVar3 + 0x8a) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    uVar15 = (uint)*(ushort *)(iVar13 + 0x8a) + ~uVar10;
    *(short *)(iVar3 + 0x8a) = (short)uVar15;
    if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar15,0xb,&DAT_018ac47c);
    }
    puVar4 = (undefined4 *)(iVar13 + uVar10 * 8);
    uVar7 = *puVar4;
    uVar5 = puVar4[1];
    uVar9 = *(undefined4 *)(iVar13 + 0x5c + uVar10 * 4);
    FUN_016dd1aa(iVar3 + 0x5c,iVar13 + 0x5c + (uVar10 + 1) * 4,uVar15 * 4);
    FUN_016dd1aa(iVar3,iVar13 + (uVar10 + 1) * 8,uVar15 * 8);
    *(short *)(iVar13 + 0x8a) = (short)uVar10;
    iVar8 = iVar3;
    if (!bVar2) {
      iVar8 = iVar13;
    }
    iVar16 = iVar8 + 0x5c;
    uVar1 = *(ushort *)(iVar8 + 0x8a);
    puVar6 = (uint *)(iVar16 + uVar18 * 4);
    if (uVar18 < uVar1) {
      iVar11 = uVar1 - uVar18;
      FUN_016dd52c(iVar16 + (uVar18 + 1) * 4,puVar6,iVar11 * 4);
      *(uint *)(iVar16 + uVar18 * 4) = param_3;
      FUN_016dd52c(iVar8 + (uVar18 + 1) * 8,iVar8 + uVar18 * 8,iVar11 * 8);
    }
    else {
      *puVar6 = param_3;
    }
    puVar4 = (undefined4 *)(iVar8 + uVar18 * 8);
    *puVar4 = param_5;
    puVar4[1] = param_6;
    *(ushort *)(iVar8 + 0x8a) = uVar1 + 1;
    if (*(int *)(iVar13 + 0x58) == 0) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar8 = *(int *)(iVar13 + 0x58);
      uVar12 = uVar5;
      iVar16 = iVar3;
      uVar19 = uVar9;
      uVar20 = uVar7;
      do {
        iVar11 = iVar8;
        uVar18 = (uint)*(ushort *)(iVar11 + 0x8a);
        uVar10 = (uint)*(ushort *)(iVar13 + 0x88);
        if (uVar18 < 0xb) {
          iVar13 = iVar11 + 0x5c;
          uVar15 = uVar10 + 1;
          if (uVar10 < uVar18) {
            FUN_016dd52c(iVar13 + uVar15 * 4);
            iVar3 = iVar11 + uVar10 * 8;
            *(undefined4 *)(iVar13 + uVar10 * 4) = uVar19;
            FUN_016dd52c(iVar11 + uVar15 * 8,iVar3,(uVar18 - uVar10) * 8);
            *(undefined4 *)(iVar11 + uVar10 * 8) = uVar20;
            *(undefined4 *)(iVar3 + 4) = uVar12;
            FUN_016dd52c(iVar11 + 0x8c + uVar10 * 4 + 8,iVar11 + 0x8c + uVar15 * 4,
                         (uVar18 - uVar10) * 4);
          }
          else {
            *(undefined4 *)(iVar13 + uVar10 * 4) = uVar19;
            puVar4 = (undefined4 *)(iVar11 + uVar10 * 8);
            *puVar4 = uVar20;
            puVar4[1] = uVar12;
          }
          *(short *)(iVar11 + 0x8a) = (short)(uVar18 + 1);
          *(int *)(iVar11 + uVar15 * 4 + 0x8c) = iVar16;
          if (uVar15 < uVar18 + 2) {
            do {
              iVar13 = *(int *)(iVar11 + 0x90 + uVar10 * 4);
              uVar10 = uVar10 + 1;
              *(short *)(iVar13 + 0x88) = (short)uVar10;
              *(int *)(iVar13 + 0x58) = iVar11;
            } while (uVar18 + 1 != uVar10);
          }
          goto LAB_013d0c10;
        }
        bVar2 = false;
        uVar15 = 4;
        if (4 < uVar10) {
          if (uVar10 == 5) {
            uVar15 = 5;
          }
          else if (uVar10 == 6) {
            bVar2 = true;
            uVar10 = 0;
            uVar15 = 5;
          }
          else {
            uVar10 = uVar10 - 7;
            bVar2 = true;
            uVar15 = 6;
          }
        }
        iVar3 = thunk_FUN_016d4a50(0xbc);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xbc);
        }
        *(undefined2 *)(iVar3 + 0x8a) = 0;
        *(undefined4 *)(iVar3 + 0x58) = 0;
        uVar14 = (uint)*(ushort *)(iVar11 + 0x8a) + ~uVar15;
        *(short *)(iVar3 + 0x8a) = (short)uVar14;
        if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar14,0xb,&DAT_018ac47c);
        }
        puVar4 = (undefined4 *)(iVar11 + uVar15 * 8);
        uVar7 = *puVar4;
        uVar5 = puVar4[1];
        uVar9 = *(undefined4 *)(iVar11 + 0x5c + uVar15 * 4);
        FUN_016dd1aa(iVar3 + 0x5c,iVar11 + 0x5c + (uVar15 + 1) * 4,uVar14 * 4);
        FUN_016dd1aa(iVar3,iVar11 + (uVar15 + 1) * 8,uVar14 * 8);
        *(short *)(iVar11 + 0x8a) = (short)uVar15;
        uVar14 = (uint)*(ushort *)(iVar3 + 0x8a);
        iVar13 = uVar14 + 1;
        if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar13,0xc,&DAT_018ac48c);
        }
        if (uVar18 - uVar15 != iVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        local_34 = local_34 + 1;
        FUN_016dd1aa(iVar3 + 0x8c,iVar11 + uVar15 * 4 + 0x90,iVar13 * 4);
        uVar18 = 0;
        do {
          iVar13 = *(int *)(iVar3 + 0x8c + uVar18 * 4);
          *(short *)(iVar13 + 0x88) = (short)uVar18;
          *(int *)(iVar13 + 0x58) = iVar3;
          if (uVar14 <= uVar18) break;
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar14);
        iVar13 = iVar3;
        if (!bVar2) {
          iVar13 = iVar11;
        }
        iVar8 = iVar13 + 0x5c;
        uVar18 = (uint)*(ushort *)(iVar13 + 0x8a);
        uVar15 = uVar10 + 1;
        if (uVar10 < uVar18) {
          FUN_016dd52c(iVar8 + uVar15 * 4);
          iVar17 = iVar13 + uVar10 * 8;
          *(undefined4 *)(iVar8 + uVar10 * 4) = uVar19;
          FUN_016dd52c(iVar13 + uVar15 * 8,iVar17,(uVar18 - uVar10) * 8);
          *(undefined4 *)(iVar13 + uVar10 * 8) = uVar20;
          *(undefined4 *)(iVar17 + 4) = uVar12;
          FUN_016dd52c(iVar13 + 0x8c + uVar10 * 4 + 8,iVar13 + 0x8c + uVar15 * 4,
                       (uVar18 - uVar10) * 4);
        }
        else {
          *(undefined4 *)(iVar8 + uVar10 * 4) = uVar19;
          puVar4 = (undefined4 *)(iVar13 + uVar10 * 8);
          *puVar4 = uVar20;
          puVar4[1] = uVar12;
        }
        *(int *)(iVar13 + uVar15 * 4 + 0x8c) = iVar16;
        *(short *)(iVar13 + 0x8a) = (short)(uVar18 + 1);
        if (uVar15 < uVar18 + 2) {
          do {
            iVar8 = uVar10 * 4;
            uVar10 = uVar10 + 1;
            iVar8 = *(int *)(iVar13 + iVar8 + 0x90);
            *(short *)(iVar8 + 0x88) = (short)uVar10;
            *(int *)(iVar8 + 0x58) = iVar13;
          } while (uVar18 + 1 != uVar10);
        }
        iVar8 = *(int *)(iVar11 + 0x58);
        uVar12 = uVar5;
        iVar13 = iVar11;
        iVar16 = iVar3;
        uVar19 = uVar9;
        uVar20 = uVar7;
      } while (*(int *)(iVar11 + 0x58) != 0);
    }
    iVar13 = *param_2;
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac44c);
    }
    uVar18 = param_2[1];
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xbc);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xbc);
    }
    puVar4[0x23] = iVar13;
    *(undefined2 *)((int)puVar4 + 0x8a) = 0;
    puVar4[0x16] = 0;
    if (0xfffffffe < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af438);
    }
    *(undefined2 *)(iVar13 + 0x88) = 0;
    *(undefined4 **)(iVar13 + 0x58) = puVar4;
    *param_2 = (int)puVar4;
    param_2[1] = uVar18 + 1;
    if (local_34 != uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
    }
    *puVar4 = uVar7;
    puVar4[0x17] = uVar9;
    *(undefined2 *)((int)puVar4 + 0x8a) = 1;
    puVar4[0x24] = iVar3;
    *(undefined2 *)(iVar3 + 0x88) = 1;
    *(undefined4 **)(iVar3 + 0x58) = puVar4;
    puVar4[1] = uVar5;
  }
  goto LAB_013d0c10;
}

