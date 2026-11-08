// FUN_0066a348 @ 0066a348 size=124 calls_out=4 calls_in=2
// strings: 

void FUN_0066a348(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x9b);
  if (cVar1 == '\0') {
    FUN_00669400(param_1 + 0x90);
    FUN_005faf6c(param_1 + 0x94);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_019ede44(param_1 + 0xb8);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0066a424(param_1 + 0xa0);
  }
  *(undefined1 *)(param_1 + 0x99) = 0;
  FUN_005faf6c(param_1 + 0x8c);
  if (*(char *)(param_1 + 0x9a) != '\0') {
    FUN_00669400(param_1 + 0x88);
  }
  *(undefined1 *)(param_1 + 0x9a) = 0;
  return;
}

