// FUN_007b03b4 @ 007b03b4 size=576 calls_out=10 calls_in=1
// strings: Cannot get the extra data start | seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest

void FUN_007b03b4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 local_28;
  undefined2 local_27;
  
  if (*(short *)(param_3 + 0x20) == 0) {
LAB_007b05d0:
    *param_1 = 0x80000007;
    return;
  }
  local_2c = 1;
  if (param_6 == 0 && (0x13 < param_5) <= param_6) {
    local_2c = 2;
  }
  *(undefined2 *)(param_3 + 0x20) = local_2c;
  if ((*(uint *)(param_3 + 0x10) & 1) == 0) {
    FUN_01af9864((uint)&local_40 | 4,"Cannot get the extra data start",0x1f);
LAB_007b04e8:
    local_40 = local_3c;
    local_3c = local_38;
  }
  else {
    uVar6 = *(uint *)(param_3 + 0x80);
    if (uVar6 + *(uint *)(param_3 + 0x18) != *(int *)(param_2 + 8) ||
        *(int *)(param_3 + 0x84) + *(int *)(param_3 + 0x1c) +
        (uint)CARRY4(uVar6,*(uint *)(param_3 + 0x18)) != *(int *)(param_2 + 0xc)) {
      FUN_019a18a8((uint)&local_40 | 4,0x24,
                   "seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest",0x15)
      ;
      goto LAB_007b04e8;
    }
    local_28 = *(undefined1 *)(param_3 + 0x22);
    local_27 = 0;
    if (*(short *)(param_3 + 0x24) != 0) {
      if (*(short *)(param_3 + 0x24) == 1) {
        local_27 = 8;
      }
      else {
        local_27 = *(undefined2 *)(param_3 + 0x26);
      }
    }
    local_2a = 0x4541;
    local_30 = 0x79901;
    FUN_007b01f0(&local_40,param_2,&local_30,0xb);
    if (((char)local_40 == '\x04') || (((uint)local_40 & 0xff) == 4)) {
      piVar4 = *(int **)(param_3 + 0x50);
      if (piVar4 != (int *)0x0) {
        puVar3 = *(undefined **)(param_3 + 0x54);
        uVar7 = 0;
        if ((int)puVar3 < 0) {
LAB_007b04a4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar7,puVar3);
        }
        if (puVar3 == (undefined *)0x0) {
          iVar1 = 1;
          puVar5 = (undefined *)0x0;
        }
        else {
          uVar7 = 1;
          iVar1 = FUN_01298504(puVar3,1);
          puVar5 = puVar3;
          if (iVar1 == 0) goto LAB_007b04a4;
        }
        FUN_01bed4e2(iVar1,piVar4 + 2,puVar3);
        puVar2 = (undefined *)(uVar6 + 0xb);
        bVar9 = 0xfffffff3 < uVar6;
        bVar8 = uVar6 == 0xfffffff4;
        if (uVar6 < 0xfffffff5) {
          bVar9 = puVar3 <= puVar2;
          bVar8 = puVar2 == puVar3;
        }
        if (bVar9 && !bVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar6,puVar2,puVar3,&DAT_01c09d14);
        }
        FUN_01bed4e2(iVar1 + uVar6,&local_30,0xb);
        local_40 = puVar5;
        local_3c = (undefined *)iVar1;
        local_38 = puVar3;
        FUN_016571c0(&local_40);
        uVar10 = FUN_0070153c();
        DataMemoryBarrier(0xb);
        do {
          iVar1 = *piVar4;
          bVar8 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar8);
        *piVar4 = iVar1 + -1;
        if (iVar1 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(*(undefined4 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 0x54));
        }
        *(undefined8 *)(param_3 + 0x50) = uVar10;
        goto LAB_007b05d0;
      }
      local_3c = (undefined *)0x43;
      uVar7 = 0x80000000;
      local_40 = &DAT_003e1d32;
      goto LAB_007b04f4;
    }
  }
  uVar7 = 0x80000001;
LAB_007b04f4:
  param_1[1] = local_40;
  *param_1 = uVar7;
  param_1[2] = local_3c;
  return;
}

