// FUN_017151bc @ 017151bc size=80 calls_out=2 calls_in=2
// strings: 

void FUN_017151bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(param_1[1] + 4);
  for (uVar2 = (uint)(param_1[3] - param_1[1]) >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 4;
  }
  FUN_01af7af8(param_1[2],*param_1,4,0x10);
  return;
}

