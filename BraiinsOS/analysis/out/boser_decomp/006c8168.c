// FUN_006c8168 @ 006c8168 size=884 calls_out=18 calls_in=11
// strings: alloc::string::String | String | String | __fake_type__ | alloc::string::String | String

void FUN_006c8168(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_1b0;
  char *local_1ac;
  undefined4 local_1a8;
  char *local_1a4;
  undefined4 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined4 uStack_190;
  int local_188;
  char *local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  char **local_d8;
  char *local_d4;
  char **local_d0;
  code *local_cc;
  char **local_c8;
  code *local_c4;
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
  local_1a4 = "alloc::string::String";
  local_1a0 = 0x15;
  local_1a8 = 6;
  local_1ac = "String";
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"String",6);
  if (iVar1 == 0) {
    local_e0 = (undefined4 *)thunk_FUN_01be5118(6);
    if (local_e0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)(local_e0 + 1) = 0x676e;
    *local_e0 = 0x69727453;
    local_dc = 6;
    local_e4 = (char *)0x6;
    FUN_006a0cfc(&local_d8,0,"alloc::string::String",0x15);
    FUN_006c2a34(&local_198,(undefined4 *)(param_2 + 0x40),&local_e4,&local_d8);
    if (local_188 != -0x7ffffffa) {
      FUN_006a723c(&local_198);
    }
    local_d4 = "String";
    local_d0 = (char **)0x6;
    local_d8 = (char **)0x80000000;
    FUN_0160ec7c(&local_198,&local_d8);
    lVar9 = FUN_013245a0("\nThe `String` scalar type represents textual data, represented as UTF-8\ncharacter sequences. The String type is most often used by GraphQL to\nrepresent free-form human-readable text."
                         ,0xb6);
    local_98 = (int)((ulonglong)lVar9 >> 0x20);
    uVar7 = 0;
    if (lVar9 < 0) {
LAB_006c82d0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,local_98);
    }
    if (local_98 == 0) {
      iVar1 = 1;
      local_1b0 = 0;
    }
    else {
      uVar7 = 1;
      iVar1 = FUN_01298504(local_98,1);
      local_1b0 = local_98;
      if (iVar1 == 0) goto LAB_006c82d0;
    }
    FUN_01bed4e2(iVar1,(int)lVar9,local_98);
    local_88 = (undefined4 *)thunk_FUN_01be5118(8);
    if (local_88 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *local_88 = 1;
    local_88[1] = 1;
    local_c4 = (code *)(char *)local_198;
    uStack_c0 = local_198._4_4_;
    uStack_bc = uStack_190;
    local_a0 = local_1b0;
    local_b4 = 4;
    local_7c = 0;
    local_80 = 0;
    local_94 = 0x80000000;
    local_c8 = (char **)0x80000000;
    local_a4 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_84 = &DAT_01c05bf8;
    local_a8 = 8;
    local_9c = iVar1;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"String",6)
    ;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006a723c();
    FUN_01bed4e2(iVar1,&local_d8,0xb0);
    goto LAB_006c8464;
  }
  uVar8 = FUN_006a71d4();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar2 == 0) goto LAB_006c8464;
  local_198 = uVar8;
  if (iVar4 == 0x15) {
    iVar2 = thunk_FUN_01bed842("alloc::string::String",iVar2,0x15);
    if (iVar2 != 0) goto LAB_006c8328;
  }
  else {
    if (iVar4 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_006c8464;
    }
LAB_006c8328:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"String",6);
    if (iVar2 == 0) {
      local_c8 = &local_1ac;
      puVar6 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_d0 = &local_1a4;
      local_cc = (code *)&DAT_0132b6a0;
      local_d8 = (char **)&local_198;
      goto LAB_006c849c;
    }
  }
  uVar5 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar5 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar5 == 0) {
LAB_006c8464:
    FUN_006c7de0(param_1);
    return;
  }
  local_c8 = &local_e4;
  local_d0 = (char **)&local_199;
  puVar6 = &DAT_01c226e0;
  local_e4 = (char *)CONCAT31(local_e4._1_3_,(char)uVar5);
  puVar3 = &DAT_005b5680;
  local_cc = FUN_006a7514;
  local_d8 = &local_1ac;
LAB_006c849c:
  local_d4 = (char *)&DAT_0132b6a0;
  local_c4 = local_cc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_d8,puVar6);
}

