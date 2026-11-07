// FUN_01823fd8 @ 01823fd8 size=188 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01823fd8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = -((int)((param_2 - 1U ^ 0x100) << 0x17) >> 0x1f);
  *param_1 = uVar3 + uVar2;
  uVar2 = (uint)CARRY4(uVar3,uVar2);
  uVar3 = param_1[2];
  param_1[1] = uVar1 + uVar2;
  uVar2 = (uint)CARRY4(uVar1,uVar2);
  uVar1 = param_1[3];
  param_1[2] = uVar3 + uVar2;
  uVar2 = (uint)CARRY4(uVar3,uVar2);
  uVar3 = param_1[4];
  param_1[3] = uVar1 + uVar2;
  uVar2 = (uint)CARRY4(uVar1,uVar2);
  param_1[4] = uVar3 + uVar2;
  uVar2 = (uint)CARRY4(uVar3,uVar2);
  uVar3 = param_1[6];
  uVar1 = (uint)CARRY4(param_1[5],uVar2);
  param_1[5] = param_1[5] + uVar2;
  param_1[6] = uVar3 + uVar1;
  param_1[7] = param_1[7] + (uint)CARRY4(uVar3,uVar1);
  return 0;
}

