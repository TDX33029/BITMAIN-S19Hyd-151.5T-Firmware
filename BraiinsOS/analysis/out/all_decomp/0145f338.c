// FUN_0145f338 @ 0145f338 size=236 calls_out=5 calls_in=6
// strings: 

void FUN_0145f338(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  if (((*(int *)(param_1 + 0x40) != 0 || *(int *)(param_1 + 0x44) != 0) ||
      (*(uint *)(param_1 + 0x90) < 3)) || (*(char *)(param_1 + 0x159) != '\0')) {
    return;
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
    FUN_01410ed8(&local_28,param_1 + 0x100,param_2);
    if ((local_28 & 0xff) != 4) {
      if ((local_28 & 0xff) == 5) {
        return;
      }
      FUN_010b3b6c(param_1);
      local_1c = local_24;
      local_20 = local_28;
      uVar1 = FUN_010befec(&local_20);
      FUN_014414e8(*(undefined4 *)(param_1 + 0xe4));
      *(undefined4 *)(param_1 + 0xe4) = uVar1;
      *(undefined1 *)(param_1 + 0xf5) = 1;
      return;
    }
    if (local_24 == 0) {
      if (*(char *)(param_1 + 0xf7) == '\0') {
        FUN_010b3b6c();
        return;
      }
      FUN_010b3854();
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xf5) = 1;
  return;
}

