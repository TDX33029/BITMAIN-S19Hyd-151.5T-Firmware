// FUN_0163492c @ 0163492c size=1760 calls_out=14 calls_in=2
// strings: failed to parse IFLA_MACVLAN_MACADDR_DATA | invalid IFLA_MACVLAN_MACADDR_MODE value | invalid IFLA_MACVLAN_MACADDR value | invalid IFLA_MACVLAN_BC_QUEUE_LEN_USED value | invalid IFLA_MACVLAN_MODE value | invalid IFLA_MACVLAN_FLAGS value

void FUN_0163492c(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 *unaff_r11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined4 *local_98;
  undefined8 local_94;
  undefined4 local_8c;
  int *local_88;
  undefined4 *puStack_84;
  undefined1 *puStack_80;
  undefined4 *local_78;
  undefined1 *local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *local_50;
  undefined4 *local_4c;
  undefined1 *local_48;
  undefined4 *puStack_44;
  int *local_40;
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  int *local_30;
  ushort local_2c;
  ushort uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  
  uVar11 = *param_2;
  uVar9 = param_2[1];
  uVar12 = FUN_01623bf0(uVar11,uVar9);
  uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar2 = (undefined4)uVar12;
  uVar1 = FUN_01623bc0(uVar11,uVar9);
  switch(uVar1) {
  case 1:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_MODE value",0x1f);
    }
    uVar8 = CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) {
LAB_01634f80:
      *param_1 = &DAT_80000009;
      param_1[1] = local_30;
      param_1[2] = uVar8;
      param_1[3] = CONCAT22(uStack_26,local_28);
      return;
    }
    uVar13 = FUN_0163360c();
    local_50 = (int *)0x80000000;
    goto LAB_01634e3c;
  case 2:
    FUN_0160f3f0(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_FLAGS value",0x20);
    }
    uVar13 = CONCAT44(&local_50,(uint)local_2c);
    if (local_30 != (int *)0x80000000) {
      *(ushort *)(param_1 + 2) = local_2c;
      *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
      *(uint *)((int)param_1 + 10) = CONCAT22(local_28,uStack_2a);
      *param_1 = &DAT_80000009;
      param_1[1] = local_30;
      return;
    }
    local_50 = (int *)0x80000001;
    uVar8 = 0;
    break;
  case 3:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_MACADDR_MODE value",0x27);
    }
    puVar10 = (undefined1 *)CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) {
      *param_1 = &DAT_80000009;
      param_1[1] = local_30;
      param_1[2] = puVar10;
      param_1[3] = CONCAT22(uStack_26,local_28);
      return;
    }
    puVar5 = puVar10;
    if (&DAT_00000003 < puVar10) {
      puVar5 = &SUB_00000004;
    }
    uVar13 = CONCAT44(puVar10,puVar5);
    local_50 = (int *)0x80000002;
LAB_01634e3c:
    uVar8 = 0;
    break;
  case 4:
    FUN_0160f368(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_MACADDR value",0x22);
    }
    uVar13 = (ulonglong)CONCAT24(local_28,CONCAT22(uStack_2a,local_2c));
    if (local_30 != (int *)0x80000000) {
      *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
      *(undefined2 *)(param_1 + 3) = local_28;
      *param_1 = &DAT_80000009;
      param_1[1] = local_30;
      param_1[2] = CONCAT22(uStack_2a,local_2c);
      return;
    }
    local_50 = (int *)0x80000003;
    uVar8 = (uint)uStack_2a << 0x10;
    break;
  case 5:
    puVar10 = &SUB_00000004;
    piVar3 = (int *)((uint)&local_60 | 4);
    piVar4 = (int *)((uint)&local_50 | 4);
    local_98 = (undefined4 *)0x0;
    local_9c = &SUB_00000004;
    local_a0 = (undefined4 *)0x0;
    local_8c = 0;
    while( true ) {
      unaff_r11 = local_98;
      local_94 = uVar12;
      FUN_0162385c(&local_88,&local_94);
      if (local_88 == (int *)0x80000001) break;
      if (local_88 == (int *)0x80000000) {
        local_50 = local_88;
        local_4c = puStack_84;
        local_48 = puStack_80;
      }
      else {
        local_40 = local_88;
        puStack_3c = puStack_84;
        puStack_38 = puStack_80;
        FUN_016403ac(&local_50,&local_40,"failed to parse IFLA_MACVLAN_MACADDR_DATA",0x29);
      }
      if (local_50 != (int *)0x80000000) {
        *param_1 = &DAT_80000009;
        param_1[1] = local_50;
        param_1[2] = local_4c;
        param_1[3] = local_48;
        goto LAB_01635020;
      }
      local_74 = local_48;
      local_78 = local_4c;
      FUN_0163492c(&local_40,&local_78);
      if (local_40 == (int *)&DAT_80000009) {
        puVar6 = (undefined4 *)((uint)&local_40 | 4);
        local_30 = (int *)*puVar6;
        local_2c = (ushort)puVar6[1];
        uStack_2a = (ushort)((uint)puVar6[1] >> 0x10);
        local_28 = (undefined2)puVar6[2];
        uStack_26 = (undefined2)((uint)puVar6[2] >> 0x10);
        FUN_016403ac(piVar4,&local_30,"failed to parse IFLA_MACVLAN_MACADDR_DATA",0x29);
        local_70 = *piVar4;
        iStack_6c = piVar4[1];
        iStack_68 = piVar4[2];
LAB_01635008:
        param_1[1] = local_70;
        param_1[2] = iStack_6c;
        param_1[3] = iStack_68;
        *param_1 = &DAT_80000009;
LAB_01635020:
        FUN_0161aa50(&local_a0);
        return;
      }
      local_50 = local_40;
      local_4c = puStack_3c;
      local_48 = puStack_38;
      puStack_44 = puStack_34;
      local_70 = *piVar4;
      iStack_6c = piVar4[1];
      iStack_68 = piVar4[2];
      if (local_40 == (int *)&DAT_80000009) goto LAB_01635008;
      local_60 = local_40;
      *piVar3 = local_70;
      piVar3[1] = iStack_6c;
      piVar3[2] = iStack_68;
      uVar12 = local_94;
      if (unaff_r11 == local_a0) {
        FUN_018fa978(&local_a0);
        puVar10 = local_9c;
        uVar12 = local_94;
      }
      puVar6 = (undefined4 *)(puVar10 + (int)unaff_r11 * 0x10);
      local_98 = (undefined4 *)((int)unaff_r11 + 1);
      *puVar6 = local_60;
      puVar6[1] = uStack_5c;
      puVar6[2] = uStack_58;
      puVar6[3] = uStack_54;
    }
    local_50 = (int *)&DAT_80000004;
    local_4c = local_a0;
    goto LAB_01634fa8;
  case 6:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_MACADDR_COUNT value",0x28);
    }
    uVar8 = CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) goto LAB_01634f80;
    local_50 = (int *)&DAT_80000005;
    goto LAB_01634f60;
  case 7:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_BC_QUEUE_LEN value",0x27);
    }
    uVar8 = CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) goto LAB_01634f80;
    local_50 = (int *)0x80000006;
    goto LAB_01634f60;
  case 8:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_BC_QUEUE_LEN_USED value",0x2c);
    }
    uVar8 = CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) goto LAB_01634f80;
    local_50 = (int *)0x80000007;
    goto LAB_01634f60;
  case 9:
    FUN_0160f300(&local_50,uVar2,uVar7);
    if (local_50 == (int *)0x80000000) {
      local_30 = local_50;
      local_2c = (ushort)local_4c;
      uStack_2a = (ushort)((uint)local_4c >> 0x10);
      local_28 = SUB42(local_48,0);
      uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    }
    else {
      local_40 = local_50;
      puStack_3c = local_4c;
      puStack_38 = local_48;
      FUN_016403ac(&local_30,&local_40,"invalid IFLA_MACVLAN_BC_CUTOFF value",0x24);
    }
    uVar8 = CONCAT22(uStack_2a,local_2c);
    if (local_30 != (int *)0x80000000) goto LAB_01634f80;
    local_50 = (int *)&DAT_80000008;
LAB_01634f60:
    uVar13 = CONCAT44(&local_50,uVar8);
    uVar8 = uVar8 & 0xffff0000;
    break;
  default:
    local_70 = CONCAT22(local_70._2_2_,uVar1);
    FUN_01623ae4(&local_40,uVar11,uVar9);
    local_2c = 0xcf18;
    uStack_2a = 0x12f;
    local_30 = &local_70;
    FUN_00664898(&local_50,&DAT_0057d466,&local_30);
    local_30 = local_50;
    local_2c = (ushort)local_4c;
    uStack_2a = (ushort)((uint)local_4c >> 0x10);
    local_28 = SUB42(local_48,0);
    uStack_26 = (undefined2)((uint)local_48 >> 0x10);
    FUN_0160f810(&local_50,&local_40,&local_30);
    puVar10 = local_48;
    unaff_r11 = puStack_44;
    if (local_50 == (int *)0x80000000) {
      *param_1 = &DAT_80000009;
      goto LAB_01634f70;
    }
LAB_01634fa8:
    uVar13 = CONCAT44(puVar10,local_4c);
    uVar8 = (uint)local_4c & 0xffff0000;
  }
  local_48 = (undefined1 *)(uVar13 >> 0x20);
  *param_1 = local_50;
  local_4c = (undefined4 *)(uVar8 | (uint)uVar13 & 0xffff);
  puStack_44 = unaff_r11;
LAB_01634f70:
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = puStack_44;
  return;
}

