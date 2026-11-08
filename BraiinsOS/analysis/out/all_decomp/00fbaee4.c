// FUN_00fbaee4 @ 00fbaee4 size=948 calls_out=6 calls_in=3
// strings: 

void FUN_00fbaee4(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int local_858;
  int local_840 [258];
  code *local_438;
  int local_434;
  int local_430;
  int local_42c;
  undefined1 auStack_428 [1028];
  
  iVar2 = FUN_00fbb2ac();
  iVar15 = *param_2;
  puVar13 = param_1 + 8;
  iVar3 = iVar15 + 8;
  local_858 = 0;
LAB_00fbaf54:
  do {
    uVar18 = *param_1;
    DataMemoryBarrier(0xb);
    uVar5 = *(uint *)((uVar18 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    piVar9 = (int *)(uVar5 & 0xfffffffc);
    if (piVar9 == (int *)0x0) {
      return;
    }
    if ((int)(iVar2 - (piVar9[0x101] & 0xfffffffeU)) < 4) {
      return;
    }
    if (*param_1 == uVar18) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar5;
          if (uVar18 != *puVar13) goto LAB_00fbaff0;
          if (*puVar13 != uVar18) goto LAB_00fbafec;
          DataMemoryBarrier(0xb);
          goto LAB_00fbafd4;
        }
      } while (*param_1 == uVar18);
    }
    ClearExclusiveLocal();
  } while( true );
  while (*puVar13 == uVar18) {
LAB_00fbafd4:
    bVar1 = (bool)hasExclusiveAccess(puVar13);
    if (bVar1) {
      *puVar13 = uVar5;
      goto LAB_00fbaff0;
    }
  }
LAB_00fbafec:
  ClearExclusiveLocal();
LAB_00fbaff0:
  if (iVar15 == 0) {
    thunk_FUN_016d3fb4();
    local_840[0] = *piVar9;
  }
  else {
    uVar5 = *(uint *)(iVar15 + 0x408);
    if (0x3f < uVar5) {
LAB_00fbb11c:
      iVar10 = *(int *)(iVar15 + 4);
      iVar16 = 0;
      do {
        local_840[iVar16 * 4] = (int)&DAT_01040efc;
        iVar14 = iVar16 + 1;
        local_840[iVar16 * 4 + 1] = 0;
        local_840[iVar16 * 4 + 2] = 0;
        local_840[iVar16 * 4 + 3] = 0;
        iVar16 = iVar14;
      } while (iVar14 != 0x40);
      FUN_016dd1aa(auStack_428,iVar3,0x404);
      FUN_016dd1aa(iVar3,local_840,0x400);
      *(undefined4 *)(iVar15 + 0x408) = 0;
      DataMemoryBarrier(0xb);
      uVar17 = *(undefined4 *)(iVar10 + 0x60);
      uVar5 = thunk_FUN_016d4a50(0x40c);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x40c);
      }
      FUN_016dd1aa(uVar5,auStack_428,0x404);
      *(undefined4 *)(uVar5 + 0x408) = 0;
      puVar4 = (uint *)(iVar10 + 0x40);
      *(undefined4 *)(uVar5 + 0x404) = uVar17;
LAB_00fbb1d0:
      do {
        uVar8 = *puVar4;
        DataMemoryBarrier(0xb);
        uVar12 = *(uint *)((uVar8 & 0xfffffffc) + 0x408);
        DataMemoryBarrier(0xb);
        if (uVar12 < 4) {
          puVar11 = (uint *)((uVar8 & 0xfffffffc) + 0x408);
          if (*puVar11 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar11);
              if (bVar1) {
                *puVar11 = uVar5;
                if (*puVar4 != uVar8) goto LAB_00fbb10c;
                DataMemoryBarrier(0xb);
                goto LAB_00fbb250;
              }
            } while (*puVar11 == 0);
          }
        }
        else if (*puVar4 == uVar8) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar4);
            if (bVar1) {
              *puVar4 = uVar12;
              goto LAB_00fbb1d0;
            }
          } while (*puVar4 == uVar8);
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB_00fbb004:
    *(int *)(iVar15 + 0x408) = *(int *)(iVar15 + 0x408) + 1;
    puVar6 = (undefined4 *)(iVar3 + uVar5 * 0x10);
    *puVar6 = &DAT_00fbaed8;
    puVar6[1] = uVar18;
    local_840[0] = *piVar9;
  }
  if (local_840[0] == 0) {
    return;
  }
  FUN_016dd1aa(local_840 + 1,piVar9 + 1,0x404);
  if (0x40 < (uint)local_840[0x100]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_840[0x100],0x40,&DAT_018813d4);
  }
  if (local_840[0x100] != 0) {
    iVar16 = local_840[0x100] << 4;
    piVar9 = local_840;
    do {
      pcVar7 = (code *)*piVar9;
      iVar19 = piVar9[1];
      iVar10 = piVar9[2];
      iVar14 = piVar9[3];
      piVar9[3] = 0;
      *piVar9 = (int)&DAT_01040efc;
      piVar9[1] = 0;
      piVar9[2] = 0;
      local_438 = pcVar7;
      local_434 = iVar19;
      local_430 = iVar10;
      local_42c = iVar14;
      (*pcVar7)((uint)&local_438 | 4);
      piVar9 = piVar9 + 4;
      iVar16 = iVar16 + -0x10;
    } while (iVar16 != 0);
  }
  local_858 = local_858 + 1;
  if (local_858 == 8) {
    return;
  }
  goto LAB_00fbaf54;
  while (*puVar4 == uVar8) {
LAB_00fbb250:
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (bVar1) {
      *puVar4 = uVar5;
      goto LAB_00fbb110;
    }
  }
LAB_00fbb10c:
  ClearExclusiveLocal();
LAB_00fbb110:
  uVar5 = *(uint *)(iVar15 + 0x408);
  if (uVar5 < 0x40) goto LAB_00fbb004;
  goto LAB_00fbb11c;
}

