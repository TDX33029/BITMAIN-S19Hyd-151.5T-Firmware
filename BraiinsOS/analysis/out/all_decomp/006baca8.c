// FUN_006baca8 @ 006baca8 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_006baca8(int *param_1,int param_2)

{
  int extraout_r1;
  int *piVar1;
  
  do {
    piVar1 = (int *)param_1[4];
    if (*param_1 != 0) {
      param_2 = param_1[1];
    }
    if (*param_1 != 0 && param_2 != 0) {
      thunk_FUN_016d3fb4();
    }
    thunk_FUN_016d3fb4(param_1);
    param_2 = extraout_r1;
    param_1 = piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

