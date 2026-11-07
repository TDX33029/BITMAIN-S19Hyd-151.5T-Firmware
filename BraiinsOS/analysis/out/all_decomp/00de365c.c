// FUN_00de365c @ 00de365c size=76 calls_out=2 calls_in=2
// strings: 

void FUN_00de365c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x78);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x74);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00e7c67c(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x60) != 0) {
      (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(undefined4 *)(param_1 + 100));
    }
  }
  FUN_00a07b4c(param_1);
  return;
}

