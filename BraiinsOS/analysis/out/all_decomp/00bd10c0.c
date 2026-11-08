// FUN_00bd10c0 @ 00bd10c0 size=668 calls_out=13 calls_in=1
// strings: 

void FUN_00bd10c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_54 [3];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [2];
  int local_28;
  
  switch(*(undefined1 *)(param_1 + 0xa0)) {
  case 0:
    puVar5 = (undefined4 *)(param_1 + 0x28);
    FUN_016af0b0(puVar5);
    piVar4 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar10 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar10);
    *piVar4 = iVar3 + -1;
    goto LAB_00bd1358;
  default:
    goto switchD_00bd10e0_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      FUN_00b216bc(param_1 + 0xac);
    }
    goto LAB_00bd1328;
  case 4:
    cVar1 = *(char *)(param_1 + 0x108);
    bVar10 = cVar1 == '\x03';
    if (bVar10) {
      cVar1 = *(char *)(param_1 + 0xfc);
    }
    if (bVar10 && cVar1 == '\x03') {
      FUN_00bd1f78(param_1 + 0xd0);
      piVar4 = *(int **)(param_1 + 0xf8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar10 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar10);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(param_1 + 0xf8));
      }
    }
    goto LAB_00bd1328;
  case 5:
    if (*(char *)(param_1 + 0xc4) == '\x04') {
      if (*(char *)(param_1 + 0x119) == '\x03') {
        FUN_00b214e8(param_1 + 0xd0);
        *(undefined1 *)(param_1 + 0x118) = 0;
      }
      else if ((*(char *)(param_1 + 0x119) == '\0') &&
              ((*(uint *)(param_1 + 0x10c) & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x110));
      }
    }
    iVar8 = *(int *)(param_1 + 0xac);
    iVar3 = 0;
    iVar6 = *(int *)(param_1 + 0xb0);
    while (iVar3 != iVar6) {
      iVar2 = iVar8 + iVar3 * 0x18;
      iVar7 = *(int *)(iVar2 + 0xc);
      puVar5 = (undefined4 *)(iVar7 + 0x10);
      for (iVar9 = *(int *)(iVar2 + 0x10); iVar9 != 0; iVar9 = iVar9 + -1) {
        if (puVar5[-4] != 0) {
          thunk_FUN_016d3fb4(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 6;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(iVar2 + 8) != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
    }
    break;
  case 6:
    FUN_00bd2468(param_1 + 0xb0);
    break;
  case 7:
    FUN_00bd21a4(param_1 + 200);
  }
  FUN_00c49364(param_1 + 0x94);
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = *(undefined4 *)(param_1 + 0x90);
    local_48 = *(undefined4 *)(param_1 + 0x8c);
    local_40 = 0;
    local_54[1] = 0;
    local_54[2] = iVar3;
    local_3c = iVar3;
    local_38 = local_48;
  }
  local_54[0] = (uint)(iVar3 != 0);
  local_44 = local_54[0];
  while (FUN_00c3b3e0(local_30,local_54), local_30[0] != 0) {
    FUN_00bd20f4(local_30[0] + local_28 * 0x48);
  }
  *(undefined1 *)(param_1 + 0xa2) = 0;
LAB_00bd1328:
  FUN_00c47f30(param_1 + 0x7c);
  puVar5 = (undefined4 *)(param_1 + 0x38);
  FUN_016af0b0(puVar5);
  piVar4 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar10 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar10);
  *piVar4 = iVar3 + -1;
LAB_00bd1358:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar5);
    return;
  }
switchD_00bd10e0_caseD_1:
  return;
}

