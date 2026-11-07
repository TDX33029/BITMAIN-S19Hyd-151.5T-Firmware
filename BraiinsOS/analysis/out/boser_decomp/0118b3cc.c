// FUN_0118b3cc @ 0118b3cc size=548 calls_out=6 calls_in=1
// strings: 

void FUN_0118b3cc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0x6d)) {
  case 3:
    if (*(char *)(param_1 + 0x8c) != '\x03') goto LAB_0118b590;
    if (*(char *)(param_1 + 0x88) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x84);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar7 = (bool)hasExclusiveAccess(piVar3);
        if (bVar7) {
          *piVar3 = 0x84;
          goto LAB_0118b590;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
      goto LAB_0118b590;
    }
    if (*(char *)(param_1 + 0x88) != '\0') goto LAB_0118b590;
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    goto LAB_0118b58c;
  case 4:
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      if (*(char *)(param_1 + 0x88) == '\0') {
        iVar5 = 0x7c;
        iVar6 = 0x78;
        break;
      }
      if (*(char *)(param_1 + 0x88) == '\x03') {
        piVar3 = *(int **)(param_1 + 0x84);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar7 = (bool)hasExclusiveAccess(piVar3);
          if (bVar7) {
            *piVar3 = 0x84;
            goto LAB_0118b588;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
    }
    goto LAB_0118b588;
  case 5:
    iVar5 = 100;
    iVar6 = 0x60;
    if (*(char *)(param_1 + 0x85) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x7c);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar7 = (bool)hasExclusiveAccess(piVar3);
        if (!bVar7) goto LAB_0118b500;
        *piVar3 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_0118b500:
        (**(code **)(piVar3[2] + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x9c);
    iVar5 = 100;
    iVar6 = 0x60;
    if (cVar1 == '\x05') {
      FUN_00b8d8f8(param_1 + 0xe0);
      FUN_005f4f20(param_1 + 0xa0);
    }
    else if (cVar1 == '\x04') {
      FUN_00b6fb24(param_1 + 0xb4);
      FUN_0118bd78(param_1 + 0xa0);
      FUN_005fa468(param_1 + 0xd0);
    }
    else {
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0xc4);
      }
      if (bVar7 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xc0) == '\x03') {
          piVar3 = *(int **)(param_1 + 0xbc);
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
        else if (*(char *)(param_1 + 0xc0) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
        }
      }
    }
    break;
  default:
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + iVar6),*(undefined4 *)(param_1 + iVar5));
LAB_0118b588:
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
LAB_0118b58c:
  FUN_019bb7e0(uVar2,uVar4);
LAB_0118b590:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return;
}

