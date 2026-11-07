// FUN_00e0dcec @ 00e0dcec size=220 calls_out=5 calls_in=0
// strings: 

void FUN_00e0dcec(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x141)) {
  case 3:
    if (*(char *)(param_1 + 0x17c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x178);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x174);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x154);
      }
    }
    goto LAB_00e0ddc0;
  case 4:
    if (*(char *)(param_1 + 0x17c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x178);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x174);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x154);
      }
    }
    goto LAB_00e0dda0;
  case 5:
    FUN_00c00754(param_1 + 0x148);
    break;
  case 6:
    FUN_00e0de48(param_1 + 0x148);
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00bffdc4(param_1 + 0xac);
    }
    break;
  default:
    goto switchD_00e0dd0c_default;
  }
  *(undefined1 *)(param_1 + 0x143) = 0;
LAB_00e0dda0:
  *(undefined1 *)(param_1 + 0x144) = 0;
  if (*(char *)(param_1 + 0x142) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138));
  }
LAB_00e0ddc0:
  *(undefined1 *)(param_1 + 0x142) = 0;
switchD_00e0dd0c_default:
  return;
}

