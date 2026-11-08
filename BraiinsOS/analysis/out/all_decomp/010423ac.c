// FUN_010423ac @ 010423ac size=1520 calls_out=7 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01042894) */
/* WARNING: Removing unreachable block (ram,0x01042888) */
/* WARNING: Removing unreachable block (ram,0x0104288c) */
/* WARNING: Removing unreachable block (ram,0x010428a8) */
/* WARNING: Removing unreachable block (ram,0x010428b0) */
/* WARNING: Removing unreachable block (ram,0x010428a0) */

void FUN_010423ac(undefined4 *param_1,ushort param_2,undefined2 param_3)

{
  ushort uVar1;
  undefined2 uVar3;
  undefined2 uVar2;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  
  puVar15 = (undefined4 *)*param_1;
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar15 == (undefined4 *)0x0) {
LAB_01042cb8:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *(undefined2 *)((int)puVar15 + 6) = param_3;
    *(undefined2 *)((int)puVar15 + 0x32) = 1;
    *puVar15 = 0;
    *param_1 = puVar15;
    param_1[1] = 0;
    *(ushort *)(puVar15 + 1) = param_2;
  }
  else {
    iVar17 = param_1[1];
    while( true ) {
      if (*(short *)((int)puVar15 + 0x32) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0104243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01042440 + *(int *)(&DAT_01042440 + (uint)param_2 * 4)))
                  (*(int *)(&DAT_01042440 + (uint)param_2 * 4),*(undefined2 *)(puVar15 + 1),
                   puVar15 + 2);
        return;
      }
      if (iVar17 == 0) break;
      iVar17 = iVar17 + -1;
      puVar15 = (undefined4 *)puVar15[0xd];
    }
    uVar1 = *(ushort *)((int)puVar15 + 0x32);
    uVar12 = (uint)uVar1;
    if (uVar12 < 0xb) {
      if (uVar12 != 0) {
        FUN_016dd52c(puVar15 + 2,puVar15 + 1,uVar12 * 4);
      }
      *(ushort *)(puVar15 + 1) = param_2;
      *(undefined2 *)((int)puVar15 + 6) = param_3;
      *(ushort *)((int)puVar15 + 0x32) = uVar1 + 1;
    }
    else {
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x34);
      if (puVar5 == (undefined4 *)0x0) goto LAB_01042cb8;
      *(undefined2 *)((int)puVar5 + 0x32) = 0;
      *puVar5 = 0;
      uVar12 = *(ushort *)((int)puVar15 + 0x32) - 5;
      *(short *)((int)puVar5 + 0x32) = (short)uVar12;
      if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar12,0xb,&DAT_018ac47c);
      }
      uVar14 = *(undefined2 *)(puVar15 + 5);
      uVar7 = *(undefined2 *)((int)puVar15 + 0x16);
      FUN_016dd1aa(puVar5 + 1,puVar15 + 6,uVar12 * 4);
      *(undefined2 *)((int)puVar15 + 0x32) = 4;
      uVar1 = *(ushort *)((int)puVar15 + 0x32);
      if (uVar1 != 0) {
        FUN_016dd52c(puVar15 + 2,puVar15 + 1,(uint)uVar1 * 4);
      }
      *(ushort *)(puVar15 + 1) = param_2;
      *(undefined2 *)((int)puVar15 + 6) = param_3;
      *(ushort *)((int)puVar15 + 0x32) = uVar1 + 1;
      if ((undefined4 *)*puVar15 == (undefined4 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar10 = (undefined4 *)*puVar15;
        puVar11 = puVar5;
        uVar2 = uVar14;
        uVar3 = uVar7;
        do {
          puVar6 = puVar10;
          uVar8 = (uint)*(ushort *)((int)puVar6 + 0x32);
          uVar13 = (uint)*(ushort *)(puVar15 + 0xc);
          if (uVar8 < 0xb) {
            puVar15 = puVar6 + uVar13 + 1;
            if (uVar13 < uVar8) {
              iVar17 = (uVar8 - uVar13) * 4;
              FUN_016dd52c(puVar6 + uVar13 + 2,puVar15,iVar17);
              FUN_016dd52c(puVar6 + uVar13 + 0xf,puVar6 + uVar13 + 0xe,iVar17);
            }
            *(undefined2 *)((int)puVar15 + 2) = uVar3;
            *(undefined2 *)puVar15 = uVar2;
            puVar6[uVar13 + 0xe] = puVar11;
            *(short *)((int)puVar6 + 0x32) = (short)(uVar8 + 1);
            if (uVar13 + 1 < uVar8 + 2) {
              do {
                puVar15 = (undefined4 *)puVar6[uVar13 + 0xe];
                uVar13 = uVar13 + 1;
                *(short *)(puVar15 + 0xc) = (short)uVar13;
                *puVar15 = puVar6;
              } while (uVar8 + 1 != uVar13);
            }
            goto LAB_01042818;
          }
          bVar4 = false;
          uVar16 = 4;
          if (4 < uVar13) {
            if (uVar13 == 5) {
              uVar16 = 5;
            }
            else if (uVar13 == 6) {
              bVar4 = true;
              uVar13 = 0;
              uVar16 = 5;
            }
            else {
              uVar13 = uVar13 - 7;
              bVar4 = true;
              uVar16 = 6;
            }
          }
          puVar5 = (undefined4 *)thunk_FUN_016d4a50(100);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,100);
          }
          *(undefined2 *)((int)puVar5 + 0x32) = 0;
          *puVar5 = 0;
          uVar9 = (uint)*(ushort *)((int)puVar6 + 0x32) + ~uVar16;
          *(short *)((int)puVar5 + 0x32) = (short)uVar9;
          if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar9,0xb,&DAT_018ac47c);
          }
          uVar14 = *(undefined2 *)(puVar6 + uVar16 + 1);
          uVar7 = *(undefined2 *)((int)puVar6 + uVar16 * 4 + 6);
          FUN_016dd1aa(puVar5 + 1,puVar6 + uVar16 + 2,uVar9 * 4);
          *(short *)((int)puVar6 + 0x32) = (short)uVar16;
          uVar9 = (uint)*(ushort *)((int)puVar5 + 0x32);
          iVar17 = uVar9 + 1;
          if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar17,0xc,&DAT_018ac48c);
          }
          if (uVar8 - uVar16 != iVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
          }
          uVar12 = uVar12 + 1;
          FUN_016dd1aa(puVar5 + 0xd,puVar6 + uVar16 + 0xe,iVar17 * 4);
          uVar8 = 0;
          do {
            puVar15 = (undefined4 *)(puVar5 + 0xd)[uVar8];
            *(short *)(puVar15 + 0xc) = (short)uVar8;
            *puVar15 = puVar5;
            if (uVar9 <= uVar8) break;
            uVar8 = uVar8 + 1;
          } while (uVar8 <= uVar9);
          puVar15 = puVar5;
          if (!bVar4) {
            puVar15 = puVar6;
          }
          uVar8 = (uint)*(ushort *)((int)puVar15 + 0x32);
          puVar10 = puVar15 + uVar13 + 1;
          if (uVar13 < uVar8) {
            iVar17 = (uVar8 - uVar13) * 4;
            FUN_016dd52c(puVar15 + uVar13 + 2,puVar10,iVar17);
            FUN_016dd52c(puVar15 + uVar13 + 0xf,puVar15 + uVar13 + 0xe,iVar17);
          }
          *(undefined2 *)((int)puVar10 + 2) = uVar3;
          *(undefined2 *)puVar10 = uVar2;
          puVar15[uVar13 + 0xe] = puVar11;
          *(short *)((int)puVar15 + 0x32) = (short)(uVar8 + 1);
          if (uVar13 + 1 < uVar8 + 2) {
            do {
              uVar16 = uVar13 + 1;
              puVar10 = (undefined4 *)puVar15[uVar13 + 0xe];
              *(short *)(puVar10 + 0xc) = (short)uVar16;
              *puVar10 = puVar15;
              uVar13 = uVar16;
            } while (uVar8 + 1 != uVar16);
          }
          puVar10 = (undefined4 *)*puVar6;
          puVar11 = puVar5;
          puVar15 = puVar6;
          uVar2 = uVar14;
          uVar3 = uVar7;
        } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
      }
      puVar15 = (undefined4 *)*param_1;
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      uVar13 = param_1[1];
      puVar10 = (undefined4 *)thunk_FUN_016d4a50(100);
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,100);
      }
      puVar10[0xd] = puVar15;
      *(undefined2 *)((int)puVar10 + 0x32) = 0;
      *puVar10 = 0;
      if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *param_1 = puVar10;
      *(undefined2 *)(puVar15 + 0xc) = 0;
      *puVar15 = puVar10;
      param_1[1] = uVar13 + 1;
      if (uVar12 != uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
      }
      puVar10[0xe] = puVar5;
      *(undefined2 *)((int)puVar10 + 6) = uVar7;
      *(undefined2 *)(puVar10 + 1) = uVar14;
      *(undefined2 *)((int)puVar10 + 0x32) = 1;
      *(undefined2 *)(puVar5 + 0xc) = 1;
      *puVar5 = puVar10;
    }
  }
LAB_01042818:
  param_1[2] = param_1[2] + 1;
  return;
}

