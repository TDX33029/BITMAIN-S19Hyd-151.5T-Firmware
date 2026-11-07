// FUN_01af73c0 @ 01af73c0 size=152 calls_out=3 calls_in=2
// strings: 

void FUN_01af73c0(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = 4;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 4) {
    if (((char)param_1[3] == '\0') && (param_1[4] != 0x80000000)) {
      FUN_0134bd64(param_1[4],param_1[5]);
    }
    FUN_006a41c0(param_1);
    return;
  }
  if (uVar1 != 0x1b) {
    return;
  }
  uVar1 = param_1[5];
  puVar2 = (undefined4 *)(uVar1 + 4);
  for (uVar3 = param_1[6]; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_0134aee0(puVar2[-1],*puVar2,4,4);
    puVar2 = puVar2 + 3;
  }
  FUN_0134aee0(param_1[4],uVar1,4,0xc);
  return;
}

