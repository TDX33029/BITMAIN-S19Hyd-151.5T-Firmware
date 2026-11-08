// FUN_005fc44c @ 005fc44c size=1436 calls_out=7 calls_in=1
// strings: 

void FUN_005fc44c(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_2c;
  
  puVar14 = (undefined4 *)*param_1;
  if (puVar14 != (undefined4 *)0x0) {
    iVar4 = param_1[1];
    do {
      uVar16 = (uint)*(ushort *)((int)puVar14 + 0x32);
      iVar12 = uVar16 << 2;
      iVar3 = 1;
      do {
        iVar7 = iVar3;
        if (iVar12 == 0) goto LAB_005fc4bc;
        iVar12 = iVar12 + -4;
        bVar18 = param_2 < (uint)puVar14[iVar7];
        bVar2 = !bVar18 && param_2 != puVar14[iVar7];
        iVar3 = iVar7 + 1;
      } while ((char)(bVar2 - bVar18) == '\x01');
      if (bVar2 == bVar18) {
        return;
      }
      uVar16 = iVar7 - 1;
LAB_005fc4bc:
      if (iVar4 == 0) goto LAB_005fc50c;
      iVar4 = iVar4 + -1;
      puVar14 = (undefined4 *)puVar14[uVar16 + 0xd];
    } while( true );
  }
  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar14 == (undefined4 *)0x0) {
LAB_005fc940:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *(undefined2 *)((int)puVar14 + 0x32) = 1;
  *param_1 = puVar14;
  param_1[1] = 0;
  *puVar14 = 0;
  puVar14[1] = param_2;
LAB_005fc4f8:
  param_1[2] = param_1[2] + 1;
  return;
LAB_005fc50c:
  uVar1 = *(ushort *)((int)puVar14 + 0x32);
  uVar15 = (uint)uVar1;
  if (uVar15 < 0xb) {
    if (uVar16 + 1 <= uVar15) {
      FUN_016dd52c(puVar14 + uVar16 + 2,puVar14 + uVar16 + 1,(uVar15 - uVar16) * 4);
    }
    puVar14[uVar16 + 1] = param_2;
    *(ushort *)((int)puVar14 + 0x32) = uVar1 + 1;
  }
  else {
    uVar15 = 4;
    bVar2 = false;
    if (4 < uVar16) {
      if (uVar16 == 5) {
        uVar15 = 5;
      }
      else {
        if (uVar16 == 6) {
          uVar15 = 5;
          uVar16 = 0;
        }
        else {
          uVar16 = uVar16 - 7;
          uVar15 = 6;
        }
        bVar2 = true;
      }
    }
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar5 == (undefined4 *)0x0) goto LAB_005fc940;
    *(undefined2 *)((int)puVar5 + 0x32) = 0;
    *puVar5 = 0;
    uVar8 = (uint)*(ushort *)((int)puVar14 + 0x32) + ~uVar15;
    *(short *)((int)puVar5 + 0x32) = (short)uVar8;
    if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar8,0xb,&DAT_018ac47c);
    }
    uVar17 = puVar14[uVar15 + 1];
    FUN_016dd1aa(puVar5 + 1,puVar14 + uVar15 + 2,uVar8 * 4);
    puVar11 = puVar5;
    if (!bVar2) {
      puVar11 = puVar14;
    }
    *(short *)((int)puVar14 + 0x32) = (short)uVar15;
    uVar1 = *(ushort *)((int)puVar11 + 0x32);
    if (uVar16 < uVar1) {
      FUN_016dd52c(puVar11 + uVar16 + 1 + 1,puVar11 + uVar16 + 1,(uVar1 - uVar16) * 4);
    }
    puVar11[uVar16 + 1] = param_2;
    *(ushort *)((int)puVar11 + 0x32) = uVar1 + 1;
    if ((undefined4 *)*puVar14 == (undefined4 *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = 0;
      puVar11 = (undefined4 *)*puVar14;
      puVar9 = puVar5;
      uVar13 = uVar17;
      do {
        puVar6 = puVar11;
        uVar15 = (uint)*(ushort *)((int)puVar6 + 0x32);
        uVar16 = (uint)*(ushort *)(puVar14 + 0xc);
        if (uVar15 < 0xb) {
          if (uVar16 < uVar15) {
            iVar4 = (uVar15 - uVar16) * 4;
            FUN_016dd52c(puVar6 + uVar16 + 2,puVar6 + uVar16 + 1,iVar4);
            FUN_016dd52c(puVar6 + uVar16 + 0xf,puVar6 + uVar16 + 0xe,iVar4);
          }
          puVar6[uVar16 + 1] = uVar13;
          *(short *)((int)puVar6 + 0x32) = (short)(uVar15 + 1);
          puVar6[uVar16 + 0xe] = puVar9;
          if (uVar16 + 1 < uVar15 + 2) {
            do {
              puVar14 = (undefined4 *)puVar6[uVar16 + 0xe];
              uVar16 = uVar16 + 1;
              *(short *)(puVar14 + 0xc) = (short)uVar16;
              *puVar14 = puVar6;
            } while (uVar15 + 1 != uVar16);
          }
          goto LAB_005fc4f8;
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
        puVar5 = (undefined4 *)thunk_FUN_016d4a50(100);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,100);
        }
        *(undefined2 *)((int)puVar5 + 0x32) = 0;
        *puVar5 = 0;
        uVar10 = (uint)*(ushort *)((int)puVar6 + 0x32) + ~uVar8;
        *(short *)((int)puVar5 + 0x32) = (short)uVar10;
        if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar10,0xb,&DAT_018ac47c);
        }
        uVar17 = puVar6[uVar8 + 1];
        FUN_016dd1aa(puVar5 + 1,puVar6 + uVar8 + 2,uVar10 * 4);
        *(short *)((int)puVar6 + 0x32) = (short)uVar8;
        uVar10 = (uint)*(ushort *)((int)puVar5 + 0x32);
        iVar4 = uVar10 + 1;
        if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar4,0xc,&DAT_018ac48c);
        }
        if (uVar15 - uVar8 != iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        local_2c = local_2c + 1;
        FUN_016dd1aa(puVar5 + 0xd,puVar6 + uVar8 + 0xe,iVar4 * 4);
        uVar15 = 0;
        do {
          puVar14 = (undefined4 *)(puVar5 + 0xd)[uVar15];
          *(short *)(puVar14 + 0xc) = (short)uVar15;
          *puVar14 = puVar5;
          if (uVar10 <= uVar15) break;
          uVar15 = uVar15 + 1;
        } while (uVar15 <= uVar10);
        puVar14 = puVar5;
        if (!bVar2) {
          puVar14 = puVar6;
        }
        uVar15 = (uint)*(ushort *)((int)puVar14 + 0x32);
        if (uVar16 < uVar15) {
          iVar4 = (uVar15 - uVar16) * 4;
          FUN_016dd52c(puVar14 + uVar16 + 2,puVar14 + uVar16 + 1,iVar4);
          FUN_016dd52c(puVar14 + uVar16 + 0xf,puVar14 + uVar16 + 0xe,iVar4);
        }
        puVar14[uVar16 + 1] = uVar13;
        puVar14[uVar16 + 0xe] = puVar9;
        *(short *)((int)puVar14 + 0x32) = (short)(uVar15 + 1);
        if (uVar16 + 1 < uVar15 + 2) {
          do {
            uVar8 = uVar16 + 1;
            puVar11 = (undefined4 *)puVar14[uVar16 + 0xe];
            *(short *)(puVar11 + 0xc) = (short)uVar8;
            *puVar11 = puVar14;
            uVar16 = uVar8;
          } while (uVar15 + 1 != uVar8);
        }
        puVar11 = (undefined4 *)*puVar6;
        puVar9 = puVar5;
        uVar13 = uVar17;
        puVar14 = puVar6;
      } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
    }
    puVar14 = (undefined4 *)*param_1;
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac44c);
    }
    uVar16 = param_1[1];
    puVar11 = (undefined4 *)thunk_FUN_016d4a50(100);
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
    puVar11[0xd] = puVar14;
    *(undefined2 *)((int)puVar11 + 0x32) = 0;
    *puVar11 = 0;
    if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af438);
    }
    *(undefined2 *)(puVar14 + 0xc) = 0;
    *param_1 = puVar11;
    *puVar14 = puVar11;
    param_1[1] = uVar16 + 1;
    if (local_2c != uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
    }
    puVar11[0xe] = puVar5;
    puVar11[1] = uVar17;
    *(undefined2 *)((int)puVar11 + 0x32) = 1;
    *(undefined2 *)(puVar5 + 0xc) = 1;
    *puVar5 = puVar11;
  }
  goto LAB_005fc4f8;
}

