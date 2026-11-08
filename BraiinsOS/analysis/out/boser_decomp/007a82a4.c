// FUN_007a82a4 @ 007a82a4 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_007a82a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(param_1[1] + 4);
  for (uVar2 = (uint)(param_1[3] - param_1[1]) >> 6; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 0x10;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x40);
  return;
}

