// FUN_01b8d328 @ 01b8d328 size=72 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b8d328(uint *param_1,uint param_2,int param_3)

{
  *param_1 = *param_1 | (*(uint *)(&DAT_00562dc8 + param_3 * 4) & param_2) << (param_1[1] & 0xff);
  param_1[1] = param_1[1] + param_3;
  return 0;
}

