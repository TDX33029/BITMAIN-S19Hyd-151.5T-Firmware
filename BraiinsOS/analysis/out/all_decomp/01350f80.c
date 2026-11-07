// FUN_01350f80 @ 01350f80 size=1256 calls_out=6 calls_in=3
// strings: 

void FUN_01350f80(uint *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 local_40;
  byte *local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_34 = 0;
  local_28 = 1;
  local_40 = 0x7e;
  local_2c = 0x7e;
  local_3c = param_2;
  local_38 = param_3;
  local_30 = param_3;
  FUN_0062a644(&local_4c,&local_40);
  uVar11 = local_48;
  if (local_4c != 1) {
    *param_1 = 0x80000000;
    param_1[1] = (uint)param_2;
    param_1[2] = param_3;
    return;
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  uVar10 = 1;
  local_58 = 0;
  if ((param_3 != 0) && (uVar10 = thunk_FUN_016d4a50(param_3), local_58 = param_3, uVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  uVar9 = 0;
  local_50 = 0;
  local_54 = uVar10;
  do {
    pbVar1 = param_2;
    if (uVar11 != 0) {
      if (uVar11 < param_3) {
        if (-0x41 < (char)param_2[uVar11]) {
LAB_01351068:
          uVar8 = param_3 - uVar11;
          pbVar1 = param_2 + uVar11;
          goto LAB_01351070;
        }
      }
      else if (param_3 == uVar11) goto LAB_01351068;
      uVar4 = 0;
      puVar2 = &DAT_018adf70;
      uVar8 = uVar11;
      goto LAB_013513e4;
    }
    uVar8 = param_3;
LAB_01351070:
    if (local_58 - uVar9 < uVar11) {
      FUN_01150aa8(&local_58,uVar9,uVar11);
      uVar9 = local_50;
      uVar10 = local_54;
    }
    FUN_016dd1aa(uVar10 + uVar9,param_2,uVar11);
    uVar9 = uVar9 + uVar11;
    local_50 = uVar9;
    if (uVar8 < 2) {
      if (uVar8 != 1) {
        uVar4 = 1;
        param_3 = 0;
        uVar8 = 0;
        puVar2 = &DAT_018920b4;
        goto LAB_013513e4;
      }
      if (local_58 == uVar9) {
        FUN_01150aa8(&local_58,uVar9,1);
        uVar10 = local_54;
      }
      *(undefined1 *)(uVar10 + local_50) = 0x7e;
      uVar9 = uVar9 + 1;
      goto LAB_013513a8;
    }
    param_2 = pbVar1 + 1;
    bVar3 = *param_2;
    if ((char)bVar3 < -0x40) {
      uVar4 = 1;
      puVar2 = &DAT_018920b4;
      param_3 = uVar8;
      goto LAB_013513e4;
    }
    uVar11 = (uint)bVar3;
    if ((uint)(int)(char)bVar3 < 0x80000000) {
joined_r0x01351118:
      if (uVar11 == 0x30) goto LAB_013511ac;
LAB_0135111c:
      if (uVar11 == 0x31) {
        if (local_58 == uVar9) {
          FUN_01150aa8(&local_58,uVar9,1);
        }
        *(undefined1 *)(local_54 + local_50) = 0x2f;
        uVar10 = local_54;
        goto LAB_013511bc;
      }
      if (local_58 == uVar9) {
        FUN_01150aa8(&local_58,uVar9,1);
      }
      iVar7 = uVar9 + 1;
      uVar9 = 1;
      if (0x7f < uVar11) {
        uVar9 = 2;
      }
      *(undefined1 *)(local_54 + local_50) = 0x7e;
      if ((0x7ff < uVar11) && (uVar9 = 4, uVar11 < 0x10000)) {
        uVar9 = 3;
      }
      if (uVar9 <= local_58 - iVar7) {
        pbVar1 = (byte *)(local_54 + iVar7);
        if (0x7f < uVar11) goto LAB_013512dc;
LAB_01351194:
        uVar9 = uVar9 + iVar7;
        *pbVar1 = (byte)uVar11;
        uVar10 = local_54;
        goto LAB_013511c0;
      }
      local_50 = iVar7;
      FUN_01150aa8(&local_58,iVar7,uVar9);
      pbVar1 = (byte *)(local_54 + local_50);
      if (uVar11 < 0x80) goto LAB_01351194;
LAB_013512dc:
      uVar9 = uVar9 + iVar7;
      bVar3 = (byte)uVar11 & 0x3f | 0x80;
      bVar6 = (byte)(uVar11 >> 6);
      uVar10 = local_54;
      if (uVar11 < 0x800) {
        pbVar1[1] = bVar3;
        *pbVar1 = bVar6 | 0xc0;
        uVar4 = 2;
      }
      else {
        bVar5 = bVar6 & 0x3f | 0x80;
        bVar6 = (byte)(uVar11 >> 0xc);
        if (uVar11 >> 0x10 == 0) {
          bVar12 = bVar6 | 0xe0;
          uVar4 = 3;
          bVar6 = bVar5;
        }
        else {
          bVar12 = (byte)(uVar11 >> 0x12) | 0xf0;
          bVar6 = bVar6 & 0x3f | 0x80;
          pbVar1[3] = bVar3;
          uVar4 = 4;
          bVar3 = bVar5;
        }
        pbVar1[2] = bVar3;
        pbVar1[1] = bVar6;
        *pbVar1 = bVar12;
      }
    }
    else {
      if (uVar11 < 0xe0) {
        uVar11 = pbVar1[2] & 0x3f | (uVar11 & 0x1f) << 6;
        goto joined_r0x01351118;
      }
      uVar4 = pbVar1[3] & 0x3f | (pbVar1[2] & 0x3f) << 6;
      if (uVar11 < 0xf0) {
        uVar11 = uVar4 | (uVar11 & 0x1f) << 0xc;
        goto joined_r0x01351118;
      }
      uVar11 = pbVar1[4] & 0x3f | uVar4 << 6 | (uVar11 & 7) << 0x12;
      if (uVar11 != 0x30) goto LAB_0135111c;
LAB_013511ac:
      if (local_58 == uVar9) {
        FUN_01150aa8(&local_58,uVar9,1);
        uVar10 = local_54;
      }
      *(undefined1 *)(uVar10 + local_50) = 0x7e;
LAB_013511bc:
      uVar9 = uVar9 + 1;
LAB_013511c0:
      uVar4 = 1;
    }
    uVar8 = uVar8 - 1;
    local_50 = uVar9;
    if (uVar4 < uVar8) {
      if ((char)param_2[uVar4] < -0x40) {
LAB_013513d8:
        puVar2 = &DAT_018920c4;
        pbVar1 = param_2;
        param_3 = uVar8;
LAB_013513e4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar1,param_3,uVar4,uVar8,puVar2);
      }
      param_3 = uVar8 - uVar4;
    }
    else {
      param_3 = 0;
      if (uVar8 != uVar4) goto LAB_013513d8;
    }
    param_2 = param_2 + uVar4;
    local_34 = 0;
    local_28 = 1;
    local_40 = 0x7e;
    local_2c = 0x7e;
    local_3c = param_2;
    local_38 = param_3;
    local_30 = param_3;
    FUN_0062a644(&local_4c,&local_40);
    uVar11 = local_48;
  } while (local_4c != 0);
  if (local_58 - uVar9 < param_3) {
    FUN_01150aa8(&local_58,uVar9,param_3);
    uVar9 = local_50;
  }
  FUN_016dd1aa(local_54 + uVar9,param_2,param_3);
  uVar9 = uVar9 + param_3;
LAB_013513a8:
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = uVar9;
  return;
}

