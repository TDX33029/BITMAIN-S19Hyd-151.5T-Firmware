// FUN_00a59444 @ 00a59444 size=208 calls_out=2 calls_in=2
// strings: 

void FUN_00a59444(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x84);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x80);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x44);
    }
    if (bVar2 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0163aa10(param_1 + 0x58);
        if (*(int *)(param_1 + 100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a59510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 100) + 0xc))(*(undefined4 *)(param_1 + 0x68));
          return;
        }
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00a592c0(param_1 + 0x88);
      return;
    }
    bVar2 = cVar1 == '\x04';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xf8);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xbc) != '\x03') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xf4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xf0);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0163aa10(param_1 + 0xd0);
        if (*(int *)(param_1 + 0xdc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a594b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0xdc) + 0xc))(*(undefined4 *)(param_1 + 0xe0));
          return;
        }
      }
    }
  }
  return;
}

