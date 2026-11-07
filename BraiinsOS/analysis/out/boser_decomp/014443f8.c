// FUN_014443f8 @ 014443f8 size=372 calls_out=5 calls_in=2
// strings: 

void FUN_014443f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 **local_40;
  code *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  local_40 = (undefined4 **)0x2;
  uVar3 = FUN_019ec670(param_3);
  if ((uVar3 & 0xff) == 2) {
    uVar5 = 0;
LAB_01444454:
    (**(code **)(*(int *)(param_2 + 8) + 0xc))(param_2,&local_40,param_3);
    uVar4 = local_34;
    puVar2 = local_38;
    ppuVar1 = local_40;
    if (local_40 != (undefined4 **)0x2) {
      uVar5 = 0;
    }
    FUN_019edbc4(uVar5,local_64);
    if (ppuVar1 != (undefined4 **)0x2) {
      if (((uint)ppuVar1 & 1) == 0) {
        if (local_3c == (code *)0x0) {
          local_60 = 0;
        }
        else {
          local_54 = local_30;
          local_60 = (int)local_3c;
        }
        local_5c = local_38;
        local_58 = local_34;
      }
      else {
        local_48 = local_30;
        local_50 = local_38;
        local_44 = local_2c;
        local_4c = local_34;
        if (local_30 != 0) {
          local_40 = &local_50;
          local_3c = FUN_019ecfb8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005711f8,&local_40,&DAT_01cf8efc);
        }
        local_38 = (undefined4 *)local_30;
        local_40 = (undefined4 **)puVar2;
        local_34 = local_2c;
        local_3c = (code *)uVar4;
        FUN_0144382c((uint)&local_60 | 4,&local_40);
        local_60 = 0;
      }
      param_1[1] = local_60;
      param_1[2] = local_5c;
      param_1[3] = local_58;
      param_1[4] = local_54;
      uVar4 = 0;
      goto LAB_01444534;
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      uVar5 = (uVar3 & 0xffffff) >> 8;
      local_64 = (uVar3 & 0xffffff) >> 0x10;
      goto LAB_01444454;
    }
    FUN_01444304(&local_40);
  }
  uVar4 = 1;
LAB_01444534:
  *param_1 = uVar4;
  return;
}

