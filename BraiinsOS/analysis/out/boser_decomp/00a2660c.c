// FUN_00a2660c @ 00a2660c size=992 calls_out=20 calls_in=1
// strings: boser::web::graphql::auth::AuthResult | AuthResult | AuthResult | __fake_type__ | AuthResult | boser::web::graphql::auth::AuthResult

void FUN_00a2660c(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int **local_1b4;
  undefined4 local_1b0;
  char *local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a1;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 ***local_f0;
  char *local_ec;
  char **local_e8;
  code *local_e4;
  int ***local_e0;
  code *local_dc;
  char *local_d8;
  undefined4 local_d4;
  undefined4 **local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char ***local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  local_1a1 = 3;
  local_1ac = "boser::web::graphql::auth::AuthResult";
  local_1a8 = 0x25;
  local_1b0 = 10;
  local_1b4 = (int **)0x3ef6a0;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"AuthResult",
                       10);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,10);
    }
    FUN_01bed4e2(iVar1,"AuthResult",10);
    local_28 = 10;
    local_30 = (char ***)0xa;
    local_2c = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_f0,3,"boser::web::graphql::auth::AuthResult",0x25);
    FUN_006c2a34(&local_1a0,(undefined4 *)(param_2 + 0x40),&local_30,&local_f0);
    if (local_190 != -0x7ffffffa) {
      FUN_00abf870(&local_1a0);
    }
    FUN_00a25388(&local_f0,param_2);
    FUN_019bb7e0(local_f0,local_ec);
    FUN_00a25f9c(&local_f0,param_2);
    FUN_019bb7e0(local_f0,local_ec);
    local_ec = "AuthResult";
    local_e8 = (char **)0xa;
    local_f0 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_40,&local_f0);
    FUN_006e01d0(&local_1a0);
    local_e8 = (char **)0xa;
    local_ec = "VoidResultevent open/boser/boser/src/metrics_scraper/filter.rs:423";
    local_f0 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_30,&local_f0);
    FUN_006dd1ec(&local_1a0,&local_30);
    local_e8 = (char **)0x9;
    local_ec = "AuthError";
    local_f0 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_30,&local_f0);
    FUN_006dd1ec(&local_1a0,&local_30);
    local_d0 = (undefined4 **)local_1a0;
    uStack_cc = local_1a0._4_4_;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    iStack_c0 = local_190;
    uStack_bc = uStack_18c;
    local_b8 = local_188;
    uStack_b4 = uStack_184;
    uStack_b0 = uStack_180;
    uStack_ac = uStack_17c;
    uStack_a8 = uStack_178;
    uStack_a4 = uStack_174;
    local_90 = local_40;
    uStack_8c = uStack_3c;
    uStack_88 = uStack_38;
    local_74 = 8;
    local_80 = 4;
    local_6c = 0;
    local_70 = 0;
    local_78 = 0;
    local_7c = 0;
    local_84 = 0;
    local_a0 = 0;
    local_9c = 0x80000000;
    local_d4 = 0x25;
    local_e0 = (int ***)0x80000003;
    local_d8 = "boser::web::graphql::auth::AuthResult";
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "AuthResult",10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_f0,0xb0);
    goto LAB_00a268fc;
  }
  uVar7 = FUN_006a71d4();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  if (iVar2 == 0) goto LAB_00a268fc;
  local_1a0 = uVar7;
  if (iVar4 == 0x25) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::auth::AuthResult",iVar2,0x25);
    if (iVar2 != 0) goto LAB_00a268c8;
  }
  else {
    if (iVar4 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00a268fc;
    }
LAB_00a268c8:
    iVar2 = FUN_015db690(param_2 + 0x20,"AuthResult",10);
    if (iVar2 == 0) {
      local_e0 = &local_1b4;
      puVar6 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_e8 = &local_1ac;
      local_e4 = (code *)&DAT_0132b6a0;
      local_f0 = (undefined4 ***)&local_1a0;
      goto LAB_00a26994;
    }
  }
  uVar5 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar5 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar5 == 3) {
LAB_00a268fc:
    local_2c = &LAB_012b97d8;
    local_30 = (char ***)&local_f0;
    local_e8 = (char **)0xa;
    local_ec = "AuthResult";
    local_f0 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1a0,&DAT_0057a667,&local_30);
    if (local_f0 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_f0,local_ec);
    }
    *param_1 = local_1a0;
    *(undefined4 *)(param_1 + 1) = uStack_198;
    return;
  }
  local_e0 = (int ***)&local_30;
  local_e8 = (char **)&local_1a1;
  puVar6 = &DAT_01c226e0;
  local_30 = (char ***)CONCAT31(local_30._1_3_,(char)uVar5);
  puVar3 = &DAT_005b5680;
  local_e4 = FUN_006a7514;
  local_f0 = &local_1b4;
LAB_00a26994:
  local_ec = (char *)&DAT_0132b6a0;
  local_dc = local_e4;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_f0,puVar6);
}

