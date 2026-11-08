// FUN_016daaa4 @ 016daaa4 size=104 calls_out=2 calls_in=3
// strings: 

undefined4 * FUN_016daaa4(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_016dd606(param_2,0,0x90,param_4,param_4);
  software_interrupt(0);
  iVar1 = FUN_016d3496(param_1,0xa0000);
  param_2[0xf] = iVar1;
  if (iVar1 < 0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    software_interrupt(0);
    param_2[8] = 0x16dacfd;
    param_2[10] = &LAB_016dad7a_1;
    *param_2 = 9;
    param_2[0xb] = param_3 + 8;
    param_2[0xc] = param_4 + -8;
    param_2[3] = 0x16dac53;
    param_2[0x13] = 0xffffffff;
  }
  return param_2;
}

