// FUN_014751c4 @ 014751c4 size=332 calls_out=2 calls_in=2
// strings: 

void FUN_014751c4(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if (*(char *)(param_1 + 0x2b) == '\0') {
    uVar6 = *param_1;
    puVar7 = (undefined4 *)param_1[1];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    FUN_0146a410(param_1 + 6);
    return;
  }
  if (*(char *)(param_1 + 0x2b) != '\x03') {
    return;
  }
  iVar2 = 0;
  if (param_1[0x22] != 0) {
    iVar2 = param_1[0x23];
  }
  if (param_1[0x22] != 0 && iVar2 != 0) {
    (**(code **)(iVar2 + 0x10))(param_1 + 0x26,param_1[0x24],param_1[0x25]);
  }
  if (*(char *)(param_1 + 0x2a) != '\x03') {
    FUN_0146a410(param_1 + 0x28);
  }
  uVar6 = param_1[0x1e];
  puVar7 = (undefined4 *)param_1[0x1f];
  pcVar4 = (code *)*puVar7;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  piVar3 = (int *)param_1[0x1d];
  if (((uint)piVar3 & 1) == 0) {
    piVar5 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 != 1) goto LAB_01475304;
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  else {
    if (param_1[0x1c] + ((uint)piVar3 >> 5) == 0) goto LAB_01475304;
    piVar3 = (int *)(param_1[0x1a] - ((uint)piVar3 >> 5));
  }
  thunk_FUN_016d3fb4(piVar3);
LAB_01475304:
  *(undefined2 *)((int)param_1 + 0xad) = 0;
  return;
}

