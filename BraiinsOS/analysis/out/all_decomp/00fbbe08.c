// FUN_00fbbe08 @ 00fbbe08 size=412 calls_out=4 calls_in=6
// strings: 

void FUN_00fbbe08(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_828 [1032];
  undefined4 auStack_420 [256];
  
  iVar10 = *param_1;
  if (iVar10 == 0) {
    return;
  }
  if (*(int *)(iVar10 + 0x408) != 0) {
    iVar11 = *(int *)(iVar10 + 4);
    iVar2 = 0;
    do {
      auStack_420[iVar2 * 4] = &DAT_01040efc;
      iVar3 = iVar2 + 1;
      auStack_420[iVar2 * 4 + 1] = 0;
      auStack_420[iVar2 * 4 + 2] = 0;
      auStack_420[iVar2 * 4 + 3] = 0;
      iVar2 = iVar3;
    } while (iVar3 != 0x40);
    FUN_016dd1aa(auStack_828,iVar10 + 8,0x404);
    FUN_016dd1aa(iVar10 + 8,auStack_420,0x400);
    *(undefined4 *)(iVar10 + 0x408) = 0;
    DataMemoryBarrier(0xb);
    uVar9 = *(undefined4 *)(iVar11 + 0x60);
    uVar4 = thunk_FUN_016d4a50(0x40c);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x40c);
    }
    FUN_016dd1aa(uVar4,auStack_828,0x404);
    puVar5 = (uint *)(iVar11 + 0x40);
    *(undefined4 *)(uVar4 + 0x404) = uVar9;
    *(undefined4 *)(uVar4 + 0x408) = 0;
LAB_00fbbeec:
    do {
      uVar6 = *puVar5;
      DataMemoryBarrier(0xb);
      uVar8 = *(uint *)((uVar6 & 0xfffffffc) + 0x408);
      DataMemoryBarrier(0xb);
      if (uVar8 < 4) {
        puVar7 = (uint *)((uVar6 & 0xfffffffc) + 0x408);
        if (*puVar7 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar7);
            if (bVar1) {
              *puVar7 = uVar4;
              if (*puVar5 != uVar6) goto LAB_00fbbf7c;
              DataMemoryBarrier(0xb);
              goto LAB_00fbbf64;
            }
          } while (*puVar7 == 0);
        }
      }
      else if (*puVar5 == uVar6) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
          if (bVar1) {
            *puVar5 = uVar8;
            goto LAB_00fbbeec;
          }
        } while (*puVar5 == uVar6);
      }
      ClearExclusiveLocal();
    } while( true );
  }
  goto LAB_00fbbf80;
  while (*puVar5 == uVar6) {
LAB_00fbbf64:
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    if (bVar1) {
      *puVar5 = uVar4;
      goto LAB_00fbbf80;
    }
  }
LAB_00fbbf7c:
  ClearExclusiveLocal();
LAB_00fbbf80:
  FUN_00fbaee4(*(int *)(iVar10 + 4) + 0x20,param_1);
  return;
}

