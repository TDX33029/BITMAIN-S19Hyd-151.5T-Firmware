// FUN_00a751a0 @ 00a751a0 size=1628 calls_out=22 calls_in=3
// strings: 

void FUN_00a751a0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if (*(char *)(param_1 + 0x918) != '\x03') {
    iVar5 = param_1;
    if (*(char *)(param_1 + 0x918) != '\0') {
      return;
    }
switchD_00a751e0_caseD_0:
    goto LAB_00a28738;
  }
  if (10 < *(byte *)(param_1 + 0x34c)) {
switchD_00a751e0_caseD_1:
    return;
  }
  iVar5 = param_1 + 0x108;
  switch(*(byte *)(param_1 + 0x34c)) {
  case 0:
    goto switchD_00a751e0_caseD_0;
  default:
    goto switchD_00a751e0_caseD_1;
  case 3:
    FUN_00a28b18(param_1 + 0x350);
    goto LAB_00a75508;
  case 4:
    if (*(char *)(param_1 + 0x3e4) == '\x03') {
      if (*(char *)(param_1 + 0x3b8) == '\x03') {
        if (*(char *)(param_1 + 0x3dc) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x3d8);
          iVar5 = 0x20;
          goto LAB_00a7544c;
        }
      }
      else if (*(char *)(param_1 + 0x3b8) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x3d0);
        iVar5 = 0x18;
LAB_00a7544c:
        if (cVar1 == '\x03') {
          piVar3 = (int *)(param_1 + 0x3a8 + iVar5);
          iVar5 = *piVar3;
          if (iVar5 != 0) {
            FUN_00aa190c(iVar5,piVar3[1],1);
          }
        }
      }
      FUN_00ee1434(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    }
    goto LAB_00a75508;
  case 5:
    if (*(char *)(param_1 + 0x394) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x390);
      bVar12 = cVar1 == '\x03';
      if (bVar12) {
        cVar1 = *(char *)(param_1 + 0x36d);
      }
      if (bVar12 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x370);
        if (*(int *)(param_1 + 0x380) != 0) {
          (**(code **)(*(int *)(param_1 + 0x380) + 0xc))(*(undefined4 *)(param_1 + 900));
        }
        *(undefined1 *)(param_1 + 0x36c) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 1000);
    bVar12 = cVar1 == '\x03';
    if (bVar12) {
      cVar1 = *(char *)(param_1 + 0x3e4);
    }
    if (bVar12 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x3e0);
      bVar12 = cVar1 == '\x03';
      if (bVar12) {
        cVar1 = *(char *)(param_1 + 0x3bd);
      }
      if (bVar12 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x3c0);
        if (*(int *)(param_1 + 0x3d0) != 0) {
          (**(code **)(*(int *)(param_1 + 0x3d0) + 0xc))(*(undefined4 *)(param_1 + 0x3d4));
        }
        *(undefined1 *)(param_1 + 0x3bc) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 0x414);
    bVar12 = cVar1 == '\x03';
    if (bVar12) {
      cVar1 = *(char *)(param_1 + 0x410);
    }
    if (bVar12 && cVar1 == '\x03') {
      FUN_00e7c67c(param_1 + 0x3f8);
      if (*(int *)(param_1 + 0x3fc) != 0) {
        (**(code **)(*(int *)(param_1 + 0x3fc) + 0xc))(*(undefined4 *)(param_1 + 0x400));
      }
    }
    cVar1 = *(char *)(param_1 + 0x450);
    bVar12 = cVar1 == '\x03';
    if (bVar12) {
      cVar1 = *(char *)(param_1 + 0x42d);
    }
    if (bVar12 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x430);
      if (*(int *)(param_1 + 0x440) != 0) {
        (**(code **)(*(int *)(param_1 + 0x440) + 0xc))(*(undefined4 *)(param_1 + 0x444));
      }
      *(undefined1 *)(param_1 + 0x42c) = 0;
    }
    goto LAB_00a75508;
  case 6:
    if (*(char *)(param_1 + 0x398) == '\x03') {
      if ((*(char *)(param_1 + 0x38c) == '\x03') && (*(int *)(param_1 + 0x378) != 0)) {
        FUN_00aa190c(*(int *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c),1);
      }
      piVar3 = *(int **)(param_1 + 0x394);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(param_1 + 0x394));
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 900) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x380);
      bVar12 = cVar1 == '\x03';
      if (bVar12) {
        cVar1 = *(char *)(param_1 + 0x37d);
      }
      if (bVar12 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x36d);
        if (cVar1 == '\x05') {
          puVar11 = *(undefined4 **)(param_1 + 0x374);
          uVar9 = *(undefined4 *)(param_1 + 0x370);
          pcVar7 = (code *)*puVar11;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar9);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(uVar9);
          }
          FUN_00aa13c0(*(undefined4 *)(param_1 + 0x364));
        }
        else {
          if (cVar1 != '\x04') {
            if ((cVar1 == '\x03') && (*(int *)(param_1 + 0x370) != 0)) {
              FUN_00aa0a58(*(int *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x374),1);
            }
            break;
          }
          if (*(int *)(param_1 + 0x370) != 0) {
            FUN_00aa0a58(*(int *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x374),1);
          }
        }
        FUN_00aa13c0(*(undefined4 *)(param_1 + 0x35c));
      }
    }
    break;
  case 8:
    FUN_00a28b18(param_1 + 0x350);
    break;
  case 9:
    FUN_00a28b18(param_1 + 0x350);
    break;
  case 10:
    if (*(char *)(param_1 + 0x3e4) == '\x03') {
      if (*(char *)(param_1 + 0x3b8) == '\x03') {
        if (*(char *)(param_1 + 0x3dc) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x3d8);
          iVar5 = 0x20;
          goto LAB_00a75494;
        }
      }
      else if (*(char *)(param_1 + 0x3b8) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x3d0);
        iVar5 = 0x18;
LAB_00a75494:
        if (cVar1 == '\x03') {
          piVar3 = (int *)(param_1 + 0x3a8 + iVar5);
          iVar5 = *piVar3;
          if (iVar5 != 0) {
            FUN_00aa190c(iVar5,piVar3[1],1);
          }
        }
      }
      FUN_00ee1434(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    }
  }
  if (*(char *)(param_1 + 0x340) == '\0') {
    if (*(short *)(param_1 + 0x344) != 0) goto LAB_00a754f8;
  }
  else if ((*(char *)(param_1 + 0x340) == '\x01') && (*(int *)(param_1 + 0x344) != 0)) {
LAB_00a754f8:
    (**(code **)**(undefined4 **)(param_1 + 0x348))();
  }
LAB_00a75508:
  iVar5 = *(int *)(param_1 + 0x338);
  piVar3 = (int *)(iVar5 + 0xc4);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x338);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac4f8(*(undefined4 *)(param_1 + 0x338));
  }
  iVar5 = param_1 + 0x210;
LAB_00a28738:
  piVar3 = *(int **)(iVar5 + 0xcc);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(iVar5 + 0xcc));
  }
  FUN_00b40204(iVar5 + 0xd0);
  if ((*(uint *)(iVar5 + 0xbc) & 0x7fffffff) == 0) {
    uVar2 = *(ushort *)(iVar5 + 200);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0xc0));
    uVar2 = *(ushort *)(iVar5 + 200);
  }
  if (4 < uVar2) {
    *(undefined2 *)(iVar5 + 0xca) = 0;
  }
  FUN_00a29e8c(iVar5 + 0x20);
  iVar8 = *(int *)(iVar5 + 0xb4);
  iVar10 = *(int *)(iVar5 + 0xb8);
  iVar6 = 0;
  while (iVar6 != iVar10) {
    iVar4 = *(int *)(iVar8 + iVar6 * 4);
    iVar6 = iVar6 + 1;
    if (iVar4 != -1) {
      piVar3 = (int *)(iVar4 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
  }
  if (*(int *)(iVar5 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0xb4));
  }
  FUN_00b351e8(iVar5 + 0x98);
  piVar3 = *(int **)(iVar5 + 0xe4);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(*(undefined4 *)(iVar5 + 0xe4));
    }
  }
  FUN_00992810(*(undefined4 *)(iVar5 + 0xdc));
  piVar3 = *(int **)(iVar5 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aabd64(*(undefined4 *)(iVar5 + 0xdc));
  }
  piVar3 = *(int **)(iVar5 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(iVar5 + 0xe0));
  }
  iVar6 = *(int *)(iVar5 + 0xa8);
  piVar3 = (int *)(iVar6 + 0xfc);
  do {
    iVar8 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    FUN_0163b708(iVar6 + 0xe8);
  }
  piVar3 = *(int **)(iVar5 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(iVar5 + 0xa8));
  }
  FUN_00e7decc(iVar5 + 0xf0);
  piVar3 = *(int **)(iVar5 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(iVar5 + 0xf8));
    return;
  }
  return;
}

