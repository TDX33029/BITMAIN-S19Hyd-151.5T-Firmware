// FUN_0068d520 @ 0068d520 size=304 calls_out=9 calls_in=1
// strings: 

void FUN_0068d520(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x1b4)) {
  case 0:
    FUN_00668de4(param_1);
    FUN_00668e4c(param_1 + 0x178);
    FUN_00668ecc(param_1 + 0x17c);
    FUN_00668f4c(param_1 + 0xb0);
    FUN_005faf6c(param_1 + 0x180);
    return;
  default:
    return;
  case 3:
    cVar1 = *(char *)(param_1 + 0x1f0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x1cd);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_019ede44(param_1 + 0x1d0);
      *(undefined1 *)(param_1 + 0x1cc) = 0;
    }
    FUN_019ede44(param_1 + 0x22c);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x2a0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x290);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x285) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x23c);
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x218);
        }
        if (bVar2 && cVar1 == '\x04') {
          FUN_0193c3cc(param_1 + 0x21c);
        }
        FUN_0067e38c(param_1 + 0x1c0);
        *(undefined1 *)(param_1 + 0x284) = 0;
      }
      else if (*(char *)(param_1 + 0x285) == '\0') {
        FUN_0067e38c(param_1 + 0x240);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x244) == '\x03') {
      FUN_01431b40(param_1 + 0x1c8);
    }
  }
  FUN_005faf6c(param_1 + 0x18c);
  FUN_00668f4c(param_1 + 0x168);
  FUN_00668ecc(param_1 + 0x188);
  FUN_00668e4c(param_1 + 0x184);
  FUN_00668de4(param_1 + 0xb8);
  return;
}

