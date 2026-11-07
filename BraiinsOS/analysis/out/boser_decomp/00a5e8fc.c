// FUN_00a5e8fc @ 00a5e8fc size=248 calls_out=5 calls_in=3
// strings: 

void FUN_00a5e8fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  piVar2 = (int *)(param_1 + 0x40);
  if (*piVar2 != 0 || *(int *)(param_1 + 0x44) != 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x90) < 3) {
    return;
  }
  if (*(char *)(param_1 + 0x15d) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x150) == 0) {
    FUN_00a5e5d4(&local_28,param_1 + 0x100,param_2);
    if ((local_28 & 0xff) == 4) {
      if (local_24 == 0) {
        if (*(char *)(param_1 + 0xf7) == '\0') {
          FUN_01421814(param_1);
          return;
        }
        FUN_0172f038(piVar2);
        *piVar2 = 4;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 0xf7) = 2;
        return;
      }
    }
    else {
      if ((local_28 & 0xff) == 5) {
        return;
      }
      FUN_01421814(param_1);
      local_20 = local_28;
      local_1c = local_24;
      uVar1 = FUN_01427eb0(&local_20);
      if (*(int *)(param_1 + 0xe4) != 0) {
        FUN_01a69838();
      }
      *(undefined4 *)(param_1 + 0xe4) = uVar1;
    }
  }
  *(undefined1 *)(param_1 + 0xf5) = 1;
  return;
}

