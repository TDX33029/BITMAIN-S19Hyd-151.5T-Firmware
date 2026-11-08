// FUN_00f9a030 @ 00f9a030 size=748 calls_out=7 calls_in=1
// strings: 

void FUN_00f9a030(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int local_68;
  undefined1 *local_64;
  int local_60;
  undefined1 local_59;
  undefined1 *local_58;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 **local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  
  puVar7 = (undefined1 *)param_1[2];
  local_64 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (local_64 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,1);
  }
  *local_64 = 10;
  local_60 = 1;
  local_68 = 1;
  if (param_3 != 0) {
    FUN_00f991dc(&local_68,1,param_3,1,1);
  }
  iVar3 = local_60;
  puVar1 = local_64;
  FUN_016dd1aa(local_64 + local_60,param_2,param_3);
  puVar6 = (undefined1 *)param_1[1];
  uVar4 = iVar3 + param_3;
  if (uVar4 == 1) {
    local_59 = 10;
    local_58 = (undefined1 *)CONCAT31(local_58._1_3_,*puVar1);
    local_40 = &local_58;
    local_44 = &local_59;
    local_48 = puVar6 + (int)puVar7;
    local_4c = puVar6;
    FUN_00f6f6ec(&local_30,&local_4c);
    iVar3 = *param_1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if (uVar4 != 0) {
      puVar8 = puVar7;
    }
    iVar3 = 1;
    local_58 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      iVar3 = thunk_FUN_016d4a50(puVar8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar8);
      }
      local_58 = puVar8;
    }
    local_50 = 0;
    local_34 = 1;
    local_38 = 10;
    local_40 = (undefined1 **)0x0;
    local_4c = &DAT_0000000a;
    iVar9 = 0;
    local_54 = iVar3;
    local_48 = puVar6;
    local_44 = puVar7;
    local_3c = puVar7;
    while (iVar5 = local_50, FUN_0062a644(&local_30,&local_4c), iVar2 = local_28,
          local_30 != (undefined1 *)0x0) {
      uVar10 = local_2c - iVar9;
      if ((uint)((int)local_58 - iVar5) < uVar10) {
        FUN_00f991dc(&local_58,iVar5,uVar10,1,1);
        iVar3 = local_54;
        iVar5 = local_50;
      }
      puVar8 = local_58;
      FUN_016dd1aa(iVar3 + iVar5,puVar6 + iVar9,uVar10);
      local_50 = iVar5 + uVar10;
      if ((uint)((int)puVar8 - local_50) < uVar4) {
        FUN_00f991dc(&local_58,local_50,uVar4,1,1);
        iVar3 = local_54;
      }
      iVar9 = local_50;
      FUN_016dd1aa(iVar3 + local_50,puVar1,uVar4);
      local_50 = iVar9 + uVar4;
      iVar9 = iVar2;
    }
    uVar4 = (int)puVar7 - iVar9;
    if ((uint)((int)local_58 - iVar5) < uVar4) {
      FUN_00f991dc(&local_58,iVar5,uVar4,1,1);
      iVar3 = local_54;
      iVar5 = local_50;
    }
    FUN_016dd1aa(iVar3 + iVar5,puVar6 + iVar9,uVar4);
    local_28 = iVar5 + uVar4;
    iVar3 = *param_1;
    local_30 = local_58;
    local_2c = local_54;
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  *param_1 = (int)local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  if (local_68 != 0) {
    thunk_FUN_016d3fb4(puVar1);
  }
  return;
}

