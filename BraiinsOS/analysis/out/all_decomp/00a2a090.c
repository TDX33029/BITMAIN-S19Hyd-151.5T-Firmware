// FUN_00a2a090 @ 00a2a090 size=204 calls_out=3 calls_in=4
// strings: 

void FUN_00a2a090(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x22);
  if (cVar1 == '\0') {
    FUN_00a078f4(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 100);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x41);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x44);
      if (*(int *)(param_1 + 0x54) != 0) {
        (**(code **)(*(int *)(param_1 + 0x54) + 0xc))(*(undefined4 *)(param_1 + 0x58));
      }
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    FUN_0163bdc0(param_1 + 0x6c);
    if (*(int *)(param_1 + 0x7c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x7c) + 0xc))(*(undefined4 *)(param_1 + 0x80));
    }
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

