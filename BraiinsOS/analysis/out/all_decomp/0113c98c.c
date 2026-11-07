// FUN_0113c98c @ 0113c98c size=1092 calls_out=13 calls_in=2
// strings: a Display implementation returned an error unexpectedly

undefined8 FUN_0113c98c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  uint **ppuVar11;
  int local_6c;
  byte *local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  undefined4 ***local_58;
  byte *local_54;
  uint **local_50;
  uint ***local_48;
  undefined *local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint ***local_30;
  undefined4 *local_2c;
  int local_28;
  undefined *local_24;
  
  uVar8 = *(undefined4 *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  FUN_015ec424(&local_6c,uVar8,iVar10);
  if (local_6c == -0x80000000) {
    local_60 = local_68;
    local_50 = (uint **)0x0;
    local_58 = (undefined4 ***)0x0;
    local_3c = 0;
    local_5c = local_64;
    local_54 = (byte *)0x1;
    local_40 = &DAT_60000020;
    local_48 = (uint ***)&local_58;
    local_44 = &DAT_018886e4;
    if (iVar10 == 0) {
      iVar10 = FUN_00faace8(&local_48,1,0);
LAB_0113cbe8:
      if (iVar10 == 0) {
LAB_0113cbf0:
        local_30 = local_58;
        local_2c = (undefined4 *)local_54;
        local_28 = (int)local_50;
        uVar8 = FUN_0113d76c(&local_60,&local_30);
        return CONCAT44(uVar8,1);
      }
    }
    else {
      local_38 = uVar8;
      local_34 = iVar10;
      do {
        FUN_00fb7f7c(&local_30,&local_38);
        if (local_30 == (uint ***)0x0) goto LAB_0113cbf0;
        if (local_24 == (undefined *)0x0) {
          iVar10 = FUN_00faace8(&local_48,local_30,local_2c);
          goto LAB_0113cbe8;
        }
        iVar10 = FUN_01009e50(&local_58);
      } while ((iVar10 == 0) && (iVar10 = FUN_01009eb0(&local_58,0xfffd), iVar10 == 0));
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_38,
                 &DAT_018886fc,&DAT_018af130);
  }
  pbVar9 = &DAT_00000001;
  ppuVar11 = (uint **)0x0;
  if (local_64 != 0) {
    pbVar3 = local_68 + local_64;
    do {
      pbVar4 = pbVar3 + -1;
      uVar5 = (uint)(char)*pbVar4;
      if (0x7fffffff < uVar5) {
        pbVar4 = pbVar3 + -2;
        bVar2 = *pbVar4;
        if ((char)bVar2 < -0x40) {
          pbVar4 = pbVar3 + -3;
          bVar1 = *pbVar4;
          if ((char)bVar1 < -0x40) {
            pbVar4 = pbVar3 + -4;
            uVar7 = (int)(char)bVar1 & 0x3fU | (*pbVar4 & 7) << 6;
          }
          else {
            uVar7 = bVar1 & 0xf;
          }
          uVar7 = (int)(char)bVar2 & 0x3fU | uVar7 << 6;
        }
        else {
          uVar7 = bVar2 & 0x1f;
        }
        uVar5 = uVar5 & 0x3f | uVar7 << 6;
      }
      if ((4 < uVar5 - 9) && (uVar5 != 0x20)) {
        if (0x7f < uVar5) {
          uVar7 = uVar5 >> 8;
          if (uVar7 < 0x20) {
            if (uVar7 == 0) {
              bVar2 = (&DAT_0041951b)[uVar5 & 0xff] & 1;
              goto joined_r0x0113cac0;
            }
            if ((uVar7 == 0x16) && (uVar5 == 0x1680)) goto LAB_0113c9fc;
          }
          else if (uVar7 == 0x20) {
            bVar2 = (&DAT_0041951b)[uVar5 & 0xff] & 2;
joined_r0x0113cac0:
            if (bVar2 != 0) goto LAB_0113c9fc;
          }
          else if (uVar7 == 0x30 && uVar5 == 0x3000) goto LAB_0113c9fc;
        }
        ppuVar11 = (uint **)(pbVar3 + -(int)local_68);
        uVar8 = 0;
        if (-1 < (int)ppuVar11) {
          if (ppuVar11 == (uint **)0x0) {
            ppuVar11 = (uint **)0x0;
            break;
          }
          pbVar9 = (byte *)thunk_FUN_016d4a50(ppuVar11);
          if (pbVar9 != (byte *)0x0) break;
          uVar8 = 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar8,ppuVar11);
      }
LAB_0113c9fc:
      pbVar3 = pbVar4;
    } while (local_68 != pbVar4);
  }
  FUN_016dd1aa(pbVar9,local_68,ppuVar11);
  if (local_6c != 0) {
    thunk_FUN_016d3fb4(local_68);
  }
  local_58 = (undefined4 ***)ppuVar11;
  local_54 = pbVar9;
  local_50 = ppuVar11;
  if (ppuVar11 == (uint **)0x0) {
    uVar8 = 0;
  }
  else {
    if (ppuVar11 == (uint **)0x1) {
      bVar2 = *pbVar9;
      uVar8 = 1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0113cd4c;
    }
    else {
      bVar2 = *pbVar9;
    }
    if (bVar2 == 0x2b) {
      pbVar9 = pbVar9 + 1;
      ppuVar11 = (uint **)((int)ppuVar11 + -1);
    }
    uVar5 = 0;
    if (ppuVar11 < (uint **)0x9) {
      for (; ppuVar11 != (uint **)0x0; ppuVar11 = (uint **)((int)ppuVar11 + -1)) {
        bVar2 = *pbVar9;
        if (9 < bVar2 - 0x30) goto LAB_0113cd48;
        pbVar9 = pbVar9 + 1;
        uVar5 = (bVar2 - 0x30) + uVar5 * 10;
      }
LAB_0113ccf0:
      uVar8 = 0;
      goto joined_r0x0113ccf8;
    }
    do {
      if (ppuVar11 == (uint **)0x0) goto LAB_0113ccf0;
      uVar7 = (uint)((ulonglong)uVar5 * 10);
      if ((int)((ulonglong)uVar5 * 10 >> 0x20) != 0) {
        uVar8 = 1;
        if (*pbVar9 - 0x30 < 10) {
          uVar8 = 2;
        }
        goto LAB_0113cd4c;
      }
      uVar6 = *pbVar9 - 0x30;
      if (9 < uVar6) goto LAB_0113cd48;
      uVar5 = uVar6 + uVar7;
      ppuVar11 = (uint **)((int)ppuVar11 + -1);
      pbVar9 = pbVar9 + 1;
    } while (!CARRY4(uVar6,uVar7));
    uVar8 = 2;
  }
LAB_0113cd4c:
  local_2c = &DAT_006043a8;
  local_30 = (uint ***)&local_58;
  local_24 = &DAT_01603224;
  local_28 = param_1;
  FUN_00600d2c(&local_48,&DAT_00574da0,&local_30);
  uVar5 = FUN_0113d51c(uVar8,&local_48);
  uVar8 = 1;
joined_r0x0113ccf8:
  if (local_58 == (undefined4 ***)0x0) {
    return CONCAT44(uVar5,uVar8);
  }
  thunk_FUN_016d3fb4(local_54);
  return CONCAT44(uVar5,uVar8);
LAB_0113cd48:
  uVar8 = 1;
  goto LAB_0113cd4c;
}

