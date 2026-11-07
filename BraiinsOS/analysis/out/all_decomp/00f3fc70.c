// FUN_00f3fc70 @ 00f3fc70 size=752 calls_out=14 calls_in=1
// strings: x-dependsOn | raw value was not emitted

int FUN_00f3fc70(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_84;
  int local_80;
  int local_7c;
  char local_78 [4];
  int local_74;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_1 != 0) {
    local_40 = 10;
    iVar3 = FUN_0157c50c(&local_40,0,0);
    return iVar3;
  }
  iVar3 = FUN_00f3f38c(param_1,"x-dependsOn",0xb);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  iVar6 = param_1[4];
  iVar3 = param_1[5];
  local_7c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar6 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  local_84 = iVar6;
  local_80 = iVar3;
  if (*(int *)(param_2 + 0x18) == -0x80000000) {
    local_78[0] = '\0';
    goto LAB_00f3fcf8;
  }
  local_50 = 0x80000000;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  iVar4 = FUN_00f3f420(&local_60,&DAT_004145fc,3,*(undefined4 *)(param_2 + 0x1c),
                       *(undefined4 *)(param_2 + 0x20));
  if (iVar4 == 0) {
    if (local_60 == 1) {
      local_40 = 10;
      iVar4 = FUN_0157c50c(&local_40,0,0);
    }
    else {
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(5);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,5);
      }
      *(undefined1 *)(puVar5 + 1) = 0x65;
      *puVar5 = 0x756c6176;
      if ((local_50 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_4c);
      }
      local_48 = 5;
      local_50 = 5;
      local_4c = puVar5;
      iVar4 = FUN_00f3f5a0(&local_60,param_2);
      if (iVar4 == 0) {
        local_40 = local_60;
        uStack_3c = local_5c;
        local_38 = local_58;
        uVar2 = local_38;
        uStack_34 = local_54;
        local_30 = local_50;
        puStack_2c = local_4c;
        uStack_28 = local_48;
        uStack_24 = uStack_44;
        if (local_60 == 1) {
          local_38._0_1_ = (char)local_58;
          cVar1 = (char)local_38;
          local_38 = uVar2;
          if ((char)local_38 == '\x06') {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("raw value was not emitted",0x19,&DAT_018a942c);
          }
          FUN_016dd1aa((uint)local_78 | 1,(int)&local_58 + 1,0x17);
          local_78[0] = cVar1;
LAB_00f3fcf8:
          FUN_00f45bb4(&local_40,param_1 + 1,&local_84,local_78);
          if ((local_40 & 0xff) == 6) {
            return 0;
          }
          FUN_00f3732c(&local_40);
          return 0;
        }
        FUN_0157cde0(local_78,&local_40);
        if (local_78[0] != '\x06') goto LAB_00f3fcf8;
        goto LAB_00f3fe80;
      }
    }
  }
  local_78[0] = '\x06';
  local_74 = iVar4;
  if (local_60 == 0) {
    FUN_00f47a28((uint)&local_60 | 4);
    if ((local_50 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_4c);
    }
  }
  else if ((char)local_58 != '\x06') {
    FUN_00f3732c(&local_58);
  }
LAB_00f3fe80:
  iVar4 = local_74;
  if (iVar6 == 0) {
    return local_74;
  }
  thunk_FUN_016d3fb4(iVar3);
  return iVar4;
}

