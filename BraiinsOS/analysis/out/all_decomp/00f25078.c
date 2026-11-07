// FUN_00f25078 @ 00f25078 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_00f25078(int *param_1,int param_2)

{
  if (param_2 != 0) {
    param_2 = 1 - param_2;
    do {
      if (*param_1 == 2 && param_1[1] == 0) {
        (*(code *)**(undefined4 **)param_1[2])();
      }
      else {
        FUN_00f247dc(param_1);
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 0x44;
    } while (param_2 != 1);
  }
  return;
}

