// FUN_01582ce8 @ 01582ce8 size=1704 calls_out=15 calls_in=2
// strings: 

undefined4 FUN_01582ce8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint extraout_r1;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined1 uVar19;
  int iVar20;
  uint uStack_a4;
  undefined4 uStack_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte *local_88;
  undefined4 local_84;
  byte *local_80;
  int local_7c;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint *local_68;
  byte *local_64;
  int local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint *local_50 [3];
  undefined1 *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte *local_38;
  int local_34;
  uint *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  uStack_a4 = param_1;
  uStack_a0 = param_2;
  FUN_015f8770(local_50);
  if (((uint)local_50[0] & 0xff) == 4) {
    puVar12 = local_50[1];
  }
  else {
    puVar12 = (uint *)&DAT_00000001;
    if (((uint)local_50[0] & 0xff) == 3) {
      uVar6 = *local_50[1];
      puVar18 = (undefined4 *)local_50[1][1];
      pcVar7 = (code *)*puVar18;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar6);
      }
      if (puVar18[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      thunk_FUN_016d3fb4(local_50[1]);
    }
  }
  FUN_0184606c(param_3,puVar12);
  local_50[1] = &DAT_0157d360;
  local_9c = extraout_r1;
  local_50[0] = &uStack_a4;
  FUN_00600d2c(&local_94,&DAT_00584476,local_50);
  FUN_015ec424(&local_68,local_90,local_8c);
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(local_90);
  }
  pbVar3 = local_64;
  puVar12 = local_68;
  if (local_68 == (uint *)0x80000000) {
    local_34 = local_60;
    local_38 = local_64;
    local_2c = &DAT_0157d360;
    local_30 = &uStack_a4;
    FUN_00600d2c(local_50,&DAT_00583d9d,&local_30);
LAB_01583330:
    uVar6 = FUN_015829f4(&local_38,local_50);
    return uVar6;
  }
  pbVar10 = (byte *)0x0;
  pbVar8 = local_64 + local_60;
  if (local_60 == 0) {
    pbVar4 = (byte *)0x0;
    pbVar11 = local_64;
joined_r0x01582f14:
    do {
      do {
        pbVar2 = pbVar8;
        if (pbVar11 == pbVar2) goto LAB_01583020;
        pbVar8 = pbVar2 + -1;
        uVar13 = (uint)(char)*pbVar8;
        if (0x7fffffff < uVar13) {
          pbVar8 = pbVar2 + -2;
          bVar9 = *pbVar8;
          if ((char)bVar9 < -0x40) {
            pbVar8 = pbVar2 + -3;
            bVar1 = *pbVar8;
            if ((char)bVar1 < -0x40) {
              pbVar8 = pbVar2 + -4;
              uVar16 = (int)(char)bVar1 & 0x3fU | (*pbVar8 & 7) << 6;
            }
            else {
              uVar16 = bVar1 & 0xf;
            }
            uVar16 = (int)(char)bVar9 & 0x3fU | uVar16 << 6;
          }
          else {
            uVar16 = bVar9 & 0x1f;
          }
          uVar13 = uVar13 & 0x3f | uVar16 << 6;
        }
      } while ((uVar13 - 9 < 5) || (uVar13 == 0x20));
      if (uVar13 < 0x80) break;
      uVar16 = uVar13 >> 8;
      if (uVar16 < 0x20) {
        if (uVar16 == 0) {
          bVar9 = (&DAT_0041951b)[uVar13 & 0xff] & 1;
joined_r0x01583000:
          if (bVar9 == 0) break;
        }
        else if ((uVar16 != 0x16) || (uVar13 != 0x1680)) break;
        goto joined_r0x01582f14;
      }
      if (uVar16 == 0x20) {
        bVar9 = (&DAT_0041951b)[uVar13 & 0xff] & 2;
        goto joined_r0x01583000;
      }
    } while (!(uVar16 != 0x30 || uVar13 != 0x3000));
    pbVar10 = pbVar2 + ((int)pbVar10 - (int)pbVar11);
  }
  else {
    pbVar4 = pbVar10;
    pbVar10 = local_64;
    do {
      pbVar11 = pbVar10 + 1;
      uVar13 = (uint)*pbVar10;
      if (0x7fffffff < (uint)(int)(char)*pbVar10) {
        if (uVar13 < 0xe0) {
          uVar13 = pbVar10[1] & 0x3f | (uVar13 & 0x1f) << 6;
          pbVar11 = pbVar10 + 2;
        }
        else {
          uVar16 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar13 < 0xf0) {
            uVar13 = uVar16 | (uVar13 & 0x1f) << 0xc;
            pbVar11 = pbVar10 + 3;
          }
          else {
            pbVar11 = pbVar10 + 4;
            uVar13 = pbVar10[3] & 0x3f | uVar16 << 6 | (uVar13 & 7) << 0x12;
          }
        }
      }
      pbVar10 = pbVar4 + ((int)pbVar11 - (int)pbVar10);
      if ((4 < uVar13 - 9) && (uVar13 != 0x20)) {
        if (uVar13 < 0x80) goto joined_r0x01582f14;
        uVar16 = uVar13 >> 8;
        if (uVar16 < 0x20) {
          if (uVar16 == 0) {
            bVar9 = (&DAT_0041951b)[uVar13 & 0xff] & 1;
            goto joined_r0x01582ef4;
          }
          if ((uVar16 != 0x16) || (uVar13 != 0x1680)) goto joined_r0x01582f14;
        }
        else if (uVar16 == 0x20) {
          bVar9 = (&DAT_0041951b)[uVar13 & 0xff] & 2;
joined_r0x01582ef4:
          if (bVar9 == 0) goto joined_r0x01582f14;
        }
        else if ((uVar16 != 0x30) || (uVar13 != 0x3000)) goto joined_r0x01582f14;
      }
      pbVar4 = pbVar10;
      pbVar10 = pbVar11;
    } while (pbVar11 != pbVar8);
    pbVar4 = (byte *)0x0;
    pbVar10 = (byte *)0x0;
  }
LAB_01583020:
  uVar13 = (int)pbVar10 - (int)pbVar4;
  if (uVar13 == 0) {
    uVar19 = 0;
  }
  else {
    pbVar4 = local_64 + (int)pbVar4;
    if (uVar13 == 1) {
      bVar9 = *pbVar4;
      uVar19 = 1;
      if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_015831a4;
    }
    else {
      bVar9 = *pbVar4;
    }
    local_98 = 0;
    if (bVar9 == 0x2b) {
      pbVar4 = pbVar4 + 1;
      uVar13 = uVar13 - 1;
    }
    if (uVar13 < 9) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        bVar9 = *pbVar4;
        if (9 < bVar9 - 0x30) goto LAB_015831a0;
        pbVar4 = pbVar4 + 1;
        local_98 = (bVar9 - 0x30) + local_98 * 10;
      }
LAB_015830a0:
      if (local_68 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_64);
      }
      local_68 = (uint *)0x0;
      local_5c = local_5c & 0xffff0000;
      local_64 = &DAT_000001b6;
      local_60 = 0x100;
      local_50[1] = (uint *)&LAB_00fac484;
      local_50[0] = &local_98;
      FUN_00600d2c(&local_74,&DAT_0056b32a,local_50);
      FUN_015ec1bc(&local_80,&local_68,local_70,local_6c);
      if (local_74 != 0) {
        thunk_FUN_016d3fb4(local_70);
      }
      if ((char)local_80 == '\x04') {
        iVar5 = FUN_00fabc64(extraout_r1,local_50);
        iVar14 = 10 - iVar5;
        if (iVar5 == 10) {
          iVar15 = 1;
          iVar20 = 0;
        }
        else {
          iVar15 = thunk_FUN_016d4a50(iVar14);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar14);
          }
          iVar20 = iVar14;
        }
        FUN_016dd1aa(iVar15,(int)local_50 + iVar5,iVar14);
        FUN_009f4628(&local_88,local_7c,iVar15,iVar14);
        if ((char)local_88 == '\x04') {
          if (iVar20 != 0) {
            thunk_FUN_016d3fb4(iVar15);
          }
          FUN_016dffb2(local_7c);
          return 0;
        }
        local_50[0] = &local_9c;
        local_34 = local_84;
        local_38 = local_88;
        local_44 = &LAB_00fac484;
        local_50[1] = (uint *)&LAB_00fac484;
        local_50[2] = &local_98;
        FUN_00600d2c(&local_30,&DAT_0058a3c9,local_50);
        uVar6 = FUN_015829f4(&local_38,&local_30);
        if (iVar20 != 0) {
          thunk_FUN_016d3fb4(iVar15);
        }
        FUN_016dffb2(local_7c);
        return uVar6;
      }
      local_2c = (undefined4 *)&LAB_00fac484;
      local_38 = local_80;
      local_34 = local_7c;
      local_30 = &local_98;
      FUN_00600d2c(local_50,&DAT_00577146,&local_30);
      goto LAB_01583330;
    }
    do {
      if (uVar13 == 0) goto LAB_015830a0;
      uVar16 = (uint)((ulonglong)local_98 * 10);
      if ((int)((ulonglong)local_98 * 10 >> 0x20) != 0) {
        uVar19 = 1;
        if (*pbVar4 - 0x30 < 10) {
          uVar19 = 2;
        }
        goto LAB_015831a4;
      }
      uVar17 = *pbVar4 - 0x30;
      if (9 < uVar17) goto LAB_015831a0;
      local_98 = uVar17 + uVar16;
      uVar13 = uVar13 - 1;
      pbVar4 = pbVar4 + 1;
    } while (!CARRY4(uVar17,uVar16));
    uVar19 = 2;
  }
LAB_015831a4:
  local_50[1] = &DAT_0157d360;
  local_50[0] = &uStack_a4;
  FUN_00600d2c(&local_30,&DAT_005932a2,local_50);
  FUN_01602d08(local_50);
  local_68 = local_50[0];
  local_64 = (byte *)local_50[1];
  local_60 = (int)local_50[2];
  local_5c = (uint)local_44;
  uStack_58 = uStack_40;
  uStack_54 = uStack_3c;
  local_50[2] = (uint *)local_28;
  local_50[1] = local_2c;
  local_50[0] = local_30;
  local_44 = (undefined1 *)CONCAT31(local_44._1_3_,uVar19);
  uVar6 = FUN_0158357c(local_50);
  if (puVar12 != (uint *)0x0) {
    thunk_FUN_016d3fb4(pbVar3);
  }
  return uVar6;
LAB_015831a0:
  uVar19 = 1;
  goto LAB_015831a4;
}

