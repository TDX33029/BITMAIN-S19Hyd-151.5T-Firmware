// FUN_0193f6d0 @ 0193f6d0 size=316 calls_out=7 calls_in=1
// strings: 

void FUN_0193f6d0(int *param_1)

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
  switch(*(undefined1 *)((int)param_1 + 0x15d)) {
  case 0:
    piVar2 = (int *)param_1[0x56];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    goto LAB_0193f5d8;
  default:
    return;
  case 3:
    cVar1 = (char)param_1[99];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x62];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x5a);
    }
    goto LAB_0193f5bc;
  case 4:
    FUN_01139b38(param_1[0x58],param_1[0x59]);
    break;
  case 5:
    FUN_01139b38(param_1[0xfe],param_1[0xff]);
    if (((short)param_1[0x10f] == 0x255) && (3 < (uint)param_1[0x108])) {
      FUN_019bb7e0(param_1[0x109],param_1[0x10a]);
    }
    FUN_0193f164(param_1 + 0xd0);
    FUN_0193f694(param_1 + 0x58);
    if (param_1[6] != 3 || param_1[7] != 0) {
      *(undefined1 *)(param_1 + 0x57) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_019f8c54(param_1[0x50],param_1[0x51]);
LAB_0193f5bc:
  piVar2 = (int *)param_1[0x56];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
LAB_0193f5d8:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x56]);
    return;
  }
  return;
}

