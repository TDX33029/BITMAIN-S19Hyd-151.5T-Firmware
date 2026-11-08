// FUN_01449080 @ 01449080 size=240 calls_out=1 calls_in=1
// strings: 

void FUN_01449080(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = *param_1;
  DataMemoryBarrier(0xb);
  pcVar5 = (char *)(iVar6 + 0x30);
  *(undefined1 *)(iVar6 + 0x40) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x28);
    *(undefined4 *)(iVar6 + 0x28) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x30) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0x2c));
    }
  }
  pcVar5 = (char *)(iVar6 + 0x3c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x34);
    *(undefined4 *)(iVar6 + 0x34) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x3c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x38));
    }
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
    FUN_0143f6a0(*param_1);
    return;
  }
  return;
}

