// FUN_00dc4ef0 @ 00dc4ef0 size=600 calls_out=5 calls_in=0
// strings: 

void FUN_00dc4ef0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 uVar6;
  undefined4 unaff_lr;
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
    FUN_00db1dcc(param_1 + 0xb8);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar4 = 0xc;
  if ((int)uVar3 < 0) {
    uVar4 = uVar3 ^ 0x80000000;
  }
  if (uVar4 < 0xe) {
    uVar5 = (&switchD_00dc5250::switchdataD_00dc5254)[uVar4];
    switch(uVar4) {
    default:
      iVar2 = *(int *)(param_1 + 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      break;
    case 2:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar5,
                   &switchD_00dc5250::switchdataD_00dc5254,unaff_r4,unaff_lr);
      iVar2 = *(int *)(param_1 + 0x20);
      uVar6 = *(undefined4 *)(param_1 + 0x24);
      break;
    case 6:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar5,
                   &switchD_00dc5250::switchdataD_00dc5254,unaff_r4,unaff_lr);
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
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar5,
                   &switchD_00dc5250::switchdataD_00dc5254,unaff_r4,unaff_lr);
      if (*(int *)(param_1 + 0x20) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      if (iVar2 == -0x80000000) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x30);
      break;
    case 0xb:
      FUN_00befd44(param_1 + 0x14);
      return;
    case 0xc:
      FUN_019bb7e0(uVar3,*(undefined4 *)(param_1 + 0x14),uVar5,
                   &switchD_00dc5250::switchdataD_00dc5254,unaff_r4,unaff_lr);
      if (*(int *)(param_1 + 0x1c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      }
      if (*(int *)(param_1 + 0x28) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      }
      if (*(int *)(param_1 + 0x34) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
      }
      if (*(int *)(param_1 + 0x40) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
      }
      if (*(int *)(param_1 + 0x4c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
      if (*(int *)(param_1 + 0x58) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      }
      if (*(int *)(param_1 + 100) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
      }
      if (*(int *)(param_1 + 0x70) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
      }
      if (*(int *)(param_1 + 0x7c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
      }
      iVar2 = *(int *)(param_1 + 0x88);
      if (iVar2 == -0x80000000) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x8c);
      break;
    case 0xd:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar5,
                   &switchD_00dc5250::switchdataD_00dc5254,unaff_r4,unaff_lr);
      if (*(int *)(param_1 + 0x20) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      }
      if (*(int *)(param_1 + 0x2c) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
      }
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == -0x80000000) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      FUN_00dc5474(uVar6,*(undefined4 *)(param_1 + 0x40));
      FUN_0132b958(iVar2,uVar6,4,0x24);
      return;
    }
    FUN_019bb7e0(iVar2,uVar6);
    return;
  }
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
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 != -0x80000000) {
    if (iVar2 == -0x7fffffff) {
      return;
    }
    FUN_019bb7e0(iVar2,*(undefined4 *)(param_1 + 0x48));
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

