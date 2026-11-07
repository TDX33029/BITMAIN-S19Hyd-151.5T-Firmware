// FUN_010c21f4 @ 010c21f4 size=828 calls_out=5 calls_in=3
// strings: You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2

void FUN_010c21f4(int *param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined1 *local_a0;
  undefined8 local_98;
  int *local_90;
  int local_8c;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  int *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (*param_3 == 1) {
    local_e8 = param_3[1];
    if (param_4 == (int *)0x0) {
      FUN_015f3b0c(&local_80,1);
      uVar12 = 1;
      local_e0 = local_80;
      local_d8 = local_80;
      local_d4 = local_7c;
      local_d0 = local_78;
      local_e4 = local_7c;
      puVar10 = (undefined1 *)param_3[8];
      local_dc = (undefined1 *)0x5f5e100;
      puVar13 = local_78;
      if (puVar10 == &DAT_3b9aca00) goto LAB_010c2410;
    }
    else {
      (**(code **)(param_5 + 0x14))
                (&local_d8,(int)param_4 + (*(int *)(param_5 + 8) - 1U & 0xfffffff8) + 8);
      uVar12 = 1;
      local_e0 = local_d8;
      local_e4 = local_d4;
      local_dc = (undefined1 *)0x5f5e100;
      puVar13 = local_d0;
LAB_010c22ac:
      puVar10 = (undefined1 *)param_3[8];
      if (puVar10 == &DAT_3b9aca00) goto LAB_010c2410;
    }
LAB_010c2304:
    if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2"
                   ,0x31,&DAT_01884ba4);
    }
    iVar8 = param_3[2];
    iVar11 = param_3[6];
    iVar7 = param_3[7];
    iVar3 = param_3[3];
    iVar6 = param_3[10];
    iVar4 = param_3[4];
    uVar14 = (**(code **)(param_5 + 0xc))
                       ((int)param_4 + (*(int *)(param_5 + 8) - 1U & 0xfffffff8) + 8,
                        *(code **)(param_5 + 0xc),iVar11,iVar7,puVar10);
    do {
      iVar9 = *param_4;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_010c2530;
    local_8c = param_5;
    local_a0 = &DAT_3b9aca00;
    local_c8 = iVar11;
    local_c4 = iVar7;
    local_c0 = puVar10;
    local_b8 = iVar8;
    local_b4 = iVar3;
    local_b0 = iVar4;
    local_90 = param_4;
    local_88 = (char)iVar6;
  }
  else {
    if (param_4 != (int *)0x0) {
      (**(code **)(param_5 + 0x14))
                (&local_d8,(int)param_4 + (*(int *)(param_5 + 8) - 1U & 0xfffffff8) + 8);
      uVar12 = 0;
      puVar13 = &DAT_3b9aca00;
      local_dc = &DAT_3b9aca00;
      goto LAB_010c22ac;
    }
    FUN_015f3b0c(&local_80,1);
    uVar12 = 0;
    puVar13 = &DAT_3b9aca00;
    local_d8 = local_80;
    local_d4 = local_7c;
    local_d0 = local_78;
    puVar10 = (undefined1 *)param_3[8];
    local_dc = &DAT_3b9aca00;
    if (puVar10 != &DAT_3b9aca00) goto LAB_010c2304;
LAB_010c2410:
    uVar14 = CONCAT44(local_98._4_4_,(undefined4)local_98);
    local_c0 = &DAT_3b9aca00;
  }
  local_40 = local_d0;
  if (puVar10 == &DAT_3b9aca00) {
    local_40 = &DAT_3b9aca00;
  }
  local_48 = local_d8;
  uStack_44 = local_d4;
  local_58 = local_e0;
  uStack_54 = local_e4;
  local_6c = 0;
  local_74 = 0;
  local_78 = (undefined1 *)0x0;
  local_2c = 0;
  local_60 = &DAT_3b9aca00;
  local_7c = 1;
  local_80 = 1;
  local_34 = param_5;
  local_70 = uVar12;
  local_50 = puVar13;
  local_38 = param_4;
  local_30 = param_2;
  local_98 = uVar14;
  piVar5 = (int *)thunk_FUN_016d4a50(0x58);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x58);
  }
  FUN_016dd1aa(piVar5,&local_80,0x58);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + 1;
  if (-1 < iVar6) {
    FUN_016dd1aa(param_1 + 0xc,&local_c8,0x48);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = (int)local_dc;
    *param_1 = (int)piVar5;
    param_1[0x1e] = (int)piVar5;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = local_e8;
    param_1[0xb] = 0;
    return;
  }
LAB_010c2530:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10c2530);
  (*pcVar1)();
}

