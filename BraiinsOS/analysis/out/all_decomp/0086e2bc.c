// FUN_0086e2bc @ 0086e2bc size=404 calls_out=6 calls_in=1
// strings: 

void FUN_0086e2bc(int *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    FUN_00a07b4c(param_1 + 2);
    return;
  }
  cVar1 = (char)param_1[0x22];
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = (char)param_1[0x21];
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x11];
  if (cVar1 == '\x05') {
    iVar4 = param_1[0x15];
    puVar5 = (undefined4 *)param_1[0x16];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    puVar5 = (undefined4 *)(param_1[0x13] + 4);
    for (iVar4 = param_1[0x14]; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 4;
    }
    if (param_1[0x12] != 0) {
      thunk_FUN_016d3fb4(param_1[0x13]);
    }
    *(undefined1 *)((int)param_1 + 0x45) = 0;
  }
  else {
    if (cVar1 != '\x04') {
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x20];
      }
      if (!bVar6 || cVar1 != '\x03') {
        return;
      }
      cVar1 = (char)param_1[0x1f];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x16];
      }
      if (!bVar6 || cVar1 != '\x04') {
        return;
      }
      FUN_0163c790(param_1 + 0x17);
      if (param_1[0x18] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0086e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
      return;
    }
    iVar4 = param_1[0x12];
    puVar5 = (undefined4 *)param_1[0x13];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  pcVar3 = (char *)param_1[0x10];
  if (*pcVar3 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar6) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0086e424;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_0086e424:
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
  return;
}

