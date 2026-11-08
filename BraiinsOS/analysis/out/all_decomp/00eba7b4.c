// FUN_00eba7b4 @ 00eba7b4 size=1260 calls_out=5 calls_in=1
// strings: 

void FUN_00eba7b4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x16)) {
  case 3:
    cVar1 = *(char *)(param_1 + 0xd0);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xce);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_005e6cdc(param_1 + 0x34);
      if (*(int *)(param_1 + 0x40) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x34);
      *(undefined2 *)(param_1 + 0xcc) = 0;
    }
    goto LAB_00ebacd8;
  case 4:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebaca0;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebaca0:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 5:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac50;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac50:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 6:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac78;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac78:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 7:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac3c;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac3c:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 8:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar3 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar3 = param_1 + 0x18;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar3 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar3 = param_1 + 0x18;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac8c;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac8c:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebacb4;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebacb4:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x5e4) == '\x03') {
      if (*(char *)(param_1 + 0x5d8) == '\x03') {
        iVar3 = param_1 + 0x310;
      }
      else {
        if (*(char *)(param_1 + 0x5d8) != '\0') break;
        iVar3 = param_1 + 0x48;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x5c4) == '\x03') {
      if (*(char *)(param_1 + 0x5b8) == '\x03') {
        iVar3 = param_1 + 0x2f0;
      }
      else {
        if (*(char *)(param_1 + 0x5b8) != '\0') break;
        iVar3 = param_1 + 0x28;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar3 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar3 = param_1 + 0x18;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar3 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar3 = param_1 + 0x18;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 0x10:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar3 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar3 = param_1 + 0x18;
      }
      FUN_00ebcfec(iVar3);
    }
    break;
  case 0x11:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac28;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac28:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 0x12:
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar3 = 0x5a4;
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        iVar2 = param_1 + 0x18;
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00ebac64;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x598;
      if (*(char *)(param_1 + 0x5c8) != '\0') break;
    }
LAB_00ebac64:
    FUN_00ebcd60(param_1 + 0x18 + iVar3);
    break;
  case 0x13:
    if (*(char *)(param_1 + 0x5e0) == '\x03') {
      iVar3 = 0x5b4;
      if (*(char *)(param_1 + 0x5c0) == '\x03') {
        iVar2 = param_1 + 0x2f8;
      }
      else {
        if (*(char *)(param_1 + 0x5c0) != '\0') goto LAB_00ebac10;
        iVar2 = param_1 + 0x30;
      }
      FUN_00ebcfec(iVar2);
    }
    else {
      iVar3 = 0x5a8;
      if (*(char *)(param_1 + 0x5e0) != '\0') break;
    }
LAB_00ebac10:
    FUN_00ebcd60(param_1 + 0x20 + iVar3);
    break;
  default:
    goto switchD_00eba7d4_default;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_00ebcd60(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
LAB_00ebacd8:
  *(undefined1 *)(param_1 + 0x15) = 0;
switchD_00eba7d4_default:
  return;
}

