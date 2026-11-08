// FUN_00b93380 @ 00b93380 size=312 calls_out=5 calls_in=1
// strings: 

void FUN_00b93380(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  switch(*(undefined1 *)(param_1 + 0x1a2)) {
  case 0:
    puVar5 = (undefined4 *)(param_1 + 0x19c);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    goto LAB_00b934c0;
  default:
    return;
  case 3:
    FUN_00b93564(param_1 + 0x1a8);
    goto LAB_00b9349c;
  case 4:
    FUN_00b935ec(param_1 + 0x1a8);
    goto LAB_00b93488;
  case 5:
    break;
  case 6:
    if (*(char *)(param_1 + 500) == '\x03') {
      iVar7 = 0x20;
      iVar2 = 0x1c;
      iVar8 = 0x24;
      iVar4 = 0x1d8;
LAB_00b9345c:
      iVar6 = param_1 + 0x1c0;
      (**(code **)(*(int *)(param_1 + iVar4) + 0x10))
                (iVar6 + iVar8,*(undefined4 *)(iVar6 + iVar2),*(undefined4 *)(iVar6 + iVar7));
    }
    else if (*(char *)(param_1 + 500) == '\0') {
      iVar7 = 0xc;
      iVar2 = 8;
      iVar8 = 0x10;
      iVar4 = 0x1c4;
      goto LAB_00b9345c;
    }
    *(undefined1 *)(param_1 + 0x1a1) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0x3fc) == '\0') {
      iVar2 = param_1 + 0x2d0;
    }
    else {
      if (*(char *)(param_1 + 0x3fc) != '\x03') break;
      iVar2 = param_1 + 0x1a8;
    }
    FUN_005f79fc(iVar2);
  }
  FUN_00b9386c(param_1 + 0x130);
LAB_00b93488:
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    FUN_005f79fc(param_1 + 8);
  }
LAB_00b9349c:
  puVar5 = (undefined4 *)(param_1 + 0x198);
  piVar3 = (int *)*puVar5;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
LAB_00b934c0:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*puVar5);
    return;
  }
  return;
}

