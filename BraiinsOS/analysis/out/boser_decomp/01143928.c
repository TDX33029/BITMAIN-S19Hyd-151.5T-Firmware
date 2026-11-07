// FUN_01143928 @ 01143928 size=252 calls_out=8 calls_in=2
// strings: 

void FUN_01143928(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x7c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x58);
    }
    if (bVar8 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x15) == '\x04') {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
        FUN_009495dc(param_1 + 0x38);
        FUN_007bc140(param_1 + 0x18);
      }
      else {
        if (*(char *)(param_1 + 0x15) != '\x03') {
          return;
        }
        if (*(int *)(param_1 + 0x40) == -0x80000000) {
          iVar6 = *(int *)(param_1 + 0x18);
          iVar7 = *(int *)(param_1 + 0x1c);
          iVar4 = iVar7 + 1;
          iVar3 = iVar6;
          while (iVar4 = iVar4 + -1, iVar4 != 0) {
            FUN_0094966c(iVar3);
            iVar3 = iVar3 + 0x38;
          }
          if (iVar7 != 0) {
            thunk_FUN_01be4678(iVar6);
          }
        }
        else {
          puVar5 = (undefined4 *)(param_1 + 0x28);
          FUN_0120954c(puVar5);
          piVar2 = (int *)*puVar5;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar8 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar8);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a903d0(*puVar5);
          }
          FUN_007bc1bc(param_1 + 0x34);
          FUN_007bc140((int *)(param_1 + 0x40));
        }
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  return;
}

