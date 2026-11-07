// FUN_006643f0 @ 006643f0 size=524 calls_out=5 calls_in=78
// strings: 

void FUN_006643f0(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_28;
  
  local_50 = param_2;
  local_4c = param_3;
  FUN_01307c98(&local_34,&local_50);
  uVar3 = local_30;
  uVar6 = local_34;
  if (local_34 == 0) {
    local_30 = 0;
    local_34 = 1;
  }
  else if (local_28 != 0) {
    if (param_3 == 0) {
      local_44 = 1;
    }
    else {
      local_44 = FUN_01298504(param_3,1);
      if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,param_3);
      }
    }
    local_40 = 0;
    local_48 = param_3;
    if (param_3 < uVar3) {
      FUN_00664634(&local_48,0,uVar3);
    }
    uVar2 = local_40;
    uVar7 = local_44;
    uVar1 = local_48;
    FUN_01bed4e2(local_44 + local_40,uVar6,uVar3);
    local_40 = uVar2 + uVar3;
    if (uVar1 - local_40 < 3) {
      FUN_00664634(&local_48,local_40,3);
      uVar7 = local_44;
    }
    puVar5 = (undefined2 *)(uVar7 + local_40);
    *puVar5 = 0xbfef;
    local_40 = local_40 + 3;
    *(undefined1 *)(puVar5 + 1) = 0xbd;
    local_38 = local_4c;
    local_3c = local_50;
    while( true ) {
      uVar6 = local_40;
      FUN_01307c98(&local_34,&local_3c);
      iVar4 = local_28;
      uVar1 = local_30;
      uVar3 = local_34;
      if (local_34 == 0) break;
      if (local_48 - uVar6 < local_30) {
        FUN_00664634(&local_48,uVar6,local_30);
        uVar6 = local_40;
        uVar7 = local_44;
      }
      FUN_01bed4e2(uVar7 + uVar6,uVar3,uVar1);
      local_40 = uVar6 + uVar1;
      if (iVar4 != 0) {
        if (local_48 - local_40 < 3) {
          FUN_00664634(&local_48,local_40,3);
          uVar7 = local_44;
        }
        puVar5 = (undefined2 *)(uVar7 + local_40);
        *puVar5 = 0xbfef;
        local_40 = local_40 + 3;
        *(undefined1 *)(puVar5 + 1) = 0xbd;
      }
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    return;
  }
  *param_1 = 0x80000000;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}

