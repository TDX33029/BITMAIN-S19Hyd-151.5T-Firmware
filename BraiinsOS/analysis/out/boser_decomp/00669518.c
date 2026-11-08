// FUN_00669518 @ 00669518 size=228 calls_out=5 calls_in=2
// strings: 

void FUN_00669518(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 1) {
    FUN_00d332bc(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x46] == '\0') {
    FUN_00669400(param_1 + 0x44);
  }
  else {
    if ((char)param_1[0x46] != '\x03') {
      return;
    }
    cVar1 = *(char *)((int)param_1 + 0xa3);
    if (cVar1 == '\x04') {
      if ((char)param_1[0x42] == '\x03' || (char)param_1[0x42] == '\0') {
        FUN_00669400(param_1 + 0x3e);
      }
      FUN_01431b40(param_1 + 0x2a);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          FUN_00669400(param_1 + 0x26);
          FUN_005faf6c(param_1 + 0x27);
        }
        goto LAB_006695f0;
      }
      FUN_019ede44(param_1 + 0x30);
    }
    *(undefined1 *)((int)param_1 + 0xa1) = 0;
    FUN_005faf6c(param_1 + 0x25);
    if (*(char *)((int)param_1 + 0xa2) != '\0') {
      FUN_00669400(param_1 + 0x24);
    }
    *(undefined1 *)((int)param_1 + 0xa2) = 0;
  }
LAB_006695f0:
  FUN_005faf6c(param_1 + 0x45);
  return;
}

