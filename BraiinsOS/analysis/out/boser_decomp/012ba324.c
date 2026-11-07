// FUN_012ba324 @ 012ba324 size=92 calls_out=2 calls_in=3
// strings: 

void FUN_012ba324(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 8);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x55555555; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_0134bd64(*puVar2,puVar2[1]);
    puVar2 = puVar2 + 6;
  }
  FUN_0134aee0(param_1[2],*param_1,8,0x18);
  return;
}

