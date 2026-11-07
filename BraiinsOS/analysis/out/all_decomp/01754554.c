// FUN_01754554 @ 01754554 size=228 calls_out=2 calls_in=2
// strings: 

undefined8
FUN_01754554(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  if (param_6 != 0) {
    do {
      FUN_01753e90(param_1);
      FUN_01753e90(param_1 + 200);
      FUN_01753e90(param_1 + 400);
      FUN_01753e90(param_1 + 600);
      FUN_017077dc(param_1,param_2,param_7);
      FUN_017077dc(param_1 + 200,param_3,param_7);
      FUN_017077dc(param_1 + 400,param_4,param_7);
      FUN_017077dc(param_1 + 600,param_5,param_7);
      param_2 = param_2 + param_7;
      param_3 = param_3 + param_7;
      param_4 = param_4 + param_7;
      param_5 = param_5 + param_7;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return 0;
}

