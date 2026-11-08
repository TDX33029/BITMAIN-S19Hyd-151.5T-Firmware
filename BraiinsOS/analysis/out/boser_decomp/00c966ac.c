// FUN_00c966ac @ 00c966ac size=944 calls_out=11 calls_in=1
// strings: 

void FUN_00c966ac(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0xce) != '\x03') {
        return;
      }
      FUN_00bf8d50(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0xcc) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xe4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xd0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x78);
      }
LAB_00bf8d74:
      if (*(int *)(param_1 + 0x48) == 3) {
        FUN_00befd0c(param_1 + 0x4c);
        return;
      }
      FUN_00b5efb4();
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0xd2) != '\x03') {
        return;
      }
      FUN_00bf94b4(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0xd0) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xe4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xd0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x78);
      }
      goto LAB_00bf8d74;
    }
    return;
  case 5:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0xc9) != '\x03') {
        return;
      }
      FUN_00bf9a34(param_1 + 0x20);
      *(undefined1 *)(param_1 + 200) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xb4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x48);
      }
LAB_00bf9a58:
      iVar2 = *(int *)(param_1 + 0xb8);
      if (iVar2 == -0x80000000) {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
        return;
      }
      if (iVar2 == -0x7fffffff) {
        FUN_00b55288(param_1 + 0xbc);
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
      if (*(int *)(param_1 + 0xdc) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0));
      }
      FUN_006a41c0(param_1 + 0xc4);
      if (*(int *)(param_1 + 0xe8) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
      }
      if (*(int *)(param_1 + 0xf4) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
      }
      if (*(int *)(param_1 + 0x100) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
      }
      if (*(int *)(param_1 + 0x10c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110));
      }
      FUN_00befecc(param_1 + 0xd0);
      return;
    }
    return;
  case 6:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x409) != '\x03') {
        return;
      }
      FUN_00bfc9e4(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x408) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xb4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x48);
      }
      goto LAB_00bf9a58;
    }
    return;
  case 7:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0xd5) != '\x03') {
        return;
      }
      FUN_00bfccd4(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0xd4) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xcc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x60);
      }
      FUN_00bfccf8(param_1 + 0x44);
      return;
    }
    return;
  case 8:
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      if (*(char *)(param_1 + 0x1c) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x13c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x128);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0xd0);
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        return;
      }
      FUN_00bffdc4(param_1 + 0x4c);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x7b8);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x7a9);
    }
    if (!bVar4 || cVar1 != '\x03') {
      return;
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0xfa) != '\x03') {
        return;
      }
      FUN_00bffffc(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0xf8) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xfc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xe8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x90);
      }
      if (*(int *)(param_1 + 0x48) != 3 || *(int *)(param_1 + 0x4c) != 0) {
        FUN_00b5f0e4(param_1 + 0x80);
        return;
      }
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 == -0x80000000) {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),iVar2,
                   *(int *)(param_1 + 0x4c),unaff_r4,unaff_lr);
      if (*(int *)(param_1 + 0x5c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
      }
      if (*(int *)(param_1 + 0x68) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      }
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 == -0x80000000) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x78);
      FUN_00dc5474(uVar3,*(undefined4 *)(param_1 + 0x7c));
      FUN_0132b958(iVar2,uVar3,4,0x24);
      return;
    }
    return;
  case 10:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x7ea) != '\x03') {
        return;
      }
      FUN_00c96bb0(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0x7e8) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xb4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x48);
      }
      FUN_00c00370(param_1 + 0xb8);
      return;
    }
    return;
  default:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x1c1)) {
  case 3:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00bffd3c;
  case 4:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00bffd1c;
  case 5:
    FUN_00c00754(param_1 + 0x1c8);
    break;
  case 6:
    FUN_00c00794(param_1 + 0x1c8);
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_00bffdc4(param_1 + 300);
    }
    break;
  default:
    goto switchD_00bffc88_default;
  }
  *(undefined1 *)(param_1 + 0x1c3) = 0;
LAB_00bffd1c:
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  if (*(char *)(param_1 + 0x1c2) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1b8));
  }
LAB_00bffd3c:
  *(undefined1 *)(param_1 + 0x1c2) = 0;
switchD_00bffc88_default:
  return;
}

