// FUN_01632328 @ 01632328 size=536 calls_out=9 calls_in=1
// strings: invalid IFLA_VLAN_QOS_MAPPING value

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01632328(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_60;
  int local_5c;
  int local_58;
  undefined2 local_52;
  undefined2 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [16];
  undefined2 *local_30;
  code *local_2c;
  int iStack_28;
  
  local_8c = 4;
  uStack_74 = 0;
  iVar9 = 8;
  local_80 = 0;
  local_84 = 4;
  local_88 = 0;
  local_7c = param_2;
  uStack_78 = param_3;
  do {
    iVar1 = local_80;
    FUN_0162385c(&local_70,&local_7c);
    uVar3 = local_68;
    uVar2 = local_6c;
    if (local_70 == -0x7fffffff) {
      param_1[1] = local_88;
      param_1[2] = local_84;
      param_1[3] = local_80;
      *param_1 = 0;
      return;
    }
    if (local_70 != -0x80000000) {
      param_1[1] = local_70;
      param_1[2] = local_6c;
      param_1[3] = local_68;
      goto LAB_01632528;
    }
    uVar10 = FUN_01623bf0(local_6c,local_68);
    uVar11 = FUN_01623bc0(uVar2,uVar3);
    if (((uint)uVar11 & 0xffff) == 1) {
      if ((int)((ulonglong)uVar10 >> 0x20) != 8) {
        FUN_0160f520(&local_60,"invalid IFLA_VLAN_QOS_MAPPING value",0x23);
LAB_01632514:
        param_1[1] = local_60;
        param_1[2] = local_5c;
        param_1[3] = local_58;
LAB_01632528:
        *param_1 = 1;
        FUN_0161ac8c(&local_88);
        return;
      }
      iVar4 = ((int *)uVar10)[1];
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
      puVar7 = (undefined2 *)0x80000000;
      iVar8 = *(int *)uVar10;
    }
    else {
      local_52 = (undefined2)uVar11;
      FUN_01623ae4(auStack_40,uVar2,uVar3);
      local_2c = FUN_012fcf18;
      local_30 = &local_52;
      FUN_00664898(&local_50,&DAT_005773fc,&local_30);
      local_30 = local_50;
      local_2c = (code *)local_4c;
      iStack_28 = local_48;
      FUN_0160f810(&local_50,auStack_40,&local_30);
      iVar4 = local_48;
      iVar6 = local_44;
      puVar7 = local_50;
      iVar8 = local_4c;
      if (local_50 == (undefined2 *)0x80000000) {
        local_58 = local_44;
        local_5c = local_48;
        local_60 = local_4c;
        goto LAB_01632514;
      }
    }
    local_5c = iVar4;
    local_58 = iVar6;
    if (iVar1 == local_88) {
      FUN_018fa978(&local_88);
      local_8c = local_84;
    }
    piVar5 = (int *)(local_8c + iVar1 * 0x10);
    *piVar5 = (int)puVar7;
    local_80 = iVar1 + 1;
    piVar5[1] = iVar8;
    piVar5 = (int *)(local_8c + iVar9);
    *piVar5 = iVar4;
    iVar9 = iVar9 + 0x10;
    piVar5[1] = iVar6;
  } while( true );
}

