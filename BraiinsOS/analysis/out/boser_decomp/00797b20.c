// FUN_00797b20 @ 00797b20 size=288 calls_out=4 calls_in=2
// strings: 

void FUN_00797b20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  char local_29;
  undefined4 local_28;
  
  local_90 = 10;
  uStack_84 = 0;
  local_7c = 10;
  local_6c = local_6c & 0xffff0000;
  local_74 = 0;
  local_78 = CONCAT31(local_78._1_3_,1);
  uStack_8c = param_2;
  uStack_88 = param_3;
  local_80 = param_3;
  local_70 = param_3;
  FUN_00797ef8(&local_58,&local_90);
  if ((char)local_58 == '\x01') {
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    *puVar3 = CONCAT13((undefined1)uStack_54,local_58._1_3_);
    local_60 = 1;
    local_68 = 4;
    local_58 = local_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = local_80;
    local_44 = local_7c;
    uStack_40 = local_78;
    uStack_3c = local_74;
    uStack_38 = local_70;
    uStack_34 = local_6c;
    local_64 = puVar3;
    while (iVar1 = local_60, FUN_00797ef8(&local_29,&local_58), uVar2 = local_28, local_29 == '\x01'
          ) {
      if (iVar1 == local_68) {
        FUN_016092cc(&local_68,iVar1,1,1,4);
        puVar3 = local_64;
      }
      puVar3[iVar1] = uVar2;
      local_60 = iVar1 + 1;
    }
    *param_1 = local_68;
    param_1[1] = (int)local_64;
    param_1[2] = local_60;
  }
  else {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  return;
}

