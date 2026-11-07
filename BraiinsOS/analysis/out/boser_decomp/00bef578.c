// FUN_00bef578 @ 00bef578 size=648 calls_out=9 calls_in=0
// strings: 

void FUN_00bef578(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x124);
  bVar7 = cVar1 == '\x03';
  if (bVar7) {
    cVar1 = *(char *)(param_1 + 0x110);
  }
  if (bVar7 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0xb8);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = 0xc;
  if ((int)uVar4 < 0) {
    uVar2 = uVar4 ^ 0x80000000;
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
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    break;
  case 2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    break;
  case 6:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x38) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_006a41c0(param_1 + 0x20);
    if (*(int *)(param_1 + 0x44) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x50) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 0x5c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 0x68) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    }
    FUN_00befecc(param_1 + 0x2c);
    return;
  case 7:
    FUN_00befd0c(param_1 + 0x14);
    return;
  case 0xb:
    FUN_00befd44(param_1 + 0x14);
    return;
  case 0xc:
    FUN_00befd7c((uint *)(param_1 + 0x10));
    return;
  case 0xd:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x20) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == -0x80000000) {
      return;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    FUN_00dc5474(uVar6,*(undefined4 *)(param_1 + 0x40));
    FUN_0132b958(iVar3,uVar6,4,0x24);
    return;
  default:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x20) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 != -0x80000000) {
      if (iVar3 == -0x7fffffff) {
        return;
      }
      FUN_019bb7e0(iVar3,*(undefined4 *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x50) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 0x5c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 0x68) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x74) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
    }
    if (*(int *)(param_1 + 0x80) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    return;
  }
  FUN_019bb7e0(uVar6,uVar5);
  return;
}

