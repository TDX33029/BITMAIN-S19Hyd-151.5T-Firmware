// FUN_00b9f86c @ 00b9f86c size=236 calls_out=5 calls_in=3
// strings: 

void FUN_00b9f86c(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)((int)param_1 + 9) == '\x03') {
    if (*(char *)(param_1 + 0x11) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x10);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 7);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 8);
        if (param_1[9] != 0) {
          (**(code **)(param_1[9] + 0xc))(param_1[10]);
        }
      }
    }
    goto LAB_00b9f944;
  }
  if (*(char *)((int)param_1 + 9) != '\x04') {
    return;
  }
  uVar4 = param_1[3];
  puVar5 = (undefined4 *)param_1[4];
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar6) goto LAB_00b9f924;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00b9f924:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
LAB_00b9f944:
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

