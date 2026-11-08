// FUN_00e49980 @ 00e49980 size=376 calls_out=6 calls_in=1
// strings: 

void FUN_00e49980(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 0:
    param_1 = param_1 + 0x12;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_00e49ae8;
  default:
    return;
  case 3:
    FUN_00bba254(param_1 + 0x16);
    goto LAB_00e49acc;
  case 4:
    if (*(char *)(param_1 + 0x23) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x22);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x21);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x19);
      }
    }
    goto LAB_00e49ac0;
  case 5:
    if (*(char *)(param_1 + 0x19) == '\x03') {
      FUN_01139b38(param_1[0x17],param_1[0x18]);
    }
    goto LAB_00e49ab4;
  case 6:
    if (*(char *)(param_1 + 0x23) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x22);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x21);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x19);
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x23) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x22);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x21);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x19);
      }
    }
    FUN_019f8c54(param_1[0x10],1);
  }
  piVar2 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(param_1[0x14]);
  }
LAB_00e49ab4:
  FUN_019f8c54(param_1[2],1);
LAB_00e49ac0:
  FUN_019f8c54(*param_1,1);
LAB_00e49acc:
  param_1 = param_1 + 0x13;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_00e49ae8:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*param_1);
    return;
  }
  return;
}

