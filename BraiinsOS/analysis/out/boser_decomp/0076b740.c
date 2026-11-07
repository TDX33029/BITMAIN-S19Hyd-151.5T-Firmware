// FUN_0076b740 @ 0076b740 size=456 calls_out=9 calls_in=1
// strings: 

void FUN_0076b740(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_0074b190(param_1);
    piVar3 = *(int **)(param_1 + 0x140);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00795ca8(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144));
    }
    FUN_0075d5b4(param_1 + 0x80);
    return;
  }
  if (*(char *)(param_1 + 0x978) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x89c);
  if (cVar1 == '\x04') {
    puVar7 = (undefined4 *)(param_1 + 0x8a0);
    FUN_0077795c(puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0076bae0(*puVar7);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00761df0(param_1 + 0x880);
        FUN_0075d5b4(param_1 + 0x290);
        FUN_0074b190(param_1 + 0x210);
      }
      goto LAB_0076b8c0;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x8a4);
    uVar6 = *(undefined4 *)(param_1 + 0x8a0);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_01be4678(uVar6);
    }
  }
  if (*(char *)(param_1 + 0x89d) != '\0') {
    FUN_0077ef00(param_1 + 0x690);
  }
  *(undefined1 *)(param_1 + 0x89d) = 0;
  if (*(char *)(param_1 + 0x89e) != '\0') {
    FUN_0075d5b4(param_1 + 0x8a8);
  }
  *(undefined1 *)(param_1 + 0x89e) = 0;
  FUN_0077ef00(param_1 + 0x4a0);
  FUN_00769758(param_1 + 0x898);
  *(undefined1 *)(param_1 + 0x89f) = 0;
  FUN_0074b190(param_1 + 0x410);
  FUN_0075d5b4(param_1 + 0x350);
  FUN_00761df0(param_1 + 0x88c);
LAB_0076b8c0:
  FUN_0075d5b4(param_1 + 0x150);
  piVar3 = *(int **)(param_1 + 0x148);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00795ca8(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  }
  *(undefined1 *)(param_1 + 0x979) = 0;
  return;
}

