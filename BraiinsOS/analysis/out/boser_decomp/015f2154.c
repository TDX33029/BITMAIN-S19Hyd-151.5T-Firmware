// FUN_015f2154 @ 015f2154 size=344 calls_out=5 calls_in=3
// strings: 

void FUN_015f2154(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_94;
  uint *local_90;
  uint local_8c;
  uint *local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  int local_78;
  int local_74;
  int local_70;
  char local_68 [24];
  uint *local_50;
  uint uStack_4c;
  uint *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  char local_38 [20];
  
  local_90 = (uint *)*param_2;
  local_80 = param_2[3];
  local_7c = &local_94;
  local_84 = (int)local_90 + param_2[1] + 1;
  local_88 = local_90 + 1;
  local_8c = ~*local_90 & 0x80808080;
  local_94 = param_3;
  FUN_015f5d9c(local_68,&local_90);
  if (local_68[0] == '\x02') {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    iVar2 = FUN_01298504(0x44,1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x44);
    }
    FUN_01bed4e2(iVar2,local_68,0x11);
    local_70 = 1;
    local_78 = 4;
    local_50 = local_90;
    uStack_4c = local_8c;
    puStack_48 = local_88;
    iStack_44 = local_84;
    iStack_40 = local_80;
    puStack_3c = local_7c;
    local_74 = iVar2;
    while (iVar1 = local_70, FUN_015f5d9c(local_38,&local_50), local_38[0] != '\x02') {
      if (iVar1 == local_78) {
        FUN_006520b4(&local_78,iVar1,1,1,0x11);
        iVar2 = local_74;
      }
      FUN_01bed4e2(iVar2 + iVar1 * 0x11,local_38,0x11);
      local_70 = iVar1 + 1;
    }
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
  }
  return;
}

