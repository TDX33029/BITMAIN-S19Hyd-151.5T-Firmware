// FUN_009f3608 @ 009f3608 size=1632 calls_out=7 calls_in=3
// strings: 

void FUN_009f3608(int *param_1,int *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint local_40;
  
  iVar18 = *param_2;
  if (iVar18 == 0) {
    piVar20 = (int *)param_2[3];
    iVar5 = thunk_FUN_016d4a50(0x60);
    if (iVar5 == 0) {
LAB_009f3c04:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x60);
    }
    uVar11 = 0;
    *(undefined2 *)(iVar5 + 0x5e) = 0;
    *(undefined4 *)(iVar5 + 0x58) = 0;
    *piVar20 = iVar5;
    piVar20[1] = 0;
    local_40 = (uint)*(ushort *)(iVar5 + 0x5e);
    if (10 < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
    }
    iVar18 = param_2[5];
    iVar10 = param_2[4];
    *(ushort *)(iVar5 + 0x5e) = *(ushort *)(iVar5 + 0x5e) + 1;
    piVar4 = (int *)(iVar5 + local_40 * 8);
    *piVar4 = iVar10;
    *(char *)(piVar4 + 1) = (char)iVar18;
  }
  else {
    uVar2 = *(ushort *)(iVar18 + 0x5e);
    uVar11 = (uint)uVar2;
    piVar20 = (int *)param_2[3];
    iVar14 = param_2[4];
    iVar10 = param_2[5];
    iVar5 = iVar18;
    if (uVar11 < 0xb) {
      local_40 = param_2[2];
      if (local_40 + 1 <= uVar11) {
        FUN_016dd52c(iVar18 + (local_40 + 1) * 8,iVar18 + local_40 * 8,(uVar11 - local_40) * 8);
      }
      *(ushort *)(iVar18 + 0x5e) = uVar2 + 1;
      piVar4 = (int *)(iVar18 + local_40 * 8);
      *piVar4 = iVar14;
      uVar11 = param_2[1];
      *(char *)(piVar4 + 1) = (char)iVar10;
    }
    else {
      local_40 = param_2[2];
      uVar21 = 4;
      bVar3 = false;
      if (4 < local_40) {
        if (local_40 == 5) {
          uVar21 = 5;
        }
        else {
          if (local_40 == 6) {
            uVar21 = 5;
            local_40 = 0;
          }
          else {
            uVar21 = 6;
            local_40 = local_40 - 7;
          }
          bVar3 = true;
        }
      }
      uVar17 = param_2[1];
      iVar6 = thunk_FUN_016d4a50(0x60);
      if (iVar6 == 0) goto LAB_009f3c04;
      uVar11 = uVar11 + ~uVar21;
      *(short *)(iVar6 + 0x5e) = (short)uVar11;
      *(undefined4 *)(iVar6 + 0x58) = 0;
      if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar11,0xb,&DAT_018ac47c);
      }
      puVar7 = (undefined4 *)(iVar18 + uVar21 * 8);
      uVar12 = *puVar7;
      uVar16 = *(undefined1 *)(puVar7 + 1);
      FUN_016dd1aa(iVar6,puVar7 + 2,uVar11 * 8);
      *(short *)(iVar18 + 0x5e) = (short)uVar21;
      uVar11 = uVar17;
      if (bVar3) {
        uVar11 = 0;
        iVar5 = iVar6;
      }
      uVar2 = *(ushort *)(iVar5 + 0x5e);
      if (local_40 < uVar2) {
        iVar8 = iVar5 + local_40 * 8;
        FUN_016dd52c(iVar8 + 8,iVar8,(uVar2 - local_40) * 8);
      }
      *(ushort *)(iVar5 + 0x5e) = uVar2 + 1;
      piVar4 = (int *)(iVar5 + local_40 * 8);
      *piVar4 = iVar14;
      *(char *)(piVar4 + 1) = (char)iVar10;
      if (*(int *)(iVar18 + 0x58) == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        iVar10 = *(int *)(iVar18 + 0x58);
        iVar14 = iVar6;
        uVar15 = uVar12;
        uVar1 = uVar16;
        do {
          iVar8 = iVar10;
          if (uVar21 != uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
          }
          uVar21 = (uint)*(ushort *)(iVar8 + 0x5e);
          uVar19 = (uint)*(ushort *)(iVar18 + 0x5c);
          if (uVar21 < 0xb) {
            puVar7 = (undefined4 *)(iVar8 + uVar19 * 8);
            uVar17 = uVar19 + 1;
            if (uVar19 < uVar21) {
              FUN_016dd52c(iVar8 + uVar17 * 8,puVar7,(uVar21 - uVar19) * 8);
              *(undefined4 *)(iVar8 + uVar19 * 8) = uVar15;
              *(undefined1 *)(puVar7 + 1) = uVar1;
              FUN_016dd52c(iVar8 + 0x60 + uVar19 * 4 + 8,iVar8 + 0x60 + uVar17 * 4,
                           (uVar21 - uVar19) * 4);
            }
            else {
              *(undefined1 *)(puVar7 + 1) = uVar1;
              *puVar7 = uVar15;
            }
            *(short *)(iVar8 + 0x5e) = (short)(uVar21 + 1);
            *(int *)(iVar8 + uVar17 * 4 + 0x60) = iVar14;
            if (uVar17 < uVar21 + 2) {
              do {
                iVar18 = *(int *)(iVar8 + 100 + uVar19 * 4);
                uVar19 = uVar19 + 1;
                *(short *)(iVar18 + 0x5c) = (short)uVar19;
                *(int *)(iVar18 + 0x58) = iVar8;
              } while (uVar21 + 1 != uVar19);
            }
            goto LAB_009f3b6c;
          }
          bVar3 = false;
          uVar13 = 4;
          if (4 < uVar19) {
            if (uVar19 == 5) {
              uVar13 = 5;
            }
            else if (uVar19 == 6) {
              bVar3 = true;
              uVar19 = 0;
              uVar13 = 5;
            }
            else {
              uVar19 = uVar19 - 7;
              bVar3 = true;
              uVar13 = 6;
            }
          }
          iVar6 = thunk_FUN_016d4a50(0x90);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x90);
          }
          *(undefined2 *)(iVar6 + 0x5e) = 0;
          *(undefined4 *)(iVar6 + 0x58) = 0;
          uVar9 = (uint)*(ushort *)(iVar8 + 0x5e) + ~uVar13;
          *(short *)(iVar6 + 0x5e) = (short)uVar9;
          if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar9,0xb,&DAT_018ac47c);
          }
          puVar7 = (undefined4 *)(iVar8 + uVar13 * 8);
          uVar12 = *puVar7;
          uVar16 = *(undefined1 *)(puVar7 + 1);
          FUN_016dd1aa(iVar6,puVar7 + 2,uVar9 * 8);
          *(short *)(iVar8 + 0x5e) = (short)uVar13;
          uVar9 = (uint)*(ushort *)(iVar6 + 0x5e);
          iVar18 = uVar9 + 1;
          if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar18,0xc,&DAT_018ac48c);
          }
          if (uVar21 - uVar13 != iVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
          }
          uVar21 = uVar17 + 1;
          FUN_016dd1aa(iVar6 + 0x60,iVar8 + uVar13 * 4 + 100,iVar18 * 4);
          uVar17 = 0;
          do {
            iVar18 = *(int *)(iVar6 + 0x60 + uVar17 * 4);
            *(short *)(iVar18 + 0x5c) = (short)uVar17;
            *(int *)(iVar18 + 0x58) = iVar6;
            if (uVar9 <= uVar17) break;
            uVar17 = uVar17 + 1;
          } while (uVar17 <= uVar9);
          uVar17 = uVar19 + 1;
          iVar18 = iVar6;
          if (!bVar3) {
            iVar18 = iVar8;
          }
          puVar7 = (undefined4 *)(iVar18 + uVar19 * 8);
          uVar13 = (uint)*(ushort *)(iVar18 + 0x5e);
          if (uVar19 < uVar13) {
            FUN_016dd52c(iVar18 + uVar17 * 8,puVar7,(uVar13 - uVar19) * 8);
            *(undefined4 *)(iVar18 + uVar19 * 8) = uVar15;
            *(undefined1 *)(puVar7 + 1) = uVar1;
            FUN_016dd52c(iVar18 + 0x60 + uVar19 * 4 + 8,iVar18 + 0x60 + uVar17 * 4,
                         (uVar13 - uVar19) * 4);
          }
          else {
            *(undefined1 *)(puVar7 + 1) = uVar1;
            *puVar7 = uVar15;
          }
          *(short *)(iVar18 + 0x5e) = (short)(uVar13 + 1);
          *(int *)(iVar18 + uVar17 * 4 + 0x60) = iVar14;
          if (uVar17 < uVar13 + 2) {
            do {
              iVar10 = uVar19 * 4;
              uVar19 = uVar19 + 1;
              iVar10 = *(int *)(iVar18 + iVar10 + 100);
              *(short *)(iVar10 + 0x5c) = (short)uVar19;
              *(int *)(iVar10 + 0x58) = iVar18;
            } while (uVar13 + 1 != uVar19);
          }
          iVar10 = *(int *)(iVar8 + 0x58);
          iVar14 = iVar6;
          uVar15 = uVar12;
          uVar17 = uVar21;
          iVar18 = iVar8;
          uVar1 = uVar16;
        } while (*(int *)(iVar8 + 0x58) != 0);
      }
      iVar18 = *piVar20;
      if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      uVar17 = piVar20[1];
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x90);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x90);
      }
      puVar7[0x18] = iVar18;
      *(undefined2 *)((int)puVar7 + 0x5e) = 0;
      puVar7[0x16] = 0;
      if (0xfffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *piVar20 = (int)puVar7;
      *(undefined2 *)(iVar18 + 0x5c) = 0;
      *(undefined4 **)(iVar18 + 0x58) = puVar7;
      piVar20[1] = uVar17 + 1;
      if (uVar21 != uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
      }
      *(undefined1 *)(puVar7 + 1) = uVar16;
      puVar7[0x19] = iVar6;
      *puVar7 = uVar12;
      *(undefined2 *)((int)puVar7 + 0x5e) = 1;
      *(undefined2 *)(iVar6 + 0x5c) = 1;
      *(undefined4 **)(iVar6 + 0x58) = puVar7;
    }
  }
LAB_009f3b6c:
  iVar18 = piVar20[2];
  *param_1 = iVar5;
  param_1[1] = uVar11;
  param_1[2] = local_40;
  param_1[3] = (int)piVar20;
  piVar20[2] = iVar18 + 1;
  return;
}

