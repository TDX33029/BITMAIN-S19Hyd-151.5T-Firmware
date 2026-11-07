// FUN_00fbb698 @ 00fbb698 size=608 calls_out=7 calls_in=14
// strings: 

void FUN_00fbb698(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 auStack_828 [1032];
  uint *local_420 [256];
  
  param_1[0x104] = 1;
  uVar2 = param_1[0x103];
  local_420[0] = param_1;
  if (0xfffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01884060);
  }
  param_1[0x103] = uVar2 + 1;
  if (uVar2 == 0) {
    param_1[0x108] = *(uint *)(param_1[1] + 0x60) | 1;
    DataMemoryBarrier(0xb);
    uVar2 = param_1[0x105];
    param_1[0x105] = uVar2 + 1;
    if ((uVar2 & 0x7f) == 0) {
      FUN_00fbaee4(param_1[1] + 0x20,local_420);
    }
  }
  uVar2 = param_1[1];
  iVar7 = 0;
  do {
    local_420[iVar7 * 4] = (uint *)&DAT_01040efc;
    iVar3 = iVar7 + 1;
    local_420[iVar7 * 4 + 1] = (uint *)0x0;
    local_420[iVar7 * 4 + 2] = (uint *)0x0;
    local_420[iVar7 * 4 + 3] = (uint *)0x0;
    iVar7 = iVar3;
  } while (iVar3 != 0x40);
  FUN_016dd1aa(auStack_828,param_1 + 2,0x404);
  FUN_016dd1aa(param_1 + 2,local_420,0x400);
  param_1[0x102] = 0;
  DataMemoryBarrier(0xb);
  uVar10 = *(undefined4 *)(uVar2 + 0x60);
  uVar4 = thunk_FUN_016d4a50(0x40c);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40c);
  }
  FUN_016dd1aa(uVar4,auStack_828,0x404);
  puVar5 = (uint *)(uVar2 + 0x40);
  *(undefined4 *)(uVar4 + 0x404) = uVar10;
  *(undefined4 *)(uVar4 + 0x408) = 0;
LAB_00fbb7b0:
  do {
    uVar2 = *puVar5;
    DataMemoryBarrier(0xb);
    uVar9 = *(uint *)((uVar2 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    if (uVar9 < 4) {
      puVar8 = (uint *)((uVar2 & 0xfffffffc) + 0x408);
      if (*puVar8 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
          if (bVar1) {
            *puVar8 = uVar4;
            if (*puVar5 != uVar2) goto LAB_00fbb840;
            DataMemoryBarrier(0xb);
            goto LAB_00fbb828;
          }
        } while (*puVar8 == 0);
      }
    }
    else if (*puVar5 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar9;
          goto LAB_00fbb7b0;
        }
      } while (*puVar5 == uVar2);
    }
    ClearExclusiveLocal();
  } while( true );
  while (*puVar5 == uVar2) {
LAB_00fbb828:
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    if (bVar1) {
      *puVar5 = uVar4;
      goto LAB_00fbb844;
    }
  }
LAB_00fbb840:
  ClearExclusiveLocal();
LAB_00fbb844:
  uVar2 = param_1[0x103];
  param_1[0x103] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    DataMemoryBarrier(0xb);
    param_1[0x108] = 0;
    if (param_1[0x104] == 0) {
      FUN_00fbb698(param_1);
    }
  }
  piVar6 = (int *)param_1[1];
  param_1[0x104] = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 | 1;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fbb9a4();
  }
  return;
}

