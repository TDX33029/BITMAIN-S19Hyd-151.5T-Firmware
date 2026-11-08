// FUN_00b59644 @ 00b59644 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00b59644(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - (int)param_1[1]) >> 6) * -0x55555555 + 1;
  puVar1 = (undefined4 *)param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    FUN_006c78f4(puVar1 + 4);
    puVar1 = puVar1 + 0x30;
  }
  FUN_0132b958(param_1[2],*param_1,8,0xc0);
  return;
}

