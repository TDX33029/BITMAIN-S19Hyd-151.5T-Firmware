// FUN_015aee80 @ 015aee80 size=812 calls_out=5 calls_in=1
// strings: 

void FUN_015aee80(undefined2 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint *extraout_r2;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar11 = (uint *)(param_2 + 0x2c);
  uVar7 = *puVar11;
  *puVar11 = 9;
  if (uVar7 == 9) {
    FUN_015ade58(&local_78,param_2);
    uVar7 = local_78;
    uVar8 = local_74;
    uVar10 = local_70;
    local_88 = local_6c;
    local_84 = local_68;
    local_80 = local_64;
  }
  else {
    local_88 = *(uint *)(param_2 + 0x38);
    local_84 = *(uint *)(param_2 + 0x3c);
    local_80 = *(uint *)(param_2 + 0x40);
    uVar8 = *(uint *)(param_2 + 0x30);
    uVar10 = *(uint *)(param_2 + 0x34);
  }
  if (uVar7 == 8) goto LAB_015af01c;
  uVar9 = (undefined1)uVar8;
  local_74._1_1_ = (undefined1)(uVar8 >> 8);
  local_74._2_2_ = (undefined2)(uVar8 >> 0x10);
  local_40 = local_88;
  local_3c = local_84;
  local_38 = local_80;
  if (uVar7 != 7) {
    local_78 = 5;
    local_70._2_2_ = local_74._2_2_;
    local_70._1_1_ = local_74._1_1_;
    goto LAB_015af034;
  }
  uVar7 = uVar10;
  local_64 = local_80;
  if ((uVar8 & 0xff) == 0) {
    local_78 = 0;
    local_70 = local_88;
    local_6c = local_84;
    local_68 = local_80;
  }
  else {
    local_74 = uVar8;
    local_70 = uVar10;
    local_6c = local_88;
    local_68 = local_84;
    if ((uVar8 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0040f666,0x9b,&DAT_018aa1fc);
    }
    if ((uVar8 & 0x100) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0040f618,0x9d,&DAT_018aa1ec);
    }
    uVar8 = *puVar11;
    if (uVar8 == 9) {
      FUN_015ade58(&local_78,param_2);
      *puVar11 = local_78;
      *(uint *)(param_2 + 0x30) = local_74;
      *(uint *)(param_2 + 0x34) = local_70;
      *(uint *)(param_2 + 0x38) = local_6c;
      *(uint *)(param_2 + 0x3c) = local_68;
      *(uint *)(param_2 + 0x40) = local_64;
      uVar8 = *(uint *)(param_2 + 0x2c);
    }
    if (uVar8 == 7) {
      bVar2 = *(byte *)(param_2 + 0x30);
      bVar12 = bVar2 == 1;
      if (bVar12) {
        bVar2 = *(byte *)(param_2 + 0x31);
      }
      if (bVar12 && (bVar2 & 1) == 0) {
        local_78 = 1;
        *puVar11 = 9;
        goto LAB_015aefec;
      }
    }
    FUN_015afc14(&local_78,uVar10,param_2);
    uVar7 = local_74;
  }
LAB_015aefec:
  uVar9 = (undefined1)local_70;
  local_88 = local_68;
  local_84 = local_64;
  local_80 = local_60;
  if (local_78 != 6) {
    uVar10 = local_6c;
LAB_015af034:
    local_60 = local_80;
    local_64 = local_84;
    local_68 = local_88;
    local_70 = CONCAT31(CONCAT21(local_70._2_2_,local_70._1_1_),uVar9);
    local_74 = uVar7;
    local_6c = uVar10;
    if (local_78 == 5) {
      puVar11 = (uint *)((uint)&local_78 | 4);
      local_40 = *puVar11;
      local_3c = puVar11[1];
      local_38 = puVar11[2];
      uStack_34 = puVar11[3];
      uStack_30 = puVar11[4];
      uStack_2c = puVar11[5];
    }
    else {
      FUN_0162ba54(&local_40,&local_78);
    }
    uVar6 = uStack_2c;
    uVar5 = uStack_30;
    uVar4 = uStack_34;
    uVar10 = local_38;
    uVar7 = local_3c;
    uVar8 = local_40;
    puVar11 = &local_58;
    local_58 = local_40;
    local_54 = local_3c;
    local_50 = local_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    local_44 = uStack_2c;
    local_54._3_1_ = (undefined1)(local_3c >> 0x18);
    uVar9 = local_54._3_1_;
    local_54._0_2_ = (undefined2)local_3c;
    uVar3 = (undefined2)local_54;
    local_54 = uVar7;
    if (local_40 == 7) {
                    /* WARNING: Could not recover jumptable at 0x015af0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_015af0e4 + *(int *)(&DAT_015af0e4 + (local_3c & 0xffff) * 4)))
                ((uint)puVar11 | 4,&DAT_015af0e4,*(int *)(&DAT_015af0e4 + (local_3c & 0xffff) * 4),
                 uVar9);
      return;
    }
    uVar1 = local_3c >> 0x18;
    if ((0xfffffffd < *param_3 - 3) && (param_3[2] != 0)) {
      thunk_FUN_016d3fb4(param_3[3]);
      puVar11 = extraout_r2;
      uStack_34 = uVar1;
    }
    *(undefined1 *)((int)param_3 + 7) = uVar9;
    *(undefined2 *)(param_3 + 1) = uVar3;
    *param_3 = uVar8;
    *(char *)((int)param_3 + 6) = (char)(uVar7 >> 0x10);
    param_3[2] = uVar10;
    param_3[3] = uVar4;
    param_3[4] = uVar5;
    param_3[5] = uVar6;
    *(uint *)(param_1 + 2) = uVar7;
    *(uint *)(param_1 + 4) = uStack_34;
    *(undefined1 *)((int)param_1 + 3) = uVar9;
    *(char *)(param_1 + 1) = (char)puVar11;
    *param_1 = 5;
    return;
  }
LAB_015af01c:
  *param_1 = 6;
  return;
}

