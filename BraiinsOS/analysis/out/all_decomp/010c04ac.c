// FUN_010c04ac @ 010c04ac size=460 calls_out=1 calls_in=0
// strings: 

void FUN_010c04ac(undefined1 *param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_2 + 0x2c) != '\x02') {
    iVar3 = *(int *)(param_2 + 0x24);
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar3 + 0x1c)) {
      puVar5 = (uint *)(iVar3 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = *puVar5 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar5 = (uint *)(iVar3 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar6 = *(int *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x28));
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0x20);
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar3 + 0x28) == '\0') {
    uVar8 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar4 = (char *)(iVar3 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      if (*(int *)(iVar3 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))(*(undefined4 *)(iVar3 + 0x14));
      }
      *(undefined8 *)(iVar3 + 0x10) = uVar8;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar3 + 0x28) == '\0') {
        *param_1 = 5;
        return;
      }
    }
    else {
      (**(code **)((int)uVar8 + 0xc))((int)((ulonglong)uVar8 >> 0x20));
    }
  }
  pcVar4 = (char *)(iVar3 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar6 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      FUN_010bdcc4(param_1);
      return;
    }
  }
  *param_1 = 4;
  return;
}

