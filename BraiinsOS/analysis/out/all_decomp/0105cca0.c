// FUN_0105cca0 @ 0105cca0 size=1096 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0105d84c) */

void FUN_0105cca0(undefined4 *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  bool bVar9;
  undefined2 local_148;
  short local_110;
  undefined2 local_10e;
  uint *local_10c;
  undefined1 *local_108;
  undefined1 *puStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_b8 [2];
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  code *local_a4;
  uint *local_a0;
  undefined1 *local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint *local_54;
  undefined1 *local_50;
  uint *local_4c;
  uint local_48;
  undefined2 local_44 [6];
  uint local_38 [5];
  
  uVar6 = *(uint *)(param_2 + 0xc);
  if (uVar6 < 2) {
    local_a0 = (uint *)0x2;
    local_a4 = (code *)0x0;
    local_a8 = (code *)((uint)local_a8 & 0xffffff00);
    local_a4 = (code *)FUN_0104f1e0(&local_a8);
LAB_0105cd1c:
    *param_1 = 0x80000000;
    param_1[1] = local_a4;
    return;
  }
  iVar7 = *(int *)(param_2 + 4);
  uVar1 = **(ushort **)(param_2 + 8);
  *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
  *(uint *)(param_2 + 0xc) = uVar6 - 2;
  FUN_010393a0(&local_a8,param_2);
  local_110 = (short)local_a8;
  uVar3 = (uint)local_a8 & 0xffff;
  if (uVar3 == 2) goto LAB_0105cd1c;
  local_108 = (undefined1 *)local_a0;
  puStack_104 = local_9c;
  uStack_100 = uStack_98;
  uStack_fc = uStack_94;
  uStack_f8 = uStack_90;
  local_f4 = local_8c;
  uStack_f0 = uStack_88;
  local_ec = uStack_84;
  local_e8 = iStack_80;
  local_e4 = uStack_7c;
  local_e0 = local_78;
  uStack_dc = uStack_74;
  uStack_d8 = uStack_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar6 = (*(int *)(param_2 + 4) + (uVar6 - iVar7)) - uVar4;
  local_10c = (uint *)local_a4;
  local_10e = local_a8._2_2_;
  if ((param_3 & 0xffff) < uVar6) {
    local_50 = &LAB_00fac484;
    local_54 = local_b8;
    local_b8[0] = uVar6;
    FUN_00600d2c(&local_a8,&DAT_00588536,&local_54);
    local_9c = (undefined1 *)local_a0;
    local_a0 = (uint *)local_a4;
    local_a4 = local_a8;
    local_a8 = (code *)CONCAT22(local_a8._2_2_,0x11);
    iVar7 = thunk_FUN_016d4a50(0x44);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(iVar7,&local_a8,0x44);
    *param_1 = 0x80000000;
    param_1[1] = iVar7;
    puVar2 = (uint *)0x0;
    if (uVar3 != 0) {
      puVar2 = local_10c;
    }
    if (uVar3 == 0 || puVar2 == (uint *)0x0) goto LAB_0105ce20;
  }
  else {
    local_c0 = 0;
    local_c8 = 0;
    local_c4 = 4;
    if ((param_3 & 0xffff) - uVar6 < 4) {
      FUN_016dd1aa(&local_9c,&local_110,0x44);
      local_a8 = (code *)local_c8;
      local_a4 = (code *)local_c4;
      local_a0 = (uint *)local_c0;
      FUN_016dd1aa(param_1,&local_a8,0x50);
      *(ushort *)(param_1 + 0x14) = (ushort)(((uint)uVar1 << 0x18) >> 0x10) | uVar1 >> 8;
      return;
    }
    if (uVar4 < 2) {
      local_a8 = (code *)CONCAT22((short)auStack_b0,(short)local_a8);
      local_a0 = (uint *)&SUB_00000002;
      local_a4 = (code *)0x0;
      local_a8 = (code *)((uint)local_a8 & 0xffffff00);
      uVar5 = FUN_0104f1e0(&local_a8);
      *param_1 = 0x80000000;
      param_1[1] = uVar5;
    }
    else {
      puVar8 = *(ushort **)(param_2 + 8);
      uVar1 = *puVar8;
      *(ushort **)(param_2 + 8) = puVar8 + 1;
      uVar6 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      *(uint *)(param_2 + 0xc) = uVar4 - 2;
      uVar3 = (uVar6 >> 0x10) + 1 & 0xffff;
      if (uVar3 < 8) {
        uVar3 = (uint)*(ushort *)(&DAT_00564930 + uVar3 * 2);
      }
      else {
        uVar3 = 9;
        if (((uVar6 >> 0x10) + 0x100 & 0xffff) < 0xff) {
          uVar3 = 7;
        }
      }
      if (uVar4 - 2 < 2) {
        local_a0 = (uint *)&SUB_00000002;
        local_a4 = (code *)0x0;
        local_a8 = (code *)CONCAT22(local_148,(short)local_a8);
        local_a8 = (code *)((uint)local_a8 & 0xffffff00);
        uVar5 = FUN_0104f1e0(&local_a8);
      }
      else {
        local_38[0] = uVar4 - 4;
        local_4c = (uint *)(puVar8 + 2);
        uVar6 = (uint)puVar8[1] << 0x18 | (uint)(puVar8[1] >> 8) << 0x10;
        local_48 = uVar6 >> 0x10;
        *(uint **)(param_2 + 8) = local_4c;
        *(uint *)(param_2 + 0xc) = local_38[0];
        if (uVar6 >> 0x10 <= local_38[0]) {
          *(uint *)(param_2 + 8) = (int)local_4c + local_48;
          *(uint *)(param_2 + 0xc) = local_38[0] - local_48;
                    /* WARNING: Could not recover jumptable at 0x0105cf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          local_54 = local_4c;
          local_50 = (undefined1 *)local_48;
          (*(code *)(&DAT_0105cf68 + *(int *)(&DAT_0105cf68 + uVar3 * 4)))();
          return;
        }
        local_a4 = FUN_00fac370;
        local_44[0] = (undefined2)(uVar6 >> 0x10);
        local_a0 = local_38;
        local_9c = &LAB_00fac484;
        local_a8 = (code *)local_44;
        FUN_00600d2c(&local_54,&DAT_0056adbb,&local_a8);
        uVar5 = FUN_0104f004(&local_54);
      }
      *param_1 = 0x80000000;
      param_1[1] = uVar5;
    }
    if (local_c8 != 0) {
      thunk_FUN_016d3fb4(4);
    }
    puVar2 = (uint *)0x0;
    if (local_110 != 0) {
      puVar2 = local_10c;
    }
    if (local_110 == 0 || puVar2 == (uint *)0x0) goto LAB_0105ce20;
  }
  thunk_FUN_016d3fb4(local_108);
LAB_0105ce20:
  bVar9 = (local_ec & 0xffff) != 0;
  iVar7 = 0;
  if (bVar9) {
    iVar7 = local_e8;
  }
  if (!(bVar9 && iVar7 != 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_e4);
  return;
}

