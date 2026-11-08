// FUN_011ebc64 @ 011ebc64 size=2012 calls_out=15 calls_in=0
// strings: Signaling proceed to monitor... | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll

int FUN_011ebc64(int param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 ***local_110;
  undefined4 ****local_10c;
  undefined1 *local_108;
  undefined4 **local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 *local_64;
  undefined4 ***local_60;
  undefined4 ****local_5c;
  undefined1 *local_58;
  undefined1 local_51;
  undefined4 ***local_50;
  char **local_4c;
  undefined4 *local_48;
  char *local_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  undefined4 ****local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x55)) {
  case 0:
    *(undefined1 *)(param_1 + 0x54) = 1;
    FUN_019e6e74(&local_c0,&DAT_01c22750,0,0,500000000,&DAT_01c22750);
    FUN_01bed4e2(&local_110,&local_c0,0x50);
    FUN_01bed4e2(param_1,&local_110,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22760);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22760);
  }
  iVar5 = FUN_019e84a0(param_1,param_2);
  if (iVar5 != 0) {
    uVar3 = 3;
    goto LAB_011ec24c;
  }
  FUN_01431b40(param_1);
  if ((DAT_01d50f88 < 3) &&
     (((DAT_01d4c9f4 - 1 < 2 ||
       ((DAT_01d4c9f4 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c9ec), cVar4 != '\0')))) &&
      (iVar6 = FUN_01aaa278(DAT_01d4c9ec), iVar6 != 0)))) {
    local_bc = *(int *)(DAT_01d4c9ec + 0x20);
    if (local_bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22770);
    }
    local_4c = &local_44;
    local_b8 = *(undefined4 *)(DAT_01d4c9ec + 0x24);
    local_b4 = *(undefined4 *)(DAT_01d4c9ec + 0x28);
    local_64 = (undefined4 *)(DAT_01d4c9ec + 0x1c);
    local_c0 = (undefined4 **)*local_64;
    local_50 = &local_c0;
    local_6c = &local_50;
    local_68 = (undefined4 ****)0x1;
    local_b0 = 0;
    local_48 = (undefined4 *)&DAT_01d2ea4c;
    local_40 = (undefined4 ****)0x3f;
    local_44 = "Signaling proceed to monitor...";
    FUN_01aaaecc(DAT_01d4c9ec,&local_6c);
    iVar6 = DAT_01d4c9ec;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4c9ec + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4c9ec + 0x18);
      local_30 = (undefined4 ***)&DAT_00000003;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar2,&local_30);
      if (iVar7 != 0) {
        local_110 = local_30;
        local_10c = local_2c;
        local_108 = (undefined1 *)local_28;
        FUN_01aaa328(iVar6,pcVar2,puVar9[4],&local_110,&local_6c);
      }
    }
  }
  else {
    iVar6 = DAT_01d4c9ec;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_5c = *(undefined4 *****)(DAT_01d4c9ec + 0x14);
      local_58 = *(undefined1 **)(DAT_01d4c9ec + 0x18);
      local_60 = (undefined4 ***)&DAT_00000003;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar2,&local_60);
      if (iVar7 != 0) {
        local_48 = (undefined4 *)(DAT_01d4c9ec + 0x1c);
        local_c0 = (undefined4 **)*local_48;
        local_bc = *(int *)(DAT_01d4c9ec + 0x20);
        if (local_bc == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22770);
        }
        local_30 = &local_c0;
        local_b8 = *(undefined4 *)(DAT_01d4c9ec + 0x24);
        local_b4 = *(undefined4 *)(DAT_01d4c9ec + 0x28);
        local_2c = &local_6c;
        local_50 = &local_30;
        local_b0 = 0;
        local_4c = (char **)&DAT_00000001;
        local_6c = (undefined4 ****)0x40197f;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_68 = (undefined4 ****)0x3f;
        local_110 = local_60;
        local_10c = local_5c;
        local_108 = local_58;
        FUN_01aaa328(iVar6,pcVar2,puVar9[4],&local_110,&local_50);
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  *(undefined1 *)(piVar8 + 7) = 1;
  iVar6 = FUN_019f1658(piVar8 + 2);
  if (iVar6 == 0) {
    iVar7 = piVar8[7];
    *(undefined1 *)(piVar8 + 7) = 0;
    if ((char)iVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar7 + -1;
    if (iVar7 == 1) goto LAB_011ec088;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar7 + -1;
    uVar3 = 1;
    if (iVar7 != 1) goto LAB_011ec24c;
LAB_011ec088:
    DataMemoryBarrier(0xb);
    FUN_019da43c(piVar8);
    uVar3 = 1;
    if (iVar6 != 0) goto LAB_011ec24c;
  }
  local_51 = 0;
  if (((DAT_01d50f88 < 5) &&
      ((DAT_01d4c9e8 - 1 < 2 ||
       ((DAT_01d4c9e8 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c9e0), cVar4 != '\0')))))) &&
     (iVar6 = FUN_01aaa278(DAT_01d4c9e0), iVar6 != 0)) {
    if (*(int *)(DAT_01d4c9e0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22780);
    }
    local_b8 = *(undefined4 *)(DAT_01d4c9e0 + 0x24);
    local_2c = (undefined4 ****)&local_44;
    local_b4 = *(undefined4 *)(DAT_01d4c9e0 + 0x28);
    local_48 = (undefined4 *)(DAT_01d4c9e0 + 0x1c);
    local_c0 = (undefined4 **)*local_48;
    local_30 = &local_c0;
    local_4c = (char **)0x1;
    local_40 = &local_6c;
    local_50 = &local_30;
    local_6c = (undefined4 ****)&local_51;
    local_b0 = 0;
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = &DAT_0058a08a;
    local_68 = (undefined4 ****)&LAB_009e6c18;
    local_bc = *(int *)(DAT_01d4c9e0 + 0x20);
    FUN_01aaaecc(DAT_01d4c9e0,&local_50);
    iVar6 = DAT_01d4c9e0;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_10c = *(undefined4 *****)(DAT_01d4c9e0 + 0x14);
      local_108 = *(undefined1 **)(DAT_01d4c9e0 + 0x18);
      local_110 = (undefined4 ***)0x1;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar2,&local_110);
      if (iVar7 != 0) {
        FUN_01aaa328(iVar6,pcVar2,puVar9[4],&local_110,&local_50);
      }
    }
  }
  else {
    iVar6 = DAT_01d4c9e0;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_38 = *(undefined4 *)(DAT_01d4c9e0 + 0x14);
      local_34 = *(undefined4 *)(DAT_01d4c9e0 + 0x18);
      local_3c = 1;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar2,&local_3c);
      if (iVar7 != 0) {
        if (*(int *)(DAT_01d4c9e0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22780);
        }
        local_10c = &local_6c;
        local_b8 = *(undefined4 *)(DAT_01d4c9e0 + 0x24);
        local_b4 = *(undefined4 *)(DAT_01d4c9e0 + 0x28);
        local_110 = &local_c0;
        local_30 = &local_110;
        local_2c = (undefined4 ****)0x1;
        local_68 = &local_50;
        local_b0 = 0;
        local_50 = (undefined4 ***)&local_51;
        local_108 = &DAT_01d2ea4c;
        local_6c = (undefined4 ****)&DAT_0058a08a;
        local_4c = (char **)&LAB_009e6c18;
        local_c0 = *(undefined4 ***)(DAT_01d4c9e0 + 0x1c);
        local_bc = *(int *)(DAT_01d4c9e0 + 0x20);
        local_28 = (undefined4 *)(DAT_01d4c9e0 + 0x1c);
        FUN_01aaa328(iVar6,pcVar2,puVar9[4],&local_3c,&local_30);
      }
    }
  }
  uVar3 = 1;
LAB_011ec24c:
  *(undefined1 *)(param_1 + 0x55) = uVar3;
  return iVar5;
}

