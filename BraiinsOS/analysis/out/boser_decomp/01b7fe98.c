// FUN_01b7fe98 @ 01b7fe98 size=100 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b7fe98(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_00561a74 + param_2 * 8);
  *param_1 = *param_1 ^ *(uint *)(&DAT_00561a70 + param_2 * 8);
  param_1[1] = param_1[1] ^ uVar1;
  return 0;
}

