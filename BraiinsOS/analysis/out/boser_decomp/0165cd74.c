// FUN_0165cd74 @ 0165cd74 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_0165cd74(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x2c;
    do {
      param_2 = param_2 + -1;
      if (*(int *)(param_1 + -0x1c) != -0x80000000) {
        FUN_0165cbf8();
      }
      param_1 = param_1 + 0x1c;
    } while (param_2 != 0);
  }
  return;
}

