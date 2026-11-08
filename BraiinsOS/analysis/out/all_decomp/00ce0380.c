// FUN_00ce0380 @ 00ce0380 size=104 calls_out=3 calls_in=20
// strings: 

void FUN_00ce0380(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      if (2 < bVar1) {
        if (bVar1 == 3) {
          if (*(int *)(param_1 + 4) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8));
          }
        }
        else if (bVar1 == 4) {
          FUN_00ce0224(param_1 + 4);
        }
        else {
          FUN_00c48644();
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

