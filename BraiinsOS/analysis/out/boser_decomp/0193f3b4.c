// FUN_0193f3b4 @ 0193f3b4 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_0193f3b4(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
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
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x37)) {
  case 0:
    FUN_0193cf34(param_1 + 4);
    piVar2 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_0193ed24;
  default:
    return;
  case 3:
    if ((char)param_1[0x1c] == '\x03') {
      FUN_007a5afc(param_1 + 0xf);
    }
    break;
  case 4:
    cVar1 = (char)param_1[0x19];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x18];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x10);
    }
    break;
  case 5:
    FUN_0193ede0(param_1 + 0xe);
    FUN_019f8c54(param_1[9],param_1[10]);
  }
  FUN_0193cf34(param_1 + 2);
  piVar2 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_0193ed24:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195ae2c(param_1[0xc]);
    return;
  }
  return;
}

