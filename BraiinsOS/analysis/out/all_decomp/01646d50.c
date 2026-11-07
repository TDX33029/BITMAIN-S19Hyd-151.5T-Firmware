// FUN_01646d50 @ 01646d50 size=228 calls_out=1 calls_in=1
// strings: 

void FUN_01646d50(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000000;
  
  uVar5 = param_1[1];
  iVar6 = param_1[2];
  if (uVar5 != 0 && iVar6 != 0) {
    puVar7 = (undefined4 *)param_1[3];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  iVar2 = *param_1;
  param_1[1] = 0;
  if (iVar2 != 0) {
    if ((uVar5 & iVar6 != 0) != 0) {
      *(undefined1 *)(iVar2 + 0x10) = 1;
    }
    piVar3 = (int *)(iVar2 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      piVar3 = (int *)(*(int *)(iVar2 + 8) + 0x18);
      do {
        iVar6 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = 1;
      if (iVar6 == -1) {
        software_interrupt(0);
        FUN_016d3496(piVar3,0x81,1,in_stack_00000000);
        return;
      }
    }
  }
  return;
}

