// FUN_01af32d8 @ 01af32d8 size=152 calls_out=2 calls_in=1
// strings: 

int FUN_01af32d8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1[0xf] + 0x2c);
  for (iVar2 = ((uint)(param_1[0x11] - param_1[0xf]) >> 3) * -0x49249249; iVar2 != 0;
      iVar2 = iVar2 + -1) {
    FUN_0134bd64(puVar3[-0xb],puVar3[-10]);
    FUN_0134bd64(puVar3[-1],*puVar3);
    puVar3 = puVar3 + 0xe;
  }
  FUN_0134aee0(param_1[0x10],param_1[0xe],8,0x38);
  uVar1 = param_1[5];
  if (uVar1 == 0 && (1 < (uint)param_1[4]) <= uVar1) {
    FUN_0134bd64(*param_1,param_1[1]);
    iVar2 = FUN_0134bd64(param_1[10],param_1[0xb]);
    return iVar2;
  }
  return uVar1 - (1 >= (uint)param_1[4]);
}

