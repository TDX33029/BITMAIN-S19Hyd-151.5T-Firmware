// FUN_006440d8 @ 006440d8 size=304 calls_out=5 calls_in=5
// strings: 

void FUN_006440d8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0xe0) == '\x04') {
    if (*(undefined1 **)(param_1 + 0xf0) != &DAT_3b9aca00) {
      FUN_00643a80(param_1 + 0xe8);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe0) == '\x03') {
    switch(*(undefined1 *)(param_1 + 0x2b1)) {
    case 4:
      FUN_006445f8(param_1 + 0x2b8);
      break;
    case 5:
      FUN_006445f8(param_1 + 0x2b8);
      break;
    case 6:
      FUN_006445f8(param_1 + 0x2b8);
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x324);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 0x314);
      }
      if ((bVar8 && cVar1 == '\x03') && (*(int *)(param_1 + 0x300) != 0)) {
        FUN_006f5d1c(*(int *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304),1);
      }
      break;
    default:
      goto switchD_0064410c_default;
    }
    iVar6 = *(int *)(param_1 + 0x2a4);
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x2a0);
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
    if (*(int *)(param_1 + 0x29c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a0));
    }
    FUN_00643a80(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    return;
  }
switchD_0064410c_default:
  return;
}

