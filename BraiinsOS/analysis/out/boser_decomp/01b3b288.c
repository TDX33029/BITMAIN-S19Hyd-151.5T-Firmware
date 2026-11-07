// FUN_01b3b288 @ 01b3b288 size=184 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01b3b288(int *param_1,int param_2,int param_3,int param_4)

{
  if ((param_2 == 0 && *param_1 == 0) || (param_4 == 0 && param_1[1] == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_01b1f904();
    *param_1 = param_2;
  }
  if (param_3 != 0) {
    FUN_01b1f904(param_1[2]);
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    FUN_01b1f904(param_1[1]);
    param_1[1] = param_4;
  }
  FUN_01b323f0(param_1[0xe]);
  param_1[0xe] = 0;
  return 1;
}

