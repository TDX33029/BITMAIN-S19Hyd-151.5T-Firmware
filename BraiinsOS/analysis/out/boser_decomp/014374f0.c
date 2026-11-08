// FUN_014374f0 @ 014374f0 size=240 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_014374f0(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *param_1;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar4 + 0x20) == '\0') {
    uVar5 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    pcVar3 = (char *)(iVar4 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      if (*(int *)(iVar4 + 8) != 0) {
        (**(code **)(*(int *)(iVar4 + 8) + 0xc))(*(undefined4 *)(iVar4 + 0xc));
      }
      *(undefined8 *)(iVar4 + 8) = uVar5;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar4 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar4 + 0x20) == '\0') {
        return 1;
      }
    }
    else {
      (**(code **)((int)uVar5 + 0xc))((int)((ulonglong)uVar5 >> 0x20));
    }
  }
  pcVar3 = (char *)(iVar4 + 0x21);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    DataMemoryBarrier(0xb);
    *pcVar3 = '\0';
    DataMemoryBarrier(0xb);
    return 0;
  }
  return 0;
}

