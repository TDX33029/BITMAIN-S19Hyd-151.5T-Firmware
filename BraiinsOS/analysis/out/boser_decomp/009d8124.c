// FUN_009d8124 @ 009d8124 size=544 calls_out=14 calls_in=0
// strings: 

void FUN_009d8124(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint *puVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  uVar4 = *param_1;
  iVar2 = 2;
  if ((uint)(uVar4 < 4) <= -param_1[1]) {
    iVar2 = uVar4 - 4;
  }
  if (iVar2 == 0) {
    FUN_009d7e58(param_1 + 4,-(param_1[1] + (uint)(uVar4 >= 4)));
    if ((char)param_1[0xf] != '\x03') {
      FUN_008dfb78(param_1 + 0xd);
    }
    FUN_0175eea4(param_1 + 2);
    return;
  }
  if (iVar2 != 1) {
    puVar5 = param_1 + 0xec;
    FUN_01a89414(puVar5);
    piVar3 = (int *)*puVar5;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a75ec4(*puVar5);
      }
    }
    if (param_1[0xed] != 0) {
      FUN_009d8f3c();
    }
    if (*param_1 == 3 && param_1[1] == 0) {
      param_1 = param_1 + 2;
    }
    else {
      if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
        FUN_01139b38(param_1[0xe2],param_1[0xe3]);
        piVar3 = (int *)param_1[0xe4];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(param_1[0xe4],param_1[0xe5]);
          }
        }
      }
      piVar3 = (int *)param_1[0xe8];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0xe8]);
      }
    }
    FUN_01a636dc(param_1[0xc4] + 8,param_1[0xc5] + 8,1);
    FUN_009d916c(param_1);
    if (param_1[0xc6] != 0) {
      (**(code **)(param_1[0xc6] + 0x10))
                (param_1 + 0xc9,param_1[199],param_1[200],param_1[200],unaff_r4,unaff_r5,unaff_r11,
                 unaff_lr);
    }
    if (param_1[0x8d] != 0) {
      (**(code **)(param_1[0x8d] + 0x10))(param_1 + 0x90,param_1[0x8e],param_1[0x8f]);
    }
    FUN_0172f388(param_1 + 0xbc);
    FUN_008e1198(param_1 + 0xc4);
    FUN_01822488(param_1 + 0xb4);
    return;
  }
  FUN_008e0f4c(param_1 + 9);
  FUN_0175eea4(param_1 + 2);
  uVar4 = extraout_r1;
  if (param_1[4] != 0) {
    uVar4 = param_1[5];
  }
  if (param_1[4] != 0 && uVar4 != 0) {
    FUN_01a697b8();
  }
  piVar3 = (int *)param_1[0xd];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0xd],param_1[0xe]);
  }
  if (param_1[0xf] == 2) {
    return;
  }
  FUN_009d5724(param_1 + 0xf);
  return;
}

