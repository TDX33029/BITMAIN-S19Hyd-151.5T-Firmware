// FUN_017972d8 @ 017972d8 size=456 calls_out=8 calls_in=2
// strings: 

void FUN_017972d8(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  uVar2 = *param_1;
  iVar4 = 1;
  if (5 < uVar2) {
    iVar4 = uVar2 - 6;
  }
  if (iVar4 == 1) {
    if (uVar2 == 5) {
      if ((char)param_1[0xf] != '\x03') {
LAB_017973dc:
        if ((char)param_1[0xf] == '\x02') {
          FUN_0178e78c(param_1[1]);
          return;
        }
        FUN_0178ede8();
        return;
      }
    }
    else {
      iVar4 = uVar2 - 2;
      if (uVar2 < 2) {
        iVar4 = 0;
      }
      if (iVar4 == 1) {
        if ((char)param_1[0xf] != '\x03') {
          if ((char)param_1[0xf] == '\x04') {
            uVar2 = param_1[1];
            FUN_0178fdfc(uVar2);
            thunk_FUN_01be4678(uVar2);
            return;
          }
          goto LAB_017973dc;
        }
      }
      else if ((iVar4 == 0) && (uVar2 != 2)) {
        uVar2 = param_1[0x26];
        if (uVar2 != 3) {
          if (uVar2 == 1) {
            uVar2 = param_1[0x27];
            puVar6 = (undefined4 *)param_1[0x28];
            pcVar5 = (code *)*puVar6;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(uVar2);
            }
            if (puVar6[1] != 0) {
              thunk_FUN_01be4678(uVar2);
            }
          }
          else if (uVar2 == 0) {
            FUN_0179791c(param_1 + 0x32);
            FUN_01435814(param_1 + 0x27);
          }
        }
        FUN_0178f1e8(param_1 + 0x1c);
        piVar3 = (int *)param_1[0x23];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_017844e8(param_1[0x23]);
          }
        }
        piVar3 = (int *)param_1[0x14];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(param_1[0x14],param_1[0x15],0,0,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
          }
        }
        piVar3 = (int *)param_1[0x1a];
        if (piVar3 == (int *)0x0) {
          return;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(param_1[0x1a],param_1[0x1b]);
          return;
        }
        return;
      }
    }
  }
  else if (iVar4 == 0) {
    piVar3 = (int *)param_1[0x3f];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(param_1[0x3f]);
      }
    }
    FUN_0178e1c4(param_1 + 0x2c);
    FUN_0179791c(param_1 + 0x1c);
    FUN_01435814(param_1 + 0x34);
    piVar3 = (int *)param_1[0x16];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x16],param_1[0x17]);
      }
    }
    piVar3 = (int *)param_1[0x32];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x32],param_1[0x33]);
        return;
      }
    }
  }
  return;
}

