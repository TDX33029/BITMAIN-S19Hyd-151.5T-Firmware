// FUN_0170f990 @ 0170f990 size=252 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0170f990(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[6] == '\0') {
    uVar6 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    piVar4 = param_1 + 2;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *(char *)piVar4 = '\x01';
    bVar5 = (char)iVar2 == '\0';
    piVar4 = param_1;
    if (!bVar5) {
      piVar4 = (int *)0x0;
    }
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if (*param_1 != 0) {
        (**(code **)(*param_1 + 0xc))(piVar4[1]);
      }
      *(undefined8 *)param_1 = uVar6;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar4 + 2) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)param_1[6] == '\0') {
        return 1;
      }
    }
    else {
      (**(code **)((int)uVar6 + 0xc))((int)((ulonglong)uVar6 >> 0x20));
    }
  }
  pcVar3 = (char *)((int)param_1 + 0x19);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar5 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar5);
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

