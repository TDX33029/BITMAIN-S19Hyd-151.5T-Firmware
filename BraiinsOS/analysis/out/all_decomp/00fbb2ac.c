// FUN_00fbb2ac @ 00fbb2ac size=944 calls_out=6 calls_in=1
// strings: 

uint FUN_00fbb2ac(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined1 auStack_830 [1032];
  code *local_428 [257];
  
  uVar2 = *(uint *)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  iVar15 = *param_2;
  iVar7 = iVar15 + 8;
  uVar4 = *(uint *)(param_1 + 0x60);
  puVar17 = (uint *)(param_1 + 0x60);
  do {
    while( true ) {
      puVar12 = (uint *)(uVar4 & 0xfffffffc);
      if (puVar12 == (uint *)0x0) {
        DataMemoryBarrier(0xb);
        *(uint *)(param_1 + 0x40) = uVar2 + 2;
        return uVar2 + 2;
      }
      uVar3 = *puVar12;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 3) == 1) break;
      uVar4 = uVar3;
      puVar17 = puVar12;
      if (((puVar12[0x108] & 1) != 0) && ((puVar12[0x108] & 0xfffffffe) != uVar2)) {
        return uVar2;
      }
    }
    uVar3 = uVar3 & 0xfffffffc;
    do {
      if (*puVar17 != uVar4) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar3 = *puVar17;
        goto LAB_00fbb338;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar3;
    DataMemoryBarrier(0xb);
    local_428[0] = (code *)(uVar4 & 0x1c);
    if (local_428[0] != (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,local_428,&DAT_00568f30,&DAT_0036de28,0x23,&DAT_0188139c);
    }
    if (iVar15 == 0) {
      uVar4 = uVar4 & 0xffffffe0;
      uVar9 = *(uint *)(uVar4 + 0x408);
      if (0x40 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar9,0x40,&DAT_018813d4);
      }
      local_428[0] = (code *)0x0;
      if (uVar9 != 0) {
        puVar8 = (undefined4 *)(uVar4 + 8);
        iVar14 = uVar9 << 4;
        do {
          local_428[0] = (code *)*puVar8;
          local_428[1] = (code *)puVar8[1];
          local_428[2] = (code *)puVar8[2];
          local_428[3] = (code *)puVar8[3];
          *puVar8 = &DAT_01040efc;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          (*local_428[0])((uint)local_428 | 4);
          puVar8 = puVar8 + 4;
          iVar14 = iVar14 + -0x10;
        } while (iVar14 != 0);
      }
      thunk_FUN_016d3fb4(uVar4);
    }
    else {
      uVar4 = *(uint *)(iVar15 + 0x408);
      local_428[0] = (code *)0x0;
      if (0x3f < uVar4) {
LAB_00fbb3e0:
        iVar13 = *(int *)(iVar15 + 4);
        iVar14 = 0;
        do {
          local_428[iVar14 * 4] = (code *)&DAT_01040efc;
          iVar5 = iVar14 + 1;
          local_428[iVar14 * 4 + 1] = (code *)0x0;
          local_428[iVar14 * 4 + 2] = (code *)0x0;
          local_428[iVar14 * 4 + 3] = (code *)0x0;
          iVar14 = iVar5;
        } while (iVar5 != 0x40);
        FUN_016dd1aa(auStack_830,iVar7,0x404);
        FUN_016dd1aa(iVar7,local_428,0x400);
        *(undefined4 *)(iVar15 + 0x408) = 0;
        DataMemoryBarrier(0xb);
        uVar16 = *(undefined4 *)(iVar13 + 0x60);
        uVar4 = thunk_FUN_016d4a50(0x40c);
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x40c);
        }
        FUN_016dd1aa(uVar4,auStack_830,0x404);
        puVar6 = (uint *)(iVar13 + 0x40);
        *(undefined4 *)(uVar4 + 0x404) = uVar16;
        *(undefined4 *)(uVar4 + 0x408) = 0;
LAB_00fbb498:
        do {
          uVar9 = *puVar6;
          DataMemoryBarrier(0xb);
          uVar11 = *(uint *)((uVar9 & 0xfffffffc) + 0x408);
          DataMemoryBarrier(0xb);
          if (uVar11 < 4) {
            puVar10 = (uint *)((uVar9 & 0xfffffffc) + 0x408);
            if (*puVar10 == 0) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar10);
                if (bVar1) {
                  *puVar10 = uVar4;
                  if (*puVar6 != uVar9) goto LAB_00fbb3d0;
                  DataMemoryBarrier(0xb);
                  goto LAB_00fbb510;
                }
              } while (*puVar10 == 0);
            }
          }
          else if (*puVar6 == uVar9) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar6);
              if (bVar1) {
                *puVar6 = uVar11;
                goto LAB_00fbb498;
              }
            } while (*puVar6 == uVar9);
          }
          ClearExclusiveLocal();
        } while( true );
      }
LAB_00fbb30c:
      *(int *)(iVar15 + 0x408) = *(int *)(iVar15 + 0x408) + 1;
      puVar8 = (undefined4 *)(iVar7 + uVar4 * 0x10);
      *puVar8 = FUN_00fbae0c;
      puVar8[1] = puVar12;
    }
LAB_00fbb338:
    uVar4 = uVar3;
    if ((uVar3 & 3) != 0) {
      DataMemoryBarrier(0xb);
      return uVar2;
    }
  } while( true );
  while (*puVar6 == uVar9) {
LAB_00fbb510:
    bVar1 = (bool)hasExclusiveAccess(puVar6);
    if (bVar1) {
      *puVar6 = uVar4;
      goto LAB_00fbb3d4;
    }
  }
LAB_00fbb3d0:
  ClearExclusiveLocal();
LAB_00fbb3d4:
  uVar4 = *(uint *)(iVar15 + 0x408);
  if (uVar4 < 0x40) goto LAB_00fbb30c;
  goto LAB_00fbb3e0;
}

