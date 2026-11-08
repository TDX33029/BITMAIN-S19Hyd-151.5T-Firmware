// FUN_00abb1a0 @ 00abb1a0 size=1620 calls_out=22 calls_in=2
// strings: 

void FUN_00abb1a0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  
  if (*(char *)(param_1 + 0x918) != '\x03') {
    iVar3 = param_1;
    if (*(char *)(param_1 + 0x918) != '\0') {
      return;
    }
    goto switchD_00abb1dc_caseD_0;
  }
  if (10 < *(byte *)(param_1 + 0x34c)) {
switchD_00abb1dc_caseD_1:
    return;
  }
  iVar3 = param_1 + 0x108;
  switch(*(byte *)(param_1 + 0x34c)) {
  case 0:
    goto switchD_00abb1dc_caseD_0;
  default:
    goto switchD_00abb1dc_caseD_1;
  case 3:
    FUN_00abbbe0(param_1 + 0x350);
    goto LAB_00abb500;
  case 4:
    if (*(char *)(param_1 + 0x3e4) == '\x03') {
      if (*(char *)(param_1 + 0x3b8) == '\x03') {
        if (*(char *)(param_1 + 0x3dc) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x3d8);
          iVar3 = 0x20;
          goto LAB_00abb444;
        }
      }
      else if (*(char *)(param_1 + 0x3b8) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x3d0);
        iVar3 = 0x18;
LAB_00abb444:
        if (cVar1 == '\x03') {
          piVar4 = (int *)(param_1 + 0x3a8 + iVar3);
          iVar3 = *piVar4;
          if (iVar3 != 0) {
            FUN_00aa190c(iVar3,piVar4[1],1);
          }
        }
      }
      FUN_00ee1434(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    }
    goto LAB_00abb500;
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
    goto LAB_00abb500;
  case 6:
    if (*(char *)(param_1 + 0x398) == '\x03') {
      if ((*(char *)(param_1 + 0x38c) == '\x03') && (*(int *)(param_1 + 0x378) != 0)) {
        FUN_00aa190c(*(int *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c),1);
      }
      piVar4 = *(int **)(param_1 + 0x394);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar12 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar12);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
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
          puVar10 = *(undefined4 **)(param_1 + 0x374);
          uVar8 = *(undefined4 *)(param_1 + 0x370);
          pcVar6 = (code *)*puVar10;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar8);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
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
    FUN_00abbbe0(param_1 + 0x350);
    break;
  case 9:
    FUN_00abbbe0(param_1 + 0x350);
    break;
  case 10:
    if (*(char *)(param_1 + 0x3e4) == '\x03') {
      if (*(char *)(param_1 + 0x3b8) == '\x03') {
        if (*(char *)(param_1 + 0x3dc) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x3d8);
          iVar3 = 0x20;
          goto LAB_00abb48c;
        }
      }
      else if (*(char *)(param_1 + 0x3b8) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x3d0);
        iVar3 = 0x18;
LAB_00abb48c:
        if (cVar1 == '\x03') {
          piVar4 = (int *)(param_1 + 0x3a8 + iVar3);
          iVar3 = *piVar4;
          if (iVar3 != 0) {
            FUN_00aa190c(iVar3,piVar4[1],1);
          }
        }
      }
      FUN_00ee1434(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    }
  }
  if (*(char *)(param_1 + 0x340) == '\0') {
    if (*(short *)(param_1 + 0x344) != 0) goto LAB_00abb4f0;
  }
  else if ((*(char *)(param_1 + 0x340) == '\x01') && (*(int *)(param_1 + 0x344) != 0)) {
LAB_00abb4f0:
    (**(code **)**(undefined4 **)(param_1 + 0x348))();
  }
LAB_00abb500:
  iVar3 = *(int *)(param_1 + 0x338);
  piVar4 = (int *)(iVar3 + 0xc4);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_0163b708(iVar3 + 0x88);
  }
  piVar4 = *(int **)(param_1 + 0x338);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac4f8(*(undefined4 *)(param_1 + 0x338));
  }
  iVar3 = param_1 + 0x210;
switchD_00abb1dc_caseD_0:
  piVar4 = *(int **)(iVar3 + 0xcc);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(iVar3 + 0xcc));
  }
  FUN_00b40204(iVar3 + 0xd0);
  if ((*(uint *)(iVar3 + 0xbc) & 0x7fffffff) == 0) {
    uVar2 = *(ushort *)(iVar3 + 200);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xc0));
    uVar2 = *(ushort *)(iVar3 + 200);
  }
  if (4 < uVar2) {
    *(undefined2 *)(iVar3 + 0xca) = 0;
  }
  FUN_00a0aab8(iVar3 + 0x20);
  iVar9 = *(int *)(iVar3 + 0xb4);
  iVar11 = *(int *)(iVar3 + 0xb8);
  iVar7 = 0;
  while (iVar7 != iVar11) {
    iVar5 = *(int *)(iVar9 + iVar7 * 4);
    iVar7 = iVar7 + 1;
    if (iVar5 != -1) {
      piVar4 = (int *)(iVar5 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar12 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar12);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
  }
  if (*(int *)(iVar3 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xb4));
  }
  FUN_00b351e8(iVar3 + 0x98);
  piVar4 = *(int **)(iVar3 + 0xe4);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(*(undefined4 *)(iVar3 + 0xe4));
    }
  }
  FUN_00992810(*(undefined4 *)(iVar3 + 0xdc));
  piVar4 = *(int **)(iVar3 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aabd64(*(undefined4 *)(iVar3 + 0xdc));
  }
  piVar4 = *(int **)(iVar3 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(iVar3 + 0xe0));
  }
  iVar7 = *(int *)(iVar3 + 0xa8);
  piVar4 = (int *)(iVar7 + 0xfc);
  do {
    iVar9 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    FUN_0163b708(iVar7 + 0xe8);
  }
  piVar4 = *(int **)(iVar3 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(iVar3 + 0xa8));
  }
  FUN_00e7decc(iVar3 + 0xf0);
  piVar4 = *(int **)(iVar3 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(iVar3 + 0xf8));
    return;
  }
  return;
}

