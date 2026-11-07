// FUN_00ad1dac @ 00ad1dac size=232 calls_out=3 calls_in=0
// strings: 

void FUN_00ad1dac(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int local_870;
  int iStack_86c;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x870);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0x860) + 8))(*(undefined4 *)(iVar2 + 0x864));
    }
    if ((uVar5 & 2) != 0) {
      FUN_016dd1aa(&local_870,(undefined4 *)(iVar2 + 8),0x858);
      *(undefined4 *)(iVar2 + 8) = 2;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (local_870 != 2 || iStack_86c != 0) {
        FUN_00d054d0(&local_870);
      }
    }
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d0554c(*param_1);
        return;
      }
    }
  }
  return;
}

