// FUN_0142980c @ 0142980c size=148 calls_out=1 calls_in=1
// strings: 

void FUN_0142980c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x18);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 10) == 8) {
    (**(code **)(*(int *)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 0xc));
  }
  if ((uVar3 & 2) != 0) {
    local_30 = *(int *)(param_1 + 0x1c);
    uStack_2c = *(undefined4 *)(param_1 + 0x20);
    uStack_28 = *(undefined4 *)(param_1 + 0x24);
    local_24 = *(undefined4 *)(param_1 + 0x28);
    uStack_20 = *(undefined4 *)(param_1 + 0x2c);
    uStack_1c = *(undefined4 *)(param_1 + 0x30);
    uStack_18 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (local_30 != 0) {
      FUN_014294b4((uint)&local_30 | 4);
    }
  }
  return;
}

