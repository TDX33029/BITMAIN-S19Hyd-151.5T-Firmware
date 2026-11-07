// FUN_00ad7290 @ 00ad7290 size=1360 calls_out=11 calls_in=1
// strings: status | status_since | status_until | precisioniso1+ignoreoffset_houroffset_minuteoffset_second | status | maxfrom_wildcardinput_offset

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00ad7290(undefined1 *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  int local_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  char local_200 [28];
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  char local_1d8 [4];
  int local_1d4;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  char local_1a0 [4];
  int local_19c;
  char local_188 [4];
  int local_184;
  char local_170 [28];
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [64];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char local_70 [40];
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_210 = -0x80000000;
  local_214 = 0;
  local_21c = 0;
  local_220 = 0;
  iVar8 = FUN_007025b0(&local_220,"status",6);
  uVar3 = local_20c;
  iVar2 = local_210;
  if (iVar8 != 0) goto LAB_00ad7540;
  if (local_220 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  bVar12 = local_210 == -0x80000000;
  local_210 = -0x80000000;
  if (bVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_1dc = local_208;
  local_1e0 = local_20c;
  local_1e4 = iVar2;
  if (*param_2 == 2 && param_2[1] == 0) {
    local_1d8[0] = '\0';
    goto LAB_00ad7328;
  }
  local_1b0 = -0x80000000;
  local_1b4 = 0;
  local_1bc = 0;
  local_1c0 = 0;
  iVar8 = FUN_00a480e4(&local_1c0,"status_since",0xc,param_2);
  if (iVar8 == 0) {
    if (local_1c0 == 1) {
      local_48 = 10;
      iVar8 = FUN_01966fbc(&local_48,0,0);
      goto LAB_00ad752c;
    }
    iVar8 = FUN_007025b0(&local_1c0,"status_until",0xc);
    uVar5 = local_1ac;
    iVar4 = local_1b0;
    if (iVar8 != 0) goto LAB_00ad752c;
    if (local_1c0 != 0) goto LAB_00ad7e90;
    bVar12 = local_1b0 == -0x80000000;
    local_1b0 = -0x80000000;
    if (bVar12) goto LAB_00ad7eac;
    local_100 = local_1a8;
    local_104 = local_1ac;
    uVar9 = param_2[6];
    iVar11 = param_2[7];
    local_108 = iVar4;
    if (uVar9 != 3 || iVar11 != 0) {
      local_d0 = -0x80000000;
      local_d4 = 0;
      local_dc = 0;
      local_e0 = 0;
      iVar8 = FUN_007025b0(&local_e0,"precisioniso1+ignoreoffset_houroffset_minuteoffset_second",9);
      uVar7 = local_cc;
      iVar6 = local_d0;
      if (iVar8 == 0) {
        if (local_e0 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        local_d0 = -0x80000000;
        if (iVar6 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_b8 = local_c8;
        local_bc = local_cc;
        local_c0 = iVar6;
        if (uVar9 == 2 && iVar11 == 0) {
          local_188[0] = '\0';
        }
        else {
          uVar10 = 3;
          pcVar1 = "maxfrom_wildcardinput_offset";
          if ((uVar9 & 1) != 0) {
            uVar10 = 5;
            pcVar1 = "exact";
          }
          FUN_00a43e1c(local_188,pcVar1,uVar10,param_2[9],param_2[8],param_2[9],param_2[10]);
          if (local_188[0] == '\x06') {
            FUN_019bb7e0(iVar6,uVar7);
            iVar8 = local_184;
            goto LAB_00ad74f4;
          }
        }
        FUN_0196b484(&local_48,(uint)&local_e0 | 4,&local_c0,local_188);
        if ((char)local_48 != '\x06') {
          FUN_00db4764(&local_48);
        }
        local_48 = local_e0;
        uStack_44 = local_dc;
        uStack_40 = uStack_d8;
        uStack_3c = local_d4;
        iStack_38 = local_d0;
        uStack_34 = local_cc;
        uStack_30 = local_c8;
        uStack_2c = uStack_c4;
        FUN_0196ac88(local_1a0,&local_48);
        if (local_1a0[0] != '\x06') goto LAB_00ad7454;
        iVar8 = local_19c;
      }
      else {
LAB_00ad74f4:
        FUN_0127464c(&local_e0);
      }
      FUN_019bb7e0(iVar4,uVar5);
      goto LAB_00ad752c;
    }
    local_1a0[0] = '\0';
LAB_00ad7454:
    uVar9 = (uint)&local_1c0 | 4;
    FUN_0196b484(local_70,uVar9,&local_108,local_1a0);
    if (local_70[0] != '\x06') {
      FUN_00db4764(local_70);
    }
    if (local_1c0 == 1) {
      local_48 = 10;
      iVar8 = FUN_01966fbc(&local_48,0,0);
      goto LAB_00ad752c;
    }
    iVar8 = FUN_007025b0(&local_1c0,"status",6);
    iVar4 = local_1b0;
    if (iVar8 != 0) goto LAB_00ad752c;
    if (local_1c0 == 1) {
LAB_00ad7e90:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
    }
    bVar12 = local_1b0 == -0x80000000;
    local_1b0 = -0x80000000;
    if (bVar12) {
LAB_00ad7eac:
      local_1b0 = 0x80000000;
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
    }
    local_14c = local_1a8;
    local_150 = local_1ac;
    local_154 = iVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((char)param_2[0xc]) {
    case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_148[0] = 0;
    FUN_0196b484(local_170,uVar9,&local_154,local_148);
    if (local_170[0] != '\x06') {
      FUN_00db4764(local_170);
    }
    local_48 = local_1c0;
    uStack_44 = local_1bc;
    uStack_40 = uStack_1b8;
    uStack_3c = local_1b4;
    iStack_38 = local_1b0;
    uStack_34 = local_1ac;
    uStack_30 = local_1a8;
    uStack_2c = uStack_1a4;
    FUN_0196ac88(local_1d8);
    if (local_1d8[0] != '\x06') {
LAB_00ad7328:
      FUN_0196b484(local_200,(uint)&local_220 | 4,&local_1e4,local_1d8);
      if (local_200[0] != '\x06') {
        FUN_00db4764(local_200);
      }
      local_48 = local_220;
      uStack_44 = local_21c;
      uStack_40 = uStack_218;
      uStack_3c = local_214;
      iStack_38 = local_210;
      uStack_34 = local_20c;
      uStack_30 = local_208;
      uStack_2c = uStack_204;
      FUN_0196ac88(param_1);
      return;
    }
    iVar8 = local_1d4;
  }
  else {
LAB_00ad752c:
    FUN_0127464c(&local_1c0);
  }
  FUN_019bb7e0(iVar2,uVar3);
LAB_00ad7540:
  *(int *)(param_1 + 4) = iVar8;
  *param_1 = 6;
  FUN_0127464c(&local_220);
  return;
}

