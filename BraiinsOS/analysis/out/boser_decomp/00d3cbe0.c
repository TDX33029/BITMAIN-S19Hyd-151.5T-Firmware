// FUN_00d3cbe0 @ 00d3cbe0 size=736 calls_out=9 calls_in=2
// strings: 

void FUN_00d3cbe0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar4) {
      iVar2 = param_1[4];
    }
    if (bVar4 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_00d3cc10_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch((char)param_1[0x26]) {
  case '\0':
    piVar3 = (int *)param_1[0x25];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(param_1[0x25]);
      }
    }
    if ((char)param_1[0x24] != '\x02') {
      (**(code **)(param_1[0x20] + 0x10))(param_1 + 0x23,param_1[0x21],param_1[0x22]);
    }
    goto LAB_00d3cecc;
  default:
    goto switchD_00d3cc10_caseD_1;
  case '\x03':
    piVar3 = (int *)param_1[0x28];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(param_1[0x28]);
      }
    }
    break;
  case '\x04':
    if (*(char *)((int)param_1 + 0x155) == '\0') {
      piVar3 = param_1 + 0x30;
LAB_00d3ce64:
      if (piVar3[2] != 0) {
        (**(code **)(piVar3[2] + 0x10))(piVar3 + 5,piVar3[3],piVar3[4]);
      }
      FUN_01443048(*piVar3,piVar3[1]);
    }
    else if (*(char *)((int)param_1 + 0x155) == '\x03') {
      if ((char)param_1[0x54] == '\x03') {
        iVar2 = 0x60;
        if (param_1[0x45] != 3) goto LAB_00d3ce5c;
      }
      else {
        iVar2 = 0x24;
        if ((char)param_1[0x54] == '\0') {
LAB_00d3ce5c:
          piVar3 = (int *)((int)param_1 + iVar2 + 0xd8);
          goto LAB_00d3ce64;
        }
      }
    }
    break;
  case '\x05':
    cVar1 = (char)param_1[0xbd];
    if (cVar1 == '\x04') {
      if ((param_1[0xc0] != 5) && (((uint)param_1[0xc0] < 4 || (param_1[0xc1] != 0)))) {
        (**(code **)(param_1[0xc1] + 0x10))(param_1 + 0xc4,param_1[0xc2],param_1[0xc3]);
      }
    }
    else if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00d33f88(param_1 + 0x28);
        piVar3 = (int *)param_1[0x43];
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar4 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar4);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01181c68(param_1[0x43]);
        }
        piVar3 = (int *)param_1[0x44];
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar4 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar4);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01182bec(param_1[0x44]);
        }
        FUN_01aae24c(param_1 + 0x45);
        FUN_00d34048(param_1 + 0x2f);
      }
      break;
    }
    FUN_00d33f88(param_1 + 0xb5);
    FUN_00d340b0(param_1 + 0x6c);
    piVar3 = (int *)param_1[0x66];
    *(undefined2 *)((int)param_1 + 0x2f5) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182bec(param_1[0x66]);
    }
    *(undefined2 *)((int)param_1 + 0x2f7) = 0;
    *(undefined1 *)((int)param_1 + 0x2f9) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  bVar4 = *(char *)((int)param_1 + 0x9a) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = (char)param_1[0x24];
  }
  if (bVar4 && cVar1 != '\x02') {
    (**(code **)(param_1[0x20] + 0x10))(param_1 + 0x23,param_1[0x21],param_1[0x22]);
  }
  if (*(char *)((int)param_1 + 0x99) == '\0') {
    return;
  }
LAB_00d3cecc:
  FUN_00d33eb4(param_1 + 10);
  return;
}

