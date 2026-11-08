// FUN_0162de7c @ 0162de7c size=1112 calls_out=14 calls_in=0
// strings: invalid IFLA_BOND_PORT_LINK_FAILURE_COUNT value | invalid IFLA_BOND_PORT_PRIO value | invalid IFLA_BOND_PORT_STATE value | invalid IFLA_BOND_PORT_MII_STATUS value | invalid IFLA_BOND_PORT_QUEUE_ID value

void FUN_0162de7c(undefined4 *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  longlong lVar11;
  ushort *local_70;
  uint local_6c;
  ushort *local_68;
  ushort local_62;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  ushort *local_54;
  ushort *local_50;
  ushort *puStack_4c;
  ushort *puStack_48;
  ushort *local_40;
  code *local_3c;
  ushort *puStack_38;
  ushort *local_30;
  ushort *local_2c;
  ushort *local_28;
  
  puVar4 = *(ushort **)(param_2 + 0xc);
  FUN_0162385c(&local_70);
  if (local_70 == (ushort *)&DAT_80000001) goto LAB_0162e25c;
  puVar6 = local_68;
  puVar7 = local_70;
  uVar10 = local_6c;
  if (local_70 != (ushort *)&DAT_80000000) goto LAB_0162e244;
  lVar11 = FUN_01623bf0(local_6c,local_68);
  puVar6 = (ushort *)((ulonglong)lVar11 >> 0x20);
  uVar3 = (undefined4)lVar11;
  uVar2 = FUN_01623bc0(local_6c,local_68);
  switch(uVar2) {
  case 1:
    FUN_0160f290(&local_60,uVar3,puVar6);
    if (local_60 == (ushort *)&DAT_80000000) {
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
    }
    else {
      local_50 = local_60;
      puStack_4c = local_5c;
      puStack_48 = local_58;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_BOND_PORT_STATE value",0x22);
    }
    puVar8 = (ushort *)((uint)local_2c & 0xff);
    if (local_30 == (ushort *)&DAT_80000000) {
      puVar9 = puVar8;
      if (puVar8 != (ushort *)&DAT_00000001) {
        puVar9 = (ushort *)0x2;
      }
      if (puVar8 == (ushort *)0x0) {
        puVar9 = puVar8;
      }
      local_60 = (ushort *)&DAT_80000005;
LAB_0162e1c4:
      uVar10 = 0;
      break;
    }
    goto LAB_0162e1d4;
  case 2:
    FUN_0160f290(&local_60,uVar3,puVar6);
    if (local_60 == (ushort *)&DAT_80000000) {
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
    }
    else {
      local_50 = local_60;
      puStack_4c = local_5c;
      puStack_48 = local_58;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_BOND_PORT_MII_STATUS value",0x27);
    }
    puVar8 = (ushort *)((uint)local_2c & 0xff);
    if (local_30 == (ushort *)&DAT_80000000) {
      puVar9 = puVar8;
      if (&DAT_00000003 < puVar8) {
        puVar9 = (ushort *)&SUB_00000004;
      }
      local_60 = (ushort *)&DAT_80000001;
      goto LAB_0162e1c4;
    }
LAB_0162e1d4:
    uVar10 = (uint)local_2c >> 8 & 0xff;
    puVar6 = local_28;
    puVar7 = local_30;
    puVar1 = local_2c;
LAB_0162e234:
    uVar10 = (uint)puVar8 & 0xff | (uVar10 & 0xff) << 8 | (uint)puVar1 & 0xffff0000;
LAB_0162e244:
    if (*(int *)puVar4 != -0x80000000) {
      FUN_0134bd64(*(int *)puVar4,*(int *)(puVar4 + 2));
    }
    *(ushort **)puVar4 = puVar7;
    *(uint *)(puVar4 + 2) = uVar10;
    *(ushort **)(puVar4 + 4) = puVar6;
LAB_0162e25c:
    local_60 = (ushort *)0x80000006;
    goto LAB_0162e260;
  case 3:
    FUN_0160f300(&local_60,uVar3,puVar6);
    if (local_60 == (ushort *)&DAT_80000000) {
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
    }
    else {
      local_50 = local_60;
      puStack_4c = local_5c;
      puStack_48 = local_58;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_BOND_PORT_LINK_FAILURE_COUNT value",0x2f);
    }
    if (local_30 == (ushort *)&DAT_80000000) {
      puVar8 = (ushort *)((uint)local_2c >> 8);
      uVar10 = (uint)local_2c & 0xffff0000;
      local_60 = (ushort *)&DAT_80000000;
      puVar9 = local_2c;
      break;
    }
LAB_0162e124:
    local_54 = local_28;
    local_5c = local_30;
    puVar9 = local_2c;
LAB_0162e128:
    puVar1 = puVar9;
LAB_0162e230:
    uVar10 = (uint)puVar9 >> 8;
    puVar6 = local_54;
    puVar7 = local_5c;
    puVar8 = puVar9;
    goto LAB_0162e234;
  case 4:
    uVar5 = 0;
    if (lVar11 < 0) {
LAB_0162e058:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,puVar6);
    }
    if (puVar6 == (ushort *)0x0) {
      puVar9 = (ushort *)0x0;
      puVar4 = (ushort *)&DAT_00000001;
    }
    else {
      uVar5 = 1;
      puVar4 = (ushort *)FUN_01298504(puVar6,1);
      if (puVar4 == (ushort *)0x0) goto LAB_0162e058;
      puVar9 = puVar6;
    }
    FUN_01bed4e2(puVar4,uVar3,puVar6);
    puVar8 = (ushort *)((uint)puVar9 >> 8);
    uVar10 = (uint)puVar9 & 0x7fff0000;
    local_60 = (ushort *)0x80000002;
    break;
  case 5:
    FUN_0160f3f0(&local_60,uVar3,puVar6);
    if (local_60 == (ushort *)&DAT_80000000) {
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
    }
    else {
      local_50 = local_60;
      puStack_4c = local_5c;
      puStack_48 = local_58;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_BOND_PORT_QUEUE_ID value",0x25);
    }
    puVar9 = (ushort *)((uint)local_2c & 0xffff);
    if (local_30 != (ushort *)&DAT_80000000) {
      local_54 = local_28;
      local_5c = local_30;
      puVar1 = local_2c;
      goto LAB_0162e230;
    }
    puVar8 = (ushort *)((uint)local_2c >> 8 & 0xff);
    local_60 = (ushort *)&DAT_80000004;
    uVar10 = 0;
    break;
  default:
    local_62 = uVar2;
    FUN_01623ae4(&local_50,local_6c,local_68);
    local_3c = FUN_012fcf18;
    local_40 = &local_62;
    FUN_00664898(&local_30,&DAT_005a8e62,&local_40);
    local_40 = local_30;
    local_3c = (code *)local_2c;
    puStack_38 = local_28;
    FUN_0160f810(&local_60,&local_50,&local_40);
    if (local_60 == (ushort *)&DAT_80000000) {
      puVar9 = local_58;
      goto LAB_0162e128;
    }
    puVar8 = (ushort *)((uint)local_5c >> 8);
    uVar10 = (uint)local_5c & 0xffff0000;
    puVar4 = local_58;
    puVar9 = local_5c;
    puVar6 = local_54;
    break;
  case 9:
    FUN_0160f300(&local_60,uVar3,puVar6);
    if (local_60 == (ushort *)&DAT_80000000) {
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
    }
    else {
      local_50 = local_60;
      puStack_4c = local_5c;
      puStack_48 = local_58;
      FUN_016403ac(&local_30,&local_50,"invalid IFLA_BOND_PORT_PRIO value",0x21);
    }
    if (local_30 != (ushort *)&DAT_80000000) goto LAB_0162e124;
    puVar8 = (ushort *)((uint)local_2c >> 8);
    uVar10 = (uint)local_2c & 0xffff0000;
    local_60 = (ushort *)0x80000003;
    puVar9 = local_2c;
  }
  param_1[1] = (uint)puVar9 & 0xff | ((uint)puVar8 & 0xff) << 8 | uVar10;
  param_1[2] = puVar4;
  param_1[3] = puVar6;
LAB_0162e260:
  *param_1 = local_60;
  return;
}

