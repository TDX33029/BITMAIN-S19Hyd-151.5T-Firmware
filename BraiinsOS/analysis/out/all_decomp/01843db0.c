// FUN_01843db0 @ 01843db0 size=74 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01843db0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x4d) != '\0') {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_018425b0(param_1 + 0x50);
      cVar1 = *(char *)(param_1 + 0x4e);
      goto joined_r0x01843de4;
    }
    FUN_018425b8();
  }
  cVar1 = *(char *)(param_1 + 0x4e);
joined_r0x01843de4:
  if (cVar1 != '\0') {
    FUN_018425c0(param_1 + 0xd8);
  }
  return *(undefined8 *)(param_1 + 8);
}

