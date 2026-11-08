// FUN_01170634 @ 01170634 size=268 calls_out=9 calls_in=1
// strings: 

void FUN_01170634(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  
  uVar5 = *param_1;
  iVar2 = 2;
  iVar4 = -(param_1[1] + (uint)(uVar5 >= 4));
  if ((uint)(uVar5 < 4) <= -param_1[1]) {
    iVar2 = uVar5 - 4;
  }
  if (iVar2 == 0) {
    if (param_1[0x2a] != 2) {
      FUN_00b76614();
    }
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_005f0424();
    }
    if (param_1[0x36] == 0x80000000) {
      return;
    }
    FUN_01139f38(param_1 + 0x36);
    return;
  }
  if (iVar2 != 1) {
    piVar3 = (int *)param_1[0x102];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x102],param_1[0x103]);
        iVar4 = extraout_r1;
      }
    }
    FUN_01139f38(param_1 + 0xf2,iVar4);
    FUN_0113dc20(param_1);
    return;
  }
  if (param_1[2] == 4 && param_1[3] == 0) {
    return;
  }
  FUN_0116c5f4();
  FUN_011707ec(param_1 + 0x5e);
  if ((char)param_1[0x73] != '\x03') {
    FUN_01820460(param_1 + 0x6f);
  }
  FUN_00d339f8(param_1[0x74]);
  return;
}

