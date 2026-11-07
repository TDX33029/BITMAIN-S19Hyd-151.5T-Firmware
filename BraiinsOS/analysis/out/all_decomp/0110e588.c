// FUN_0110e588 @ 0110e588 size=1364 calls_out=10 calls_in=1
// strings: BUG: Suspicious pubkey length

void FUN_0110e588(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_160 [192];
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  
  local_a0 = *(uint *)(param_2 + 0x100);
  uVar17 = *(uint *)(param_2 + 0x114);
  uVar12 = *(undefined4 *)(param_2 + 0x110);
  local_9c = *(uint *)(param_2 + 0x104);
  local_98 = *(undefined4 *)(param_2 + 0x108);
  uVar5 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar17);
  }
  if (uVar17 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(uVar17);
    uVar5 = uVar17;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar17);
    }
  }
  local_94 = uVar5;
  local_90 = iVar6;
  FUN_016dd1aa(iVar6,uVar12,uVar17);
  local_8c = uVar17;
  FUN_016dd1aa(auStack_160,param_2,0xc0);
  uVar14 = local_9c;
  uVar13 = local_a0;
  if (param_5 != &DAT_3b9aca00) {
    local_40 = param_5;
    local_34 = 0;
    local_38 = 0;
    local_30 = 0;
    local_48 = param_3;
    local_44 = param_4;
    FUN_015f3c24(&local_88,&local_48,&local_38);
    if ((local_88 & 1) == 0) {
      uVar9 = local_80;
      if (local_80 < uVar13) {
        uVar12 = 10;
        uVar14 = uVar13;
      }
      else {
        if (local_80 <= uVar14) {
          local_88 = CONCAT31(local_88._1_3_,9);
          FUN_0110f878(&local_88);
          goto LAB_0110e644;
        }
        uVar12 = 0xb;
      }
    }
    else {
      uVar12 = 9;
      uVar9 = local_88;
      uVar14 = uVar13;
    }
    *param_1 = uVar12;
    param_1[1] = uVar14;
    param_1[2] = uVar9;
    goto joined_r0x0110ea6c;
  }
LAB_0110e644:
  local_88 = *(uint *)(param_2 + 0xc0);
  uStack_84 = *(undefined4 *)(param_2 + 0xc4);
  local_80 = *(uint *)(param_2 + 200);
  uStack_7c = *(undefined4 *)(param_2 + 0xcc);
  uStack_78 = *(undefined4 *)(param_2 + 0xd0);
  local_74 = *(undefined4 *)(param_2 + 0xd4);
  uStack_70 = *(undefined4 *)(param_2 + 0xd8);
  uStack_6c = *(undefined4 *)(param_2 + 0xdc);
  uStack_68 = *(undefined4 *)(param_2 + 0xe0);
  uStack_64 = *(undefined4 *)(param_2 + 0xe4);
  local_60 = *(undefined4 *)(param_2 + 0xe8);
  uStack_5c = *(undefined4 *)(param_2 + 0xec);
  uStack_58 = *(undefined4 *)(param_2 + 0xf0);
  uStack_54 = *(undefined4 *)(param_2 + 0xf4);
  uStack_50 = *(undefined4 *)(param_2 + 0xf8);
  uStack_4c = *(undefined4 *)(param_2 + 0xfc);
  iVar7 = thunk_FUN_016d4a50(0x100);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x100);
  }
  local_2c = (int *)&DAT_00000001;
  local_30 = 0x100;
  local_34 = 0;
  local_38 = iVar7;
  if (uVar17 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Suspicious pubkey length",0x1d,&local_48,&DAT_01886ea0,&DAT_01886eb0);
  }
  if (0x58 < uVar17) {
    FUN_00f5f538(&local_38,uVar17 * 2 + 0x50);
  }
  uVar2 = (undefined2)local_98;
  if ((uint)(local_30 - local_34) < 2) {
    FUN_00f5f538(&local_38,2);
    *(undefined2 *)(local_38 + local_34) = uVar2;
    uVar13 = local_30 - local_34;
    if (1 < uVar13) goto LAB_0110e758;
LAB_0110e8d8:
    local_48 = 2;
LAB_0110ea98:
    local_44 = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0();
  }
  *(undefined2 *)(local_38 + local_34) = (undefined2)local_98;
LAB_0110e758:
  uVar13 = local_a0;
  local_34 = local_34 + 2;
  if ((uint)(local_30 - local_34) < 4) {
    FUN_00f5f538(&local_38,4);
    *(uint *)(local_38 + local_34) = uVar13;
    uVar13 = local_30 - local_34;
    if (3 < uVar13) goto LAB_0110e7a0;
LAB_0110e7e0:
    local_48 = 4;
    goto LAB_0110ea98;
  }
  *(uint *)(local_38 + local_34) = local_a0;
LAB_0110e7a0:
  uVar13 = local_9c;
  local_34 = local_34 + 4;
  if ((uint)(local_30 - local_34) < 4) {
    FUN_00f5f538(&local_38,4);
    *(uint *)(local_38 + local_34) = uVar13;
    uVar13 = local_30 - local_34;
    if (uVar13 < 4) goto LAB_0110e7e0;
  }
  else {
    *(uint *)(local_38 + local_34) = local_9c;
  }
  local_34 = local_34 + 4;
  if ((uint)(local_30 - local_34) < 2) {
    FUN_00f5f538(&local_38,2);
    uVar13 = local_30 - local_34;
    *(short *)(local_38 + local_34) = (short)uVar17;
    if (uVar13 < 2) goto LAB_0110e8d8;
  }
  else {
    *(short *)(local_38 + local_34) = (short)uVar17;
  }
  local_34 = local_34 + 2;
  uVar13 = local_30 - local_34;
  if (uVar13 < uVar17) {
    FUN_00f5f538(&local_38,uVar17);
    uVar13 = local_30 - local_34;
  }
  iVar16 = local_30;
  iVar15 = local_34;
  iVar7 = local_38;
  FUN_016dd1aa(local_38 + local_34,iVar6,uVar17);
  if (uVar13 < uVar17) {
    local_48 = uVar17;
    goto LAB_0110ea98;
  }
  local_34 = iVar15 + uVar17;
  if ((uint)(iVar16 - local_34) < 2) {
    FUN_00f5f538(&local_38,2);
    uVar13 = local_30 - local_34;
    *(undefined2 *)(local_38 + local_34) = 0x20;
    iVar16 = local_30;
    if (uVar13 < 2) goto LAB_0110e8d8;
  }
  else {
    *(undefined2 *)(iVar7 + local_34) = 0x20;
  }
  iVar7 = local_38;
  iVar15 = local_34 + 2;
  local_34 = iVar15;
  if ((uint)(iVar16 - iVar15) < 0x20) {
    FUN_00f5f538(&local_38,0x20);
    iVar16 = local_30;
    iVar15 = local_34;
    iVar7 = local_38;
    FUN_016dd1aa(local_38 + local_34,auStack_160,0x20);
    uVar13 = iVar16 - iVar15;
    if (uVar13 < 0x20) {
      local_48 = 0x20;
      goto LAB_0110ea98;
    }
  }
  else {
    FUN_016dd1aa(local_38 + iVar15,auStack_160);
  }
  local_34 = iVar15 + 0x20;
  FUN_00fddb4c(&local_48,auStack_160,iVar7,local_34,&local_88);
  piVar8 = local_2c;
  puVar3 = local_40;
  uVar13 = local_44;
  uVar17 = local_48;
  uVar11 = 0xf;
  if (local_48 != 0) {
    uVar11 = 0xd;
  }
  if (((uint)local_2c & 1) == 0) {
    piVar10 = local_2c + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      if (*local_2c != 0) {
        thunk_FUN_016d3fb4(local_2c[1]);
      }
      goto LAB_0110ea00;
    }
  }
  else if (iVar16 + ((uint)local_2c >> 5) != 0) {
    piVar8 = (int *)(iVar7 - ((uint)local_2c >> 5));
LAB_0110ea00:
    thunk_FUN_016d3fb4(piVar8);
  }
  uVar4 = 0xf;
  if (uVar17 != 0) {
    uVar4 = uVar11;
  }
  *(undefined1 *)param_1 = uVar4;
  if (uVar17 != 0) {
    param_1[1] = uVar13;
    param_1[2] = puVar3;
  }
joined_r0x0110ea6c:
  if (uVar5 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar6);
  return;
}

