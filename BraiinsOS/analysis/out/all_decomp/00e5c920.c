// FUN_00e5c920 @ 00e5c920 size=1444 calls_out=6 calls_in=4
// strings: 

int FUN_00e5c920(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    piVar3 = (int *)*param_2;
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 4) {
      FUN_00edff4c(piVar3,iVar1,4,1,1);
      iVar1 = piVar3[2];
    }
    iVar4 = piVar3[1];
    uVar6 = 0x6c6c756e;
    break;
  case 1:
    piVar3 = (int *)*param_2;
    if (param_1[1] == '\0') {
      iVar1 = piVar3[2];
      if ((uint)(*piVar3 - iVar1) < 5) {
        FUN_00edff4c(piVar3,iVar1,5,1,1);
        iVar1 = piVar3[2];
      }
      iVar4 = piVar3[1];
      piVar3[2] = iVar1 + 5;
      *(undefined4 *)(iVar4 + iVar1) = 0x736c6166;
      *(undefined1 *)((undefined4 *)(iVar4 + iVar1) + 1) = 0x65;
      return 0;
    }
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 4) {
      FUN_00edff4c(piVar3,iVar1,4,1,1);
      iVar1 = piVar3[2];
    }
    iVar4 = piVar3[1];
    uVar6 = 0x65757274;
    break;
  case 2:
    FUN_00e5cedc(param_1 + 8,*param_2);
    return 0;
  case 3:
    FUN_00e5d350(&local_58,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if ((char)local_58 == '\x04') {
      return 0;
    }
    iVar1 = FUN_0157c4a0(local_58,local_54);
    return iVar1;
  case 4:
    piVar3 = (int *)*param_2;
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x5b;
    piVar3[2] = iVar1 + 1;
    if (iVar5 != 0) {
      iVar1 = FUN_00e5c920(iVar4,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (iVar5 != 1) {
        iVar1 = iVar5 * 0x18 + -0x18;
        do {
          iVar4 = iVar4 + 0x18;
          iVar5 = piVar3[2];
          if (*piVar3 == iVar5) {
            FUN_00edff4c(piVar3,iVar5,1,1,1);
            iVar5 = piVar3[2];
          }
          *(undefined1 *)(piVar3[1] + iVar5) = 0x2c;
          piVar3[2] = iVar5 + 1;
          iVar5 = FUN_00e5c920(iVar4,param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar1 = iVar1 + -0x18;
        } while (iVar1 != 0);
      }
    }
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    iVar4 = piVar3[1];
    uVar2 = 0x5d;
LAB_00e5ccf0:
    *(undefined1 *)(iVar4 + iVar1) = uVar2;
    piVar3[2] = iVar1 + 1;
    return 0;
  case 5:
    piVar3 = (int *)*param_2;
    iVar4 = *(int *)(param_1 + 0xc);
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x7b;
    iVar1 = iVar1 + 1;
    piVar3[2] = iVar1;
    if (iVar4 == 0) {
      if (*piVar3 == iVar1) {
        FUN_00edff4c(piVar3,iVar1,1,1,1);
        iVar1 = piVar3[2];
      }
      *(undefined1 *)(piVar3[1] + iVar1) = 0x7d;
      piVar3[2] = iVar1 + 1;
    }
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(undefined4 *)(param_1 + 8);
    local_38 = 0;
    if (local_50 != 0) {
      local_38 = iVar4;
    }
    local_58 = (uint)(local_50 != 0);
    local_44 = 0;
    local_54 = 0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
    uVar8 = FUN_00f45584(&local_58);
    iVar1 = (int)uVar8;
    if (iVar1 == 0) {
      iVar1 = 0;
      if (iVar4 != 0) {
LAB_00e5ccb4:
        iVar1 = piVar3[2];
        if (*piVar3 == iVar1) {
          FUN_00edff4c(piVar3,iVar1,1,1,1);
          iVar1 = piVar3[2];
        }
        iVar4 = piVar3[1];
        uVar2 = 0x7d;
        goto LAB_00e5ccf0;
      }
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 4);
      uVar7 = *(undefined4 *)(iVar1 + 8);
      if (iVar4 == 0) {
        iVar1 = piVar3[2];
        if (*piVar3 == iVar1) {
          FUN_00edff4c(piVar3,iVar1,1,1,1);
          iVar1 = piVar3[2];
        }
        *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
        piVar3[2] = iVar1 + 1;
      }
      FUN_00e5d350(&local_30,piVar3,uVar6,uVar7);
      if ((char)local_30 != '\x04') {
LAB_00e5cd80:
        iVar1 = FUN_0157c4a0(local_30,local_2c);
        return iVar1;
      }
      iVar1 = piVar3[2];
      if (*piVar3 == iVar1) {
        FUN_00edff4c(piVar3,iVar1,1,1,1);
        iVar1 = piVar3[2];
      }
      *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
      piVar3[2] = iVar1 + 1;
      iVar1 = FUN_00e5c920((int)((ulonglong)uVar8 >> 0x20),param_2);
      if (iVar1 == 0) {
        do {
          uVar8 = FUN_00f45584(&local_58);
          iVar1 = (int)uVar8;
          if (iVar1 == 0) goto LAB_00e5ccb4;
          uVar6 = *(undefined4 *)(iVar1 + 4);
          uVar7 = *(undefined4 *)(iVar1 + 8);
          iVar1 = piVar3[2];
          if (*piVar3 == iVar1) {
            FUN_00edff4c(piVar3,iVar1,1,1,1);
            iVar1 = piVar3[2];
          }
          *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
          piVar3[2] = iVar1 + 1;
          FUN_00e5d350(&local_30,piVar3,uVar6,uVar7);
          if ((char)local_30 != '\x04') goto LAB_00e5cd80;
          iVar1 = piVar3[2];
          if (*piVar3 == iVar1) {
            FUN_00edff4c(piVar3,iVar1,1,1,1);
            iVar1 = piVar3[2];
          }
          *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
          piVar3[2] = iVar1 + 1;
          iVar1 = FUN_00e5c920((int)((ulonglong)uVar8 >> 0x20),param_2);
        } while (iVar1 == 0);
      }
    }
    return iVar1;
  }
  *(undefined4 *)(iVar4 + iVar1) = uVar6;
  piVar3[2] = iVar1 + 4;
  return 0;
}

