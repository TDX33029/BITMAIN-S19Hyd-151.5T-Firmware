// FUN_00c322d4 @ 00c322d4 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_00c322d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x3c3) == '\x03') {
    FUN_00c32360(param_1 + 0x10);
    iVar2 = 0x388;
    if (*(int *)(param_1 + 0x340) != 2) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x354));
    }
  }
  else {
    iVar2 = 0x3a4;
    if (*(char *)(param_1 + 0x3c3) != '\0') {
      return;
    }
  }
  puVar1 = (undefined4 *)(param_1 + iVar2);
  FUN_019bb7e0(*puVar1,puVar1[1]);
  FUN_019bb7e0(puVar1[3],puVar1[4]);
  return;
}

