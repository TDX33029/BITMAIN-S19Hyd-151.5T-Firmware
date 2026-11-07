// FUN_0192f358 @ 0192f358 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_0192f358(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 4);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x55555555; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_0134aee0(puVar2[-1],*puVar2,4,4);
    puVar2 = puVar2 + 3;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0xc);
  return;
}

