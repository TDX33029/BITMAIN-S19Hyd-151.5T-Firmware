// FUN_01667914 @ 01667914 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_01667914(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = 4;
      if (1 < *param_1) {
        iVar1 = *param_1 - 2;
      }
      if (3 < iVar1 - 1U) {
        if (iVar1 == 0) {
          if (param_1[1] != 0) {
            thunk_FUN_016d3fb4(param_1[2]);
          }
        }
        else if (iVar1 == 5) {
          FUN_0166700c(param_1 + 1);
        }
        else {
          FUN_016676ec();
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  return;
}

