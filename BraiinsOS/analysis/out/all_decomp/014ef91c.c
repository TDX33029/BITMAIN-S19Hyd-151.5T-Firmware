// FUN_014ef91c @ 014ef91c size=280 calls_out=1 calls_in=5
// strings: 

void FUN_014ef91c(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != 0) {
    iVar7 = 0;
    do {
      iVar6 = *(int *)(param_1 + iVar7 * 4);
      DataMemoryBarrier(0xb);
      iVar8 = iVar7 + 1;
      pcVar3 = (char *)(iVar6 + 0x30);
      *(undefined1 *)(iVar6 + 0x40) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar3;
        bVar2 = (bool)hasExclusiveAccess(pcVar3);
      } while (!bVar2);
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar6 + 0x28);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar6 + 0x30) = 0;
        DataMemoryBarrier(0xb);
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x2c));
        }
      }
      pcVar3 = (char *)(iVar6 + 0x3c);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar3;
        bVar2 = (bool)hasExclusiveAccess(pcVar3);
      } while (!bVar2);
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar6 + 0x34);
        *(undefined4 *)(iVar6 + 0x34) = 0;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar6 + 0x38));
        }
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
      }
      piVar5 = *(int **)(param_1 + iVar7 * 4);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a5c48(*(undefined4 *)(param_1 + iVar7 * 4));
      }
      iVar7 = iVar8;
    } while (iVar8 != param_2);
  }
  return;
}

