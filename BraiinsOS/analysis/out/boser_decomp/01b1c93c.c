// FUN_01b1c93c @ 01b1c93c size=140 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1c93c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_3 + 0x7f >> 7) * 0x2c0b + 0x800000 >> 0x18;
  uVar2 = 0x2b - uVar1;
  uVar1 = uVar1 & ~(uVar2 >> 0x1f | ((int)uVar2 >> 0x1f) << 1);
  *param_2 = uVar1;
  uVar1 = uVar1 * -0x2e800 + param_3;
  *param_1 = (uVar1 - 0x7fe001 ^ uVar1) &
             (0x3ff000 - uVar1 >> 0x1f | ((int)(0x3ff000 - uVar1) >> 0x1f) << 1) ^ uVar1;
  return 0;
}

