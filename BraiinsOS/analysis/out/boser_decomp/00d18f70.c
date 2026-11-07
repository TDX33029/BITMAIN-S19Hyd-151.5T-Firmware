// FUN_00d18f70 @ 00d18f70 size=1032 calls_out=15 calls_in=0
// strings: 

void FUN_00d18f70(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 3:
    cVar1 = *(char *)(param_1 + 0xac);
    bVar9 = cVar1 == '\x03';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (bVar9 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x40);
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 == 0) {
      return;
    }
    iVar8 = iVar3 * 8 + 8;
    if (iVar3 + iVar8 == -5) {
      return;
    }
    thunk_FUN_01be4678(*(int *)(param_1 + 0xb0) - iVar8);
    return;
  case 4:
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xcc);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar9 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x60);
      }
    }
    if (*(int *)(param_1 + 0x44) != 0 && *(int *)(param_1 + 0x44) != 3) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    }
    iVar3 = *(int *)(param_1 + 0xec);
    if ((iVar3 != 0) && (iVar8 = iVar3 * 8 + 8, iVar3 + iVar8 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0xe8) - iVar8);
    }
    iVar3 = *(int *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    break;
  case 5:
    FUN_00bea33c(param_1 + 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    FUN_00db2cb0(uVar7,*(undefined4 *)(param_1 + 0x1c));
    FUN_0132b958(*(undefined4 *)(param_1 + 0x14),uVar7,8,0x30);
    return;
  case 6:
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar9 = cVar1 == '\x03';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar9 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x48);
    }
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == -0x80000000) {
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    break;
  case 7:
    switch(*(undefined1 *)(param_1 + 0x24)) {
    case 3:
      if (*(char *)(param_1 + 0x34) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x14c);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x138);
      }
      if (bVar9 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0xe0);
      }
      uVar5 = *(uint *)(param_1 + 0x38);
      uVar2 = 0xc;
      if ((int)uVar5 < 0) {
        uVar2 = uVar5 ^ 0x80000000;
      }
      break;
    case 4:
      return;
    case 5:
      if (*(char *)(param_1 + 0x34) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xcc);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar9 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x60);
      }
      piVar4 = *(int **)(param_1 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a97218(*(undefined4 *)(param_1 + 0x38));
        return;
      }
      return;
    case 6:
      if (*(char *)(param_1 + 0x34) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xd4);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0xc0);
      }
      if (bVar9 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x68);
      }
      piVar4 = *(int **)(param_1 + 0x5c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01180e54(*(undefined4 *)(param_1 + 0x5c));
        return;
      }
      return;
    case 7:
      if (*(char *)(param_1 + 0x34) != '\x03') {
        if (*(char *)(param_1 + 0x34) != '\x04') {
          return;
        }
        cVar1 = *(char *)(param_1 + 0xdc);
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 200);
        }
        if (bVar9 && cVar1 == '\x03') {
          FUN_00c423b8(param_1 + 0x70);
        }
        FUN_00befa70(param_1 + 0x5c);
        return;
      }
      cVar1 = *(char *)(param_1 + 0x6c);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x68);
      }
      if (bVar9 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 100) != '\x03') {
          return;
        }
        FUN_00fe4378(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
        piVar4 = *(int **)(param_1 + 0x58);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01180ffc(*(undefined4 *)(param_1 + 0x58));
        }
        piVar4 = *(int **)(param_1 + 0x54);
        *(undefined1 *)(param_1 + 0x61) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121d018(*(undefined4 *)(param_1 + 0x54));
        }
        piVar4 = *(int **)(param_1 + 0x50);
        *(undefined1 *)(param_1 + 0x62) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011772ac(*(undefined4 *)(param_1 + 0x50));
        }
        *(undefined1 *)(param_1 + 99) = 0;
        return;
      }
      return;
    case 8:
      FUN_00c41ff4(param_1 + 0x28);
      return;
    case 9:
      if (*(char *)(param_1 + 0x34) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xe4);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0xd0);
      }
      if (bVar9 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x78);
      }
      FUN_00bef8ac(param_1 + 0x5c);
      return;
    default:
      return;
    }
    switch(uVar2) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 10:
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      uVar6 = *(undefined4 *)(param_1 + 0x40);
      break;
    case 2:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      uVar7 = *(undefined4 *)(param_1 + 0x48);
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      break;
    case 6:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      if (*(int *)(param_1 + 0x60) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
      }
      FUN_006a41c0(param_1 + 0x48);
      if (*(int *)(param_1 + 0x6c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
      }
      if (*(int *)(param_1 + 0x78) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      }
      if (*(int *)(param_1 + 0x84) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      }
      if (*(int *)(param_1 + 0x90) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
      }
      FUN_00befecc(param_1 + 0x54);
      return;
    case 7:
      FUN_00befd0c(param_1 + 0x3c);
      return;
    case 0xb:
      FUN_00befd44(param_1 + 0x3c);
      return;
    case 0xc:
      FUN_00befd7c((uint *)(param_1 + 0x38));
      return;
    case 0xd:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      if (*(int *)(param_1 + 0x48) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      }
      if (*(int *)(param_1 + 0x54) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
      iVar3 = *(int *)(param_1 + 0x60);
      if (iVar3 == -0x80000000) {
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 100);
      FUN_00dc5474(uVar7,*(undefined4 *)(param_1 + 0x68));
      FUN_0132b958(iVar3,uVar7,4,0x24);
      return;
    default:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      if (*(int *)(param_1 + 0x48) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      }
      if (*(int *)(param_1 + 0x54) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
      if (*(int *)(param_1 + 0x60) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 != -0x80000000) {
        if (iVar3 == -0x7fffffff) {
          return;
        }
        FUN_019bb7e0(iVar3,*(undefined4 *)(param_1 + 0x70));
      }
      if (*(int *)(param_1 + 0x78) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      }
      if (*(int *)(param_1 + 0x84) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
      }
      if (*(int *)(param_1 + 0x90) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
      }
      if (*(int *)(param_1 + 0x9c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
      }
      if (*(int *)(param_1 + 0xa8) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
      return;
    }
    FUN_019bb7e0(uVar7,uVar6);
    return;
  default:
    return;
  }
  FUN_019bb7e0(iVar3,uVar7);
  return;
}

