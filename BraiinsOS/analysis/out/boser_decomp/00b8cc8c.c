// FUN_00b8cc8c @ 00b8cc8c size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00b8cc8c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[1] + 8);
  for (iVar1 = ((uint)(param_1[3] - param_1[1]) >> 3) * -0x55555555; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    FUN_019bb7e0(*puVar2,puVar2[1]);
    puVar2 = puVar2 + 6;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x18);
  return;
}

