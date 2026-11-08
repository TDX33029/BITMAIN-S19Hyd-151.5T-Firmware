// FUN_00a857d0 @ 00a857d0 size=208 calls_out=7 calls_in=4
// strings: 

void FUN_00a857d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_00a86418(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    uVar1 = param_1[2];
    if (uVar1 == 5) {
      if ((char)param_1[0x11] == '\x03') {
        return;
      }
LAB_00a86404:
      if ((char)param_1[0x11] == '\x02') {
        FUN_0184f010();
        return;
      }
      FUN_00a858f8();
      return;
    }
    iVar2 = uVar1 - 2;
    if (uVar1 < 2) {
      iVar2 = 0;
    }
    if (iVar2 == 1) {
      if ((char)param_1[0x11] != '\x03') {
        if ((char)param_1[0x11] == '\x04') {
          iVar2 = param_1[3];
          FUN_00a86688(iVar2);
          thunk_FUN_01be4678(iVar2);
          return;
        }
        goto LAB_00a86404;
      }
    }
    else if ((iVar2 == 0) && (uVar1 != 2)) {
      if ((char)param_1[0x32] != '\x06') {
        FUN_00a7af24();
      }
      FUN_00a86574(param_1 + 2);
      return;
    }
  }
  return;
}

