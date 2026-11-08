// FUN_00ac9e9c @ 00ac9e9c size=256 calls_out=5 calls_in=3
// strings: 

void FUN_00ac9e9c(int param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x9c);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x94);
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x4d) != '\x04') {
    if (*(char *)(param_1 + 0x4d) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x88);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 100);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x68);
        if (*(int *)(param_1 + 0x6c) != 0) {
          (**(code **)(*(int *)(param_1 + 0x6c) + 0xc))(*(undefined4 *)(param_1 + 0x70));
        }
      }
    }
    goto LAB_00ac9f88;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  puVar5 = *(undefined4 **)(param_1 + 0x54);
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  pcVar3 = *(char **)(param_1 + 0x40);
  if (*pcVar3 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar6) goto LAB_00ac9f68;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00ac9f68:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
LAB_00ac9f88:
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}

