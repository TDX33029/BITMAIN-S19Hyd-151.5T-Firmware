// FUN_0067db1c @ 0067db1c size=148 calls_out=3 calls_in=1
// strings: 

void FUN_0067db1c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[7] + 0x10);
  for (iVar1 = ((uint)(param_1[9] - param_1[7]) >> 3) * -0x55555555; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_0134bd64(puVar2[-4],puVar2[-3]);
    FUN_0134bd64(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 6;
  }
  FUN_0134aee0(param_1[8],param_1[6],4,0x18);
  if (*param_1 < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

