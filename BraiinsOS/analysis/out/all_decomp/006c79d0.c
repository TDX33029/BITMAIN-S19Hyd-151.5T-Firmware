// FUN_006c79d0 @ 006c79d0 size=248 calls_out=5 calls_in=3
// strings: 

void FUN_006c79d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  switch(*(undefined1 *)(param_1 + 0x1c9)) {
  case 4:
    FUN_006445f8(param_1 + 0x1d0);
    break;
  case 5:
    FUN_006445f8(param_1 + 0x1d0);
    break;
  case 6:
    FUN_006445f8(param_1 + 0x1d0);
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x23c);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x22c);
    }
    if ((bVar8 && cVar1 == '\x03') && (*(int *)(param_1 + 0x218) != 0)) {
      FUN_006f5d1c(*(int *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x21c),1);
    }
    break;
  default:
    goto switchD_006c79f0_default;
  }
  iVar6 = *(int *)(param_1 + 0x1bc);
  if (iVar6 != 0) {
    iVar7 = *(int *)(param_1 + 0x1b8);
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(iVar7 + iVar5 * 8);
      piVar3 = (int *)*puVar2;
      iVar5 = iVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar2,puVar2[1]);
      }
    } while (iVar5 != iVar6);
  }
  if (*(int *)(param_1 + 0x1b4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b8));
  }
  FUN_00643a80(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
switchD_006c79f0_default:
  return;
}

