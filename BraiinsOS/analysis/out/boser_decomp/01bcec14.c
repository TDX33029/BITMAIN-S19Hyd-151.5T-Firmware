// FUN_01bcec14 @ 01bcec14 size=76 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bcec14(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 ^ *param_1 >> 1) & 0x55555555;
  *param_1 = *param_1 ^ uVar1 << 1;
  *param_2 = uVar1 ^ *param_2;
  return 0;
}

