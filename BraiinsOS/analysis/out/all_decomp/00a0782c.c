// FUN_00a0782c @ 00a0782c size=116 calls_out=4 calls_in=1
// strings: 

void FUN_00a0782c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x22);
  if (cVar1 == '\0') {
    FUN_00a078f4(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00a07a74(param_1 + 0x2c);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00a07b4c(param_1 + 0x28);
    FUN_0163bdc0(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x8c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x8c) + 0xc))(*(undefined4 *)(param_1 + 0x90));
    }
  }
  FUN_00a078f4(param_1);
  return;
}

