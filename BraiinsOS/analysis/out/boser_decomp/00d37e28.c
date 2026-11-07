// FUN_00d37e28 @ 00d37e28 size=696 calls_out=10 calls_in=2
// strings: 

void FUN_00d37e28(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 == 1) {
    if (param_1[4] == 0) {
      return;
    }
    FUN_01443048(param_1[4],param_1[5]);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  cVar1 = (char)param_1[0xf];
  if (cVar1 == '\0') {
    piVar2 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    goto LAB_00d37f20;
  }
  if (cVar1 == '\x03') {
    FUN_019ede44(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if ((char)param_1[0x65] == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x109);
      if (cVar1 == '\x05') {
        if ((char)param_1[99] == '\x03') {
          cVar1 = (char)param_1[0x62];
          bVar5 = cVar1 == '\x03';
          if (bVar5) {
            cVar1 = *(char *)((int)param_1 + 0x165);
          }
          if (bVar5 && cVar1 == '\x04') {
            FUN_019ede44(param_1 + 0x5a);
            *(undefined1 *)(param_1 + 0x59) = 0;
          }
          piVar2 = param_1 + 0x4e;
LAB_00d37fa8:
          FUN_00d38274(piVar2);
        }
        else if ((char)param_1[99] == '\0') {
          piVar2 = param_1 + 0x48;
          goto LAB_00d37fa8;
        }
        *(undefined1 *)((int)param_1 + 0x107) = 0;
LAB_00d37fb4:
        if ((char)param_1[0x41] != '\0') {
          FUN_00d38310(param_1 + 0x26);
        }
        *(undefined1 *)(param_1 + 0x41) = 0;
      }
      else {
        if (cVar1 == '\x04') {
          cVar1 = (char)param_1[0x54];
          bVar5 = cVar1 == '\x03';
          if (bVar5) {
            cVar1 = (char)param_1[0x53];
          }
          if (bVar5 && cVar1 == '\x03') {
            cVar1 = (char)param_1[0x52];
            bVar5 = cVar1 == '\x03';
            if (bVar5) {
              cVar1 = (char)param_1[0x49];
            }
            if (bVar5 && cVar1 == '\x04') {
              FUN_0193c3cc(param_1 + 0x4a);
            }
          }
          goto LAB_00d37fb4;
        }
        if (cVar1 != '\x03') goto LAB_00d37ee4;
        if ((char)param_1[0x49] == '\x03') {
          puVar3 = (undefined4 *)param_1[0x48];
          iVar4 = param_1[0x47];
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(iVar4);
          }
LAB_00d380b4:
          if (puVar3[1] != 0) {
            thunk_FUN_01be4678(iVar4);
          }
        }
        else if ((char)param_1[0x49] == '\0') {
          puVar3 = (undefined4 *)param_1[0x46];
          iVar4 = param_1[0x45];
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(iVar4);
          }
          goto LAB_00d380b4;
        }
      }
      *(undefined1 *)(param_1 + 0x42) = 0;
      if (*(char *)((int)param_1 + 0x105) != '\0') {
        piVar2 = (int *)param_1[0x3f];
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar2 + 2) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(param_1[0x3f]);
        }
      }
      *(undefined1 *)((int)param_1 + 0x105) = 0;
      if (*(char *)((int)param_1 + 0x106) != '\0') {
        piVar2 = (int *)param_1[0x3e];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121cce0(param_1[0x3e]);
        }
      }
      piVar2 = (int *)param_1[0x3d];
      *(undefined1 *)((int)param_1 + 0x106) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177f84(param_1[0x3d]);
      }
    }
  }
LAB_00d37ee4:
  piVar2 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
LAB_00d37f20:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xe]);
  }
  FUN_00d35b58(param_1 + 2);
  return;
}

