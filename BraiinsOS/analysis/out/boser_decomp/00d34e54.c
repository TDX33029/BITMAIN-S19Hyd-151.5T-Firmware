// FUN_00d34e54 @ 00d34e54 size=560 calls_out=6 calls_in=1
// strings: 

void FUN_00d34e54(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x10d) != '\x03') {
switchD_00d34e80_default:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x7d)) {
  case 3:
    if (*(char *)(param_1 + 0x9c) != '\x03') goto LAB_00d35024;
    if (*(char *)(param_1 + 0x98) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x94);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar7 = (bool)hasExclusiveAccess(piVar3);
        if (bVar7) {
          *piVar3 = 0x84;
          goto LAB_00d35024;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
      goto LAB_00d35024;
    }
    if (*(char *)(param_1 + 0x98) != '\0') goto LAB_00d35024;
    uVar2 = *(undefined4 *)(param_1 + 0x88);
    uVar4 = *(undefined4 *)(param_1 + 0x8c);
    goto LAB_00d35020;
  case 4:
    if (*(char *)(param_1 + 0x9c) == '\x03') {
      if (*(char *)(param_1 + 0x98) == '\0') {
        iVar5 = 0x8c;
        iVar6 = 0x88;
        break;
      }
      if (*(char *)(param_1 + 0x98) == '\x03') {
        piVar3 = *(int **)(param_1 + 0x94);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar7 = (bool)hasExclusiveAccess(piVar3);
          if (bVar7) {
            *piVar3 = 0x84;
            goto LAB_00d3501c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
    }
    goto LAB_00d3501c;
  case 5:
    iVar5 = 0x74;
    iVar6 = 0x70;
    if (*(char *)(param_1 + 0x95) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x8c);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar7 = (bool)hasExclusiveAccess(piVar3);
        if (!bVar7) goto LAB_00d34f94;
        *piVar3 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00d34f94:
        (**(code **)(piVar3[2] + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0xac);
    iVar5 = 0x74;
    iVar6 = 0x70;
    if (cVar1 == '\x05') {
      FUN_00b8d8f8(param_1 + 0xf0);
      FUN_005f4f20(param_1 + 0xb0);
    }
    else if (cVar1 == '\x04') {
      FUN_00b6fb24(param_1 + 0xc4);
      FUN_00d3567c(param_1 + 0xb0);
      FUN_005fa468(param_1 + 0xe0);
    }
    else {
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0xd4);
      }
      if (bVar7 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xd0) == '\x03') {
          piVar3 = *(int **)(param_1 + 0xcc);
          if (*piVar3 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar7 = (bool)hasExclusiveAccess(piVar3);
            if (bVar7) {
              *piVar3 = 0x84;
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar3[2] + 0x10))();
        }
        else if (*(char *)(param_1 + 0xd0) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
        }
      }
    }
    break;
  default:
    goto switchD_00d34e80_default;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + iVar6),*(undefined4 *)(param_1 + iVar5));
LAB_00d3501c:
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar4 = *(undefined4 *)(param_1 + 0x68);
LAB_00d35020:
  FUN_019bb7e0(uVar2,uVar4);
LAB_00d35024:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  return;
}

