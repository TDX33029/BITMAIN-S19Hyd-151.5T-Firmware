// FUN_0081c020 @ 0081c020 size=236 calls_out=5 calls_in=15
// strings: 

void FUN_0081c020(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)((int)param_1 + 0xd) == '\x03') {
    if (*(char *)(param_1 + 0x13) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x12);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 9);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 10);
        if (param_1[0xb] != 0) {
          (**(code **)(param_1[0xb] + 0xc))(param_1[0xc]);
        }
      }
    }
    goto LAB_0081c0f8;
  }
  if (*(char *)((int)param_1 + 0xd) != '\x04') {
    return;
  }
  uVar4 = param_1[4];
  puVar5 = (undefined4 *)param_1[5];
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
    if (!bVar6) goto LAB_0081c0d8;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0081c0d8:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
LAB_0081c0f8:
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

