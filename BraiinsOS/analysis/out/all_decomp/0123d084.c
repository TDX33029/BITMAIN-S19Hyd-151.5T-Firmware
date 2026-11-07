// FUN_0123d084 @ 0123d084 size=596 calls_out=9 calls_in=3
// strings: denominator == 0

void FUN_0123d084(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int local_80;
  undefined4 *local_7c;
  int local_78;
  int local_74;
  undefined4 *local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined4 *puStack_38;
  int iStack_34;
  int local_30;
  undefined4 local_2c;
  
  local_80 = *param_2;
  puVar6 = (undefined4 *)param_2[1];
  local_74 = *param_3;
  puVar8 = (undefined4 *)param_3[1];
  iVar9 = param_3[2];
  iVar7 = param_2[2];
  local_7c = puVar6;
  local_78 = iVar7;
  local_70 = puVar8;
  local_6c = iVar9;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("denominator == 0",0x21,&DAT_0188ac38);
  }
  if (iVar7 == 0) {
    local_6c = 0;
    if (local_74 == 0) {
      FUN_005fd37c(&local_74);
    }
    local_6c = 1;
    *local_70 = 1;
  }
  else if ((iVar7 == iVar9) && (iVar4 = thunk_FUN_016dd50a(puVar6,puVar8,iVar9 << 2), iVar4 == 0)) {
    local_78 = 0;
    if (local_80 == 0) {
      FUN_005fd37c(&local_80);
      puVar6 = local_7c;
    }
    *puVar6 = 1;
    local_6c = 0;
    local_78 = 1;
    if (local_74 == 0) {
      FUN_005fd37c(&local_74);
    }
    local_6c = 1;
    *local_70 = 1;
  }
  else {
    FUN_0123d368(&local_68,puVar6,iVar7,puVar8,iVar9);
    uVar3 = local_60;
    uVar2 = local_64;
    uVar5 = 0;
    local_58 = *param_2;
    iStack_54 = param_2[1];
    iStack_50 = param_2[2];
    bVar11 = 0x3ffffffe < local_60;
    bVar10 = local_60 == 0x3fffffff;
    local_7c = (undefined4 *)0x4;
    uVar1 = local_60 * 4;
    if (local_60 < 0x40000000) {
      bVar11 = 0x7ffffffb < uVar1;
      bVar10 = uVar1 == 0x7ffffffc;
    }
    local_80 = 0;
    local_78 = 0;
    if (bVar11 && !bVar10) {
LAB_0123d148:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,uVar1);
    }
    if (uVar1 == 0) {
      local_48 = 0;
      local_44 = 4;
    }
    else {
      local_44 = thunk_FUN_016d4a50(uVar1);
      local_48 = uVar3;
      if (local_44 == 0) {
        uVar5 = 4;
        goto LAB_0123d148;
      }
    }
    FUN_016dd1aa(local_44,uVar2,uVar1);
    local_40 = uVar3;
    FUN_0127a77c(&local_3c,&local_58,&local_48);
    iVar9 = iStack_34;
    puVar6 = puStack_38;
    iVar7 = local_3c;
    if (local_30 != 0) {
      thunk_FUN_016d3fb4(local_2c);
    }
    local_80 = iVar7;
    local_7c = puVar6;
    local_78 = iVar9;
    local_48 = local_68;
    local_44 = local_64;
    local_40 = local_60;
    local_58 = *param_3;
    iStack_54 = param_3[1];
    iStack_50 = param_3[2];
    local_74 = 0;
    local_70 = (undefined4 *)0x4;
    local_6c = 0;
    FUN_0127a77c(&local_3c,&local_58,&local_48);
    if (local_30 != 0) {
      thunk_FUN_016d3fb4(local_2c);
    }
    local_74 = local_3c;
    local_70 = puStack_38;
    local_6c = iStack_34;
  }
  *param_1 = local_80;
  param_1[1] = (int)local_7c;
  param_1[2] = local_78;
  param_1[3] = local_74;
  param_1[4] = (int)local_70;
  param_1[5] = local_6c;
  return;
}

