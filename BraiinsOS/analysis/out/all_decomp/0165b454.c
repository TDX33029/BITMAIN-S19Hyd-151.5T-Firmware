// FUN_0165b454 @ 0165b454 size=336 calls_out=5 calls_in=10
// strings: 

void FUN_0165b454(char *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0165b480;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0165b480:
  FUN_0128236c(param_1);
  puVar4 = (uint *)(param_2 + 0x10);
  ClearExclusiveLocal();
  if ((*(uint *)(param_2 + 0x14) & *puVar4) != 0xffffffff) {
    FUN_0163eb8c(param_1 + 0x10,param_2);
  }
  ClearExclusiveLocal();
  if (*puVar4 != 0xffffffff || *(int *)(param_2 + 0x14) != -1) {
    *(undefined1 *)(param_2 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    puVar4 = (uint *)(param_2 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 | 2;
    DataMemoryBarrier(0xb);
    if (uVar2 == 0) {
      iVar3 = *(int *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_2 + 0x1c));
      }
    }
  }
  FUN_01282570(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = '\0';
        return;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_1);
  return;
}

