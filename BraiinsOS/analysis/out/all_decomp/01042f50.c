// FUN_01042f50 @ 01042f50 size=260 calls_out=1 calls_in=0
// strings: 

void FUN_01042f50(int *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  DataMemoryBarrier(0xb);
  pcVar3 = (char *)(iVar6 + 0x24);
  *(undefined1 *)(iVar6 + 0x34) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    if (iVar5 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x24) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar3 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar6 + 0x20));
    }
  }
  pcVar3 = (char *)(iVar6 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar6 + 0x28);
    *(undefined4 *)(iVar6 + 0x28) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar6 + 0x2c));
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x30) = 0;
    DataMemoryBarrier(0xb);
  }
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105a70c(*param_1);
    return;
  }
  return;
}

