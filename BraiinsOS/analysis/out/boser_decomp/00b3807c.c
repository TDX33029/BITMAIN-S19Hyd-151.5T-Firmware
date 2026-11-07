// FUN_00b3807c @ 00b3807c size=144 calls_out=3 calls_in=1
// strings: 

void FUN_00b3807c(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  
  FUN_009a4a68(&local_18);
  uVar2 = local_18 & 0xff;
  if (uVar2 == 4) {
    if (local_14 != 0) {
      param_1[1] = local_14;
      *(undefined1 *)param_1 = 4;
      return;
    }
    local_14 = 0;
    local_18 = 0x2501;
  }
  else {
    cVar1 = FUN_005ef5e8(&local_18);
    if (cVar1 == '#') {
      *(undefined1 *)param_1 = 4;
      param_1[1] = 0;
      FUN_0069263c(uVar2,local_14);
      return;
    }
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  return;
}

