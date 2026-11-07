// FUN_01b63108 @ 01b63108 size=204 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b63108(int param_1,uint *param_2,int param_3,uint *param_4,undefined4 param_5)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((*param_2 < 0x620 || param_3 == 0) || (*param_4 < 0xc60)) {
    return 1;
  }
  FUN_01b62f38(param_1,param_3,param_5);
  *param_2 = 0x620;
  *param_4 = 0xc60;
  return 0;
}

