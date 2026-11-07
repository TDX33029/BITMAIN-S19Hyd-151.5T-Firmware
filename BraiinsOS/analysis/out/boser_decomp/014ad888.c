// FUN_014ad888 @ 014ad888 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_014ad888(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 0x94);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x1642c859; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_019bb7e0(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 0x2e;
  }
  FUN_0132b958(param_1[2],*param_1,8,0xb8);
  return;
}

