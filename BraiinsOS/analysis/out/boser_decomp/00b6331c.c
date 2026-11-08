// FUN_00b6331c @ 00b6331c size=1012 calls_out=19 calls_in=1
// strings: __fake_type__ |  The `Int` scalar type represents non-fractional whole numeric values.

void FUN_00b6331c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int **local_1ac;
  undefined4 local_1a8;
  char *local_1a4;
  undefined4 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined4 uStack_190;
  int local_188;
  char ***local_e4;
  undefined2 *local_e0;
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
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 *local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined1 local_7c;
  
  local_199 = 0;
  local_1a4 = "u16";
  local_1a0 = 3;
  local_1a8 = 3;
  local_1ac = (int **)0x3eece8;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Int");
  if (iVar1 == 0) {
    local_e0 = (undefined2 *)thunk_FUN_01be5118(3);
    if (local_e0 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,3);
    }
    local_dc = 3;
    *(undefined1 *)(local_e0 + 1) = 0x74;
    *local_e0 = 0x6e49;
    local_e4 = (char ***)0x3;
    FUN_006a0cfc(&local_d8,0,"u16",3);
    FUN_006c2a34(&local_198,(undefined4 *)(param_2 + 0x40),&local_e4,&local_d8);
    if (local_188 != -0x7ffffffa) {
      FUN_006a723c(&local_198);
    }
    local_d0 = (char **)0x3;
    local_d8 = (undefined4 ***)0x80000000;
    local_d4 = "Int";
    FUN_0160ec7c(&local_198,&local_d8);
    lVar10 = FUN_013245a0("\nThe `Int` scalar type represents non-fractional whole numeric values.",
                          0x46);
    local_98 = (int)((ulonglong)lVar10 >> 0x20);
    uVar8 = 0;
    if (lVar10 < 0) {
LAB_00b63478:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,local_98);
    }
    if (local_98 == 0) {
      iVar2 = 1;
      iVar1 = 0;
    }
    else {
      uVar8 = 1;
      iVar2 = FUN_01298504(local_98,1);
      iVar1 = local_98;
      if (iVar2 == 0) goto LAB_00b63478;
    }
    FUN_01bed4e2(iVar2,(int)lVar10,local_98);
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
    local_b4 = 4;
    local_7c = 0;
    local_80 = 0;
    local_94 = 0x80000000;
    local_c8 = (int ***)0x80000000;
    local_a4 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_84 = &DAT_01c05c70;
    local_a8 = 8;
    local_a0 = iVar1;
    local_9c = iVar2;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Int",3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006a723c();
    FUN_01bed4e2(iVar1,&local_d8,0xb0);
    goto LAB_00b63610;
  }
  uVar9 = FUN_006a71d4();
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 == 0) goto LAB_00b63610;
  local_198 = uVar9;
  if (iVar5 == 3) {
    iVar2 = thunk_FUN_01bed842("u16",iVar2,3);
    if (iVar2 != 0) goto LAB_00b634cc;
  }
  else {
    if (iVar5 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b63610;
    }
LAB_00b634cc:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"Int",3);
    if (iVar2 == 0) {
      local_c8 = &local_1ac;
      puVar7 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_d0 = &local_1a4;
      local_cc = (code *)&DAT_0132b6a0;
      local_d8 = (undefined4 ***)&local_198;
      goto LAB_00b636d0;
    }
  }
  uVar6 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar6 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar6 == 0) {
LAB_00b63610:
    local_e0 = (undefined2 *)&LAB_012b97d8;
    local_e4 = (char ***)&local_d8;
    local_d0 = (char **)0x3;
    local_d4 = "Int";
    local_d8 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_198,&DAT_0057a667,&local_e4);
    uVar9 = local_198;
    if (local_d8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar9 = local_198;
    }
    local_198._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_198._0_4_ = (undefined4 **)uVar9;
    FUN_019bb7e0((undefined4 **)local_198,local_198._4_4_);
    local_198 = uVar9;
    puVar4 = (undefined2 *)thunk_FUN_01be5118(3);
    if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *(undefined1 *)(puVar4 + 1) = 0x74;
    *puVar4 = 0x6e49;
    *param_1 = 3;
    param_1[1] = puVar4;
    param_1[2] = 3;
    return;
  }
  local_c8 = (int ***)&local_e4;
  local_d0 = (char **)&local_199;
  puVar7 = &DAT_01c226e0;
  local_e4 = (char ***)CONCAT31(local_e4._1_3_,(char)uVar6);
  puVar3 = &DAT_005b5680;
  local_cc = FUN_006a7514;
  local_d8 = &local_1ac;
LAB_00b636d0:
  local_d4 = (char *)&DAT_0132b6a0;
  local_c4 = (undefined4 **)local_cc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_d8,puVar7);
}

