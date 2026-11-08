// FUN_0193b9b8 @ 0193b9b8 size=1084 calls_out=12 calls_in=1
// strings: rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others

void FUN_0193b9b8(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  int *local_a0;
  int local_9c;
  undefined8 local_98;
  int *local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  code *local_80;
  code *local_7c;
  code *pcStack_78;
  code *pcStack_74;
  int iStack_70;
  int iStack_6c;
  char **local_64;
  code *local_60;
  char *local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  undefined *local_4c;
  char *local_48;
  code *local_44;
  code *local_40;
  code *local_3c;
  code *local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  local_b8 = 0;
  local_bc = 4;
  local_c0 = 0;
  FUN_01937294(auStack_b0);
  local_98 = FUN_0193b5a8(&local_c0,auStack_b0);
  if (((int)((ulonglong)local_98 >> 0x20) != 0) && (1 < DAT_01d51b00)) {
    local_80 = (code *)((int)&local_98 + 4);
    local_7c = FUN_012fd02c;
    local_38 = (code *)&DAT_01d25c04;
    local_3c = (code *)&DAT_0000002e;
    local_40 = (code *)0x523c89;
    local_44 = (code *)&DAT_0000002e;
    local_48 = "rustls_platform_verifier::verification::others";
    FUN_0193b350(&DAT_005a6c5e,&local_80,2,&local_48);
  }
  local_88 = local_a4;
  local_8c = local_a0;
  piVar3 = local_a0 + local_9c * 7;
  local_90 = local_a0;
  local_84 = piVar3;
  if (local_9c != 0) {
    do {
      piVar5 = local_a0 + 7;
      pcVar6 = (char *)*local_a0;
      local_80 = (code *)local_a0[1];
      local_7c = (code *)local_a0[2];
      pcStack_78 = (code *)local_a0[3];
      pcStack_74 = (code *)local_a0[4];
      iStack_70 = local_a0[5];
      iStack_6c = local_a0[6];
      local_a0 = piVar5;
      if (pcVar6 == (char *)0x80000002) goto LAB_0193bb74;
      local_48 = pcVar6;
      local_44 = local_80;
      local_40 = local_7c;
      local_3c = pcStack_78;
      local_38 = pcStack_74;
      iStack_34 = iStack_70;
      iStack_30 = iStack_6c;
      if (1 < DAT_01d51b00) {
        local_64 = &local_48;
        local_60 = FUN_01938278;
        local_50 = 0x2e;
        local_4c = &DAT_01d25c24;
        local_58 = 0x2e;
        local_54 = "rustls_platform_verifier::verification::others";
        local_5c = "rustls_platform_verifier::verification::others";
        FUN_0193b350(&DAT_005a2632,&local_64,2,&local_5c);
      }
      FUN_0193b884(&local_48);
    } while (piVar5 != piVar3);
    local_a0 = piVar3;
  }
LAB_0193bb74:
  local_8c = local_a0;
  FUN_0193b7ec(&local_90);
  if (local_b8 == 0) {
    iVar4 = thunk_FUN_01be5118(0x2e);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2e);
    }
    FUN_01bed4e2(iVar4,
                 "No CA certificates were loaded from the systemEnforceIgnoreAllowEndEntityChainNoRootAnchors"
                 ,0x2e);
    *param_1 = &DAT_80000020;
    param_1[1] = 0x2e;
    param_1[2] = iVar4;
    param_1[3] = 0x2e;
    FUN_016f80a8(&local_c0);
  }
  else {
    if (3 < DAT_01d51b00) {
      local_80 = (code *)&local_98;
      local_7c = FUN_012fd02c;
      local_38 = (code *)&DAT_01d25c14;
      local_3c = (code *)0x2e;
      local_40 = (code *)0x523c89;
      local_44 = (code *)0x2e;
      local_48 = "rustls_platform_verifier::verification::others";
      FUN_0193b350(&DAT_0057ec08,&local_80,4,&local_48);
    }
    local_40 = (code *)local_c0;
    local_3c = (code *)local_bc;
    local_38 = (code *)local_b8;
    local_44 = (code *)0x1;
    local_48 = (char *)0x1;
    pcVar2 = (code *)thunk_FUN_01be5118(0x14);
    if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *(char **)pcVar2 = local_48;
    *(code **)(pcVar2 + 4) = local_44;
    *(code **)(pcVar2 + 8) = local_40;
    *(code **)(pcVar2 + 0xc) = local_3c;
    *(code **)(pcVar2 + 0x10) = local_38;
    do {
      iVar4 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x193bdf8);
      (*pcVar2)();
    }
    local_38 = (code *)param_2[8];
    iStack_34 = param_2[9];
    iStack_30 = param_2[10];
    iStack_2c = param_2[0xb];
    local_26 = 1;
    local_28 = 0x101;
    local_40 = (code *)0x0;
    local_44 = (code *)&SUB_00000004;
    local_48 = (char *)0x0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar4 + -1;
    local_3c = pcVar2;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa09c(param_2);
    }
    FUN_018fc7f0(&local_80,&local_48);
    if (local_80 == (code *)&DAT_0000000d) {
      *param_1 = 0x80000029;
      param_1[1] = local_7c;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *param_2;
        bVar1 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar1);
      *param_2 = iVar4 + -1;
      goto LAB_0193bdb0;
    }
    local_44 = (code *)&DAT_00000001;
    local_48 = (char *)0x1;
    local_40 = local_80;
    local_3c = local_7c;
    local_38 = pcStack_78;
    piVar3 = (int *)thunk_FUN_01be5118(0x14);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *piVar3 = (int)local_48;
    piVar3[1] = (int)local_44;
    piVar3[2] = (int)local_40;
    piVar3[3] = (int)local_3c;
    piVar3[4] = (int)local_38;
    param_1[1] = piVar3;
    param_1[2] = &DAT_01d25c44;
    *param_1 = &DAT_80000028;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar4 + -1;
LAB_0193bdb0:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(param_2);
  }
  return;
}

