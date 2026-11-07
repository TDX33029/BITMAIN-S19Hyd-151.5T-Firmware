// FUN_01aaaecc @ 01aaaecc size=196 calls_out=2 calls_in=757
// strings: 

void FUN_01aaaecc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_28 = 1;
  DataMemoryBarrier(0xb);
  puVar3 = DAT_01d50f84;
  if ((DAT_01d51af4 == 2) && (DAT_01d50f7c != 0)) {
    puVar2 = (undefined4 *)((int)DAT_01d50f80 + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8);
  }
  else {
    puVar2 = DAT_01d50f80;
    if (DAT_01d51af4 != 2) {
      puVar2 = &DAT_005312da;
      puVar3 = &DAT_01d2e6fc;
    }
  }
  local_18 = param_2;
  local_14 = param_1;
  iVar1 = (**(code **)(puVar3 + 0x28))(puVar2,&local_28);
  if (iVar1 != 0) {
    (**(code **)(puVar3 + 0x2c))(puVar2,&local_28);
  }
  return;
}

