// FUN_00c37600 @ 00c37600 size=704 calls_out=6 calls_in=0
// strings: 

void FUN_00c37600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined1 param_5,undefined1 param_6,int *param_7,int param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined4 *local_2c;
  
  if (param_8 == 0) {
    iVar7 = 0;
    local_15c = 8;
    local_158 = 0;
    local_160 = 0;
    local_14c = 0;
    local_150 = 4;
    local_154 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_8 * 0x108);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,param_8 * 0x108);
    }
    local_158 = 0;
    local_160 = param_8;
    local_15c = iVar1;
    iVar2 = thunk_FUN_016d4a50(param_8 << 2);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,param_8 << 2);
    }
    local_14c = 0;
    iVar12 = 0;
    iVar10 = param_8 * 0x110;
    iVar7 = 0;
    local_154 = param_8;
    local_150 = iVar2;
    do {
      while (*param_7 != 2 || param_7[1] != 0) {
        FUN_00c30c8c(&local_148,param_7);
        if (iVar12 == local_160) {
          FUN_00d65324(&local_160);
          iVar1 = local_15c;
        }
        FUN_016dd1aa(iVar1 + iVar12 * 0x108,&local_148,0x108);
        iVar12 = iVar12 + 1;
        param_7 = param_7 + 0x44;
        iVar10 = iVar10 + -0x110;
        local_158 = iVar12;
        if (iVar10 == 0) goto LAB_00c37764;
      }
      iVar9 = param_7[0x42];
      if (iVar7 == local_154) {
        FUN_00d64d00(&local_154);
        iVar2 = local_150;
      }
      *(int *)(iVar2 + iVar7 * 4) = iVar9;
      iVar7 = iVar7 + 1;
      param_7 = param_7 + 0x44;
      iVar10 = iVar10 + -0x110;
      local_14c = iVar7;
    } while (iVar10 != 0);
  }
LAB_00c37764:
  iVar2 = local_150;
  iVar1 = local_154;
  local_40 = local_160;
  local_3c = local_15c;
  local_38 = local_158;
  if (param_4 == 0) {
    local_2c = (undefined4 *)&DAT_00000004;
    local_30 = 0;
  }
  else {
    iVar10 = param_4 * 0x14;
    local_2c = (undefined4 *)thunk_FUN_016d4a50(iVar10);
    if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar10);
    }
    puVar4 = local_2c;
    local_30 = param_4;
    do {
      if (iVar10 == 0) break;
      uVar11 = param_3[4];
      (**(code **)*param_3)(&local_148,param_3 + 3,param_3[1],param_3[2]);
      param_3 = param_3 + 5;
      iVar10 = iVar10 + -0x14;
      *puVar4 = local_148;
      puVar4[1] = uStack_144;
      puVar4[2] = uStack_140;
      puVar4[3] = uStack_13c;
      puVar4[4] = uVar11;
      puVar4 = puVar4 + 5;
      local_138 = uVar11;
    } while (iVar10 != 0);
  }
  param_1[0xf] = local_30;
  param_1[0x10] = local_2c;
  param_1[0x11] = param_4;
  uVar11 = param_9[1];
  uVar3 = param_9[2];
  uVar5 = param_9[3];
  uVar6 = param_9[4];
  uVar8 = param_9[5];
  *param_1 = *param_9;
  param_1[1] = uVar11;
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar8;
  uVar11 = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  param_1[0xe] = iVar7;
  param_1[6] = uVar11;
  param_1[7] = uVar3;
  param_1[8] = uVar5;
  param_1[9] = local_40;
  param_1[0xc] = iVar1;
  *(undefined1 *)((int)param_1 + 0x49) = param_6;
  *(undefined1 *)(param_1 + 0x12) = param_5;
  param_1[10] = local_3c;
  param_1[0xb] = local_38;
  param_1[0xd] = iVar2;
  return;
}

