// FUN_010bfc58 @ 010bfc58 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_010bfc58(undefined1 *param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_2 + 0x2c) != '\x02') {
    DataMemoryBarrier(0xb);
    if (*(int *)(*(int *)(param_2 + 0x24) + 0x1c) < 0) {
      iVar5 = FUN_010b7c7c((int *)(param_2 + 0x24),param_3);
      if (iVar5 != 0) goto LAB_010bfd9c;
      goto LAB_010bfd64;
    }
  }
  iVar5 = *(int *)(param_2 + 0x20);
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar5 + 0x28) == '\0') {
    uVar6 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar3 = (char *)(iVar5 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      if (*(int *)(iVar5 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))(*(undefined4 *)(iVar5 + 0x14));
      }
      *(undefined8 *)(iVar5 + 0x10) = uVar6;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar5 + 0x28) == '\0') {
LAB_010bfd9c:
        *param_1 = 5;
        return;
      }
    }
    else {
      (**(code **)((int)uVar6 + 0xc))((int)((ulonglong)uVar6 >> 0x20));
    }
  }
  pcVar3 = (char *)(iVar5 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      FUN_010bdcc4(param_1);
      return;
    }
  }
LAB_010bfd64:
  *param_1 = 4;
  return;
}

