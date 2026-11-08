// FUN_01af313c @ 01af313c size=256 calls_out=3 calls_in=1
// strings: 

void FUN_01af313c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = *param_2;
  uVar1 = FUN_01af323c(uVar9);
  uVar6 = *param_3;
  uVar2 = FUN_01af323c(uVar6);
  puVar8 = param_3;
  if (uVar1 < uVar2) {
    puVar8 = param_2;
    param_2 = param_3;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  if (uVar1 < uVar2) {
    uVar6 = uVar9;
  }
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar2 = param_2[5];
  uVar9 = param_2[6];
  uVar3 = param_2[7];
  uVar1 = 4;
  if ((int)uVar6 < 0) {
    uVar1 = uVar6 ^ 0x80000000;
  }
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar9;
  param_1[7] = uVar3;
  if (uVar1 == 0x1b) {
    uVar1 = puVar8[5];
    puVar7 = (undefined4 *)(uVar1 + 4);
    for (uVar6 = puVar8[6]; uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_0134aee0(puVar7[-1],*puVar7,4,4);
      puVar7 = puVar7 + 3;
    }
    uVar6 = puVar8[4];
  }
  else {
    if (uVar1 != 4) {
      return;
    }
    if (((char)puVar8[3] == '\0') && (puVar8[4] != 0x80000000)) {
      FUN_0134bd64(puVar8[4],puVar8[5]);
    }
    uVar1 = puVar8[1];
    puVar7 = (undefined4 *)(uVar1 + 4);
    for (uVar2 = puVar8[2]; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_0134bd64(puVar7[-1],*puVar7);
      puVar7 = puVar7 + 3;
    }
  }
  FUN_0134aee0(uVar6,uVar1,4,0xc);
  return;
}

