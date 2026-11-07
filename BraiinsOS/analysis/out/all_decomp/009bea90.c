// FUN_009bea90 @ 009bea90 size=940 calls_out=10 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x009becd4) */

void FUN_009bea90(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int extraout_r2;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *local_38;
  undefined1 local_34;
  int *local_30;
  undefined1 local_2c;
  undefined4 *local_28;
  
  uVar16 = FUN_009bd960(DAT_018d7f80,DAT_018d7f84,DAT_018d7f88,DAT_018d7f8c,*param_2,param_2[1]);
  uVar4 = (uint)uVar16;
  puVar10 = (uint *)(DAT_018d7f94 + 0xc);
  uVar2 = *(uint *)(DAT_018d7f94 + 0xc);
  piVar6 = (int *)(DAT_018d7f94 + 8);
  do {
    if (0xfffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_0034abe5,0xf,&DAT_0186a960);
    }
    uVar7 = *puVar10;
    if (uVar7 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(puVar10);
        if (bVar14) {
          *puVar10 = uVar2 + 1;
          DataMemoryBarrier(0xb);
          uVar17 = thunk_FUN_016de0ee(uVar7,(int)((ulonglong)uVar16 >> 0x20),0x1b0);
          iVar15 = (int)uVar17 + extraout_r2;
          iVar5 = iVar15;
          if ((*(char *)(iVar15 + 8) != '\x01') && (iVar5 = FUN_00a30258(iVar15,0), iVar5 == 0))
          goto LAB_009bee14;
          bVar14 = false;
          uVar2 = *(uint *)(iVar5 + 4);
          uVar7 = *(uint *)(*piVar6 + (uVar2 & 0xff) * 4);
          DataMemoryBarrier(0xb);
          if (uVar7 == 0) goto LAB_009bebc0;
          uVar8 = uVar2;
          goto LAB_009beb88;
        }
        uVar7 = *puVar10;
      } while (uVar7 == uVar2);
    }
    uVar2 = uVar7;
    ClearExclusiveLocal();
  } while( true );
  while( true ) {
    uVar12 = uVar8 & 0xffff;
    uVar8 = uVar8 >> 8;
    uVar7 = *(uint *)((uVar7 & 0xfffffffe) + (uVar12 >> 8) * 4);
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) break;
LAB_009beb88:
    if ((uVar7 & 1) == 0) {
      bVar14 = *(uint *)(uVar7 + 0xc) == uVar2;
      break;
    }
  }
LAB_009bebc0:
  uVar2 = uVar4 & 0xff;
  puVar9 = *(uint **)(DAT_018d7f90 + uVar2 * 4);
  DataMemoryBarrier(0xb);
  if (puVar9 != (uint *)0x0) {
    if (((uint)puVar9 & 1) == 0) {
      puVar11 = (undefined4 *)(DAT_018d7f90 + uVar2 * 4);
    }
    else {
      do {
        uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
        uVar2 = (uint)uVar16 >> 8;
        uVar8 = (uint)puVar9 & 0xfffffffe;
        uVar7 = uVar2 & 0xff;
        puVar9 = *(uint **)(uVar8 + uVar7 * 4);
        DataMemoryBarrier(0xb);
        if (puVar9 == (uint *)0x0) goto LAB_009bec80;
        uVar16 = CONCAT44(uVar12 >> 8,uVar2 | uVar12 << 0x18);
      } while (((uint)puVar9 & 1) != 0);
      puVar11 = (undefined4 *)(uVar8 + uVar7 * 4);
    }
    if (*puVar9 == uVar4 && puVar9[1] == (uint)((ulonglong)uVar17 >> 0x20)) {
      local_38 = piVar6;
      local_34 = bVar14;
      FUN_009cd4b4(&local_30,puVar9,param_2,&local_38);
      if (local_30 == (int *)0x0) {
        do {
          local_30 = piVar6;
          local_2c = bVar14;
          if ((uint *)*puVar11 != puVar9) {
            ClearExclusiveLocal();
            goto LAB_009bed74;
          }
          bVar1 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar1);
        *puVar11 = 0;
        FUN_009cd7cc(&local_30,3,puVar9);
LAB_009bed74:
        *(undefined1 *)(param_1 + 2) = 2;
        FUN_009ccc20(piVar6);
        return;
      }
      if (local_30 == (int *)0x1) {
        uVar3 = *local_28;
        *(bool *)(param_1 + 2) = bVar14;
        *param_1 = uVar3;
        param_1[1] = piVar6;
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar10;
        bVar14 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar14);
      *puVar10 = uVar4 - 1;
      DataMemoryBarrier(0xb);
      if (uVar4 == 1) {
        if ((*(char *)(iVar15 + 8) != '\x01') && (iVar15 = FUN_00a30258(iVar15,0), iVar15 == 0)) {
LAB_009bee14:
                    /* WARNING: Subroutine does not return */
          FUN_015f853c(&DAT_018ae900);
        }
        uVar4 = *(uint *)(iVar15 + 4);
        piVar6 = *(int **)(*piVar6 + (uVar4 & 0xff) * 4);
        DataMemoryBarrier(0xb);
        if (piVar6 != (int *)0x0) {
          uVar2 = uVar4;
          do {
            if (((uint)piVar6 & 1) == 0) {
              if (piVar6[3] == uVar4) {
                iVar13 = *piVar6;
                iVar5 = piVar6[2];
                iVar15 = piVar6[1];
                *piVar6 = 0;
                piVar6[1] = 4;
                piVar6[2] = 0;
                FUN_009a1e98(iVar15,iVar5);
                if (iVar13 != 0) {
                  thunk_FUN_016d3fb4(iVar15);
                }
              }
              break;
            }
            uVar7 = uVar2 & 0xffff;
            uVar2 = uVar2 >> 8;
            piVar6 = *(int **)(((uint)piVar6 & 0xfffffffe) + (uVar7 >> 8) * 4);
            DataMemoryBarrier(0xb);
          } while (piVar6 != (int *)0x0);
        }
      }
      *(undefined1 *)(param_1 + 2) = 2;
      return;
    }
  }
LAB_009bec80:
  *(undefined1 *)(param_1 + 2) = 2;
  FUN_009ccc20(piVar6);
  return;
}

