// FUN_019ffe00 @ 019ffe00 size=364 calls_out=8 calls_in=1
// strings: 

void FUN_019ffe00(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint *puVar5;
  uint *extraout_r1;
  uint *extraout_r1_00;
  int unaff_r4;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar7 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar7 = unaff_r4 == 0;
    }
    if (!bVar7) {
      puVar6 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r4);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  puVar5 = &switchD_019ffbc8::switchdataD_019ffbcc;
  switch(*(undefined1 *)((int)param_1 + 0x62)) {
  case 0:
    piVar3 = (int *)param_1[0x16];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x16]);
    }
    FUN_019fba9c(param_1 + 10);
    FUN_019fb03c(param_1 + 0x17);
    return;
  default:
    return;
  case 3:
    if ((char)param_1[0x21] == '\x03') {
      FUN_009cdcac(param_1 + 0x1b);
    }
    goto LAB_019ffcc4;
  case 4:
    cVar1 = (char)param_1[0x25];
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = (char)param_1[0x24];
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1c);
      puVar5 = extraout_r1;
    }
    goto LAB_019ffc98;
  case 5:
    FUN_01139b38(param_1[0x1b],param_1[0x1c]);
    FUN_0134c054(param_1[0x1f],param_1[0x1d],4,4);
    break;
  case 6:
    FUN_01139b38(param_1[0x1a],param_1[0x1b]);
  }
  FUN_019f8c54(param_1[0x13],param_1[0x14]);
  puVar5 = extraout_r1_00;
LAB_019ffc98:
  iVar2 = param_1[0x10];
  if (iVar2 != -0x80000000) {
    puVar5 = (uint *)(uint)*(byte *)(param_1 + 0x18);
  }
  if (iVar2 != -0x80000000 && puVar5 != (uint *)0x0) {
    FUN_0134c054(iVar2,param_1[0x11],4,4);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
LAB_019ffcc4:
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  FUN_019fb03c(param_1 + 0xf);
  FUN_019fba9c(param_1 + 2);
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xe]);
    return;
  }
  return;
}

