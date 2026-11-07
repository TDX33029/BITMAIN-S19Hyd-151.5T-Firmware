// FUN_011e6a00 @ 011e6a00 size=836 calls_out=17 calls_in=6
// strings: boser_graphql::types::Timestamp | Timestamp | Timestamp | __fake_type__ | Timestamp | boser_graphql::types::Timestamp

void FUN_011e6a00(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int **local_1ac;
  undefined4 local_1a8;
  char *local_1a4;
  undefined4 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined4 uStack_190;
  int local_188;
  char ***local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined4 ***local_d8;
  char *local_d4;
  char **local_d0;
  code *local_cc;
  int ***local_c8;
  undefined4 **local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 *local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined1 local_7c;
  
  local_199 = 0;
  local_1a4 = "boser_graphql::types::Timestamp";
  local_1a0 = 0x1f;
  local_1a8 = 9;
  local_1ac = (int **)0x4a22c0;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Timestamp",9
                      );
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar1,"Timestamp",9);
    local_dc = 9;
    local_e4 = (char ***)0x9;
    local_e0 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_d8,0,"boser_graphql::types::Timestamp",0x1f);
    FUN_006c2a34(&local_198,(undefined4 *)(param_2 + 0x40),&local_e4,&local_d8);
    if (local_188 != -0x7ffffffa) {
      FUN_006b2000(&local_198);
    }
    local_d0 = (char **)0x9;
    local_d4 = "Timestamp";
    local_d8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_198,&local_d8);
    local_88 = (undefined4 *)thunk_FUN_01be5118(8);
    if (local_88 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *local_88 = 1;
    local_88[1] = 1;
    local_c4 = (undefined4 **)local_198;
    uStack_c0 = local_198._4_4_;
    uStack_bc = uStack_190;
    local_7c = 0;
    local_80 = 0;
    local_a4 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_84 = &DAT_01c22708;
    local_94 = 0x80000000;
    local_a0 = 0x80000000;
    local_a8 = 8;
    local_b4 = 4;
    local_c8 = (int ***)0x80000000;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Timestamp"
                         ,9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar1,&local_d8,0xb0);
    goto LAB_011e6c48;
  }
  uVar7 = FUN_006a71d4();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  if (iVar2 == 0) goto LAB_011e6c48;
  local_198 = uVar7;
  if (iVar4 == 0x1f) {
    iVar2 = thunk_FUN_01bed842("boser_graphql::types::Timestamp",iVar2,0x1f);
    if (iVar2 != 0) goto LAB_011e6c14;
  }
  else {
    if (iVar4 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_011e6c48;
    }
LAB_011e6c14:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"Timestamp",9);
    if (iVar2 == 0) {
      local_c8 = &local_1ac;
      puVar6 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_d0 = &local_1a4;
      local_cc = (code *)&DAT_0132b6a0;
      local_d8 = (undefined4 ***)&local_198;
      goto LAB_011e6cf0;
    }
  }
  uVar5 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar5 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar5 == 0) {
LAB_011e6c48:
    local_e0 = &LAB_012b97d8;
    local_e4 = (char ***)&local_d8;
    local_d0 = (char **)0x9;
    local_d4 = "Timestamp";
    local_d8 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_198,&DAT_0057a667,&local_e4);
    if (local_d8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
    }
    *param_1 = local_198;
    *(undefined4 *)(param_1 + 1) = uStack_190;
    return;
  }
  local_c8 = (int ***)&local_e4;
  local_d0 = (char **)&local_199;
  puVar6 = &DAT_01c226e0;
  local_e4 = (char ***)CONCAT31(local_e4._1_3_,(char)uVar5);
  puVar3 = &DAT_005b5680;
  local_cc = FUN_006a7514;
  local_d8 = &local_1ac;
LAB_011e6cf0:
  local_d4 = (char *)&DAT_0132b6a0;
  local_c4 = (undefined4 **)local_cc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_d8,puVar6);
}

