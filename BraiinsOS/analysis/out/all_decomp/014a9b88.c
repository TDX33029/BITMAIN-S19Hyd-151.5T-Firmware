// FUN_014a9b88 @ 014a9b88 size=1072 calls_out=14 calls_in=0
// strings: 

void FUN_014a9b88(uint *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  uVar7 = *param_1;
  iVar3 = 2;
  if ((uint)(uVar7 < 4) <= -param_1[1]) {
    iVar3 = uVar7 - 4;
  }
  if (iVar3 == 0) {
    FUN_0148c7a0(param_1 + 4,-(param_1[1] + (uint)(uVar7 >= 4)));
    if (param_1[8] == 0) {
      uVar7 = param_1[9];
      puVar10 = (undefined4 *)param_1[10];
      pcVar6 = (code *)*puVar10;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar7);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    else {
      (**(code **)(param_1[8] + 0x10))(param_1 + 0xb,param_1[9],param_1[10]);
    }
    if ((char)param_1[0xf] != '\x03') {
      FUN_0148b99c(param_1 + 0xd);
    }
    piVar5 = (int *)0x0;
    if (param_1[2] != 0) {
      piVar5 = (int *)param_1[3];
    }
    if (param_1[2] != 0 && piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(param_1[3]);
        return;
      }
    }
  }
  else {
    if (iVar3 != 1) {
      puVar4 = param_1 + 0xec;
      FUN_014822b4(puVar4);
      piVar5 = (int *)*puVar4;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0149debc(*puVar4);
        }
      }
      uVar7 = param_1[0xed];
      if (uVar7 != 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(uVar7 + 0x20) = 1;
        pcVar8 = (char *)(uVar7 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar8;
          bVar2 = (bool)hasExclusiveAccess(pcVar8);
        } while (!bVar2);
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar3 = *(int *)(uVar7 + 8);
          *(undefined4 *)(uVar7 + 8) = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(uVar7 + 0x10) = 0;
          DataMemoryBarrier(0xb);
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 4))(*(undefined4 *)(uVar7 + 0xc));
          }
        }
        pcVar8 = (char *)(uVar7 + 0x1c);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar8;
          bVar2 = (bool)hasExclusiveAccess(pcVar8);
        } while (!bVar2);
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar3 = *(int *)(uVar7 + 0x14);
          *(undefined4 *)(uVar7 + 0x14) = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 0xc))(*(undefined4 *)(uVar7 + 0x18));
          }
          DataMemoryBarrier(0xb);
          *pcVar8 = '\0';
          DataMemoryBarrier(0xb);
        }
        piVar5 = (int *)param_1[0xed];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089dea4(param_1[0xed]);
        }
      }
      if (*param_1 == 3 && param_1[1] == 0) {
        FUN_014ad6e4(param_1[0xc6] + 8,param_1[199] + 8,1);
        iVar3 = 0x230;
        FUN_014aa340(param_1 + 2);
      }
      else {
        if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
          puVar10 = (undefined4 *)param_1[0xe3];
          uVar7 = param_1[0xe2];
          pcVar6 = (code *)*puVar10;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar7);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar7);
          }
          piVar5 = (int *)param_1[0xe4];
          if (piVar5 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar5;
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0089ddfc(param_1[0xe4],param_1[0xe5],0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                           unaff_r11,unaff_lr);
            }
          }
        }
        piVar5 = (int *)param_1[0xe8];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010b53fc(param_1[0xe8]);
        }
        FUN_014ad6e4(param_1[0xc4] + 8,param_1[0xc5] + 8,1);
        iVar3 = 0x228;
        FUN_014aa340(param_1);
      }
      FUN_0148c9fc((int)param_1 + iVar3);
      return;
    }
    puVar9 = param_1 + 9;
    FUN_0102c440(puVar9);
    puVar4 = (uint *)*puVar9;
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar4;
      bVar2 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar2);
    *puVar4 = uVar7 - 1;
    if (uVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0102a7d0(*puVar9);
      uVar7 = extraout_r1;
    }
    puVar4 = (uint *)0x0;
    if (param_1[2] != 0) {
      puVar4 = (uint *)param_1[3];
    }
    if (param_1[2] != 0 && puVar4 != (uint *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar4;
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = uVar7 - 1;
      if (uVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(param_1[3]);
        uVar7 = extraout_r1_00;
      }
    }
    if (param_1[4] != 0) {
      uVar7 = param_1[5];
    }
    if (param_1[4] != 0 && uVar7 != 0) {
      FUN_0148c7a0();
    }
    piVar5 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0xd],param_1[0xe]);
    }
    if (param_1[0xf] != 2) {
      FUN_0147c310(param_1 + 0xf);
      return;
    }
  }
  return;
}

