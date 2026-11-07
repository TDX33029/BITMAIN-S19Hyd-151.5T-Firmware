// FUN_00f2f418 @ 00f2f418 size=748 calls_out=12 calls_in=1
// strings: 

void FUN_00f2f418(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    iVar3 = param_1[2];
    bVar4 = iVar3 == 0 && param_1[3] == 0;
    if (iVar3 != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
      bVar4 = iVar3 == 0;
    }
    if (bVar4) {
      return;
    }
    FUN_00f80320(iVar3,param_1[5]);
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x6f)) {
  case 0:
    param_1 = param_1 + 0x1a;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_00f27420;
  default:
    return;
  case 3:
    FUN_019ede44(param_1 + 0x1d);
    break;
  case 4:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 5:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x28];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0x23);
      }
    }
    goto LAB_00f272d0;
  case 6:
    if (*(char *)((int)param_1 + 0x17d) == '\x03') {
      FUN_00f2759c(param_1 + 0x20);
    }
    goto LAB_00f272d0;
  case 7:
    FUN_005f2928(param_1 + 0x1c);
LAB_00f272d0:
    FUN_019f8c54(param_1[0x18],1);
    break;
  case 8:
    FUN_00f276bc(param_1 + 0x1c);
    break;
  case 9:
    if (*(char *)((int)param_1 + 0x17d) == '\x03') {
      FUN_00f2759c(param_1 + 0x20);
    }
  case 0xb:
switchD_00f27178_caseD_b:
    if (param_1[8] == 0x3b9aca01) {
      (*(code *)**(undefined4 **)param_1[6])();
    }
    break;
  case 10:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    goto switchD_00f27178_caseD_b;
  case 0xc:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 0xd:
    if ((char)param_1[0x20] == '\0') {
      piVar2 = (int *)param_1[0x1f];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(param_1[0x1f]);
      }
    }
    FUN_019f8c54(param_1[0x19],1);
    break;
  case 0xe:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 0xf:
    FUN_00c1f6a0(param_1 + 0x1c);
  }
  if (*(char *)((int)param_1 + 0x6e) != '\0') {
    piVar2 = (int *)param_1[0x17];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(param_1[0x17]);
    }
  }
  piVar2 = (int *)param_1[0x16];
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181cfc(param_1[0x16]);
  }
  FUN_00668c84(param_1[0x12]);
  param_1 = param_1 + 0x14;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_00f27420:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*param_1);
    return;
  }
  return;
}

