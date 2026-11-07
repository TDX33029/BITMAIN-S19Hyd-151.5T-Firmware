// FUN_00a08644 @ 00a08644 size=704 calls_out=9 calls_in=1
// strings: 

void FUN_00a08644(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x244)) {
  case 0:
    goto switchD_00a08660_caseD_0;
  default:
    return;
  case 3:
    FUN_00a08a1c(param_1 + 0x248);
    goto LAB_00a088c4;
  case 4:
    if (*(char *)(param_1 + 0x2dc) == '\x03') {
      if (*(char *)(param_1 + 0x2b0) == '\x03') {
        if (*(char *)(param_1 + 0x2d4) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x2d0);
          iVar2 = 0x20;
          goto LAB_00a087c0;
        }
      }
      else if (*(char *)(param_1 + 0x2b0) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x2c8);
        iVar2 = 0x18;
LAB_00a087c0:
        if (cVar1 == '\x03') {
          piVar3 = (int *)(param_1 + 0x2a0 + iVar2);
          iVar2 = *piVar3;
          if (iVar2 != 0) {
            FUN_00aa190c(iVar2,piVar3[1],1);
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x274);
      if ((iVar2 != 0) && (uVar4 = iVar2 * 0x11 & 0xfffffffc, uVar4 + iVar2 != -0x19)) {
        thunk_FUN_016d3fb4((*(int *)(param_1 + 0x270) - uVar4) + -0x14);
      }
    }
    goto LAB_00a088c4;
  case 5:
    FUN_00a08c98(param_1 + 0x248);
    goto LAB_00a088c4;
  case 6:
    if (*(char *)(param_1 + 0x290) == '\x03') {
      if ((*(char *)(param_1 + 0x284) == '\x03') && (*(int *)(param_1 + 0x270) != 0)) {
        FUN_00aa190c(*(int *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),1);
      }
      piVar3 = *(int **)(param_1 + 0x28c);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(param_1 + 0x28c));
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x27c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x278);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x275);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_00a08eb4(param_1 + 0x254);
      }
    }
    break;
  case 8:
    FUN_00a08a1c(param_1 + 0x248);
    break;
  case 9:
    FUN_00a08a1c(param_1 + 0x248);
    break;
  case 10:
    if (*(char *)(param_1 + 0x2dc) == '\x03') {
      if (*(char *)(param_1 + 0x2b0) == '\x03') {
        if (*(char *)(param_1 + 0x2d4) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x2d0);
          iVar2 = 0x20;
          goto LAB_00a0882c;
        }
      }
      else if (*(char *)(param_1 + 0x2b0) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x2c8);
        iVar2 = 0x18;
LAB_00a0882c:
        if (cVar1 == '\x03') {
          piVar3 = (int *)(param_1 + 0x2a0 + iVar2);
          iVar2 = *piVar3;
          if (iVar2 != 0) {
            FUN_00aa190c(iVar2,piVar3[1],1);
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x274);
      if ((iVar2 != 0) && (uVar4 = iVar2 * 0x11 & 0xfffffffc, uVar4 + iVar2 != -0x19)) {
        thunk_FUN_016d3fb4((*(int *)(param_1 + 0x270) - uVar4) + -0x14);
      }
    }
  }
  if (*(char *)(param_1 + 0x238) == '\0') {
    if (*(short *)(param_1 + 0x23c) != 0) goto LAB_00a088b4;
  }
  else if ((*(char *)(param_1 + 0x238) == '\x01') && (*(int *)(param_1 + 0x23c) != 0)) {
LAB_00a088b4:
    (**(code **)**(undefined4 **)(param_1 + 0x240))();
  }
LAB_00a088c4:
  iVar2 = *(int *)(param_1 + 0x230);
  piVar3 = (int *)(iVar2 + 0xc4);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar2 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x230);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac4f8(*(undefined4 *)(param_1 + 0x230));
  }
  param_1 = param_1 + 0x108;
switchD_00a08660_caseD_0:
  FUN_00a08264(param_1);
  return;
}

