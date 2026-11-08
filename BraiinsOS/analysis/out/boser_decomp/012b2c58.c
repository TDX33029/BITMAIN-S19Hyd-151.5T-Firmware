// FUN_012b2c58 @ 012b2c58 size=836 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012b2c58(uint *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 *local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  undefined1 *puStack_40;
  undefined1 local_3a;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  uVar8 = param_1[2];
  local_50 = (undefined1 *)thunk_FUN_01be5118(1);
  if (local_50 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,1);
  }
  *local_50 = 10;
  local_4c = 1;
  local_54 = 1;
  if (param_3 != 0) {
    FUN_006520b4(&local_54,1,param_3,1,1);
  }
  uVar6 = local_4c;
  puVar1 = local_50;
  FUN_01bed4e2(local_50 + local_4c,param_2,param_3);
  uVar6 = uVar6 + param_3;
  uVar4 = param_1[1];
  local_4c = uVar6;
  if (uVar6 == 1) {
    local_3a = 10;
    local_39 = *puVar1;
    local_2c = &local_39;
    local_30 = &local_3a;
    local_34 = uVar4 + uVar8;
    local_38 = uVar4;
    FUN_01298968(&local_48,&local_38);
LAB_012b2f08:
    FUN_0134bd64(*param_1,uVar4);
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = (uint)puStack_40;
    FUN_0134bd64(local_54,puVar1);
    return;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    uVar5 = uVar8;
  }
  puVar7 = (undefined1 *)0x0;
  local_60 = 1;
  local_38 = 0;
  if (uVar5 != 0) {
    local_60 = FUN_01298504(uVar5,1);
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar5);
    }
    local_38 = uVar5;
  }
  local_58 = 0;
  local_34 = local_60;
  do {
    uVar5 = local_58;
    local_30 = puVar7;
LAB_012b2d60:
    uVar3 = uVar8 - uVar5;
    if (uVar3 < 8) {
      uVar2 = 0;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        do {
          if (*(char *)(uVar4 + uVar5 + uVar2) == '\n') {
            uVar9 = CONCAT44(uVar2,1);
            goto LAB_012b2dbc;
          }
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
        uVar9 = (ulonglong)uVar3 << 0x20;
      }
    }
    else {
      uVar9 = FUN_01307168(10,uVar4 + uVar5);
    }
LAB_012b2dbc:
    if ((uVar9 & 1) == 0) goto LAB_012b2ec0;
    uVar3 = (int)(uVar9 >> 0x20) + uVar5;
    uVar5 = uVar3 + 1;
    if ((uVar8 <= uVar3) || (*(char *)(uVar4 + uVar3) != '\n')) break;
    uVar3 = uVar3 - local_58;
    if (local_38 - (int)puVar7 < uVar3) {
      FUN_006520b4(&local_38,puVar7,uVar3,1,1);
      local_60 = local_34;
      puVar7 = local_30;
    }
    uVar2 = local_38;
    FUN_01bed4e2(local_60 + (int)puVar7,uVar4 + local_58,uVar3);
    local_30 = (undefined1 *)((int)puVar7 + uVar3);
    if (uVar2 - (int)local_30 < uVar6) {
      FUN_006520b4(&local_38,local_30,uVar6,1,1);
      local_60 = local_34;
    }
    puVar7 = local_30;
    FUN_01bed4e2(local_60 + (int)local_30,puVar1,uVar6);
    puVar7 = (undefined1 *)((int)puVar7 + uVar6);
    local_58 = uVar5;
  } while( true );
  if (uVar8 < uVar5) {
LAB_012b2ec0:
    uVar8 = uVar8 - local_58;
    if (local_38 - (int)puVar7 < uVar8) {
      FUN_006520b4(&local_38,puVar7,uVar8,1,1);
      local_60 = local_34;
      puVar7 = local_30;
    }
    FUN_01bed4e2(local_60 + (int)puVar7,uVar4 + local_58,uVar8);
    puStack_40 = (undefined1 *)((int)puVar7 + uVar8);
    local_48 = local_38;
    uStack_44 = local_34;
    uVar4 = param_1[1];
    local_30 = puStack_40;
    goto LAB_012b2f08;
  }
  goto LAB_012b2d60;
}

