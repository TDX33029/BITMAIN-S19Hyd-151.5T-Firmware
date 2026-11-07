// FUN_01bcffec @ 01bcffec size=80 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01bcffec(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 5;
  *param_1 = ~((int)(uVar1 - 1 & ~uVar1) >> 0x1f);
  uVar1 = param_3 & uVar1 - 1 | uVar1 * (0x3f - param_3);
  *param_2 = (uVar1 & 1) + (uVar1 >> 1);
  return 0;
}

