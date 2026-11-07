// FUN_007d56a8 @ 007d56a8 size=280 calls_out=6 calls_in=3
// strings: 

void FUN_007d56a8(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x48) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x44);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 0x20);
      }
      if (bVar8 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x24);
        if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007d57ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
          return;
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  puVar7 = *(undefined4 **)(param_1 + 0x20);
  pcVar3 = (code *)*puVar7;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
  pcVar5 = *(char **)(param_1 + 8);
  if (*pcVar5 == '\0') {
    bVar8 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar8) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_007d574c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar5);
LAB_007d574c:
  FUN_0128236c(pcVar5);
  FUN_0163af68(pcVar5,1,pcVar5);
  return;
}

