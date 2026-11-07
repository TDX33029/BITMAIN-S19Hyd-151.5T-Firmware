// FUN_014d1b80 @ 014d1b80 size=280 calls_out=5 calls_in=0
// strings: 

void FUN_014d1b80(undefined4 *param_1)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_800 [656];
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  int iStack_55c;
  undefined1 auStack_558 [672];
  undefined4 local_2b8;
  int local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  uVar6 = param_1[4];
  iVar7 = param_1[5];
  FUN_016dd1aa(auStack_800,param_1 + 6,0x290);
  local_570 = *param_1;
  uStack_56c = param_1[1];
  uStack_568 = param_1[2];
  uStack_564 = param_1[3];
  uStack_560 = uVar6;
  iStack_55c = iVar7;
  FUN_016dd1aa(auStack_558,auStack_800,0x2a0);
  local_2b8 = *param_1;
  local_2b4 = param_1[1];
  uStack_2b0 = param_1[2];
  uStack_2ac = param_1[3];
  puVar4 = &local_2b8;
  FUN_007e9eb0(puVar4);
  local_2b8 = uVar6;
  local_2b4 = iVar7;
  FUN_016dd1aa(&uStack_2b0,param_1 + 6,0x290);
  FUN_014a19ac(puVar4);
  piVar3 = (int *)param_1[0xaa];
  if (piVar3[3] != 0) {
    puVar4 = (undefined4 *)piVar3[4];
  }
  if (piVar3[3] != 0 && puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)piVar3[5];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(puVar4);
    }
  }
  piVar3[4] = 0;
  piVar3[3] = 1;
  piVar3[5] = iVar7;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659070(piVar3);
  }
  return;
}

