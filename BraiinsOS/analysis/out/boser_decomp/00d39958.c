// FUN_00d39958 @ 00d39958 size=1788 calls_out=19 calls_in=2
// strings: 

void FUN_00d39958(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 == 1) {
    iVar2 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x6f)) {
  case 0:
    param_1 = param_1 + 0x1a;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    goto LAB_00d3a060;
  default:
    goto switchD_00d39988_caseD_1;
  case 3:
    FUN_019ede44(param_1 + 0x1d);
    break;
  case 4:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 5:
    FUN_00d34ddc(param_1 + 0x1c);
    goto LAB_00d39fbc;
  case 6:
    FUN_00d34e54(param_1 + 0x1c);
    goto LAB_00d39fbc;
  case 7:
    if (0xb < *(byte *)(param_1 + 0xa1) - 3) goto LAB_00d39fbc;
    switch(*(byte *)(param_1 + 0xa1)) {
    case 3:
      if ((char)param_1[0xaf] == '\x03') {
        cVar1 = (char)param_1[0xae];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xad];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xa5);
        }
      }
      goto LAB_00d39fbc;
    case 4:
      if ((char)param_1[0xa4] == '\x03') {
        piVar3 = (int *)param_1[0xa3];
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar6 = (bool)hasExclusiveAccess(piVar3);
          if (bVar6) {
            *piVar3 = 0x84;
            goto LAB_00d39f94;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(*(int *)(param_1[0xa3] + 8) + 0x10))();
      }
      goto LAB_00d39f94;
    case 5:
      if ((char)param_1[0xa8] == '\x03') {
        FUN_00d35100(param_1 + 0xa4);
      }
      break;
    case 6:
      cVar1 = (char)param_1[0xaa];
      if (cVar1 == '\x04') {
        if ((char)param_1[0xbb] == '\x03') {
          cVar1 = (char)param_1[0xba];
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = (char)param_1[0xb9];
          }
          if (bVar6 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0xb1);
          }
        }
        FUN_006a41c0(param_1 + 0xab);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_006a41c0(param_1 + 0xa2);
          }
          break;
        }
        if ((char)param_1[0xb8] == '\x03') {
          cVar1 = (char)param_1[0xb7];
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = (char)param_1[0xb6];
          }
          if (bVar6 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0xae);
          }
        }
      }
      FUN_006a41c0(param_1 + 0xa7);
      *(undefined1 *)((int)param_1 + 0x2a9) = 0;
      break;
    case 7:
      if ((char)param_1[0xaf] == '\x03') {
        cVar1 = (char)param_1[0xae];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xad];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xa5);
        }
      }
      break;
    case 8:
      if ((char)param_1[0xaf] == '\x03') {
        cVar1 = (char)param_1[0xae];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xad];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xa5);
        }
      }
      goto LAB_00d39df4;
    case 9:
      if ((char)param_1[0xaf] == '\x03') {
        cVar1 = (char)param_1[0xae];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xad];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xa5);
        }
      }
      goto LAB_00d39de8;
    case 10:
      if ((char)param_1[0xb4] == '\x03') {
        cVar1 = (char)param_1[0xb3];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xb2];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xaa);
        }
      }
      FUN_019bb7e0(param_1[0xa2],param_1[0xa3]);
      *(undefined1 *)((int)param_1 + 0x282) = 0;
      FUN_019f8c54(param_1[0x80],1);
LAB_00d39de8:
      FUN_019f8c54(param_1[0x9b],param_1[0x9c]);
LAB_00d39df4:
      FUN_019f8c54(param_1[0x7c],1);
      break;
    case 0xb:
      FUN_00d35100(param_1 + 0xa2);
      break;
    case 0xc:
      if ((char)param_1[0xbc] == '\x03') {
        cVar1 = (char)param_1[0xbb];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xba];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xb2);
        }
      }
    case 0xe:
switchD_00d39a98_caseD_e:
      piVar3 = (int *)param_1[0x9e];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a967c0(param_1[0x9e]);
      }
      break;
    case 0xd:
      cVar1 = *(char *)((int)param_1 + 0x2c6);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0xaf];
      }
      if (bVar6 && cVar1 == '\x03') {
        cVar1 = (char)param_1[0xae];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0xad];
        }
        if (bVar6 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0xa5);
        }
      }
      goto switchD_00d39a98_caseD_e;
    }
    FUN_00d35164(param_1 + 0x86);
    *(undefined1 *)((int)param_1 + 0x283) = 0;
LAB_00d39f94:
    if (*(char *)((int)param_1 + 0x281) != '\0') {
      FUN_00d3545c(param_1 + 0x1c);
    }
    *(undefined1 *)((int)param_1 + 0x281) = 0;
    FUN_019f8c54(param_1[0x83],param_1[0x84]);
LAB_00d39fbc:
    FUN_019f8c54(param_1[0x18],1);
    break;
  case 8:
    cVar1 = (char)param_1[0x22];
    if (cVar1 == '\x05') {
      cVar1 = (char)param_1[0xef];
      if (cVar1 == '\x04') {
        FUN_00d34ddc(param_1 + 0xf2);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_00d3545c(param_1 + 0x24);
          }
          goto LAB_00d39f10;
        }
        puVar5 = (undefined4 *)param_1[0xf3];
        iVar2 = param_1[0xf2];
        pcVar4 = (code *)*puVar5;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(iVar2);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_01be4678(iVar2);
        }
      }
      if (*(char *)((int)param_1 + 0x3bf) != '\0') {
        FUN_019bb7e0(param_1[0xec],param_1[0xed]);
      }
      *(undefined2 *)((int)param_1 + 0x3bf) = 0;
      if (*(char *)((int)param_1 + 0x3be) != '\0') {
        FUN_005f87b4(param_1 + 0xda);
      }
      if (*(char *)((int)param_1 + 0x3bd) != '\0') {
        FUN_00d35478(param_1 + 0x86);
      }
      *(undefined2 *)((int)param_1 + 0x3bd) = 0;
    }
    else {
      if (cVar1 != '\x04') {
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0x30];
        }
        if (bVar6 && cVar1 == '\x03') {
          cVar1 = (char)param_1[0x2f];
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = (char)param_1[0x2e];
          }
          if (bVar6 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0x26);
          }
        }
        break;
      }
      if ((char)param_1[0x25] == '\x03') {
        piVar3 = (int *)param_1[0x24];
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar6 = (bool)hasExclusiveAccess(piVar3);
          if (bVar6) {
            *piVar3 = 0x84;
            goto LAB_00d39f10;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(*(int *)(param_1[0x24] + 8) + 0x10))();
      }
    }
LAB_00d39f10:
    FUN_019f8c54(param_1[0x20],1);
    break;
  case 9:
    FUN_00d34e54(param_1 + 0x1c);
  case 0xb:
switchD_00d39988_caseD_b:
    if (param_1[8] == 0x3b9aca01) {
      (*(code *)**(undefined4 **)param_1[6])();
    }
    break;
  case 10:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    goto switchD_00d39988_caseD_b;
  case 0xc:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 0xd:
    if ((char)param_1[0x20] == '\0') {
      piVar3 = (int *)param_1[0x1f];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(param_1[0x1f]);
      }
    }
    FUN_019f8c54(param_1[0x19],1);
    break;
  case 0xe:
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x21);
      }
    }
    break;
  case 0xf:
    FUN_00d354b8(param_1 + 0x1c);
  }
  if (*(char *)((int)param_1 + 0x6e) != '\0') {
    piVar3 = (int *)param_1[0x17];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(param_1[0x17]);
    }
  }
  piVar3 = (int *)param_1[0x16];
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181cfc(param_1[0x16]);
  }
  FUN_00668c84(param_1[0x12]);
  param_1 = param_1 + 0x14;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
LAB_00d3a060:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*param_1);
    return;
  }
switchD_00d39988_caseD_1:
  return;
}

