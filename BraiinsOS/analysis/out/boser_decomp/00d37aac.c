// FUN_00d37aac @ 00d37aac size=276 calls_out=3 calls_in=1
// strings: 

void FUN_00d37aac(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xe4) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x50) == '\x03') {
      if (*(char *)(param_1 + 0x4c) == '\x03') {
        piVar3 = *(int **)(param_1 + 0x48);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar3);
          if (bVar2) {
            *piVar3 = 0x84;
            goto switchD_00d37b18_caseD_1;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
      else if (*(char *)(param_1 + 0x4c) == '\0') {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
      }
    }
    goto switchD_00d37b18_caseD_1;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x75) == '\x03') {
      FUN_00d35cfc(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
    goto switchD_00d37b18_caseD_1;
  }
  if (9 < *(byte *)(param_1 + 0xb8)) goto switchD_00d37b18_caseD_1;
  iVar6 = param_1 + 0x20;
  switch(*(byte *)(param_1 + 0xb8)) {
  case 0:
    iVar6 = param_1 + 0x60;
    break;
  case 1:
  case 2:
    goto switchD_00d37b18_caseD_1;
  case 7:
    uVar4 = *(undefined4 *)(param_1 + 0xc4);
    uVar5 = *(undefined4 *)(param_1 + 200);
    goto LAB_00d37bb4;
  case 8:
    uVar4 = *(undefined4 *)(param_1 + 0xc0);
    uVar5 = *(undefined4 *)(param_1 + 0xc4);
LAB_00d37bb4:
    FUN_019bb7e0(uVar4,uVar5);
  }
  FUN_005f649c(iVar6);
switchD_00d37b18_caseD_1:
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}

