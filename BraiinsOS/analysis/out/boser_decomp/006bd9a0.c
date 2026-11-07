// FUN_006bd9a0 @ 006bd9a0 size=972 calls_out=19 calls_in=3
// strings: Float | Float | __fake_type__ | Float |  The `Float` scalar type represents signed double-precision fractional values as specified by [IEEE 754](https://en.wikipedia.org/wiki/IEEE_floating_point). | Float

void FUN_006bd9a0(undefined8 *param_1,int param_2)

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
  int **local_1ac;
  undefined4 local_1a8;
  char *local_1a4;
  undefined4 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined4 uStack_190;
  int local_188;
  char ***local_e4;
  undefined4 *local_e0;
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
  local_1a4 = "f64";
  local_1a0 = 3;
  local_1a8 = 5;
  local_1ac = (int **)0x52d4c5;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Float",5);
  if (iVar1 == 0) {
    local_e0 = (undefined4 *)thunk_FUN_01be5118(5);
    if (local_e0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    *(undefined1 *)(local_e0 + 1) = 0x74;
    *local_e0 = 0x616f6c46;
    local_dc = 5;
    local_e4 = (char ***)0x5;
    FUN_006a0cfc(&local_d8,0,"f64",3);
    FUN_006c2a34(&local_198,(undefined4 *)(param_2 + 0x40),&local_e4,&local_d8);
    if (local_188 != -0x7ffffffa) {
      FUN_006a723c(&local_198);
    }
    local_d0 = (char **)0x5;
    local_d8 = (undefined4 ***)0x80000000;
    local_d4 = "Float";
    FUN_0160ec7c(&local_198,&local_d8);
    lVar9 = FUN_013245a0("\nThe `Float` scalar type represents signed double-precision fractional values as specified by [IEEE 754](https://en.wikipedia.org/wiki/IEEE_floating_point)."
                         ,0x9c);
    local_98 = (int)((ulonglong)lVar9 >> 0x20);
    uVar7 = 0;
    if (lVar9 < 0) {
LAB_006bdb08:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,local_98);
    }
    if (local_98 == 0) {
      iVar2 = 1;
      iVar1 = 0;
    }
    else {
      uVar7 = 1;
      iVar2 = FUN_01298504(local_98,1);
      iVar1 = local_98;
      if (iVar2 == 0) goto LAB_006bdb08;
    }
    FUN_01bed4e2(iVar2,(int)lVar9,local_98);
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
    local_84 = &DAT_01c05bb0;
    local_a8 = 8;
    local_a0 = iVar1;
    local_9c = iVar2;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Float",5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006a723c();
    FUN_01bed4e2(iVar1,&local_d8,0xb0);
    goto LAB_006bdca4;
  }
  uVar8 = FUN_006a71d4();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar2 == 0) goto LAB_006bdca4;
  local_198 = uVar8;
  if (iVar4 == 3) {
    iVar2 = thunk_FUN_01bed842("f64",iVar2,3);
    if (iVar2 != 0) goto LAB_006bdb5c;
  }
  else {
    if (iVar4 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_006bdca4;
    }
LAB_006bdb5c:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"Float",5);
    if (iVar2 == 0) {
      local_c8 = &local_1ac;
      puVar6 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_d0 = &local_1a4;
      local_cc = (code *)&DAT_0132b6a0;
      local_d8 = (undefined4 ***)&local_198;
      goto LAB_006bdd2c;
    }
  }
  uVar5 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar5 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar5 == 0) {
LAB_006bdca4:
    local_e0 = (undefined4 *)&LAB_012b97d8;
    local_e4 = (char ***)&local_d8;
    local_d0 = (char **)0x5;
    local_d4 = "Float";
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
LAB_006bdd2c:
  local_d4 = (char *)&DAT_0132b6a0;
  local_c4 = (undefined4 **)local_cc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_d8,puVar6);
}

