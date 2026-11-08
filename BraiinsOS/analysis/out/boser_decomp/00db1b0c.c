// FUN_00db1b0c @ 00db1b0c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00db1b0c(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(param_1[1] + 0x10);
  for (uVar2 = (uint)(param_1[3] - param_1[1]) >> 5; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 8;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x20);
  return;
}

