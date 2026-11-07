// FUN_00e98b9c @ 00e98b9c size=532 calls_out=15 calls_in=1
// strings: 

void FUN_00e98b9c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x1a6)) {
  case 3:
    if (*(char *)(param_1 + 0x268) == '\x03') {
      FUN_00b99500(param_1 + 0x1ac);
    }
    goto LAB_00e98d70;
  case 4:
    if (*(char *)(param_1 + 0x754) == '\x03') {
      if (*(char *)(param_1 + 0x748) == '\x03') {
        iVar3 = param_1 + 0x480;
      }
      else {
        if (*(char *)(param_1 + 0x748) != '\0') goto LAB_00e98dbc;
        iVar3 = param_1 + 0x1b8;
      }
      FUN_00df9ef8(iVar3);
    }
LAB_00e98dbc:
    FUN_0084ec48(param_1 + 0x1a8);
    if (*(undefined1 **)(param_1 + 0x20) != &DAT_80000005) {
      FUN_00c42310();
    }
    goto LAB_00e98d70;
  case 5:
    if (*(char *)(param_1 + 0x268) == '\x03') {
      FUN_00b99500(param_1 + 0x1ac);
    }
    goto LAB_00e98d68;
  case 6:
    FUN_00e7a7b0(param_1 + 0x1b8);
    FUN_0084ec48(param_1 + 0x1a8);
    if (*(undefined1 **)(param_1 + 0x30) != &DAT_80000005) {
      FUN_00c42310();
    }
    goto LAB_00e98d68;
  case 7:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    goto LAB_00e98d54;
  case 8:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    goto LAB_00e98d28;
  case 9:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    goto LAB_00e98d0c;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    goto LAB_00e98d00;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x76c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x764);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00e98fd0(param_1 + 0x1a8);
    }
    break;
  case 0xc:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    break;
  case 0xd:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x204));
    FUN_00d8fe0c(param_1 + 0x1b8);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    break;
  default:
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
LAB_00e98d00:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x188));
LAB_00e98d0c:
  FUN_00d8fde4(param_1 + 0x168);
  FUN_00d8fdbc(param_1);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158));
LAB_00e98d28:
  FUN_00e98f78(param_1 + 0xe8);
  if ((4 < *(uint *)(param_1 + 0x40)) || ((1 << (*(uint *)(param_1 + 0x40) & 0xff) & 0x16U) == 0)) {
    FUN_00963164(param_1 + 0x44);
  }
LAB_00e98d54:
  if (*(char *)(param_1 + 0x1a5) != '\0') {
    FUN_00855fc4(param_1 + 0x88);
  }
LAB_00e98d68:
  *(undefined1 *)(param_1 + 0x1a5) = 0;
LAB_00e98d70:
  piVar2 = *(int **)(param_1 + 0x14c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b8ec5c(*(undefined4 *)(param_1 + 0x14c));
    return;
  }
  return;
}

