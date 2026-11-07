// FUN_00d35d8c @ 00d35d8c size=1056 calls_out=10 calls_in=2
// strings: 

void FUN_00d35d8c(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    goto LAB_00d361c4;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x60) == '\x03') {
        if (*(char *)(param_1 + 0x5c) == '\x03') {
          piVar4 = *(int **)(param_1 + 0x58);
          if (*piVar4 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(piVar4);
            if (bVar2) {
              *piVar4 = 0x84;
              goto LAB_00d35f90;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar4[2] + 0x10))();
        }
        else if (*(char *)(param_1 + 0x5c) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        }
      }
LAB_00d35f90:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      return;
    }
switchD_00d35df0_caseD_1:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x1d2)) {
  case 0:
    puVar10 = (undefined4 *)(param_1 + 0x1cc);
    piVar4 = (int *)*puVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    goto LAB_00d361b4;
  default:
    goto switchD_00d35df0_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x344) == '\x03') {
      if (*(char *)(param_1 + 0x334) == '\x03') {
        if (*(char *)(param_1 + 0x330) == '\x03') {
          if (*(char *)(param_1 + 0x32c) == '\0') {
            puVar10 = (undefined4 *)(param_1 + 0x2ec);
          }
          else {
            if (*(char *)(param_1 + 0x32c) != '\x03') goto LAB_00d3617c;
            if (*(char *)(param_1 + 0x328) == '\x03') {
              piVar4 = *(int **)(param_1 + 0x324);
              if (*piVar4 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar2 = (bool)hasExclusiveAccess(piVar4);
                if (bVar2) {
                  *piVar4 = 0x84;
                  goto LAB_00d36168;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar4[2] + 0x10))();
            }
            else if (*(char *)(param_1 + 0x328) == '\0') {
              FUN_019bb7e0(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c));
            }
LAB_00d36168:
            *(undefined1 *)(param_1 + 0x32d) = 0;
            puVar10 = (undefined4 *)(param_1 + 0x2fc);
          }
LAB_00d36174:
          FUN_019bb7e0(*puVar10,puVar10[1]);
        }
        else if (*(char *)(param_1 + 0x330) == '\0') {
          puVar10 = (undefined4 *)(param_1 + 0x2dc);
          goto LAB_00d36174;
        }
LAB_00d3617c:
        *(undefined1 *)(param_1 + 0x335) = 0;
      }
      else if (*(char *)(param_1 + 0x334) == '\0') {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4));
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
    }
    goto LAB_00d36190;
  case 4:
    if (*(char *)(param_1 + 0x1f5) == '\x03') {
      if (*(int *)(param_1 + 0x1e0) == 0) {
        piVar4 = *(int **)(param_1 + 0x1e4);
        if ((9 < *(byte *)(piVar4 + 0x106)) && (piVar4[0x108] != 0)) {
          thunk_FUN_01be4678(piVar4[0x107]);
        }
        FUN_019bb7e0(piVar4[0xf4],piVar4[0xf5]);
        FUN_0142e6dc(piVar4 + 0xe0);
        piVar5 = (int *)piVar4[0x10b];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018537bc(piVar4[0x10b]);
        }
        FUN_00d363c4(piVar4);
        if (piVar4[0x10c] != 0) {
          FUN_00668c84();
        }
        if (piVar4[0x10d] != 0) {
          FUN_00668c84();
        }
LAB_00d36090:
        thunk_FUN_01be4678(piVar4);
      }
      else {
        piVar4 = *(int **)(param_1 + 0x1e4);
        if (piVar4 != (int *)0x0) {
          if (((short)piVar4[0x12] == 3) && (piVar4[0x13] != 0)) {
            (**(code **)(piVar4[0x13] + 0x10))(piVar4 + 0x16,piVar4[0x14],piVar4[0x15]);
          }
          if (piVar4[0x17] != 0) {
            FUN_01443048(piVar4[0x17],piVar4[0x18]);
          }
          if (*piVar4 != 2) {
            FUN_019bb7e0(piVar4[4],piVar4[5]);
          }
          goto LAB_00d36090;
        }
      }
      piVar4 = *(int **)(param_1 + 0x1f0);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018537bc(*(undefined4 *)(param_1 + 0x1f0));
      }
      *(undefined1 *)(param_1 + 500) = 0;
    }
    goto LAB_00d35fe8;
  case 5:
    break;
  case 6:
    if (*(char *)(param_1 + 0x224) == '\x03') {
      iVar6 = 0x20;
      iVar7 = 0x1c;
      iVar9 = 0x24;
      iVar8 = 0x1d8;
LAB_00d35fb8:
      iVar11 = param_1 + 0x1f0;
      (**(code **)(*(int *)(param_1 + 0x30 + iVar8) + 0x10))
                (iVar11 + iVar9,*(undefined4 *)(iVar11 + iVar7),*(undefined4 *)(iVar11 + iVar6));
    }
    else if (*(char *)(param_1 + 0x224) == '\0') {
      iVar6 = 0xc;
      iVar7 = 8;
      iVar9 = 0x10;
      iVar8 = 0x1c4;
      goto LAB_00d35fb8;
    }
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0x42c) == '\0') {
      iVar6 = param_1 + 0x300;
    }
    else {
      if (*(char *)(param_1 + 0x42c) != '\x03') break;
      iVar6 = param_1 + 0x1d8;
    }
    FUN_005f79fc(iVar6);
  }
  FUN_00b9386c(param_1 + 0x160);
LAB_00d35fe8:
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    FUN_005f79fc(param_1 + 0x38);
  }
LAB_00d36190:
  puVar10 = (undefined4 *)(param_1 + 0x1c8);
  piVar4 = (int *)*puVar10;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
LAB_00d361b4:
  if (iVar6 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  uVar3 = *puVar10;
LAB_00d361c4:
  FUN_01a38efc(uVar3);
  return;
}

