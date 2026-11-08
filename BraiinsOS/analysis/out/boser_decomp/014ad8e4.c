// FUN_014ad8e4 @ 014ad8e4 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_014ad8e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 0x2c);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x49249249; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_019bb7e0(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 0xe;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x38);
  return;
}

