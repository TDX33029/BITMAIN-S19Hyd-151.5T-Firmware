// FUN_01071820 @ 01071820 size=720 calls_out=6 calls_in=2
// strings: assertion failed: !ptr.is_null()

void FUN_01071820(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined1 auStack_830 [1032];
  undefined4 local_428 [257];
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b30);
  }
  if ((param_2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00384d3b,0x23,&DAT_01883b40);
  }
  puVar15 = (undefined4 *)(param_2 & 0xfffffff8);
  DataMemoryBarrier(0xb);
  piVar7 = (int *)*puVar15;
  uVar12 = puVar15[1];
  if (param_1 == 0) {
    if (puVar15[4] != 0) {
      thunk_FUN_016d3fb4(puVar15[5]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(piVar7,uVar12);
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    uVar12 = puVar15[1];
    uVar13 = puVar15[2];
    uVar16 = puVar15[3];
    *puVar2 = *puVar15;
    puVar2[1] = uVar12;
    puVar2[2] = uVar13;
    puVar2[3] = uVar16;
    uVar12 = puVar15[5];
    uVar13 = puVar15[6];
    uVar16 = puVar15[7];
    puVar2[4] = puVar15[4];
    puVar2[5] = uVar12;
    puVar2[6] = uVar13;
    puVar2[7] = uVar16;
    iVar4 = param_1 + 8;
    uVar14 = *(uint *)(param_1 + 0x408);
    if (0x3f < uVar14) {
LAB_01071964:
      iVar5 = *(int *)(param_1 + 4);
      iVar8 = 0;
      do {
        local_428[iVar8 * 4] = &DAT_01040efc;
        iVar9 = iVar8 + 1;
        local_428[iVar8 * 4 + 1] = 0;
        local_428[iVar8 * 4 + 2] = 0;
        local_428[iVar8 * 4 + 3] = 0;
        iVar8 = iVar9;
      } while (iVar9 != 0x40);
      FUN_016dd1aa(auStack_830,iVar4,0x404);
      FUN_016dd1aa(iVar4,local_428,0x400);
      *(undefined4 *)(param_1 + 0x408) = 0;
      DataMemoryBarrier(0xb);
      uVar12 = *(undefined4 *)(iVar5 + 0x60);
      uVar14 = thunk_FUN_016d4a50(0x40c);
      if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x40c);
      }
      FUN_016dd1aa(uVar14,auStack_830,0x404);
      *(undefined4 *)(uVar14 + 0x404) = uVar12;
      *(undefined4 *)(uVar14 + 0x408) = 0;
      puVar3 = (uint *)(iVar5 + 0x40);
LAB_01071a14:
      do {
        uVar6 = *puVar3;
        DataMemoryBarrier(0xb);
        uVar11 = *(uint *)((uVar6 & 0xfffffffc) + 0x408);
        DataMemoryBarrier(0xb);
        if (uVar11 < 4) {
          puVar10 = (uint *)((uVar6 & 0xfffffffc) + 0x408);
          if (*puVar10 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar10);
              if (bVar1) {
                *puVar10 = uVar14;
                if (*puVar3 != uVar6) goto LAB_0107194c;
                DataMemoryBarrier(0xb);
                goto LAB_01071a8c;
              }
            } while (*puVar10 == 0);
          }
        }
        else if (*puVar3 == uVar6) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar3);
            if (bVar1) {
              *puVar3 = uVar11;
              goto LAB_01071a14;
            }
          } while (*puVar3 == uVar6);
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB_010718a0:
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
    puVar15 = (undefined4 *)(iVar4 + uVar14 * 0x10);
    *puVar15 = FUN_0109c08c;
    puVar15[1] = puVar2;
  }
  return;
  while (*puVar3 == uVar6) {
LAB_01071a8c:
    bVar1 = (bool)hasExclusiveAccess(puVar3);
    if (bVar1) {
      *puVar3 = uVar14;
      goto LAB_01071950;
    }
  }
LAB_0107194c:
  ClearExclusiveLocal();
LAB_01071950:
  uVar14 = *(uint *)(param_1 + 0x408);
  if (uVar14 < 0x40) goto LAB_010718a0;
  goto LAB_01071964;
}

