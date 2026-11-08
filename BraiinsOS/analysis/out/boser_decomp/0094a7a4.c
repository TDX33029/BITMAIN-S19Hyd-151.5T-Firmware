// FUN_0094a7a4 @ 0094a7a4 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_0094a7a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - (int)param_1[1]) >> 3) * 0x1a1f58d1 + 1;
  puVar1 = (undefined4 *)param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    FUN_00949b58(puVar1 + 4);
    puVar1 = puVar1 + 0x62;
  }
  FUN_0132b958(param_1[2],*param_1,8,0x188);
  return;
}

