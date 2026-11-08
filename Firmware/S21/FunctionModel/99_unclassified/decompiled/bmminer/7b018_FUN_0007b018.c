// FUN_0007b018 @ 0007b018  size=168  callers=1
// program: bmminer


undefined4 FUN_0007b018(undefined4 *param_1)

{
  ssize_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  uint local_10;
  int local_c;
  
  local_c = open("/dev/urandom",0);
  if (local_c == -1) {
    uVar2 = 1;
  }
  else {
    sVar1 = read(local_c,auStack_14,4);
    local_10 = (uint)(sVar1 == 4);
    close(local_c);
    if (local_10 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_0007afa8(auStack_14);
      *param_1 = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}

