// FUN_012bce00 @ 012bce00 size=808 calls_out=10 calls_in=1
// strings: 

undefined4 FUN_012bce00(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined **local_88;
  undefined *local_84;
  undefined **local_80;
  undefined *local_7c;
  uint local_78;
  undefined4 *local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_58;
  int local_54;
  int iStack_50;
  int local_48;
  int local_44;
  int iStack_40;
  undefined ***local_3c;
  undefined4 local_38;
  int *local_34;
  undefined1 *local_30;
  undefined ***local_2c;
  undefined1 *local_28;
  
  iVar10 = param_2;
  puVar4 = (undefined *)FUN_012b9138(param_1 + 0x74);
  local_88 = &local_84;
  local_7c = &DAT_00420598;
  if (puVar4 != (undefined *)0x0) {
    local_7c = puVar4;
  }
  local_84 = local_7c + 0x54;
  local_80 = &local_7c;
  local_7c = local_7c + 0x46;
  uVar5 = FUN_012bc650(1);
  FUN_012bc780(uVar5,param_1);
  bVar9 = param_4 != 0;
  local_70 = 0;
  local_74 = (undefined4 *)&SUB_00000004;
  local_78 = 0;
  if (bVar9) {
    local_28 = &DAT_012b59c8;
    local_38 = &DAT_012b59c8;
    local_3c = &local_88;
    local_60 = 0;
    local_68 = 0;
    local_2c = &local_80;
    local_64 = 1;
    local_30 = &LAB_00632348;
    local_34 = (int *)param_2;
    FUN_012fa178(&local_68,&DAT_01ce25b4,&DAT_00420456,&local_3c,iVar10);
    uVar3 = local_60;
    uVar2 = local_64;
    uVar1 = local_68;
    FUN_018c4418(&local_78);
    local_74[1] = uVar2;
    local_74[2] = uVar3;
    *local_74 = uVar1;
  }
  puVar7 = local_74;
  local_70 = (uint)bVar9;
  uVar8 = (uint)bVar9;
  FUN_01bed4e2((uint)&local_68 | 3,param_2,0xc);
  FUN_01bed4e2((int)&local_38 + 1,&local_68,0xf);
  local_38 = (undefined *)CONCAT31(local_38._1_3_,2);
  local_3c = (undefined ***)CONCAT31(local_3c._1_3_,1);
  FUN_012bd298(uVar5,&local_3c);
  iVar6 = *param_5;
  if (iVar6 != -0x80000000) {
    local_38 = (undefined *)*param_5;
    local_34 = (int *)param_5[1];
    local_30 = (undefined1 *)param_5[2];
    local_3c = (undefined ***)CONCAT31(local_3c._1_3_,4);
    FUN_012bca08(uVar5,0xf,&local_3c);
  }
  if (*param_3 != -0x80000000) {
    if (param_3[3] != -0x80000000) {
      local_2c = &local_58;
      local_58 = (undefined **)*param_3;
      local_54 = param_3[1];
      iStack_50 = param_3[2];
      local_34 = &local_48;
      local_48 = param_3[3];
      local_44 = param_3[4];
      iStack_40 = param_3[5];
      local_60 = 0;
      local_68 = 0;
      local_38 = &DAT_012b59c8;
      local_30 = &LAB_00632348;
      local_3c = &local_80;
      local_64 = 1;
      local_28 = &LAB_00632348;
      FUN_012fa178(&local_68,&DAT_01ce25b4,&DAT_0042048f,&local_3c,iVar10,iVar6 == -0x80000000);
      uVar3 = local_60;
      uVar2 = local_64;
      uVar1 = local_68;
      if (uVar8 == local_78) {
        FUN_018c4418(&local_78);
        puVar7 = local_74;
      }
      local_70 = uVar8 + 1;
      puVar7 = puVar7 + uVar8 * 3;
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      FUN_0134bd64(local_48,local_44);
      FUN_0134bd64(local_58,local_54);
      goto LAB_012bd0ec;
    }
    local_38 = (undefined *)*param_3;
    local_34 = (int *)param_3[1];
    local_30 = (undefined1 *)param_3[2];
    local_3c = (undefined ***)CONCAT31(local_3c._1_3_,2);
    FUN_012bca08(uVar5,0xb,&local_3c);
  }
  if (uVar8 == 0) {
    FUN_018a8274(&local_78);
    return uVar5;
  }
LAB_012bd0ec:
  local_38 = (undefined *)local_78;
  local_34 = local_74;
  local_30 = (undefined1 *)local_70;
  local_3c = (undefined ***)CONCAT31(local_3c._1_3_,5);
  uVar5 = FUN_012bca08(uVar5,0xe,&local_3c);
  return uVar5;
}

