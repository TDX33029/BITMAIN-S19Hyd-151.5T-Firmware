// FUN_009de504 @ 009de504 size=332 calls_out=7 calls_in=2
// strings: 

void FUN_009de504(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 == '\0') {
    FUN_00b9c200(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00928864(param_1 + 0x98);
    FUN_01822488(param_1 + 0x98);
    goto LAB_009de604;
  }
  if (cVar1 != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x123);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x15c) == '\0') {
      iVar2 = param_1 + 0x140;
LAB_009de5ec:
      FUN_009286c8(iVar2);
    }
    else if (*(char *)(param_1 + 0x15c) == '\x03') {
      iVar2 = param_1 + 0x128;
      goto LAB_009de5ec;
    }
    FUN_0084eeb4(param_1 + 0x118);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00b9c200(param_1 + 0xb8);
      }
      goto LAB_009de604;
    }
    if (*(char *)(param_1 + 0x2a4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x29c);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x278);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_019f9a9c(param_1 + 0x27c);
        if (*(int *)(param_1 + 0x280) != 0) {
          (**(code **)(*(int *)(param_1 + 0x280) + 0xc))(*(undefined4 *)(param_1 + 0x284));
        }
      }
      FUN_00b9c134(param_1 + 0x1d0);
      *(undefined1 *)(param_1 + 0x2a5) = 0;
    }
    else if (*(char *)(param_1 + 0x2a4) == '\0') {
      FUN_00b9c134(param_1 + 0x140);
    }
    FUN_009286c8(param_1 + 0x128);
    FUN_0084eeb4(param_1 + 0x118);
  }
  *(undefined2 *)(param_1 + 0x120) = 0;
LAB_009de604:
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_01822488(param_1);
  }
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}

