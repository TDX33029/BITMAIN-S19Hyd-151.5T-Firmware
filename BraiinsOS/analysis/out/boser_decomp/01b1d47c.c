// FUN_01b1d47c @ 01b1d47c size=108 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1d47c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = ((param_3 + 0x7f >> 7) * 0x401 + 0x200000U & 0x3ffffff) >> 0x16;
  *param_2 = uVar1;
  uVar1 = param_3 + uVar1 * -0x7fe00;
  *param_1 = (uVar1 - 0x7fe001 ^ uVar1) &
             (0x3ff000 - uVar1 >> 0x1f | ((int)(0x3ff000 - uVar1) >> 0x1f) << 1) ^ uVar1;
  return 0;
}

