// FUN_00777800 @ 00777800 size=152 calls_out=4 calls_in=0
// strings: 

void FUN_00777800(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xa5);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_01443048(*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    }
    FUN_0077749c(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  }
  FUN_0077749c(param_1 + 0x80);
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_01443048(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  *(undefined1 *)(param_1 + 0xa7) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  return;
}

