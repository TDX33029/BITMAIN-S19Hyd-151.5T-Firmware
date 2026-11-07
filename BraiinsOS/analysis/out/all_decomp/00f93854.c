// FUN_00f93854 @ 00f93854 size=68 calls_out=0 calls_in=1
// strings: 

bool FUN_00f93854(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    param_2 = param_2 * 8;
    piVar2 = (int *)(param_1 + 4);
    while( true ) {
      param_2 = param_2 + -8;
      bVar1 = *piVar2 == 0;
      if (*piVar2 == 0) break;
      piVar2 = piVar2 + 2;
      if (param_2 == 0) {
        return bVar1;
      }
    }
  }
  return bVar1;
}

