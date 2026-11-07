// FUN_01bd4f04 @ 01bd4f04 size=104 calls_out=1 calls_in=3
// strings: 

uint FUN_01bd4f04(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *extraout_r2;
  uint uVar2;
  undefined8 uVar3;
  
  param_2 = param_2 + -4;
  puVar1 = param_1 + param_3;
  uVar2 = 0xffffffff;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar3 = FUN_01bd4e8c(*param_1 ^ *(uint *)(param_2 + 4));
    param_2 = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = uVar2 ^ ((uint)uVar3 ^ uVar2) & uVar2;
    puVar1 = extraout_r2;
  }
  return uVar2;
}

