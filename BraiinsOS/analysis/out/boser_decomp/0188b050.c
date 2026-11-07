// FUN_0188b050 @ 0188b050 size=556 calls_out=12 calls_in=3
// strings: 

void FUN_0188b050(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  
  uVar2 = *param_1;
  iVar4 = 1;
  if (5 < uVar2) {
    iVar4 = uVar2 - 6;
  }
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      piVar3 = (int *)param_1[0x4c];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01852970(param_1[0x4c]);
        }
      }
      FUN_0178e1c4(param_1 + 0x30);
      FUN_0188b790(param_1 + 0x1e);
      FUN_01435814(param_1 + 0x41);
      FUN_017044f0(param_1 + 2);
      piVar3 = (int *)param_1[0x36];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x36],param_1[0x37]);
        return;
      }
    }
    return;
  }
  if (uVar2 != 5) {
    iVar4 = uVar2 - 2;
    if (uVar2 < 2) {
      iVar4 = 0;
    }
    if (iVar4 != 1) {
      if (iVar4 != 0) {
        return;
      }
      if (uVar2 == 2) {
        return;
      }
      uVar2 = param_1[0x30];
      if (uVar2 != 3) {
        if (uVar2 == 1) {
          uVar2 = param_1[0x31];
          puVar6 = (undefined4 *)param_1[0x32];
          pcVar5 = (code *)*puVar6;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar2);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_01be4678(uVar2);
          }
        }
        else if ((uVar2 == 0) && (FUN_0188b790(param_1 + 0x3c), (char)param_1[0x31] != '\x03')) {
          FUN_01435814();
        }
      }
      FUN_0188c4c0(param_1 + 0x27);
      piVar3 = (int *)param_1[0x2e];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01852970(param_1[0x2e]);
        }
      }
      FUN_017044f0(param_1);
      piVar3 = (int *)param_1[0x1c];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x1c],param_1[0x1d]);
        return;
      }
      return;
    }
    if ((char)param_1[0xf] == '\x04') {
      uVar2 = param_1[1];
      FUN_0188bc94(uVar2);
      thunk_FUN_01be4678(uVar2);
      return;
    }
  }
  if ((char)param_1[0xf] == '\x02') {
    FUN_0184f010();
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    return;
  }
  FUN_0188b2f8();
  return;
}

