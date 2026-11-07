// FUN_01b65748 @ 01b65748 size=204 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b65748(int param_1,uint *param_2,int param_3,uint *param_4,undefined4 param_5)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((*param_2 < 800 || param_3 == 0) || (*param_4 < 0x660)) {
    return 1;
  }
  FUN_01b65578(param_1,param_3,param_5);
  *param_2 = 800;
  *param_4 = 0x660;
  return 0;
}

