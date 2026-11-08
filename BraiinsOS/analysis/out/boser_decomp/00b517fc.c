// FUN_00b517fc @ 00b517fc size=356 calls_out=0 calls_in=1
// strings: 

bool FUN_00b517fc(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (*param_1 == 1) {
    if (*param_2 == 0) {
      return false;
    }
    if (param_1[1] != param_2[1]) {
      return false;
    }
  }
  else if (*param_2 != 0) {
    return false;
  }
  if (param_1[2] == 0) {
    if (param_2[2] != 0) {
      return false;
    }
  }
  else {
    if (param_2[2] == 0) {
      return false;
    }
    if (param_1[3] != param_2[3]) {
      return false;
    }
  }
  if (param_1[4] == 0) {
    if (param_2[4] != 0) {
      return false;
    }
  }
  else {
    if (param_2[4] == 0) {
      return false;
    }
    if (param_1[5] != param_2[5]) {
      return false;
    }
  }
  if (param_1[6] == 0) {
    if (param_2[6] != 0) {
      return false;
    }
  }
  else {
    if (param_2[6] == 0) {
      return false;
    }
    if (param_1[7] != param_2[7]) {
      return false;
    }
  }
  if (param_1[8] == 0) {
    bVar1 = false;
    if (param_2[8] == 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
    if (param_2[8] != 0) {
      bVar1 = param_1[9] == param_2[9];
    }
  }
  return bVar1;
}

