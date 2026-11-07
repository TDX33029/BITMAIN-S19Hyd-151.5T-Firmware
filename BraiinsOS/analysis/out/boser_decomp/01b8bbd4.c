// FUN_01b8bbd4 @ 01b8bbd4 size=148 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b8bbd4(uint param_1)

{
  bool bVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2d8) != 0) {
      return 0xffffffc0;
    }
    bVar1 = false;
    if (*(uint *)(param_1 + 0x224) <= param_1) {
      if (param_1 < *(uint *)(param_1 + 0x228)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    FUN_01b8bba0(param_1);
    if (!bVar1) {
      FUN_01b86ab4(param_1,*(undefined4 *)(param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x2d0));
    }
  }
  return 0;
}

