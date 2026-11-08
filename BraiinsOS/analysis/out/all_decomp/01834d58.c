// FUN_01834d58 @ 01834d58 size=168 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01834d58(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] ^ *param_1 >> 1) & 0x55555555;
  uVar2 = (param_1[3] ^ param_1[2] >> 1) & 0x55555555;
  param_1[2] = param_1[2] ^ uVar2 << 1;
  param_1[1] = param_1[1] ^ uVar1;
  *param_1 = *param_1 ^ uVar1 << 1;
  uVar3 = (param_1[5] ^ param_1[4] >> 1) & 0x55555555;
  param_1[3] = param_1[3] ^ uVar2;
  param_1[5] = param_1[5] ^ uVar3;
  uVar1 = (param_1[7] ^ param_1[6] >> 1) & 0x55555555;
  param_1[4] = param_1[4] ^ uVar3 << 1;
  param_1[7] = param_1[7] ^ uVar1;
  param_1[6] = param_1[6] ^ uVar1 << 1;
  return 0;
}

