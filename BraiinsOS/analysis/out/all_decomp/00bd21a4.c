// FUN_00bd21a4 @ 00bd21a4 size=208 calls_out=4 calls_in=1
// strings: 

void FUN_00bd21a4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    if (*(char *)((int)param_1 + 9) == '\x04') {
      if (*(char *)((int)param_1 + 0x59) == '\x03') {
        uVar5 = param_1[0x12];
        puVar6 = (undefined4 *)param_1[0x13];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        if (param_1[8] != 0) {
          thunk_FUN_016d3fb4(param_1[9]);
        }
      }
      FUN_00c822ec(*param_1);
    }
    else if ((*(char *)((int)param_1 + 9) == '\x03') && (param_1[3] != 0)) {
      FUN_00c8204c(param_1[3],param_1[4],1);
    }
    piVar2 = (int *)param_1[0x1a];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8(param_1[0x1a]);
      return;
    }
  }
  return;
}

