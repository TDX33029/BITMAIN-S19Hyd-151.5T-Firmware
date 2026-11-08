// FUN_0078ed90 @ 0078ed90 size=100 calls_out=4 calls_in=1
// strings: 

void FUN_0078ed90(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x106);
  if (cVar1 == '\0') {
    FUN_0079217c(param_1 + 0xc0);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_0078eb5c(param_1 + 0x108);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
    *(undefined1 *)(param_1 + 0x104) = 0;
    FUN_0078bed0(param_1 + 0x108);
  }
  *(undefined1 *)(param_1 + 0x105) = 0;
  return;
}

