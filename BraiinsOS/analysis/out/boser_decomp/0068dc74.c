// FUN_0068dc74 @ 0068dc74 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_0068dc74(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    FUN_00669400(param_1 + 0x108);
  }
  else {
    if (*(char *)(param_1 + 0x110) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x9b);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x100) == '\x03' || *(char *)(param_1 + 0x100) == '\0') {
        FUN_00669400(param_1 + 0xf0);
      }
      FUN_01431b40(param_1 + 0xa0);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          FUN_00669400(param_1 + 0x90);
          FUN_005faf6c(param_1 + 0x94);
        }
        goto LAB_0068dd28;
      }
      FUN_019ede44(param_1 + 0xb8);
    }
    *(undefined1 *)(param_1 + 0x99) = 0;
    FUN_005faf6c(param_1 + 0x8c);
    if (*(char *)(param_1 + 0x9a) != '\0') {
      FUN_00669400(param_1 + 0x88);
    }
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
LAB_0068dd28:
  FUN_005faf6c(param_1 + 0x10c);
  return;
}

