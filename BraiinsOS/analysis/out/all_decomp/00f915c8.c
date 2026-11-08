// FUN_00f915c8 @ 00f915c8 size=924 calls_out=9 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_00f915c8(undefined1 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int local_80;
  int *local_78;
  undefined *local_74;
  int *local_70;
  int local_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 *local_54;
  undefined4 local_50;
  int *local_48;
  undefined *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (param_5 == 4) {
    if (*param_4 == 0x65757274) {
LAB_00f917f0:
      *param_1 = 0;
      param_1[1] = param_5 == 4;
      return;
    }
  }
  else if ((param_5 == 5) && (iVar2 = thunk_FUN_016dd50a(param_4,&DAT_00414fdc,5), iVar2 == 0))
  goto LAB_00f917f0;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x18);
  }
  uVar8 = 4;
  local_30 = &DAT_00568b2c;
  local_44 = (undefined *)0x4;
  local_40 = (int *)0x0;
  local_3c = 0x80000000;
  local_50 = 0;
  local_58 = 2;
  local_28 = 0;
  local_2c = 4;
  local_48 = (int *)0x0;
  local_54 = puVar3;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar4 != (undefined4 *)0x0) {
    uVar8 = 5;
    *puVar4 = 0x65757274;
    puVar3[1] = puVar4;
    puVar3[2] = 4;
    local_28 = 0;
    local_40 = (int *)0x0;
    local_48 = (int *)0x0;
    *puVar3 = 4;
    local_2c = 5;
    local_30 = &DAT_00414fdc;
    local_3c = 0x80000000;
    local_44 = (undefined *)0x4;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(5);
    puVar4 = local_54;
    iVar2 = local_58;
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0x65;
      *puVar5 = 0x736c6166;
      puVar3[4] = puVar5;
      puVar3[3] = 5;
      puVar3[5] = 5;
      local_80 = 2;
      FUN_006008c8(&local_48,param_4,param_5);
      local_70 = local_40;
      puVar1 = local_44;
      if (local_48 == (int *)&DAT_80000000) {
        if ((int)local_40 < 0) {
          uVar8 = 0;
LAB_00f91760:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar8,local_70);
        }
        if (local_40 == (int *)0x0) {
          piVar9 = (int *)0x0;
          puVar7 = (undefined *)0x1;
        }
        else {
          puVar7 = (undefined *)thunk_FUN_016d4a50(local_40);
          if (puVar7 == (undefined *)0x0) {
            uVar8 = 1;
            goto LAB_00f91760;
          }
          piVar9 = local_70;
        }
        FUN_016dd1aa(puVar7,puVar1,local_70);
        local_78 = piVar9;
        local_74 = puVar7;
      }
      else {
        local_78 = local_48;
        local_74 = local_44;
      }
      if (param_3 == 0) {
        puStack_64 = (undefined4 *)thunk_FUN_016d4a50(3);
        if (puStack_64 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4();
        }
        *(undefined1 *)((int)puStack_64 + 2) = 0x2e;
        *(undefined2 *)puStack_64 = 0x2e2e;
        local_68 = 3;
        uStack_60 = 3;
      }
      else {
        local_50 = 0;
        local_44 = &DAT_018806ac;
        local_48 = &local_58;
        local_58 = 0;
        local_3c = 0;
        local_54 = (undefined4 *)&DAT_00000001;
        local_40 = (int *)&DAT_60000020;
        iVar6 = FUN_00f9d654(param_3,&local_48);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_68,
                       &DAT_018806c4,&DAT_018af130);
        }
        local_68 = local_58;
        puStack_64 = local_54;
        uStack_60 = local_50;
      }
      uVar8 = FUN_00f94b78(param_2,&local_78,puVar4,2,&local_68);
      puVar3 = puVar4 + 1;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = uVar8;
      for (; local_80 != 0; local_80 = local_80 + -1) {
        if (puVar3[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar3);
        }
        puVar3 = puVar3 + 3;
      }
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(puVar4);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(1,uVar8);
}

