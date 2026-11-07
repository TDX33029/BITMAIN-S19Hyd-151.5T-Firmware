// FUN_01453e8c @ 01453e8c size=92 calls_out=2 calls_in=2
// strings: 

void FUN_01453e8c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 8);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 3) * 0x38e38e39; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_0134bd64(*puVar2,puVar2[1]);
    puVar2 = puVar2 + 0x12;
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x48);
  return;
}

