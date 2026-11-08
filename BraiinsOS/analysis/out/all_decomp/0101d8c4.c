// FUN_0101d8c4 @ 0101d8c4 size=1064 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_0101d8c4(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int local_ec;
  uint *local_e8;
  code *local_e4;
  uint local_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  uint **local_c4;
  undefined4 local_c0;
  uint *local_bc;
  uint *local_b8;
  uint **local_b4;
  undefined *local_b0;
  uint *local_ac;
  int **local_a8;
  undefined *local_a4;
  uint *local_a0;
  int *local_9c;
  undefined *local_98;
  uint *local_94;
  int **local_90;
  undefined *local_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  
  local_d0 = DAT_018d80b8;
  local_e0 = 2;
  local_ec = param_2;
  if (DAT_018dd947 == '\0') {
    local_bc = (uint *)(DAT_018d80b8 + 0x1c);
    uVar10 = *local_bc;
    uVar9 = *(uint *)(DAT_018d80b8 + 0x20);
    if (uVar9 == 0) goto LAB_0101dc6c;
    uStack_88 = *local_bc;
    uStack_84 = *(undefined4 *)(DAT_018d80b8 + 0x20);
    uVar8 = *(undefined4 *)(DAT_018d80b8 + 0x24);
    local_7c = *(undefined4 *)(DAT_018d80b8 + 0x28);
    uStack_80 = *(undefined4 *)(DAT_018d80b8 + 0x24);
    local_b8 = &local_40;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = *(undefined4 *)(DAT_018d80b8 + 0x28);
    local_78 = 0;
    local_44 = uVar5;
    local_40 = uVar6;
    if (*(uint *)(*param_3 + 0x38) <= uVar5) {
LAB_0101dcd0:
      local_b4 = (uint **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_b8,&DAT_01882550);
    }
    local_30 = (int *)(*(int *)(*param_3 + 0x34) + uVar5 * 0xf8);
    if (!(*local_30 != 3 || local_30[1] != 0)) goto LAB_0101dcd0;
    puVar3 = (uint *)(local_30 + 0x35);
    if (*puVar3 != uVar6) goto LAB_0101dcd0;
    local_74 = puVar3;
    if (uVar9 == 1) goto LAB_0101dc6c;
    local_60 = 1;
    local_70 = uVar10;
    local_6c = uVar9;
    local_68 = uVar8;
    local_64 = uVar7;
    if ((!(*local_30 != 3 || local_30[1] != 0)) || (*puVar3 != uVar6)) goto LAB_0101dcd0;
    local_5c = local_30 + 8;
    if (uVar9 < 3) {
LAB_0101dc6c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01882804);
    }
    local_48 = 2;
    local_58 = uVar10;
    local_54 = uVar9;
    local_50 = uVar8;
    local_4c = uVar7;
    if (uVar9 == 3) goto LAB_0101dc6c;
    local_34 = 3;
    local_44 = uVar10;
    local_40 = uVar9;
    local_3c = uVar8;
    local_38 = uVar7;
    local_2c = uVar5;
    local_28 = uVar6;
    if ((*local_30 == 3 && local_30[1] == 0) || (*puVar3 != uVar6)) {
      local_b8 = &local_28;
      goto LAB_0101dcd0;
    }
    local_90 = &local_30;
    local_30 = local_30 + 0xe;
    local_94 = &local_44;
    local_9c = &local_ec;
    local_a0 = &local_58;
    local_a8 = &local_5c;
    local_ac = &local_70;
    local_b4 = &local_74;
    local_b8 = &uStack_88;
    local_c4 = &local_b8;
    local_c0 = 4;
    local_8c = &DAT_01882824;
    local_98 = &DAT_018a4904;
    local_a4 = &DAT_01882814;
    local_b0 = &DAT_01882fc4;
    FUN_01694880(&local_e8,&local_c4);
  }
  local_b8 = local_e8;
  local_b4 = (uint **)local_e4;
  local_b0 = (undefined *)local_e0;
  local_ac = (uint *)iStack_dc;
  local_a8 = (int **)local_d8;
  local_a4 = (undefined *)uStack_d4;
  local_a0 = (uint *)local_d0;
  local_9c = (int *)uStack_cc;
  if (local_e0 != 2) {
    if ((local_e0 & 1) != 0) {
      iStack_dc = iStack_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iStack_dc,&local_b8);
  }
  cVar1 = DAT_018dd947;
  local_44 = param_3[1];
  local_40 = param_3[2];
  if (((*(uint *)(*param_3 + 0x38) <= local_44) ||
      (piVar2 = (int *)(*(int *)(*param_3 + 0x34) + local_44 * 0xf8), *piVar2 == 3 && piVar2[1] == 0
      )) || (piVar2[0x35] != local_40)) {
    local_e8 = &local_40;
    local_e4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  bVar4 = *(byte *)(piVar2 + 8) - 6;
  if (*(byte *)(piVar2 + 8) < 6) {
    bVar4 = 6;
  }
  if (((bVar4 < 7) && ((1 << (uint)bVar4 & 0x54U) != 0)) && (piVar2[0x38] == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (!SCARRY4(piVar2[0xe],local_ec)) {
      piVar2[0xe] = piVar2[0xe] + local_ec;
      FUN_0101d22c(param_1,param_3,cVar1);
      uVar7 = 0;
      if (local_b0 != (undefined *)0x2) {
        puVar3 = local_ac;
        if (((uint)local_b0 & 1) != 0) {
          puVar3 = (uint *)((int)local_ac + (*(int *)((int)local_a8 + 8) - 1U & 0xfffffff8) + 8);
        }
        (**(code **)((int)local_a8 + 0x34))(puVar3,&local_b8);
      }
      goto LAB_0101dc54;
    }
  }
  if (local_b0 != (undefined *)0x2) {
    puVar3 = local_ac;
    if (((uint)local_b0 & 1) != 0) {
      puVar3 = (uint *)((int)local_ac + (*(int *)((int)local_a8 + 8) - 1U & 0xfffffff8) + 8);
    }
    (**(code **)((int)local_a8 + 0x34))(puVar3,&local_b8);
  }
LAB_0101dc54:
  FUN_005c3320(&local_b8);
  return uVar7;
}

