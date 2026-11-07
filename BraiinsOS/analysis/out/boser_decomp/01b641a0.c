// FUN_01b641a0 @ 01b641a0 size=204 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b641a0(int param_1,uint *param_2,int param_3,uint *param_4,undefined4 param_5)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((*param_2 < 0x4a0 || param_3 == 0) || (*param_4 < 0x960)) {
    return 1;
  }
  FUN_01b63fd0(param_1,param_3,param_5);
  *param_2 = 0x4a0;
  *param_4 = 0x960;
  return 0;
}

