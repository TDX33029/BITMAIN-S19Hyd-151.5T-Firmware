// FUN_00027460 @ 00027460  size=1536
// callers: [FUN_0004ebd0, FUN_0003ffbc, FUN_000282a4, FUN_00027a64]

void FUN_00027460(int param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int param4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  uint local_208c;
  uint local_2088;
  uint local_2080;
  undefined4 local_2078 [10];
  int local_2050 [4];
  undefined4 local_2040;
  undefined4 uStack_203c;
  undefined4 uStack_2038;
  undefined4 uStack_2034;
  undefined4 local_2030;
  undefined4 uStack_202c;
  char acStack_2028 [8196];
  
  uVar3 = (uint)param_5;
  fVar8 = (float)FUN_00024efc();
  iVar9 = (int)fVar8;
  if (iVar9 < 0x4b0) {
    uVar4 = uVar3 & 1;
  }
  else {
    uVar4 = 0;
  }
  local_2080 = DAT_000be63c;
  local_2088 = param_4;
  local_208c = uVar3;
  if (DAT_000be63c < 4) {
    if (uVar4 == 0) {
      if (uVar3 == 0) {
        param_3 = uVar3;
      }
      else {
        local_208c = (int)(param_3 - param_4) / 10;
        if ((int)local_208c < 10) {
          local_208c = 10;
        }
      }
    }
    else {
      uVar4 = ((0x4b0U - iVar9) / 0x32) * 10;
      if (0xef < uVar4) {
        uVar4 = 0xf0;
      }
LAB_0002763c:
      param_3 = param_3 + uVar4;
      if (0x883 < (int)param_3) {
        param_3 = 0x884;
      }
      local_2088 = 0x884;
      if ((int)(param_4 + uVar4) < 0x884) {
        local_2088 = param_4 + uVar4;
      }
      FUN_000246cc(param_3,3);
LAB_0002766c:
      local_2080 = DAT_000be63c;
      local_208c = (int)(param_3 - local_2088) / 10;
      if ((int)local_208c < 10) {
        local_208c = 10;
      }
      if (3 < DAT_000be63c) {
        snprintf(acStack_2028,0x2000,
                 "tuning_frequency from freq %d to freq %d, set vol to target voltage=%d, vol_cur=%d, vol_step=%d"
                 ,param_1,param_2,local_2088,param_3,local_208c);
        goto LAB_00027964;
      }
    }
  }
  else {
    snprintf(acStack_2028,0x2000,"miner_power:%d",iVar9);
    FUN_0004948c(3,acStack_2028,0);
    if (uVar4 != 0) {
      uVar4 = ((0x4b0U - iVar9) / 0x32) * 10;
      if (0xef < uVar4) {
        uVar4 = 0xf0;
      }
      if (3 < DAT_000be63c) {
        snprintf(acStack_2028,0x2000,"comp:%d",uVar4);
        FUN_0004948c(3,acStack_2028,0);
      }
      goto LAB_0002763c;
    }
    local_2080 = DAT_000be63c;
    if (uVar3 != 0) goto LAB_0002766c;
    if (DAT_000be63c < 4) {
      param_3 = uVar3;
      goto LAB_000274dc;
    }
    snprintf(acStack_2028,0x2000,"tuning_frequency from freq %d to freq %d, end_vol=%d, not set vol"
             ,param_1,param_2,param_4);
    param_3 = uVar3;
LAB_00027964:
    FUN_0004948c(3,acStack_2028,0);
    local_2080 = DAT_000be63c;
  }
LAB_000274dc:
  uVar6 = 0;
  local_2078[0] = *DAT_00027a60;
  local_2078[1] = DAT_00027a60[1];
  local_2078[2] = DAT_00027a60[2];
  local_2078[3] = DAT_00027a60[3];
  uVar4 = 0;
  local_2078[4] = DAT_00027a60[4];
  local_2078[5] = DAT_00027a60[5];
  local_2078[6] = DAT_00027a60[6];
  local_2078[7] = DAT_00027a60[7];
  param4 = 0;
  local_2078[8] = DAT_00027a60[8];
  local_2078[9] = DAT_00027a60[9];
  local_2050[0] = DAT_00027a60[10];
  local_2050[1] = DAT_00027a60[0xb];
  local_2050[2] = DAT_00027a60[0xc];
  local_2050[3] = DAT_00027a60[0xd];
  local_2040 = DAT_00027a60[0xe];
  uStack_203c = DAT_00027a60[0xf];
  uStack_2038 = DAT_00027a60[0x10];
  uStack_2034 = DAT_00027a60[0x11];
  iVar2 = 0;
  iVar9 = 0;
  local_2030 = DAT_00027a60[0x12];
  uStack_202c = DAT_00027a60[0x13];
  piVar5 = local_2050;
  do {
    if (*piVar5 <= param_1) {
      uVar4 = 1;
      iVar9 = iVar2;
    }
    if (*piVar5 <= param_2) {
      uVar6 = 1;
      param4 = iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar2 != 10);
  uVar4 = uVar4 ^ 1 | uVar6 ^ 1;
  DAT_000be63c = local_2080;
  if (uVar4 == 0) {
    if (3 < local_2080) goto LAB_000276e0;
LAB_0002770c:
    if (param4 <= iVar9) {
LAB_00027714:
      if (param_1 != param_2 && local_2050[param4] != param_2) {
        FUN_0002725c(local_2050[param4],param_2,local_2078[param4]);
      }
      if (uVar3 != 0) {
        while ((int)(local_208c + local_2088) < (int)param_3) {
          param_3 = param_3 - local_208c;
          iVar9 = FUN_00024c74();
          if ((int)param_3 < iVar9) {
            if (3 < DAT_000be63c) {
              snprintf(acStack_2028,0x2000,"set voltage to=%d",param_3);
              FUN_0004948c(3,acStack_2028,0);
            }
            FUN_000246cc(param_3,3);
            FUN_0004bf68(1000);
          }
        }
        if ((param_3 != local_2088) && (iVar9 = FUN_00024c74(), (int)local_2088 <= iVar9)) {
          FUN_000246cc(local_2088,3);
          FUN_0004bf68(1000);
          if (3 < DAT_000be63c) {
            snprintf(acStack_2028,0x2000,"set voltage to=%d, end_freq=%d",local_2088,param_2);
            FUN_0004948c(3,acStack_2028,0);
          }
        }
      }
      return;
    }
  }
  else {
    param4 = 2;
    if (3 < local_2080) {
      snprintf(acStack_2028,0x2000,"not find freq, set default freq start = %d, end = %d",0,2);
      iVar9 = 0;
      FUN_0004948c(3,acStack_2028,0);
      if (DAT_000be63c < 4) {
        uVar6 = 1;
        goto LAB_00027594;
      }
LAB_000276e0:
      snprintf(acStack_2028,0x2000,"start = %d, end = %d",iVar9,param4);
      FUN_0004948c(3,acStack_2028,0);
      goto LAB_0002770c;
    }
    iVar9 = 0;
  }
  uVar4 = iVar9 + 1;
  uVar6 = uVar4;
LAB_00027594:
  piVar5 = local_2050 + uVar6;
  FUN_0002725c(param_1,local_2050[uVar4],local_2078[iVar9]);
  do {
    if (uVar3 != 0) {
      iVar2 = *piVar5;
      bVar7 = local_208c != 0;
      iVar9 = 0;
      if (bVar7) {
        iVar9 = iVar2 + -0x149;
      }
      if ((bVar7 && iVar2 != 0x149) && iVar9 < 0 == (bVar7 && SBORROW4(iVar2,0x149))) {
        iVar9 = 4;
        do {
          bVar7 = (int)param_3 <= (int)(local_208c + local_2088);
          param_3 = param_3 - local_208c;
          if (bVar7) {
            param_3 = local_2088;
          }
          iVar2 = FUN_00024c74();
          if ((int)param_3 < iVar2) {
            if (3 < DAT_000be63c) {
              snprintf(acStack_2028,0x2000,"set voltage to=%d",param_3);
              FUN_0004948c(3,acStack_2028,0);
            }
            FUN_000246cc(param_3,3);
            if (param_3 == local_2088) break;
            FUN_0004bf68(1000);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    if (param4 <= (int)uVar6) goto LAB_00027714;
    iVar9 = *piVar5;
    puVar1 = local_2078 + uVar6;
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 1;
    FUN_0002725c(iVar9,*piVar5,*puVar1);
  } while( true );
}


