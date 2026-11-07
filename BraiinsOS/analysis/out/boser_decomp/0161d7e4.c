// FUN_0161d7e4 @ 0161d7e4 size=1580 calls_out=11 calls_in=1
// strings: invalid IFLA_XDP_PROG_ID value | invalid IFLA_XDP_FLAGS value | invalid IFLA_XDP_PROG_ID value | invalid IFLA_XDP_PROG_ID value | invalid IFLA_XDP_FD value | invalid IFLA_XDP_ATTACHED value

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0161d7e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_9c;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined2 *local_64;
  undefined2 *local_60;
  undefined2 *puStack_5c;
  undefined2 *local_58;
  undefined2 *puStack_54;
  undefined2 *puStack_50;
  undefined2 *local_48;
  code *local_44;
  undefined2 *puStack_40;
  undefined2 *local_38;
  undefined2 *local_34;
  undefined2 *local_30;
  undefined2 local_26;
  
  uStack_78 = 0;
  iVar12 = 4;
  iVar14 = 8;
  local_88 = 0;
  local_8c = 4;
  local_90 = 0;
  local_9c = 0;
  local_80 = param_2;
  uStack_7c = param_3;
  do {
    iVar1 = local_88;
    FUN_0162385c(&local_74,&local_80);
    uVar3 = local_6c;
    uVar2 = local_70;
    if (local_74 == -0x7fffffff) {
      param_1[1] = local_90;
      param_1[2] = local_8c;
      param_1[3] = local_88;
      *param_1 = 0;
      return;
    }
    if (local_74 != -0x80000000) {
      param_1[1] = local_74;
      param_1[2] = local_70;
      param_1[3] = local_6c;
      goto LAB_0161de00;
    }
    uVar15 = FUN_01623bf0(local_70,local_6c);
    puVar10 = (undefined2 *)((ulonglong)uVar15 >> 0x20);
    uVar5 = (undefined4)uVar15;
    uVar4 = FUN_01623bc0(uVar2,uVar3);
    switch(uVar4) {
    case 1:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_FD value",0x19);
      }
      if (local_38 != (undefined2 *)0x80000000) {
LAB_0161ddf4:
        local_64 = local_38;
        local_60 = local_34;
        puStack_5c = local_30;
LAB_0161ddfc:
        param_1[1] = local_64;
        param_1[2] = local_60;
        param_1[3] = puStack_5c;
LAB_0161de00:
        *param_1 = 1;
        FUN_0161dec0(&local_90);
        return;
      }
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)0x80000000;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 2:
      FUN_0160f290(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_ATTACHED value",0x1f);
      }
      uVar9 = (uint)local_34 & 0xff;
      if (local_38 != (undefined2 *)0x80000000) {
        local_64 = local_38;
        local_60 = local_34;
        puStack_5c = local_30;
        goto LAB_0161ddfc;
      }
      puVar13 = (undefined2 *)0x80000001;
      uVar8 = 0;
      switch(uVar9) {
      case 0:
        puVar7 = (undefined2 *)0x0;
        uVar9 = local_9c;
        goto LAB_0161dd50;
      case 1:
        puVar7 = (undefined2 *)0x1;
        break;
      case 2:
        puVar7 = (undefined2 *)0x2;
        break;
      case 3:
        puVar7 = (undefined2 *)0x3;
        break;
      case 4:
        puVar7 = (undefined2 *)0x4;
        break;
      default:
        puVar7 = (undefined2 *)0x5;
        local_9c = uVar9;
        goto LAB_0161dd50;
      }
      uVar9 = local_9c;
      break;
    case 3:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_FLAGS value",0x1c);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)0x80000002;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 4:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_PROG_ID value",0x1e);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)0x80000003;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 5:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_PROG_ID value",0x1e);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)&DAT_80000004;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 6:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_PROG_ID value",0x1e);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)&DAT_80000005;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 7:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_PROG_ID value",0x1e);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)0x80000006;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    case 8:
      FUN_0160f300(&local_68,uVar5,puVar10);
      puVar11 = local_60;
      if (local_68 == (undefined2 *)0x80000000) {
        local_38 = local_68;
        local_34 = local_64;
        local_30 = local_60;
      }
      else {
        local_58 = local_68;
        puStack_54 = local_64;
        puStack_50 = local_60;
        FUN_016403ac(&local_38,&local_58,"invalid IFLA_XDP_PROG_ID value",0x1e);
      }
      if (local_38 != (undefined2 *)0x80000000) goto LAB_0161ddf4;
      uVar8 = (uint)local_34 & 0xffff0000;
      puVar13 = (undefined2 *)0x80000007;
      puVar7 = local_34;
      uVar9 = ((uint)local_34 & 0xffff) >> 8;
      break;
    default:
      FUN_01623ae4(&local_58,uVar2,uVar3);
      local_26 = FUN_01623bc0(uVar2,uVar3);
      local_44 = FUN_012fcf18;
      local_48 = &local_26;
      FUN_00664898(&local_38,&DAT_005a8e62,&local_48);
      local_48 = local_38;
      local_44 = (code *)local_34;
      puStack_40 = local_30;
      FUN_0160f810(&local_68,&local_58,&local_48);
      if (local_68 == (undefined2 *)0x80000000) goto LAB_0161ddfc;
      uVar8 = (uint)local_64 & 0xffff0000;
      puVar7 = local_64;
      uVar9 = ((uint)local_64 & 0xffff) >> 8;
      puVar10 = local_60;
      puVar11 = puStack_5c;
      puVar13 = local_68;
    }
LAB_0161dd50:
    if (iVar1 == local_90) {
      FUN_018fa978(&local_90);
      iVar12 = local_8c;
    }
    puVar6 = (undefined4 *)(iVar12 + iVar1 * 0x10);
    *puVar6 = puVar13;
    local_88 = iVar1 + 1;
    puVar6[1] = uVar8 | uVar9 << 8 | (uint)puVar7 & 0xff;
    puVar6 = (undefined4 *)(iVar12 + iVar14);
    *puVar6 = puVar10;
    iVar14 = iVar14 + 0x10;
    puVar6[1] = puVar11;
  } while( true );
}

