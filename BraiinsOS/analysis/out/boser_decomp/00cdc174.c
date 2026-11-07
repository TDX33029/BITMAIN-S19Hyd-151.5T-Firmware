// FUN_00cdc174 @ 00cdc174 size=1332 calls_out=19 calls_in=1
// strings: 

void FUN_00cdc174(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
  case 4:
  case 9:
  case 10:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x40);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x3c);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 5:
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x44) != '\x03') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x40);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x3c);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
        return;
      }
    }
    else {
      bVar5 = cVar1 == '\x04';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xe0);
      }
      if (bVar5 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0xcc);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0xb8);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00c423b8(param_1 + 0x60);
          return;
        }
      }
    }
    return;
  case 6:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00cdd114(param_1 + 0x50);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  case 7:
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      if (*(char *)(param_1 + 0x1c) != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0xbc) == '\x03') {
        FUN_0082f938(param_1 + 0x50);
      }
      FUN_006a41c0(param_1 + 0x20);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x3c);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x39);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00fe4378(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      return;
    }
    return;
  case 8:
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xdc);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 200);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x70);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    return;
  case 0xc:
    return;
  case 0xd:
    if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 200);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar5 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xa0) == '\x03') {
          FUN_00c423b8(param_1 + 0x48);
          return;
        }
        return;
      }
    }
    return;
  case 0xe:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x44);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x40);
      }
      if (bVar5 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x3c) == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          return;
        }
        return;
      }
    }
    return;
  case 0xf:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x40);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x3c);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          return;
        }
      }
      return;
    }
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    FUN_00cdcfa4(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0xe0);
    if (iVar3 == -0x7ffffffe) {
      return;
    }
    if (iVar3 == -0x7fffffff) {
      FUN_00a1ed90(param_1 + 0xe4);
      return;
    }
    if (iVar3 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(iVar3,*(undefined4 *)(param_1 + 0xe4));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_006a41c0(param_1 + 0x104);
    return;
  case 0x10:
    if (*(char *)(param_1 + 0x1c) == '\x04') {
      if (*(char *)(param_1 + 200) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xb4);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0xa0);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00c423b8(param_1 + 0x48);
        }
      }
      piVar2 = *(int **)(param_1 + 0x20);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011772ac(*(undefined4 *)(param_1 + 0x20));
          return;
        }
        return;
      }
    }
    return;
  case 0x11:
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x78);
    }
    if (!bVar5 || cVar1 != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x38) != '\x03') {
      if (*(char *)(param_1 + 0x38) == '\x04') {
        FUN_019f8c54(*(undefined4 *)(param_1 + 0x34),1);
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 0x74) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x70);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x4c);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x50);
        return;
      }
    }
    return;
  case 0x12:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x68);
    }
    FUN_00949bc0(param_1 + 0x20);
    return;
  case 0x13:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00cfd268(param_1 + 0x50);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    FUN_00deef6c(uVar4,*(undefined4 *)(param_1 + 0x28));
    FUN_0132b958(*(undefined4 *)(param_1 + 0x20),uVar4,4,0x24);
    return;
  case 0x14:
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      if (*(char *)(param_1 + 0x1c) != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x110) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xfc);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0xe8);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00c423b8(param_1 + 0x90);
        }
      }
      FUN_00cdc804(param_1 + 0x20);
      return;
    }
    if (*(char *)(param_1 + 0x418) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x408);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x3fc);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_00cdc6cc(param_1 + 0x20);
        return;
      }
    }
    return;
  default:
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00cf32fc(param_1 + 0x50);
    }
    FUN_00d7fa90(param_1 + 0x20);
    return;
  }
  if (*(char *)(param_1 + 0x108) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\x03') {
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\x04') {
    return;
  }
  piVar2 = (int *)(param_1 + 0x48);
  if (*piVar2 == 2) {
    FUN_00b92e1c(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_0132b958(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),8,0xd8);
  }
  else {
    FUN_019de0e0(piVar2);
    if (*(int *)(param_1 + 0x54) != -1) {
      FUN_01bf01d6();
    }
    FUN_0179995c(piVar2);
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x40));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  FUN_00d7fa90(param_1 + 0x90);
  return;
}

