// FUN_0116c448 @ 0116c448 size=252 calls_out=8 calls_in=1
// strings: 

void FUN_0116c448(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  iVar2 = 2;
  if ((uint)(uVar4 < 4) <= -param_1[1]) {
    iVar2 = uVar4 - 4;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_0116c5f4(param_1 + 2,-(param_1[1] + (uint)(uVar4 >= 4)));
      FUN_0116c660(param_1 + 99);
      if ((char)param_1[0x62] != '\x03') {
        FUN_01820460(param_1 + 0x5e);
      }
      piVar3 = (int *)param_1[0x66];
      if (*piVar3 != 0) {
        FUN_005f6438(piVar3[1],piVar3[2]);
      }
      thunk_FUN_01be4678(piVar3);
      return;
    }
    piVar3 = (int *)param_1[0xf4];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0xf4],param_1[0xf5]);
      }
    }
    FUN_01139b38(param_1[0xf2],param_1[0xf3]);
    FUN_0113dc20(param_1);
    return;
  }
  if (param_1[0x2a] != 2) {
    FUN_00b76614();
  }
  if (param_1[2] != 2 || param_1[3] != 0) {
    FUN_005f0424();
  }
  if (param_1[0x36] == 0) {
    return;
  }
  FUN_01139b38(param_1[0x36],param_1[0x37]);
  return;
}

