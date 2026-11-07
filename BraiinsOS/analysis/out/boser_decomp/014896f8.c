// FUN_014896f8 @ 014896f8 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_014896f8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[0xb] - param_1[9]) >> 5) + 1;
  puVar1 = (undefined4 *)param_1[9];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    FUN_014880e4(puVar1 + 4);
    puVar1 = puVar1 + 8;
  }
  FUN_0132b958(param_1[10],param_1[8],8,0x20);
  if (*param_1 < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_014880e4(param_1 + 4);
  return;
}

