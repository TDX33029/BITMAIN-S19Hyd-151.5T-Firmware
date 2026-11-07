// FUN_014897cc @ 014897cc size=148 calls_out=4 calls_in=1
// strings: 

void FUN_014897cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[0xd] - param_1[0xb]) >> 3) * -0x33333333 + 1;
  puVar1 = (undefined4 *)param_1[0xb];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    FUN_00e0febc(puVar1 + 4);
    puVar1 = puVar1 + 10;
  }
  FUN_0132b958(param_1[0xc],param_1[10],8,0x28);
  if (*param_1 < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_00db4764(param_1 + 4);
  return;
}

