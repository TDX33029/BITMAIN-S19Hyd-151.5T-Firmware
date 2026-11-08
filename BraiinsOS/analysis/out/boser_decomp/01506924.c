// FUN_01506924 @ 01506924 size=580 calls_out=10 calls_in=1
// strings: 

void FUN_01506924(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_190 [56];
  int *local_158;
  undefined4 local_154;
  int *local_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *local_d0;
  undefined4 local_cc;
  int *local_c8;
  int local_c4;
  int *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_58;
  undefined4 local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_014ff704(auStack_190);
  local_c8 = (int *)*param_3;
  local_c4 = param_3[1];
  uVar5 = param_3[2];
  local_b0 = 0;
  if (local_c8 != (int *)0x0) {
    local_b0 = uVar5;
  }
  local_d0 = (int *)(uint)(local_c8 != (int *)0x0);
  local_bc = 0;
  local_cc = 0;
  local_c0 = local_d0;
  local_b8 = (int)local_c8;
  local_b4 = local_c4;
  FUN_014ffae4(&local_100,&local_d0,param_4[1],param_4[2]);
  if (uVar5 < 0xf) {
    FUN_0155f304(&local_58,param_2,param_3);
    if (local_58 == (int *)&DAT_80000000) {
LAB_01506b10:
      param_1[2] = local_54;
      param_1[1] = 0;
      *param_1 = 1;
      FUN_0152a0b4(&local_100);
      FUN_014ff9e0(auStack_190);
      FUN_014ffdfc(param_4);
      return;
    }
    do {
      iVar4 = *local_158;
      bVar2 = (bool)hasExclusiveAccess(local_158);
    } while (!bVar2);
    *local_158 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01506b68:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1506b68);
      (*pcVar1)();
    }
    local_98 = local_58;
    uStack_94 = local_54;
    piStack_90 = piStack_50;
    local_8c = *param_4;
    local_88 = param_4[1];
    uStack_84 = param_4[2];
    local_d0 = local_100;
    local_cc = uStack_fc;
    local_c8 = piStack_f8;
    local_c4 = uStack_f4;
    local_c0 = piStack_f0;
    local_bc = uStack_ec;
    local_b8 = local_e8;
    local_b4 = uStack_e4;
    local_b0 = uStack_e0;
    uStack_ac = uStack_dc;
    uStack_a8 = uStack_d8;
    uStack_a4 = uStack_d4;
    local_a0 = local_158;
    local_9c = local_154;
    iVar4 = thunk_FUN_01be5118(0x50);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x50);
    }
    FUN_01bed4e2(iVar4,&local_d0,0x50);
    puVar3 = &DAT_01cfa908;
  }
  else {
    FUN_0155ee38(&local_58,param_2,param_3);
    if (local_58 == (int *)0x0) goto LAB_01506b10;
    do {
      iVar4 = *local_158;
      bVar2 = (bool)hasExclusiveAccess(local_158);
    } while (!bVar2);
    *local_158 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01506b68;
    local_d0 = local_58;
    local_cc = local_54;
    local_c8 = piStack_50;
    local_c4 = uStack_4c;
    local_c0 = piStack_48;
    local_bc = uStack_44;
    local_b8 = local_40;
    local_b4 = uStack_3c;
    local_b0 = uStack_38;
    uStack_ac = uStack_34;
    uStack_a8 = uStack_30;
    uStack_a4 = uStack_2c;
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    local_a0 = local_100;
    local_9c = uStack_fc;
    local_98 = piStack_f8;
    uStack_94 = uStack_f4;
    piStack_90 = piStack_f0;
    local_8c = uStack_ec;
    local_88 = local_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    uStack_78 = uStack_d8;
    uStack_74 = uStack_d4;
    local_70 = local_158;
    local_6c = local_154;
    iVar4 = thunk_FUN_01be5118(0x78);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x78);
    }
    FUN_01bed4e2(iVar4,&local_d0,0x78);
    puVar3 = &DAT_01cfa8e8;
  }
  param_1[2] = puVar3;
  param_1[1] = iVar4;
  *param_1 = 1;
  FUN_014ff9e0(auStack_190);
  return;
}

