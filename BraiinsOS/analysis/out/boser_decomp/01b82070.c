// FUN_01b82070 @ 01b82070 size=672 calls_out=4 calls_in=1
// strings: 

void FUN_01b82070(uint *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_60 [3];
  int local_54;
  uint local_50 [3];
  int local_44;
  uint local_40;
  uint local_3c;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (2 < param_4) {
    puVar3 = (uint *)((int)param_1 + (param_2 - 4));
    local_30 = puVar3;
    if (4 < param_2) {
      iVar2 = param_3 + param_4;
      if ((param_4 & 1) == 0) {
        uVar5 = iVar2 - 2;
        FUN_01b81cf0(local_50,param_5,*(undefined1 *)(iVar2 + -1));
        FUN_01b81cf0(local_60,param_5,*(undefined1 *)(iVar2 + -2));
        local_3c = 0;
        local_40 = 0;
        puVar4 = param_1;
      }
      else {
        uVar5 = iVar2 - 3;
        FUN_01b81cf0(local_60,param_5,*(undefined1 *)(iVar2 + -1));
        FUN_01b81cf0(local_50,param_5,*(undefined1 *)(iVar2 + -2));
        local_40 = 0;
        local_3c = 0;
        local_34 = param_1;
        FUN_01b81d70(&local_40,local_60,*(undefined1 *)(iVar2 + -3));
        if (param_6 == 0) {
          FUN_01b81c94(&local_40);
          puVar4 = local_34;
        }
        else {
          uVar1 = local_3c >> 3;
          local_3c = local_3c & 7;
          *param_1 = local_40;
          local_40 = local_40 >> ((uVar1 & 0x1f) << 3);
          puVar4 = (uint *)((int)param_1 + uVar1);
        }
      }
      for (; local_34 = puVar4, param_3 < uVar5; uVar5 = uVar5 - 2) {
        FUN_01b81d70(&local_40,local_50,*(undefined1 *)(uVar5 - 1));
        FUN_01b81d70(&local_40,local_60,*(undefined1 *)(uVar5 - 2));
        if (param_6 == 0) {
          FUN_01b81c94(&local_40);
        }
        else {
          uVar1 = local_3c >> 3;
          local_3c = local_3c & 7;
          local_34 = (uint *)((int)puVar4 + uVar1);
          *puVar4 = local_40;
          local_40 = local_40 >> ((uVar1 & 0x1f) << 3);
        }
        puVar4 = local_34;
      }
      local_40 = local_40 |
                 (local_50[0] & *(uint *)(&DAT_00561c54 + local_44 * 4)) << (local_3c & 0xff);
      local_3c = local_3c + local_44;
      FUN_01b81c94(&local_40);
      local_40 = local_40 |
                 (local_60[0] & *(uint *)(&DAT_00561c54 + local_54 * 4)) << (local_3c & 0xff);
      local_3c = local_54 + local_3c;
      FUN_01b81c94(&local_40);
      local_40 = local_40 | 1 << (local_3c & 0xff);
      local_3c = local_3c + 1;
      FUN_01b81c94(&local_40);
      param_5 = extraout_r1;
      if (local_34 < puVar3) {
        iVar2 = (int)local_34 - (int)param_1;
        if (local_3c != 0) {
          iVar2 = iVar2 + 1;
        }
        goto LAB_01b82214;
      }
    }
  }
  iVar2 = 0;
LAB_01b82214:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(iVar2,param_5,local_2c ^ DAT_01d53560,0);
  }
  return;
}

