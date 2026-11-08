// FUN_00a07a74 @ 00a07a74 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_00a07a74(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x38);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x15);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x18);
    if (*(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  FUN_0163bdc0(param_1 + 0x40);
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a07ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  return;
}

