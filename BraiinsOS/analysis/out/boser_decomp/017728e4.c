// FUN_017728e4 @ 017728e4 size=444 calls_out=19 calls_in=2
// strings: 

void FUN_017728e4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar4) {
      iVar1 = param_1[4];
    }
    if (bVar4 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      return;
    }
    iVar1 = param_1[2];
    iVar3 = param_1[3];
    if (iVar1 != 7 || iVar3 != 0) {
      bVar4 = iVar1 == 6 && iVar3 == 0;
      if (iVar1 != 6 || iVar3 != 0) {
        bVar4 = iVar1 == 5 && iVar3 == 0;
      }
      if (!bVar4) {
        if (iVar1 != 4 || iVar3 != 0) {
          FUN_01139b38(param_1[0x3b],param_1[0x3c]);
          FUN_012840cc(param_1 + 0x3e);
          FUN_019bb7e0(param_1[0x2e],param_1[0x2f]);
          FUN_01773240(param_1 + 0x32);
          FUN_01772b58(param_1 + 2);
          FUN_01772bf4(param_1 + 0x44);
          FUN_01772c34(param_1 + 0x4a);
          piVar2 = (int *)param_1[0x4f];
          if (*piVar2 != 0) {
            FUN_01771fbc(piVar2 + 1);
          }
          thunk_FUN_01be4678(piVar2);
          return;
        }
        piVar2 = (int *)param_1[0x1f];
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar2;
            bVar4 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar4);
          *piVar2 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01436864(param_1[0x1f]);
          }
        }
        FUN_017720fc(param_1 + 0x14);
        FUN_01432304(param_1 + 0x17);
        piVar2 = (int *)param_1[0x20];
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar2;
            bVar4 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar4);
          *piVar2 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(param_1[0x20],param_1[0x21]);
          }
        }
        FUN_01772cf0(param_1 + 0x18);
        FUN_01772d3c(param_1[0x1d],param_1[0x1e]);
        if (param_1[4] == 2) {
          return;
        }
        FUN_017721f4(param_1 + 7);
        FUN_01771f3c(param_1 + 0xb);
        FUN_01771fbc(param_1 + 0xf);
        FUN_01772dfc(param_1 + 4);
        return;
      }
    }
  }
  return;
}

