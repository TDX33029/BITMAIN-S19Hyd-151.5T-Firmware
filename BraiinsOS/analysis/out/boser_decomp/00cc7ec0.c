// FUN_00cc7ec0 @ 00cc7ec0 size=172 calls_out=2 calls_in=1
// strings: 

void FUN_00cc7ec0(int *param_1)

{
  char cVar1;
  
  if ((char)param_1[0xf] == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if ((char)param_1[0xf] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[9];
  if (cVar1 == '\0') {
    if (param_1[5] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[5],param_1[6]);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00fe4378(param_1[10],param_1[0xb]);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00fe4378(param_1[0xd],param_1[0xe]);
    if (param_1[10] != -0x80000000) {
      FUN_019bb7e0(param_1[10],param_1[0xb]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return;
}

