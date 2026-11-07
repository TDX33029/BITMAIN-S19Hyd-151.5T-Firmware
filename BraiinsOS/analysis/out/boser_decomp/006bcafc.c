// FUN_006bcafc @ 006bcafc size=140 calls_out=1 calls_in=6
// strings: 

bool FUN_006bcafc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*param_1 == *param_2) {
    if (*param_1 == 0) {
      iVar1 = param_1[1];
      iVar2 = param_2[1];
      if (iVar1 == 0 || iVar2 == 0) {
        return iVar1 == 0 && iVar2 == 0;
      }
      if (param_1[2] != param_2[2]) {
        return false;
      }
    }
    else {
      if (param_1[2] != param_2[2]) {
        return false;
      }
      iVar1 = param_1[1];
      iVar2 = param_2[1];
    }
    iVar1 = thunk_FUN_01bed842(iVar1,iVar2);
    bVar3 = iVar1 == 0;
  }
  return bVar3;
}

