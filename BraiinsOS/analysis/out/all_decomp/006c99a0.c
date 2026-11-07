// FUN_006c99a0 @ 006c99a0 size=1284 calls_out=11 calls_in=2
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_006c99a0(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_88;
  undefined *local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined *local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 *local_60;
  undefined *local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined2 *puStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined2 *local_34;
  undefined4 local_30;
  undefined1 uStack_25;
  
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(byte *)(param_3 + 0x11d) & 0xf) >> 3;
  }
  FUN_00fab1e0(&local_88,param_4,param_5);
  puVar8 = local_80;
  puVar1 = local_84;
  if (local_88 == (undefined4 *)&DAT_00000001) {
    FUN_006008c8(&local_88,param_4,param_5);
    puVar8 = local_80;
    puVar1 = local_84;
    if (local_88 == (undefined4 *)&DAT_80000000) {
      if ((int)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,local_80);
      }
      if (local_80 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        puVar3 = (undefined *)0x1;
      }
      else {
        puVar3 = (undefined *)thunk_FUN_016d4a50(local_80);
        puVar7 = puVar8;
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,puVar8);
        }
      }
      FUN_016dd1aa(puVar3,puVar1,puVar8);
      local_60 = puVar7;
      local_5c = puVar3;
    }
    else {
      local_60 = local_88;
      local_5c = local_84;
    }
    local_58 = puVar8;
    FUN_007bc250(&local_54);
    if (param_3 == 0) {
      puStack_44 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puStack_44 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4();
      }
      *(undefined1 *)(puStack_44 + 1) = 0x2e;
      *puStack_44 = 0x2e2e;
      local_48 = 3;
      uStack_40 = 3;
    }
    else {
      local_30 = 0;
      local_84 = &DAT_01858e88;
      local_88 = &local_38;
      local_38 = 0;
      local_7c = 0;
      local_34 = (undefined2 *)&DAT_00000001;
      local_80 = (undefined4 *)&DAT_60000020;
      iVar4 = FUN_00f9d654(param_3,&local_88);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_01858ea0,&DAT_018af130);
      }
      local_48 = local_38;
      puStack_44 = local_34;
      uStack_40 = local_30;
    }
    uVar5 = FUN_0074ce58(param_2,&local_60,local_50,local_4c,&local_48);
    puVar8 = (undefined4 *)(local_50 + 4);
    for (; local_4c != 0; local_4c = local_4c + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
LAB_006c9e24:
    if (local_54 != 0) {
      thunk_FUN_016d3fb4(local_50);
    }
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = 1;
    return;
  }
  local_6c = 6;
  local_70 = &DAT_00342983;
  local_68 = 0;
  local_7c = 0x80000000;
  local_80 = (undefined4 *)0x0;
  local_84 = (undefined *)0x4;
  local_88 = (undefined4 *)0x0;
  iVar4 = FUN_00f9a578(&local_88,puVar1,puVar8,uVar6);
  if (iVar4 == 0) {
    local_6c = 3;
    local_70 = &DAT_003e7d3b;
    local_68 = 0;
    local_7c = 0x80000000;
    local_80 = (undefined4 *)0x0;
    local_84 = (undefined *)0x4;
    local_88 = (undefined4 *)0x0;
    iVar4 = FUN_00f9a578(&local_88,puVar1,puVar8,uVar6);
    if (iVar4 == 0) {
      local_6c = 7;
      local_7c = 0x80000000;
      local_70 = &DAT_00342989;
      local_84 = (undefined *)0x4;
      local_68 = 0;
      local_80 = (undefined4 *)0x0;
      local_88 = (undefined4 *)0x0;
      iVar4 = FUN_00f9a578(&local_88,puVar1,puVar8,uVar6);
      if (iVar4 == 0) {
        if ((int)puVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,puVar8);
        }
        if (puVar8 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
          puVar3 = (undefined *)0x1;
        }
        else {
          puVar3 = (undefined *)thunk_FUN_016d4a50(puVar8);
          puVar7 = puVar8;
          if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar8);
          }
        }
        FUN_016dd1aa(puVar3,puVar1,puVar8);
        local_58 = puVar8;
        local_60 = puVar7;
        local_5c = puVar3;
        FUN_007bc250(&local_54);
        if (param_3 == 0) {
          puStack_44 = (undefined2 *)thunk_FUN_016d4a50(3);
          if (puStack_44 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4();
          }
          *(undefined1 *)(puStack_44 + 1) = 0x2e;
          *puStack_44 = 0x2e2e;
          local_48 = 3;
          uStack_40 = 3;
        }
        else {
          local_30 = 0;
          local_84 = &DAT_01858e88;
          local_88 = &local_38;
          local_38 = 0;
          local_7c = 0;
          local_34 = (undefined2 *)&DAT_00000001;
          local_80 = (undefined4 *)&DAT_60000020;
          iVar4 = FUN_00f9d654(param_3,&local_88);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                         &DAT_01858ea0,&DAT_018af130);
          }
          local_48 = local_38;
          puStack_44 = local_34;
          uStack_40 = local_30;
        }
        uVar5 = FUN_0074ce58(param_2,&local_60,local_50,local_4c,&local_48);
        puVar8 = (undefined4 *)(local_50 + 4);
        for (; local_4c != 0; local_4c = local_4c + -1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
          }
          puVar8 = puVar8 + 3;
        }
        goto LAB_006c9e24;
      }
      puVar2 = &DAT_0033e418;
    }
    else {
      puVar2 = &DAT_0033e417;
    }
  }
  else {
    puVar2 = &DAT_0033e416;
  }
  param_1[1] = *puVar2;
  *param_1 = 0;
  return;
}

