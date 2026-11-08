// FUN_01679184 @ 01679184 size=792 calls_out=4 calls_in=2
// strings: 

void FUN_01679184(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int local_a4;
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_74;
  int local_70;
  undefined *local_6c;
  undefined4 local_68;
  byte *local_60;
  uint local_5c;
  int local_58;
  undefined *local_54;
  int local_50;
  int local_4c;
  byte **local_48;
  undefined4 *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  
  puVar7 = (undefined4 *)&DAT_00000007;
  local_80 = 5;
  local_88 = 2;
  local_8c[0] = 0x5f;
  pbVar9 = *(byte **)(param_2 + 8);
  uVar10 = *(uint *)(param_2 + 0xc);
  local_74 = 7;
  local_7c = 3;
  local_78 = &DAT_00414648;
  local_84 = &DAT_0041440d;
  local_68 = 7;
  local_6c = &DAT_00414648;
  local_70 = 3;
  if (uVar10 == 0) {
LAB_01679230:
    *(byte **)(param_2 + 8) = pbVar9;
    *(uint *)(param_2 + 0xc) = uVar10;
    pbVar6 = pbVar9;
    uVar2 = uVar10;
  }
  else {
    bVar1 = *pbVar9;
    *(byte **)(param_2 + 8) = pbVar9 + 1;
    *(uint *)(param_2 + 0xc) = uVar10 - 1;
    pbVar6 = pbVar9 + 1;
    uVar2 = uVar10 - 1;
    if (bVar1 != 0x2b && bVar1 != 0x2d) goto LAB_01679230;
  }
  iVar11 = 1;
  local_a4 = 4;
  local_60 = pbVar9;
  local_5c = uVar10;
  if (uVar2 == 0) {
LAB_016792bc:
    uVar3 = 0;
    local_4c = 0;
    iVar8 = 0;
    uVar5 = 0;
  }
  else {
    bVar1 = *pbVar6;
    *(byte **)(param_2 + 8) = pbVar6 + 1;
    *(uint *)(param_2 + 0xc) = uVar2 - 1;
    if (8 < bVar1 - 0x31) {
      *(byte **)(param_2 + 8) = pbVar6;
      *(uint *)(param_2 + 0xc) = uVar2;
      goto LAB_016792bc;
    }
    FUN_0166a204(&local_40,local_8c);
    if (local_40 == 3) goto LAB_0167937c;
    uVar3 = local_3c >> 8;
    uVar5 = (undefined1)local_3c;
    local_a4 = local_38;
    local_4c = local_34;
    puVar7 = local_2c;
    iVar8 = local_30;
    iVar11 = local_40;
  }
  local_50 = local_a4;
  iVar4 = CONCAT13((char)(uVar3 >> 0x10),(int3)CONCAT31((int3)uVar3,uVar5));
  local_44 = puVar7;
  if (iVar11 == 1) {
    *(byte **)(param_2 + 8) = pbVar6;
    *(uint *)(param_2 + 0xc) = uVar2;
    local_58 = iVar11;
    local_54 = (undefined *)iVar4;
    local_48 = (byte **)iVar8;
    if (uVar2 != 0) {
      bVar1 = *pbVar6;
      *(byte **)(param_2 + 8) = pbVar6 + 1;
      *(uint *)(param_2 + 0xc) = uVar2 - 1;
      if (bVar1 - 0x30 < 10) {
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(local_a4);
        }
        if (iVar8 != 0) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(iVar8);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(iVar8);
          }
        }
LAB_0167937c:
        iVar11 = *(int *)(param_2 + 8);
        *(byte **)(param_2 + 8) = pbVar9;
        *(uint *)(param_2 + 0xc) = uVar10;
        uVar2 = iVar11 - (int)pbVar9;
        if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
        }
        *(byte **)(param_2 + 8) = pbVar9 + uVar2;
        *(uint *)(param_2 + 0xc) = uVar10 - uVar2;
        *param_1 = 3;
        param_1[1] = (int)pbVar9;
        param_1[2] = uVar2;
        return;
      }
      *(byte **)(param_2 + 8) = pbVar6;
      *(uint *)(param_2 + 0xc) = uVar2;
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(local_a4);
    }
    iVar11 = 1;
    local_a4 = 4;
    if (iVar8 != 0) {
      if ((code *)*puVar7 != (code *)0x0) {
        (*(code *)*puVar7)(iVar8);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
    iVar4 = 0;
    iVar8 = 0;
    local_4c = 0;
  }
  param_1[3] = local_4c;
  param_1[5] = (int)puVar7;
  local_58 = local_70;
  local_54 = local_6c;
  local_50 = local_68;
  local_48 = &local_60;
  param_1[1] = iVar4;
  param_1[2] = local_a4;
  *param_1 = iVar11;
  param_1[4] = iVar8;
  local_4c = param_2;
  FUN_00953084(&local_40,param_1,&local_58);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[4] = local_30;
  param_1[5] = (int)local_2c;
  return;
}

