// FUN_00e6c0c8 @ 00e6c0c8 size=1628 calls_out=7 calls_in=1
// strings: pause_reasons | ManagerUserAction | SupervisorDangerousTemperatureInitialPowerTargetScaledPowerTargetInitialHashrateTarget | SupervisorMissingLicense | SupervisorBrokenFans | SupervisorDeadPools

/* WARNING: Type propagation algorithm not settling */

int FUN_00e6c0c8(char *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar12;
  undefined1 *puVar11;
  int iVar13;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar3 = FUN_0157c50c(&local_30,0,0);
    return iVar3;
  }
  iVar3 = FUN_00e5b230(param_1,"pause_reasons",0xd);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)*puVar4;
  iVar3 = piVar6[2];
  if ((uint)(*piVar6 - iVar3) < 2) {
    FUN_00edff4c(piVar6,iVar3,2,1,1);
    iVar3 = piVar6[2];
  }
  piVar6[2] = iVar3 + 2;
  *(undefined2 *)(piVar6[1] + iVar3) = 0x203a;
  iVar3 = puVar4[3];
  piVar6 = (int *)*puVar4;
  iVar13 = iVar3 + 1;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[3] = iVar13;
  iVar5 = piVar6[2];
  if (*piVar6 == iVar5) {
    FUN_00edff4c(piVar6,iVar5,1,1,1);
    iVar5 = piVar6[2];
  }
  iVar7 = iVar5 + 1;
  *(undefined1 *)(piVar6[1] + iVar5) = 0x5b;
  piVar6[2] = iVar7;
  if (param_3 == 0) {
    puVar4[3] = iVar3;
  }
  else {
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    bVar2 = true;
    puVar12 = param_2;
    do {
      puVar11 = puVar12 + 1;
      uVar1 = *puVar12;
      iVar5 = iVar13;
      if (bVar2) {
        iVar7 = piVar6[2];
        if (*piVar6 == iVar7) {
          FUN_00edff4c(piVar6,iVar7,1,1,1);
          iVar7 = piVar6[2];
        }
        iVar10 = iVar7 + 1;
        *(undefined1 *)(piVar6[1] + iVar7) = 10;
        piVar6[2] = iVar10;
      }
      else {
        iVar7 = piVar6[2];
        if ((uint)(*piVar6 - iVar7) < 2) {
          FUN_00edff4c(piVar6,iVar7,2,1,1);
          iVar7 = piVar6[2];
        }
        iVar10 = iVar7 + 2;
        *(undefined2 *)(piVar6[1] + iVar7) = 0xa2c;
        piVar6[2] = iVar10;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if ((uint)(*piVar6 - iVar10) < uVar9) {
          FUN_00edff4c(piVar6,iVar10,uVar9,1,1);
          iVar10 = piVar6[2];
        }
        FUN_016dd1aa(piVar6[1] + iVar10,uVar8,uVar9);
        iVar10 = iVar10 + uVar9;
        piVar6[2] = iVar10;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar1) {
      case 0:
        if (*piVar6 == iVar10) {
          FUN_00edff4c(piVar6,iVar10,1,1,1);
          iVar10 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar10) = 0x22;
        piVar6[2] = iVar10 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,"ManagerUserAction",0x11);
        break;
      case 1:
        if (*piVar6 == iVar10) {
          FUN_00edff4c(piVar6,iVar10,1,1,1);
          iVar10 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar10) = 0x22;
        piVar6[2] = iVar10 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,"SupervisorDeadPools",0x13);
        break;
      case 2:
        if (*piVar6 == iVar10) {
          FUN_00edff4c(piVar6,iVar10,1,1,1);
          iVar10 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar10) = 0x22;
        piVar6[2] = iVar10 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,"SupervisorMissingLicense",0x18);
        break;
      case 3:
        if (*piVar6 == iVar10) {
          FUN_00edff4c(piVar6,iVar10,1,1,1);
          iVar10 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar10) = 0x22;
        piVar6[2] = iVar10 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,"SupervisorBrokenFans",0x14);
        break;
      case 4:
        if (*piVar6 == iVar10) {
          FUN_00edff4c(piVar6,iVar10,1,1,1);
          iVar10 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar10) = 0x22;
        piVar6[2] = iVar10 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,
                     "SupervisorDangerousTemperatureInitialPowerTargetScaledPowerTargetInitialHashrateTarget"
                     ,0x1e);
      }
      if ((char)local_30 == '\x04') {
        iVar5 = piVar6[2];
        if (*piVar6 == iVar5) {
          FUN_00edff4c(piVar6,iVar5,1,1,1);
          iVar5 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar5) = 0x22;
        piVar6[2] = iVar5 + 1;
      }
      else {
        iVar5 = FUN_0157c4a0(local_30,local_2c);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      *(undefined1 *)(puVar4 + 4) = 1;
      bVar2 = false;
      puVar12 = puVar11;
    } while (puVar11 != param_2 + param_3);
    iVar13 = piVar6[2];
    iVar5 = *piVar6;
    puVar4[3] = iVar3;
    if (iVar5 == iVar13) {
      FUN_00edff4c(piVar6,iVar13,1,1,1);
      iVar13 = piVar6[2];
    }
    iVar7 = iVar13 + 1;
    *(undefined1 *)(piVar6[1] + iVar13) = 10;
    piVar6[2] = iVar7;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((uint)(*piVar6 - iVar7) < uVar9) {
        FUN_00edff4c(piVar6,iVar7,uVar9,1,1);
        iVar7 = piVar6[2];
      }
      FUN_016dd1aa(piVar6[1] + iVar7,uVar8,uVar9);
      iVar7 = iVar7 + uVar9;
      piVar6[2] = iVar7;
    }
  }
  if (*piVar6 == iVar7) {
    FUN_00edff4c(piVar6,iVar7,1,1,1);
    iVar3 = piVar6[2];
    iVar7 = iVar3;
  }
  else {
    iVar3 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar7) = 0x5d;
  piVar6[2] = iVar3 + 1;
  *(undefined1 *)(puVar4 + 4) = 1;
  return 0;
}

