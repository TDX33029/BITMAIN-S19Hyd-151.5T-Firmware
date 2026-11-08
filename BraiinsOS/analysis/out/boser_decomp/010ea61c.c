// FUN_010ea61c @ 010ea61c size=840 calls_out=11 calls_in=1
// strings: 

void FUN_010ea61c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x67)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x60);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_010ea98c;
  default:
    return;
  case 3:
    FUN_019ede44(param_1 + 0x6c);
    break;
  case 4:
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x9c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x7c);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x9c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x98);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0x84);
      }
    }
    goto LAB_010ea790;
  case 6:
    if (*(char *)(param_1 + 0x175) == '\x03') {
      FUN_010eab14(param_1 + 0x78);
    }
    goto LAB_010ea790;
  case 7:
    FUN_005f2928(param_1 + 0x68);
LAB_010ea790:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x58),1);
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 0x80);
    if (cVar1 == '\x05') {
      FUN_005f49bc(param_1 + 0x88);
    }
    else {
      if (cVar1 != '\x04') {
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0xb8);
        }
        if (bVar5 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0xb4);
          bVar5 = cVar1 == '\x03';
          if (bVar5) {
            cVar1 = *(char *)(param_1 + 0xb0);
          }
          if (bVar5 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0x90);
          }
        }
        break;
      }
      if (*(char *)(param_1 + 0x8c) == '\x03') {
        piVar2 = *(int **)(param_1 + 0x88);
        if (*piVar2 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar5 = (bool)hasExclusiveAccess(piVar2);
          if (bVar5) {
            *piVar2 = 0x84;
            goto LAB_010ea8e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 0x88) + 8) + 0x10))();
      }
    }
LAB_010ea8e8:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x78),1);
    break;
  case 9:
    if (*(char *)(param_1 + 0x175) == '\x03') {
      FUN_010eab14(param_1 + 0x78);
    }
  case 0xb:
switchD_010ea638_caseD_b:
    if (*(int *)(param_1 + 0x18) == 0x3b9aca01) {
      (**(code **)**(undefined4 **)(param_1 + 0x10))();
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x9c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x7c);
      }
    }
    goto switchD_010ea638_caseD_b;
  case 0xc:
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x9c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x7c);
      }
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x78) == '\0') {
      piVar2 = *(int **)(param_1 + 0x74);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(*(undefined4 *)(param_1 + 0x74));
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x5c),1);
    break;
  case 0xe:
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x9c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x7c);
      }
    }
    break;
  case 0xf:
    FUN_010ea3a4(param_1 + 0x68);
  }
  if (*(char *)(param_1 + 0x66) != '\0') {
    piVar2 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x54));
    }
  }
  piVar2 = *(int **)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x66) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181cfc(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_00668c84(*(undefined4 *)(param_1 + 0x40));
  puVar4 = (undefined4 *)(param_1 + 0x48);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_010ea98c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*puVar4);
    return;
  }
  return;
}

