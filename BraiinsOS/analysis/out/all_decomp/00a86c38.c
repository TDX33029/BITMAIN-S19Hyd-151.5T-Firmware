// FUN_00a86c38 @ 00a86c38 size=496 calls_out=9 calls_in=2
// strings: inner has gone away

void FUN_00a86c38(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [12];
  int local_28;
  uint local_20;
  uint local_1c;
  
  local_70 = (undefined4 *)*param_1;
  *param_1 = 2;
  if (local_70 == (undefined4 *)&SUB_00000002) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("inner has gone away",0x13,&DAT_0187c210);
  }
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  puVar5 = (undefined4 *)((uint)&local_50 | 4);
  *puVar5 = param_1[1];
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar5[4] = uVar9;
  uVar6 = param_1[7];
  uVar7 = param_1[8];
  uVar8 = param_1[9];
  uVar9 = param_1[10];
  puVar5[5] = param_1[6];
  puVar5[6] = uVar6;
  puVar5[7] = uVar7;
  puVar5[8] = uVar8;
  puVar5[9] = uVar9;
  local_6c = local_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_60 = iStack_40;
  local_5c = iStack_3c;
  local_58 = iStack_38;
  local_50 = local_70;
  FUN_00a86e98(auStack_34);
  if (local_28 != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(auStack_34);
  uVar1 = 1;
  if (((uint)local_70 & 1) == 0) {
    if (local_64 == -1) {
      local_50 = (undefined4 *)0x0;
      iVar2 = FUN_016da356(local_68,&local_50,1);
      if (iVar2 == 0) {
        puVar4 = &local_1c;
        puVar5 = (undefined4 *)0x0;
      }
      else {
        if (iVar2 == -1) {
          puVar5 = (undefined4 *)FUN_016d2bc8();
          puVar5 = (undefined4 *)*puVar5;
          uVar1 = 0;
          local_1c = local_1c & 0xffffff00;
          goto LAB_00a86d98;
        }
        local_70 = (undefined4 *)&DAT_00000001;
        local_1c = 1;
        puVar4 = &local_20;
        local_6c = local_50;
        puVar5 = local_50;
      }
      *puVar4 = (uint)puVar5;
      uVar1 = local_1c;
    }
    else {
      FUN_015f05c4(&local_50,local_64,5);
      uVar1 = (uint)local_4c & 0xff;
      puVar5 = local_48;
      if (local_50 != (undefined4 *)0x0) {
LAB_00a86d98:
        if (uVar1 == 3) {
          uVar6 = *puVar5;
          puVar10 = (undefined4 *)puVar5[1];
          pcVar3 = (code *)*puVar10;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar6);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
          thunk_FUN_016d3fb4(puVar5);
        }
        goto LAB_00a86dd4;
      }
      if (((uint)local_4c & 1) == 0) goto LAB_00a86dd4;
      local_6c = local_48;
      local_70 = (undefined4 *)&DAT_00000001;
      uVar1 = 1;
    }
  }
  if (uVar1 != 0) {
    if (local_64 != -1) {
      FUN_016dffb2();
    }
    if (local_60 != -1) {
      FUN_016dffb2();
    }
    if (local_5c != -1) {
      FUN_016dffb2();
    }
    if (local_58 == -1) {
      return;
    }
    FUN_016dffb2();
    return;
  }
LAB_00a86dd4:
  FUN_01644520(&local_70);
  return;
}

