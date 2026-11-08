// FUN_00c4390c @ 00c4390c size=1664 calls_out=7 calls_in=2
// strings: 

void FUN_00c4390c(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 in_d0;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_54;
  
  iVar8 = *param_2;
  uVar1 = *(ushort *)(iVar8 + 0x8a);
  uVar11 = (uint)uVar1;
  if (uVar11 < 0xb) {
    local_54 = param_2[2];
    iVar13 = iVar8 + 0x5c;
    uVar14 = local_54 + 1;
    puVar6 = (undefined4 *)(iVar13 + local_54 * 4);
    if (uVar11 < uVar14) {
      *puVar6 = param_3;
    }
    else {
      FUN_016dd52c(iVar13 + uVar14 * 4,puVar6,(uVar11 - local_54) * 4);
      *(undefined4 *)(iVar13 + local_54 * 4) = param_3;
      FUN_016dd52c(iVar8 + uVar14 * 8,iVar8 + local_54 * 8,(uVar11 - local_54) * 8);
    }
    uVar11 = param_2[1];
    *(undefined8 *)(iVar8 + local_54 * 8) = in_d0;
    *(ushort *)(iVar8 + 0x8a) = uVar1 + 1;
    iVar10 = iVar8;
  }
  else {
    local_54 = param_2[2];
    uVar14 = 4;
    bVar2 = false;
    if (4 < local_54) {
      if (local_54 == 5) {
        uVar14 = 5;
      }
      else {
        if (local_54 == 6) {
          uVar14 = 5;
          local_54 = 0;
        }
        else {
          local_54 = local_54 - 7;
          uVar14 = 6;
        }
        bVar2 = true;
      }
    }
    uVar3 = param_2[1];
    iVar13 = thunk_FUN_016d4a50(0x90);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x90);
    }
    uVar11 = uVar11 + ~uVar14;
    *(short *)(iVar13 + 0x8a) = (short)uVar11;
    *(undefined4 *)(iVar13 + 0x58) = 0;
    if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar11,0xb,&DAT_018ac47c);
    }
    uVar5 = *(undefined4 *)(iVar8 + 0x5c + uVar14 * 4);
    uVar20 = *(undefined8 *)(iVar8 + uVar14 * 8);
    FUN_016dd1aa(iVar13 + 0x5c,iVar8 + 0x5c + (uVar14 + 1) * 4,uVar11 * 4);
    FUN_016dd1aa(iVar13,iVar8 + (uVar14 + 1) * 8,uVar11 * 8);
    iVar10 = iVar13;
    if (!bVar2) {
      iVar10 = iVar8;
    }
    *(short *)(iVar8 + 0x8a) = (short)uVar14;
    iVar15 = iVar10 + 0x5c;
    uVar1 = *(ushort *)(iVar10 + 0x8a);
    puVar6 = (undefined4 *)(iVar15 + local_54 * 4);
    uVar11 = uVar3;
    if (bVar2) {
      uVar11 = 0;
    }
    if (local_54 < uVar1) {
      iVar16 = uVar1 - local_54;
      FUN_016dd52c(iVar15 + (local_54 + 1) * 4,puVar6,iVar16 * 4);
      *(undefined4 *)(iVar15 + local_54 * 4) = param_3;
      FUN_016dd52c(iVar10 + (local_54 + 1) * 8,iVar10 + local_54 * 8,iVar16 * 8);
    }
    else {
      *puVar6 = param_3;
    }
    *(undefined8 *)(iVar10 + local_54 * 8) = in_d0;
    *(ushort *)(iVar10 + 0x8a) = uVar1 + 1;
    if (*(int *)(iVar8 + 0x58) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      iVar15 = *(int *)(iVar8 + 0x58);
      uVar7 = uVar5;
      iVar16 = iVar13;
      uVar19 = uVar20;
      do {
        iVar4 = iVar15;
        if (uVar14 != uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
        }
        uVar17 = (uint)*(ushort *)(iVar8 + 0x88);
        uVar14 = (uint)*(ushort *)(iVar4 + 0x8a);
        if (uVar14 < 0xb) {
          iVar8 = iVar4 + 0x5c;
          uVar3 = uVar17 + 1;
          if (uVar17 < uVar14) {
            FUN_016dd52c(iVar8 + uVar3 * 4);
            *(undefined4 *)(iVar8 + uVar17 * 4) = uVar7;
            puVar9 = (undefined8 *)(iVar4 + uVar17 * 8);
            FUN_016dd52c(iVar4 + uVar3 * 8,puVar9,(uVar14 - uVar17) * 8);
            *puVar9 = uVar19;
            FUN_016dd52c(iVar4 + 0x90 + uVar17 * 4 + 8,iVar4 + 0x90 + uVar3 * 4,
                         (uVar14 - uVar17) * 4);
          }
          else {
            *(undefined4 *)(iVar8 + uVar17 * 4) = uVar7;
            *(undefined8 *)(iVar4 + uVar17 * 8) = uVar19;
          }
          *(int *)(iVar4 + uVar3 * 4 + 0x90) = iVar16;
          *(short *)(iVar4 + 0x8a) = (short)(uVar14 + 1);
          if (uVar3 < uVar14 + 2) {
            do {
              iVar8 = *(int *)(iVar4 + 0x94 + uVar17 * 4);
              uVar17 = uVar17 + 1;
              *(short *)(iVar8 + 0x88) = (short)uVar17;
              *(int *)(iVar8 + 0x58) = iVar4;
            } while (uVar14 + 1 != uVar17);
          }
          goto LAB_00c43eb0;
        }
        bVar2 = false;
        uVar18 = 4;
        if (4 < uVar17) {
          if (uVar17 == 5) {
            uVar18 = 5;
          }
          else if (uVar17 == 6) {
            bVar2 = true;
            uVar17 = 0;
            uVar18 = 5;
          }
          else {
            uVar17 = uVar17 - 7;
            bVar2 = true;
            uVar18 = 6;
          }
        }
        iVar13 = thunk_FUN_016d4a50(0xc0);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xc0);
        }
        *(undefined2 *)(iVar13 + 0x8a) = 0;
        *(undefined4 *)(iVar13 + 0x58) = 0;
        uVar12 = (uint)*(ushort *)(iVar4 + 0x8a) + ~uVar18;
        *(short *)(iVar13 + 0x8a) = (short)uVar12;
        if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar12,0xb,&DAT_018ac47c);
        }
        uVar5 = *(undefined4 *)(iVar4 + 0x5c + uVar18 * 4);
        uVar20 = *(undefined8 *)(iVar4 + uVar18 * 8);
        FUN_016dd1aa(iVar13 + 0x5c,iVar4 + 0x5c + (uVar18 + 1) * 4,uVar12 * 4);
        FUN_016dd1aa(iVar13,iVar4 + (uVar18 + 1) * 8,uVar12 * 8);
        *(short *)(iVar4 + 0x8a) = (short)uVar18;
        uVar12 = (uint)*(ushort *)(iVar13 + 0x8a);
        iVar8 = uVar12 + 1;
        if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar8,0xc,&DAT_018ac48c);
        }
        if (uVar14 - uVar18 != iVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        uVar14 = uVar3 + 1;
        FUN_016dd1aa(iVar13 + 0x90,iVar4 + uVar18 * 4 + 0x94,iVar8 * 4);
        uVar3 = 0;
        do {
          iVar8 = *(int *)(iVar13 + 0x90 + uVar3 * 4);
          *(short *)(iVar8 + 0x88) = (short)uVar3;
          *(int *)(iVar8 + 0x58) = iVar13;
          if (uVar12 <= uVar3) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 <= uVar12);
        uVar3 = uVar17 + 1;
        iVar8 = iVar13;
        if (!bVar2) {
          iVar8 = iVar4;
        }
        iVar15 = iVar8 + 0x5c;
        uVar18 = (uint)*(ushort *)(iVar8 + 0x8a);
        if (uVar17 < uVar18) {
          FUN_016dd52c(iVar15 + uVar3 * 4);
          *(undefined4 *)(iVar15 + uVar17 * 4) = uVar7;
          puVar9 = (undefined8 *)(iVar8 + uVar17 * 8);
          FUN_016dd52c(iVar8 + uVar3 * 8,puVar9,(uVar18 - uVar17) * 8);
          *puVar9 = uVar19;
          FUN_016dd52c(iVar8 + 0x90 + uVar17 * 4 + 8,iVar8 + 0x90 + uVar3 * 4,(uVar18 - uVar17) * 4)
          ;
        }
        else {
          *(undefined4 *)(iVar15 + uVar17 * 4) = uVar7;
          *(undefined8 *)(iVar8 + uVar17 * 8) = uVar19;
        }
        *(int *)(iVar8 + uVar3 * 4 + 0x90) = iVar16;
        *(short *)(iVar8 + 0x8a) = (short)(uVar18 + 1);
        if (uVar3 < uVar18 + 2) {
          do {
            iVar15 = uVar17 * 4;
            uVar17 = uVar17 + 1;
            iVar15 = *(int *)(iVar8 + iVar15 + 0x94);
            *(short *)(iVar15 + 0x88) = (short)uVar17;
            *(int *)(iVar15 + 0x58) = iVar8;
          } while (uVar18 + 1 != uVar17);
        }
        iVar15 = *(int *)(iVar4 + 0x58);
        uVar7 = uVar5;
        iVar8 = iVar4;
        iVar16 = iVar13;
        uVar3 = uVar14;
        uVar19 = uVar20;
      } while (*(int *)(iVar4 + 0x58) != 0);
    }
    iVar8 = *param_4;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac44c);
    }
    uVar3 = param_4[1];
    puVar9 = (undefined8 *)thunk_FUN_016d4a50(0xc0);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xc0);
    }
    *(int *)(puVar9 + 0x12) = iVar8;
    *(undefined2 *)((int)puVar9 + 0x8a) = 0;
    *(undefined4 *)(puVar9 + 0xb) = 0;
    if (0xfffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af438);
    }
    *param_4 = (int)puVar9;
    *(undefined2 *)(iVar8 + 0x88) = 0;
    *(undefined8 **)(iVar8 + 0x58) = puVar9;
    param_4[1] = uVar3 + 1;
    if (uVar14 != uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
    }
    *(undefined4 *)((int)puVar9 + 0x5c) = uVar5;
    *(undefined2 *)((int)puVar9 + 0x8a) = 1;
    *(int *)((int)puVar9 + 0x94) = iVar13;
    *puVar9 = uVar20;
    *(undefined2 *)(iVar13 + 0x88) = 1;
    *(undefined8 **)(iVar13 + 0x58) = puVar9;
  }
LAB_00c43eb0:
  *param_1 = iVar10;
  param_1[1] = uVar11;
  param_1[2] = local_54;
  return;
}

