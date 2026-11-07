// FUN_013f2e4c @ 013f2e4c size=692 calls_out=9 calls_in=0
// strings: argument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer.

void FUN_013f2e4c(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,uint *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  undefined4 *local_24;
  
  uVar5 = *param_6;
  uVar6 = param_6[2];
  uVar4 = uVar6 + param_3;
  *param_6 = uVar5 + 1;
  param_6[1] = param_6[1] + (uint)(0xfffffffe < uVar5);
  uVar5 = param_6[3] + (uint)CARRY4(uVar6,param_3);
  if (CARRY4(param_6[3],(uint)CARRY4(uVar6,param_3))) {
    uVar4 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  param_6[2] = uVar4;
  param_6[3] = uVar5;
  FUN_013f31dc(param_2,param_5);
  piVar7 = *(int **)(param_2 + 0x80);
  do {
    iVar1 = *piVar7;
    bVar10 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar10);
  *piVar7 = iVar1 + 1;
  if (iVar1 < 0) goto LAB_013f30b4;
  local_24 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (local_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  iVar1 = *(int *)(param_4 + 0x28);
  *local_24 = piVar7;
  local_24[1] = 0;
  local_24[2] = iVar1;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 4) = local_24;
  }
  if (iVar1 == 0) {
    *(undefined4 **)(param_4 + 0x24) = local_24;
  }
  *(undefined4 **)(param_4 + 0x28) = local_24;
  *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + 1;
  if (local_24 < &SUB_00000004) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("argument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                 ,0x5c,&local_24,&DAT_01cf3a48,&DAT_01cf3a98);
  }
  iVar1 = *(int *)(param_2 + 0x84);
  pcVar8 = (char *)(iVar1 + 4);
  if (*pcVar8 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar10) goto LAB_013f3098;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013f3098:
    FUN_0164fba8(pcVar8);
  }
  FUN_0165098c(pcVar8);
  *(uint *)(iVar1 + 8) = (uint)local_24 | 1;
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar10 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar10) {
        *pcVar8 = '\0';
        goto LAB_013f2f88;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
LAB_013f2f88:
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  bVar10 = puVar2 == &DAT_3b9aca00;
  if (bVar10) {
    puVar2 = *(undefined1 **)(param_1 + 0x108);
  }
  if (bVar10 && puVar2 == (undefined1 *)0x0) goto LAB_013f307c;
  piVar7 = *(int **)(param_2 + 0x80);
  do {
    iVar1 = *piVar7;
    bVar10 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar10);
  *piVar7 = iVar1 + 1;
  if (iVar1 < 0) {
LAB_013f30b4:
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  iVar1 = *(int *)(param_4 + 0x58);
  *puVar3 = piVar7;
  puVar3[1] = 0;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar3;
  }
  puVar3[2] = iVar1;
  iVar9 = *(int *)(param_2 + 0x84);
  if (iVar1 == 0) {
    *(undefined4 **)(param_4 + 0x54) = puVar3;
  }
  *(undefined4 **)(param_4 + 0x58) = puVar3;
  *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
  pcVar8 = (char *)(iVar9 + 4);
  if (*pcVar8 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar10) goto LAB_013f30a8;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013f30a8:
    FUN_0164fba8(pcVar8);
  }
  FUN_0165098c(pcVar8);
  *(undefined4 **)(iVar9 + 0xc) = puVar3;
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar10 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar10) {
        *pcVar8 = '\0';
        goto LAB_013f307c;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
LAB_013f307c:
  DataMemoryBarrier(0xb);
  *(undefined1 *)(*(int *)(param_2 + 0x80) + 0x38) = 1;
  return;
}

