// FUN_005c67a0 @ 005c67a0 size=820 calls_out=13 calls_in=4
// strings: 

void FUN_005c67a0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *(char *)((int)param_1 + 10);
  if (cVar1 == '\0') {
    param_1 = param_1 + 1;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_005c6abc;
  }
  if (cVar1 == '\x03') {
    if (param_1[8] != 0) {
      FUN_00e44660(param_1[8],param_1[9],1);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (6 < *(byte *)((int)param_1 + 0x3d)) goto switchD_005c67dc_caseD_1;
    switch(*(byte *)((int)param_1 + 0x3d)) {
    case 0:
      puVar2 = param_1 + 0xe;
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      goto LAB_005c6a6c;
    default:
      goto switchD_005c67dc_caseD_1;
    case 3:
      if (param_1[0x10] != 0) {
        FUN_00e44660(param_1[0x10],param_1[0x11],1);
      }
      goto LAB_005c6a4c;
    case 4:
      cVar1 = *(char *)(param_1 + 0x2e);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x2d);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_00e7c67c(param_1 + 0x27);
        if (param_1[0x28] != 0) {
          (**(code **)(param_1[0x28] + 0xc))(param_1[0x29]);
        }
      }
      FUN_00a07b4c(param_1 + 0x10);
      break;
    case 5:
      if ((*(char *)(param_1 + 0x13) == '\x03') && (param_1[0x11] != 0)) {
        FUN_00e43e74(param_1[0x11],param_1[0x12],1);
      }
      break;
    case 6:
      if (*(char *)(param_1 + 0x54) == '\x03') {
        if (*(char *)((int)param_1 + 0x69) == '\x04') {
          cVar1 = *(char *)((int)param_1 + 0xcd);
          if (cVar1 == '\x05') {
            FUN_005c1564(param_1 + 0x34);
LAB_005c69c4:
            piVar3 = (int *)param_1[0x2c];
            if (piVar3 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar3;
                bVar5 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar5);
              *piVar3 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078e66c(param_1[0x2c]);
              }
            }
            FUN_00e44900(param_1[0x2b]);
          }
          else {
            if (cVar1 == '\x04') {
              if (*(char *)((int)param_1 + 0xeb) == '\x04') {
                if (*(char *)(param_1 + 0x4f) == '\x03') {
                  FUN_005c1564(param_1 + 0x3d);
                }
              }
              else if (*(char *)((int)param_1 + 0xeb) == '\x03') {
                cVar1 = *(char *)(param_1 + 0x48);
                bVar5 = cVar1 == '\x03';
                if (bVar5) {
                  cVar1 = *(char *)(param_1 + 0x47);
                }
                if (bVar5 && cVar1 == '\x03') {
                  cVar1 = *(char *)(param_1 + 0x46);
                  bVar5 = cVar1 == '\x03';
                  if (bVar5) {
                    cVar1 = *(char *)((int)param_1 + 0x115);
                  }
                  if (bVar5 && cVar1 == '\x03') {
                    if (param_1[0x40] != 0) {
                      FUN_00e44660(param_1[0x40],param_1[0x41],1);
                    }
                    *(undefined1 *)(param_1 + 0x45) = 0;
                  }
                }
              }
              goto LAB_005c69c4;
            }
            if ((cVar1 == '\x03') && (param_1[0x34] != 0)) {
              FUN_00e44660(param_1[0x34],param_1[0x35],1);
            }
          }
          FUN_00e44114(param_1[0x18]);
        }
        else if ((*(char *)((int)param_1 + 0x69) == '\x03') && (param_1[0x1c] != 0)) {
          FUN_00e43e74(param_1[0x1c],param_1[0x1d],1);
        }
      }
      FUN_00e44114(param_1[0xd]);
    }
    FUN_00e7decc(param_1 + 4);
    piVar3 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078205c(param_1[6]);
    }
LAB_005c6a4c:
    puVar2 = param_1 + 0xc;
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
LAB_005c6a6c:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078dfac(*puVar2);
    }
  }
switchD_005c67dc_caseD_1:
  *(undefined1 *)((int)param_1 + 9) = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_005c49b4(param_1 + 3);
  }
  piVar3 = (int *)*param_1;
  *(undefined1 *)(param_1 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_005c6abc:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*param_1);
    return;
  }
  return;
}

