// FUN_015faf74 @ 015faf74 size=80 calls_out=2 calls_in=4
// strings: 

void FUN_015faf74(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)(param_1[1] + 4);
  for (uVar4 = (uint)(param_1[3] - param_1[1]) >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar1 = puVar3 + -1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 2;
    FUN_01443048(*puVar1,uVar2);
  }
  FUN_0134aee0(param_1[2],*param_1,4,8);
  return;
}

