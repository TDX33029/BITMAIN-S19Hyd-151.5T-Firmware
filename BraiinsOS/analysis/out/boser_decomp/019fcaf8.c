// FUN_019fcaf8 @ 019fcaf8 size=556 calls_out=9 calls_in=2
// strings: 

void FUN_019fcaf8(int *param_1)

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
  if (7 < *(byte *)((int)param_1 + 0x66)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0x66)) {
  case 0:
    piVar3 = (int *)param_1[0x17];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x17]);
    }
    FUN_019fc9e4(param_1 + 10);
    piVar3 = (int *)param_1[0x18];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    iVar2 = param_1[0x18];
    goto LAB_019fcd2c;
  default:
    goto switchD_019fcb2c_caseD_1;
  case 3:
    if ((char)param_1[0x21] == '\x03') {
      FUN_01a17e08(param_1 + 0x1b);
      if (param_1[0x1c] != 0) {
        (**(code **)(param_1[0x1c] + 0xc))(param_1[0x1d]);
      }
    }
    break;
  case 4:
    cVar1 = (char)param_1[0x25];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x24];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1c);
    }
    break;
  case 5:
    FUN_01139b38(param_1[0x1a],param_1[0x1b]);
    goto LAB_019fccb8;
  case 6:
    cVar1 = (char)param_1[0x28];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x27];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1f);
    }
    goto LAB_019fcc94;
  case 7:
    iVar2 = param_1[0x1a];
    puVar5 = (undefined4 *)param_1[0x1b];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    FUN_0134c054(param_1[0x1e],param_1[0x1c],1,0x10);
    FUN_019f8c54(param_1[0x14],param_1[0x15]);
LAB_019fcc94:
    if ((char)param_1[0x19] != '\0') {
      FUN_0134c054(param_1[0x1a],param_1[0x1b],1,0x10);
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
LAB_019fccb8:
    *(undefined1 *)((int)param_1 + 0x65) = 0;
    FUN_019f8c54(param_1[0x11],param_1[0x12]);
  }
  piVar3 = (int *)param_1[0xf];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xf]);
  }
  FUN_019fc9e4(param_1 + 2);
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 != 1) {
switchD_019fcb2c_caseD_1:
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = param_1[0xe];
LAB_019fcd2c:
  FUN_01a38404(iVar2);
  return;
}

