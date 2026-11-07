// FUN_0160f9d4 @ 0160f9d4 size=548 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160f9d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_74 [3];
  undefined8 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined8 local_2c;
  
  local_98 = 4;
  uStack_78 = 0;
  local_88 = 0;
  local_8c = 4;
  local_90 = 0;
  iVar8 = 8;
  local_80 = param_2;
  uStack_7c = param_3;
  while( true ) {
    iVar1 = local_88;
    FUN_0162385c(local_74,&local_80);
    if (local_74[0] == -0x7fffffff) {
      param_1[1] = local_90;
      param_1[2] = local_8c;
      param_1[3] = local_88;
      *param_1 = 0;
      return;
    }
    uVar9 = FUN_01623bf0(param_2,param_3);
    local_64 = &LAB_0141634c;
    local_68 = &local_38;
    local_38 = uVar9;
    FUN_00664898(&local_58,&DAT_005b9d7c,&local_68);
    local_68 = (undefined8 *)local_58;
    local_64 = (undefined1 *)local_54;
    local_60 = local_50;
    FUN_0160f56c(&local_58,local_74,&local_68);
    uVar4 = local_50;
    iVar6 = local_54;
    if (local_58 != (undefined4 *)0x80000000) break;
    FUN_01623ae4(&local_58,local_54,local_50);
    uVar9 = FUN_01623bf0(iVar6,uVar4);
    local_48._4_4_ = &LAB_0141634c;
    local_48._0_4_ = &local_2c;
    local_2c = uVar9;
    FUN_00664898(&local_38,&DAT_005b9d7c,&local_48);
    uStack_40 = uStack_30;
    local_48 = local_38;
    FUN_0160f810(&local_68,&local_58,&local_48);
    uVar5 = local_5c;
    uVar4 = local_60;
    puVar3 = local_64;
    puVar2 = local_68;
    if (local_68 == (undefined8 *)0x80000000) {
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      goto LAB_0160fbe0;
    }
    if (iVar1 == local_90) {
      FUN_018fa978(&local_90);
      local_98 = local_8c;
    }
    piVar7 = (int *)(local_98 + iVar1 * 0x10);
    *piVar7 = (int)puVar2;
    local_88 = iVar1 + 1;
    piVar7[1] = (int)puVar3;
    *(undefined4 *)(local_98 + iVar8) = uVar4;
    ((undefined4 *)(local_98 + iVar8))[1] = uVar5;
    iVar8 = iVar8 + 0x10;
  }
  param_1[1] = local_58;
  param_1[2] = local_54;
  param_1[3] = local_50;
LAB_0160fbe0:
  *param_1 = 1;
  FUN_0161f174(&local_90);
  return;
}

