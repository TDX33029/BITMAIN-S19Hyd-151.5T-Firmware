// FUN_01791818 @ 01791818 size=100 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01791818(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_0045012c + param_2 * 8);
  *param_1 = *param_1 ^ *(uint *)(&DAT_00450128 + param_2 * 8);
  param_1[1] = param_1[1] ^ uVar1;
  return 0;
}

