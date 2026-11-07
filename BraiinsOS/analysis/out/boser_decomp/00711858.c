// FUN_00711858 @ 00711858 size=536 calls_out=5 calls_in=16
// strings: 

void FUN_00711858(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_108 [96];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int *local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  do {
    if (*param_2 != 1) {
      ClearExclusiveLocal();
      goto LAB_00711900;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 0;
  DataMemoryBarrier(0xb);
  piVar9 = (int *)param_2[2];
  FUN_01bed4e2(auStack_108,param_2 + 3,0x5c);
  iVar8 = param_2[0x1a];
  iVar5 = param_2[0x1b];
  iVar6 = param_2[0x1c];
  iVar7 = param_2[0x1d];
  if (param_2 != (int *)&DAT_ffffffff) {
    piVar3 = param_2 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_2);
    }
  }
  if (iVar8 != 3) {
    *param_1 = piVar9;
    FUN_01bed4e2(param_1 + 1,auStack_108,0x5c);
    param_1[0x18] = iVar8;
    param_1[0x19] = iVar5;
    param_1[0x1a] = iVar6;
    param_1[0x1b] = iVar7;
    return;
  }
  param_2 = piVar9;
LAB_00711900:
  FUN_0070b610(&local_78,param_2 + 2);
  piVar9 = (int *)param_2[10];
  do {
    iVar5 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar5 + 1;
  if (-1 < iVar5) {
    local_84 = param_2[0xb];
    local_a8 = local_78;
    uStack_a4 = uStack_74;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    local_98 = local_68;
    uStack_94 = uStack_64;
    local_90 = local_60;
    uStack_8c = uStack_5c;
    local_80 = CONCAT31(local_80._1_3_,(char)param_2[0xc]);
    local_88 = piVar9;
    FUN_0070b610(&local_48,param_2 + 0xe);
    local_58 = (int *)param_2[0x16];
    do {
      iVar5 = *local_58;
      bVar2 = (bool)hasExclusiveAccess(local_58);
    } while (!bVar2);
    *local_58 = iVar5 + 1;
    if (-1 < iVar5) {
      local_54 = param_2[0x17];
      local_78 = local_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      local_68 = local_38;
      uStack_64 = uStack_34;
      local_60 = uStack_30;
      uStack_5c = uStack_2c;
      iVar5 = param_2[0x1d];
      local_50 = CONCAT31(local_50._1_3_,(char)param_2[0x18]);
      FUN_00711b60(&local_48,param_2 + 0x1a);
      *param_1 = local_a8;
      param_1[1] = uStack_a4;
      param_1[2] = uStack_a0;
      param_1[3] = uStack_9c;
      param_1[4] = local_98;
      param_1[5] = uStack_94;
      param_1[6] = local_90;
      param_1[7] = uStack_8c;
      param_1[8] = local_88;
      param_1[9] = local_84;
      param_1[10] = local_80;
      param_1[0xb] = uStack_7c;
      param_1[0xc] = local_78;
      param_1[0xd] = uStack_74;
      param_1[0xe] = uStack_70;
      param_1[0xf] = uStack_6c;
      param_1[0x10] = local_68;
      param_1[0x11] = uStack_64;
      param_1[0x12] = local_60;
      param_1[0x13] = uStack_5c;
      param_1[0x14] = local_58;
      param_1[0x15] = local_54;
      param_1[0x16] = local_50;
      param_1[0x17] = uStack_4c;
      *(char *)(param_1 + 0x1b) = (char)iVar5;
      param_1[0x18] = local_48;
      param_1[0x19] = uStack_44;
      param_1[0x1a] = uStack_40;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00711acc(param_2);
        return;
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x711a6c);
  (*pcVar1)();
}

