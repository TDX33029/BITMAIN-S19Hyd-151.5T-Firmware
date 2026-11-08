// FUN_006c1dd0 @ 006c1dd0 size=128 calls_out=1 calls_in=1
// strings: 

bool FUN_006c1dd0(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0 || *param_2 == 0) {
    if (*param_1 != 0 || *param_2 != 0) {
      return false;
    }
  }
  else {
    if (param_1[1] != param_2[1]) {
      return false;
    }
    iVar1 = thunk_FUN_01bed842();
    if (iVar1 != 0) {
      return false;
    }
  }
  bVar2 = false;
  if (param_1[3] == param_2[3]) {
    iVar1 = thunk_FUN_01bed842(param_1[2],param_2[2]);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

