// FUN_01753478 @ 01753478 size=1212 calls_out=15 calls_in=1
// strings: rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others

void FUN_01753478(int *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
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
  code *local_78;
  code *local_74;
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
  
  local_78 = (code *)*param_2;
  local_80 = (code *)param_2[1];
  local_c0 = 0;
  local_c8 = 0;
  local_c4 = 4;
  pcVar4 = local_80 + param_2[2] * 0xc;
  local_7c = local_80;
  local_74 = pcVar4;
  if (param_2[2] != 0) {
    pcVar2 = local_80;
    local_7c = local_80;
    do {
      pcVar7 = pcVar2 + 0xc;
      if (*(int *)pcVar2 == -0x7fffffff) goto LAB_01753528;
      local_b8 = *(int *)(pcVar2 + 4);
      iStack_b4 = *(int *)(pcVar2 + 8);
      local_bc = *(int *)pcVar2;
      FUN_01915310(&local_48,&local_c8,&local_bc);
      if (local_48 != (char *)0x80000029) {
        piVar5 = (int *)((uint)&local_48 | 4);
        iVar6 = piVar5[1];
        iVar8 = piVar5[2];
        param_1[1] = *piVar5;
        param_1[2] = iVar6;
        param_1[3] = iVar8;
        iVar6 = piVar5[4];
        iVar8 = piVar5[5];
        iVar9 = piVar5[6];
        param_1[4] = piVar5[3];
        param_1[5] = iVar6;
        param_1[6] = iVar8;
        param_1[7] = iVar9;
        *param_1 = (int)local_48;
        local_7c = pcVar7;
        FUN_0192f318(&local_80);
        goto LAB_017538dc;
      }
      pcVar3 = pcVar2 + 0xc;
      pcVar2 = pcVar7;
    } while (pcVar3 != pcVar4);
    pcVar7 = pcVar4;
LAB_01753528:
    local_7c = pcVar7;
  }
  FUN_0192f318(&local_80);
  FUN_01937294(auStack_b0);
  local_98 = FUN_0193b5a8(&local_c8,auStack_b0);
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
  piVar5 = local_a0 + local_9c * 7;
  local_90 = local_a0;
  local_84 = piVar5;
  if (local_9c != 0) {
    do {
      piVar10 = local_a0 + 7;
      pcVar11 = (char *)*local_a0;
      local_80 = (code *)local_a0[1];
      local_7c = (code *)local_a0[2];
      local_78 = (code *)local_a0[3];
      local_74 = (code *)local_a0[4];
      iStack_70 = local_a0[5];
      iStack_6c = local_a0[6];
      if (pcVar11 == (char *)0x80000002) goto LAB_017536c4;
      local_48 = pcVar11;
      local_44 = local_80;
      local_40 = local_7c;
      local_3c = local_78;
      local_38 = local_74;
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
      FUN_01753a7c(&local_48);
      local_a0 = piVar10;
    } while (piVar10 != piVar5);
    piVar10 = piVar5;
LAB_017536c4:
    local_8c = piVar10;
  }
  FUN_0193b7ec(&local_90);
  if (local_c0 == 0) {
    iVar6 = thunk_FUN_01be5118(0x2e);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2e);
    }
    FUN_01bed4e2(iVar6,
                 "No CA certificates were loaded from the systemEnforceIgnoreAllowEndEntityChainNoRootAnchors"
                 ,0x2e);
    *param_1 = (int)&DAT_80000020;
    param_1[1] = 0x2e;
    param_1[2] = iVar6;
    param_1[3] = 0x2e;
LAB_017538dc:
    FUN_016f80a8(&local_c8);
  }
  else {
    if (3 < DAT_01d51b00) {
      local_80 = (code *)&local_98;
      local_7c = FUN_012fd02c;
      local_38 = (code *)&DAT_01d25c14;
      local_3c = (code *)&DAT_0000002e;
      local_40 = (code *)0x523c89;
      local_44 = (code *)&DAT_0000002e;
      local_48 = "rustls_platform_verifier::verification::others";
      FUN_0193b350(&DAT_0057ec08,&local_80,4,&local_48);
    }
    pcVar4 = (code *)FUN_0143cda0(&local_c8);
    do {
      iVar6 = *param_3;
      bVar1 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar1);
    *param_3 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xfdee,0x1753934);
      (*pcVar4)();
    }
    local_38 = (code *)param_3[8];
    iStack_34 = param_3[9];
    iStack_30 = param_3[10];
    iStack_2c = param_3[0xb];
    local_26 = 1;
    local_28 = 0x101;
    local_40 = (code *)0x0;
    local_44 = (code *)&SUB_00000004;
    local_48 = (char *)0x0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *param_3;
      bVar1 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar1);
    *param_3 = iVar6 + -1;
    local_3c = pcVar4;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa09c(param_3);
    }
    FUN_018fc7f0(&local_80,&local_48);
    if (local_80 == (code *)&DAT_0000000d) {
      *param_1 = -0x7fffffd7;
      param_1[1] = (int)local_7c;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *param_3;
        bVar1 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar1);
      *param_3 = iVar6 + -1;
      goto LAB_017538fc;
    }
    local_44 = (code *)&DAT_00000001;
    local_48 = (char *)0x1;
    local_40 = local_80;
    local_3c = local_7c;
    local_38 = local_78;
    piVar5 = (int *)thunk_FUN_01be5118(0x14);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *piVar5 = (int)local_48;
    piVar5[1] = (int)local_44;
    piVar5[2] = (int)local_40;
    piVar5[3] = (int)local_3c;
    piVar5[4] = (int)local_38;
    param_1[1] = (int)piVar5;
    param_1[2] = (int)&DAT_01d19afc;
    *param_1 = (int)&DAT_80000028;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_3;
    bVar1 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar1);
  *param_3 = iVar6 + -1;
LAB_017538fc:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(param_3);
  }
  return;
}

