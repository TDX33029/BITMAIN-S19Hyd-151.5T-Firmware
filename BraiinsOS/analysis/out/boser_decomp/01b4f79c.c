// FUN_01b4f79c @ 01b4f79c size=104 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b4f79c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = *param_2;
  uVar1 = param_2[1];
  param_1[3] = uVar4 * 2 + (uint)CARRY4(uVar3,uVar3);
  param_1[2] = uVar3 * 2 ^ uVar1 >> 0x1f;
  *param_1 = uVar2 * 2 | uVar4 >> 0x1f;
  param_1[1] = uVar1 * 2 + (uint)CARRY4(uVar2,uVar2) ^ (int)uVar1 >> 0x1f & 0xc2000000U;
  return 0;
}

