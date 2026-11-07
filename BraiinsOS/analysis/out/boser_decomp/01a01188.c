// FUN_01a01188 @ 01a01188 size=476 calls_out=7 calls_in=2
// strings: 

void FUN_01a01188(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_r4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar6 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar6 = unaff_r4 == 0;
    }
    if (!bVar6) {
      puVar5 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x66)) {
  case 0:
    piVar2 = (int *)param_1[0x17];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x17]);
    }
    FUN_019fc9e4(param_1 + 10);
    piVar2 = (int *)param_1[0x18];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    iVar4 = param_1[0x18];
    goto LAB_01a01030;
  default:
    return;
  case 3:
    if ((char)param_1[0x21] == '\x03') {
      FUN_009cdcac(param_1 + 0x1b);
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
    goto LAB_01a00fbc;
  case 6:
    cVar1 = (char)param_1[0x28];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x27];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1f);
    }
    goto LAB_01a00f98;
  case 7:
    FUN_01139b38(param_1[0x1a],param_1[0x1b]);
    FUN_0134c054(param_1[0x1e],param_1[0x1c],1,0x10);
    FUN_019f8c54(param_1[0x14],param_1[0x15]);
LAB_01a00f98:
    if ((char)param_1[0x19] != '\0') {
      FUN_0134c054(param_1[0x1a],param_1[0x1b],1,0x10);
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
LAB_01a00fbc:
    *(undefined1 *)((int)param_1 + 0x65) = 0;
    FUN_019f8c54(param_1[0x11],param_1[0x12]);
  }
  piVar2 = (int *)param_1[0xf];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xf]);
  }
  FUN_019fc9e4(param_1 + 2);
  piVar2 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = param_1[0xe];
LAB_01a01030:
  FUN_01a38404(iVar4);
  return;
}

