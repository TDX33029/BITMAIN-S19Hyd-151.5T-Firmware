// FUN_016a54f0 @ 016a54f0 size=1372 calls_out=12 calls_in=0
// strings: invalid match span

longlong FUN_016a54f0(int *param_1,int param_2,uint ****param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  uint uVar5;
  uint ***extraout_r2;
  uint ***pppuVar6;
  uint ***extraout_r3;
  uint ***pppuVar7;
  uint ***pppuVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint ***local_54;
  uint ***local_50;
  uint ***local_4c;
  uint ***local_48;
  undefined4 ****local_44;
  uint ***local_40;
  undefined4 ****local_3c;
  uint ***local_38;
  uint ***local_34;
  uint ***local_30;
  undefined1 local_2c;
  uint ***local_28;
  
  if ((int)*param_3 - 1U < 2) {
    if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
      if (param_1[0x2b1] != 3) {
        lVar11 = FUN_0169ea74(param_1,param_2,param_3,param_4);
        return lVar11;
      }
      if (param_1[0x254] == 2) {
        if (!(*param_1 != 2 || param_1[1] != 0)) goto LAB_016a58c0;
        if (*(int *)(param_2 + 0x248) == 2) {
LAB_016a598c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08054);
        }
        FUN_0169e7e8(&local_44,param_1,param_2 + 0xd8,param_3);
      }
      else {
        FUN_0169e238(&local_44,param_1 + 0x144,param_3);
      }
      if (local_44 != (undefined4 ****)0x2) {
        ppppuVar4 = (undefined4 ****)local_38;
        if (((uint)local_44 & 1) == 0) goto LAB_016a5944;
        local_28 = param_3[3];
        bVar10 = (uint ***)((int)local_3c + 1U) <= local_40;
        bVar9 = local_40 == (uint ***)((int)local_3c + 1U);
        if (!bVar10 || bVar9) {
          bVar10 = local_28 <= local_3c;
          bVar9 = local_3c == (undefined4 ****)local_28;
        }
        local_50 = (uint ***)local_3c;
        local_54 = local_40;
        if (!(bVar10 && !bVar9)) {
          local_34 = local_40;
          local_40 = local_38;
          local_30 = (uint ***)local_3c;
          local_44 = (undefined4 ****)0x2;
          local_3c = (undefined4 ****)param_3[2];
          local_38 = local_28;
          local_2c = *(undefined1 *)(param_3 + 6);
          uVar12 = FUN_0169ea74(param_1,param_2,&local_44,param_4,param_5);
          ppppuVar4 = (undefined4 ****)(uVar12 >> 0x20);
          if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_004ce55a,0x13,&DAT_01d0827c);
          }
          goto LAB_016a593c;
        }
        goto LAB_016a5a00;
      }
      FUN_016c2dec(local_40);
      goto LAB_016a58c0;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 != 2 || param_1[1] != 0) {
        if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a598c;
        FUN_0169e7e8(&local_44,param_1,param_2 + 0xd8,param_3);
        goto LAB_016a56f8;
      }
LAB_016a570c:
      FUN_0169e4e0(&local_54,param_1,param_2,param_3);
      ppppuVar4 = (undefined4 ****)extraout_r2;
    }
    else {
      FUN_0169e238(&local_44,param_1 + 0x144,param_3);
LAB_016a56f8:
      if (local_44 == (undefined4 ****)0x2) {
        FUN_016c2dec(local_40);
        goto LAB_016a570c;
      }
      local_48 = local_38;
      local_4c = (uint ***)local_3c;
      local_50 = local_40;
      local_54 = (uint ***)local_44;
      ppppuVar4 = local_3c;
    }
    if (local_54 != (uint ***)0x0) {
      uVar5 = (int)local_48 << 1 | 1;
      if ((uint)((int)local_48 * 2) < param_5) {
        *(uint *)(param_4 + (int)local_48 * 8) = (int)local_50 + 1;
      }
      if (uVar5 < param_5) {
        *(uint *)(param_4 + uVar5 * 4) = (int)local_4c + 1;
        return CONCAT44(local_48,1);
      }
      return CONCAT44(local_48,1);
    }
    goto LAB_016a5944;
  }
  pppuVar8 = param_3[5];
  uVar1 = *(undefined1 *)(param_3 + 6);
  pppuVar7 = param_3[2];
  pppuVar6 = param_3[3];
  local_34 = param_3[4];
  local_44 = (undefined4 ****)0x1;
  local_3c = (undefined4 ****)pppuVar7;
  local_38 = pppuVar6;
  local_30 = pppuVar8;
  local_2c = uVar1;
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004ce4ac,0x95,&DAT_01d07f64);
    }
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08074);
    }
    uVar5 = 0;
    if (*(char *)(param_1[0x140] + 0x15a) == '\x01') {
      uVar5 = (uint)*(byte *)(param_1[0x140] + 0x15b);
    }
    FUN_016834b8(&local_54,param_1 + 0xa2,param_2 + 0x198,&local_44);
    if (local_54 != (uint ***)0x2) {
      ppppuVar4 = (undefined4 ****)local_50;
      if (((uint)local_54 & uVar5 & 1) != 0) {
        FUN_01687260(&local_54,&local_44,local_50,local_4c,local_4c,param_1 + 0xa2,param_2 + 0x198);
        goto LAB_016a59c0;
      }
      goto LAB_016a5740;
    }
LAB_016a56b4:
    ppppuVar4 = (undefined4 ****)FUN_016c2dec(local_50);
    local_54 = (uint ***)0x2;
    local_4c = extraout_r3;
  }
  else {
    iVar3 = param_1[0x29f];
    cVar2 = *(char *)((int)param_1 + 0xa7d);
    FUN_0168111c(&local_54,param_1 + 0x1f2,&local_44);
    if (local_54 == (uint ***)0x2) goto LAB_016a56b4;
    ppppuVar4 = (undefined4 ****)local_50;
    if ((((uint)local_54 & 1) != 0) && ((char)iVar3 != '\0' && cVar2 != '\0')) {
      FUN_016873fc(&local_54,&local_44,local_50,local_4c,local_4c,param_1 + 0x1f2);
LAB_016a59c0:
      if (local_54 == (uint ***)0x2) goto LAB_016a56b4;
      ppppuVar4 = (undefined4 ****)local_50;
    }
  }
LAB_016a5740:
  if (local_54 == (uint ***)0x2) {
  }
  else {
    if (((uint)local_54 & 1) == 0) {
LAB_016a5944:
      return ZEXT48(ppppuVar4) << 0x20;
    }
    if (param_5 <= (uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2)) {
      if (pppuVar8 < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
      uVar5 = (int)ppppuVar4 << 1 | 1;
      if ((uint)((int)ppppuVar4 * 2) < param_5) {
        *(uint *)(param_4 + (int)ppppuVar4 * 8) = (int)local_4c + 1;
      }
      if (uVar5 < param_5) {
        *(uint *)(param_4 + uVar5 * 4) = (int)pppuVar8 + 1;
      }
LAB_016a593c:
      return CONCAT44(ppppuVar4,1);
    }
    bVar10 = pppuVar6 <= pppuVar8;
    bVar9 = pppuVar8 == pppuVar6;
    if (!bVar10 || bVar9) {
      bVar10 = (uint ***)((int)pppuVar8 + 1U) <= local_4c;
      bVar9 = local_4c == (uint ***)((int)pppuVar8 + 1U);
    }
    local_50 = pppuVar8;
    if (bVar10 && !bVar9) {
      local_54 = local_4c;
      local_28 = pppuVar6;
LAB_016a5a00:
      local_38 = (uint ***)FUN_012fd02c;
      local_40 = (uint ***)FUN_0065fd28;
      local_44 = &local_54;
      local_3c = &local_28;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005a4e9e,&local_44,&DAT_01d08154);
    }
    param_3 = (uint ****)&local_44;
    local_44 = (undefined4 ****)0x2;
    local_40 = (uint ***)ppppuVar4;
    local_3c = (undefined4 ****)pppuVar7;
    local_38 = pppuVar6;
    local_34 = local_4c;
    local_30 = pppuVar8;
    local_2c = uVar1;
  }
LAB_016a58c0:
  lVar11 = FUN_0169ea74(param_1,param_2,param_3,param_4,param_5);
  return lVar11;
}

