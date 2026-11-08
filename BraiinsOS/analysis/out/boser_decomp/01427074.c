// FUN_01427074 @ 01427074 size=236 calls_out=2 calls_in=0
// strings: 

void FUN_01427074(undefined1 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_2 + 0x2c) != '\x02') {
    iVar3 = *(int *)(param_2 + 0x24);
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar3 + 0x1c)) {
      puVar4 = (uint *)(iVar3 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar4 = (uint *)(iVar3 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar6 = *(int *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x28));
      }
    }
  }
  uVar7 = FUN_0141fa74(param_2 + 0x20,param_3);
  if ((uVar7 & 1) == 0) {
    if ((int)(uVar7 >> 0x20) != 0) {
      FUN_01427298(param_1);
      return;
    }
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
  }
  *param_1 = uVar2;
  return;
}

