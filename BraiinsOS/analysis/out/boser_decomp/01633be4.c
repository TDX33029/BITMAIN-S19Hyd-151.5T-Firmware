// FUN_01633be4 @ 01633be4 size=588 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01633be4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  int local_a4;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80 [3];
  undefined8 local_74;
  undefined2 local_6a;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  undefined1 *local_54;
  undefined4 uStack_50;
  int *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_38;
  code *local_34;
  undefined8 *local_30;
  undefined1 *local_2c;
  
  local_a4 = 4;
  uStack_84 = 0;
  local_90 = 0;
  local_94 = 4;
  local_98 = 0;
  iVar6 = 8;
  local_8c = param_2;
  uStack_88 = param_3;
  while( true ) {
    iVar1 = local_90;
    FUN_0162385c(local_80,&local_8c);
    if (local_80[0] == -0x7fffffff) {
      param_1[1] = local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      *param_1 = 0;
      return;
    }
    uVar7 = FUN_01623bf0(param_2,param_3);
    local_58 = (int *)&local_68;
    local_54 = &LAB_0141634c;
    local_68 = uVar7;
    FUN_00664898(&local_38,&DAT_00592476,&local_58);
    local_58 = local_38;
    local_54 = local_34;
    uStack_50 = local_30;
    FUN_0160f56c(&local_38,local_80,&local_58);
    puVar5 = local_30;
    pcVar4 = local_34;
    if (local_38 != (int *)0x80000000) break;
    uVar7 = FUN_01623bf0(local_34,local_30);
    local_74 = uVar7;
    local_6a = FUN_01623bc0(pcVar4,puVar5);
    FUN_01623ae4(&local_58,pcVar4,puVar5);
    local_30 = &local_74;
    local_2c = &LAB_0141634c;
    local_34 = FUN_012fcf18;
    local_38 = (int *)&local_6a;
    FUN_00664898(&local_48,&DAT_005b3722,&local_38);
    local_38 = local_48;
    local_34 = (code *)uStack_44;
    local_30 = (undefined8 *)uStack_40;
    FUN_0160f810(&local_68,&local_58,&local_38);
    uVar3 = local_5c;
    uVar2 = local_60;
    uVar7 = local_68;
    if ((int)local_68 == -0x80000000) {
      param_1[1] = local_68._4_4_;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      goto LAB_01633e18;
    }
    if (iVar1 == local_98) {
      FUN_018fa978(&local_98);
      local_a4 = local_94;
    }
    local_90 = iVar1 + 1;
    *(undefined8 *)(local_a4 + iVar1 * 0x10) = uVar7;
    *(undefined4 *)(local_a4 + iVar6) = uVar2;
    ((undefined4 *)(local_a4 + iVar6))[1] = uVar3;
    iVar6 = iVar6 + 0x10;
  }
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
LAB_01633e18:
  *param_1 = 1;
  FUN_0161f174(&local_98);
  return;
}

