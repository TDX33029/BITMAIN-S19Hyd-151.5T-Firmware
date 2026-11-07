// FUN_00b6ba48 @ 00b6ba48 size=112 calls_out=4 calls_in=1
// strings: 

void FUN_00b6ba48(int *param_1)

{
  if (*(char *)((int)param_1 + 0x65) == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)((int)param_1 + 0x65) != '\x03') {
    return;
  }
  if ((char)param_1[0x18] == '\x03') {
    FUN_00b6bb40(param_1 + 0x10);
  }
  FUN_01bf01d6(param_1[9]);
  FUN_019bb7e0(param_1[6],param_1[7]);
  FUN_00b6baf0(param_1 + 3);
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  return;
}

