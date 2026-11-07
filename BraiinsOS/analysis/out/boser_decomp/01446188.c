// FUN_01446188 @ 01446188 size=2232 calls_out=22 calls_in=2
// strings: /etc | /etc/timezone | /etc/config/system | /usr/share/zoneinfo/ | ../usr/share/zoneinfo//etc/zoneinfo/ | config

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01446188(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *extraout_r1;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  byte *pbVar14;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  byte *local_7c;
  uint local_78;
  uint local_74;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  byte *local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte *local_40;
  uint *local_3c;
  byte *local_38;
  uint *local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  
  FUN_019ae210(&local_60,"/etc",0xe);
  puVar13 = local_58;
  pbVar14 = local_5c;
  uVar3 = local_60;
  if (local_60 != 0x80000000) {
    FUN_012fbd94(&local_60,local_5c,local_58);
    if (local_60 == 0) {
      local_40 = pbVar14;
      local_44 = uVar3;
      local_3c = puVar13;
      for (iVar5 = 0; iVar5 != 0x20; iVar5 = iVar5 + 8) {
        puVar11 = *(uint **)((int)&DAT_01cf8fe8 + iVar5);
        if ((puVar11 <= puVar13) &&
           (iVar4 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01cf8fe4 + iVar5),pbVar14,puVar11),
           iVar4 == 0)) {
          if ((puVar11 != (uint *)0x0 && puVar11 < puVar13) && ((char)pbVar14[(int)puVar11] < -0x40)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("end of range should be a character boundary",0x57,&DAT_01cf9004);
          }
          local_50 = (int)puVar13 - (int)puVar11;
          local_58 = &local_44;
          local_3c = (uint *)0x0;
          local_48 = 1;
          local_4c = &DAT_00000001;
          local_5c = &DAT_00000001;
          local_60 = 1;
          local_54 = puVar11;
          if (local_50 == 0) {
            FUN_01445c48(&local_44,&local_4c);
            goto LAB_014469a8;
          }
          if (puVar11 != (uint *)0x0) {
            local_4c = &DAT_00000001;
            goto LAB_014469a8;
          }
          local_28 = 0;
          local_2c = &DAT_00000001;
          local_30 = 0;
          FUN_01445c48(&local_30,&local_4c);
          uVar10 = local_28;
          pbVar14 = local_2c;
          uVar3 = local_30;
          if (local_28 == 0) goto LAB_0144699c;
          FUN_015a6e40(&local_60,local_28);
          puVar13 = local_58;
          puVar11 = (uint *)local_58[2];
          if (local_54 == puVar11) goto LAB_0144699c;
          iVar5 = (int)local_54 - (int)puVar11;
          pbVar8 = (byte *)(local_58[1] + (int)puVar11);
          pbVar6 = pbVar14;
          goto LAB_01446974;
        }
      }
    }
    FUN_0134bd64(uVar3,pbVar14);
    puVar13 = (uint *)0x0;
    pbVar14 = &SUB_00000004;
  }
  goto LAB_014461f0;
  while( true ) {
    uVar10 = uVar10 - 1;
    *pbVar8 = *pbVar6;
    iVar5 = iVar5 + -1;
    puVar13[2] = puVar13[2] + 1;
    pbVar8 = pbVar8 + 1;
    pbVar6 = pbVar6 + 1;
    if (iVar5 == 0) break;
LAB_01446974:
    if (uVar10 == 0) break;
  }
LAB_0144699c:
  FUN_0134bd64(uVar3,pbVar14);
LAB_014469a8:
  FUN_01445cc0(&local_60);
  puVar13 = local_3c;
  local_68 = local_3c;
  pbVar14 = local_40;
  if (local_44 != 0x80000000) {
LAB_014463d8:
    *param_1 = local_44;
    param_1[1] = (uint)local_40;
    param_1[2] = (uint)local_68;
    return;
  }
LAB_014461f0:
  FUN_019a5900(&local_60,"/etc/timezone",0xd);
  pbVar8 = local_5c;
  uVar3 = local_60;
  if (local_60 == 0x80000000) {
LAB_01446218:
    local_68 = local_58;
  }
  else {
    local_68 = (uint *)0x0;
    if (local_58 != (uint *)0x0) {
      pbVar6 = local_5c + (int)local_58;
      do {
        pbVar7 = pbVar6 + -1;
        uVar10 = (uint)(char)*pbVar7;
        if (0x7fffffff < uVar10) {
          pbVar7 = pbVar6 + -2;
          bVar1 = *pbVar7;
          if ((char)bVar1 < -0x40) {
            pbVar7 = pbVar6 + -3;
            bVar2 = *pbVar7;
            if ((char)bVar2 < -0x40) {
              pbVar7 = pbVar6 + -4;
              uVar9 = (int)(char)bVar2 & 0x3fU | (*pbVar7 & 7) << 6;
            }
            else {
              uVar9 = bVar2 & 0xf;
            }
            uVar9 = (int)(char)bVar1 & 0x3fU | uVar9 << 6;
          }
          else {
            uVar9 = bVar1 & 0x1f;
          }
          uVar10 = uVar10 & 0x3f | uVar9 << 6;
        }
        if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
          if (0x7f < uVar10) {
            uVar9 = uVar10 >> 8;
            if (uVar9 < 0x20) {
              if (uVar9 == 0) {
                bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
                goto joined_r0x01446330;
              }
              if ((uVar9 == 0x16) && (uVar10 == 0x1680)) goto LAB_014462b4;
            }
            else if (uVar9 == 0x20) {
              bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
joined_r0x01446330:
              if (bVar1 != 0) goto LAB_014462b4;
            }
            else if (uVar9 == 0x30 && uVar10 == 0x3000) goto LAB_014462b4;
          }
          local_68 = (uint *)(pbVar6 + -(int)local_5c);
          if (local_58 < local_68) goto LAB_01446218;
          if (((local_68 != (uint *)0x0) && (local_68 < local_58)) &&
             ((char)local_5c[(int)local_68] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01cf8fd4);
          }
          break;
        }
LAB_014462b4:
        pbVar6 = pbVar7;
      } while (pbVar7 != local_5c);
    }
  }
  if (((uint)pbVar14 & 0xff) < 4) {
    FUN_0069263c(pbVar14,puVar13);
  }
  if (uVar3 == 0x80000000) {
    local_60 = 0;
    local_54 = (uint *)((uint)local_54 & 0xffff0000);
    local_5c = (byte *)0x1b6;
    local_58 = (uint *)0x1;
    FUN_019a581c(&local_30,&local_60,"/etc/config/system",0x12);
    pbVar14 = local_2c;
    if (((local_30 & 0xff) != 4) && ((local_30 & 0xff) != 4)) {
      param_1[1] = local_30;
      param_1[2] = (uint)local_2c;
      *param_1 = 0x80000000;
LAB_01446884:
      if (((uint)pbVar8 & 0xff) < 4) {
        FUN_0069263c(pbVar8,local_68);
        return;
      }
      return;
    }
    local_60 = FUN_01937230();
    local_4c = pbVar14;
    local_50 = 0;
    local_54 = (uint *)0x0;
    local_58 = (uint *)0x0;
    local_5c = (byte *)0x2000;
    pbVar14 = (byte *)thunk_FUN_01be5118(0x50);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x50);
    }
    local_44 = 0x50;
    local_6c = 0x80000000;
    local_40 = pbVar14;
LAB_014464bc:
    local_64 = 0;
LAB_014464c4:
    local_3c = (uint *)0x0;
    FUN_01446b7c(&local_30,&local_60,&local_44);
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
      param_1[1] = local_30;
      param_1[2] = (uint)local_2c;
      *param_1 = 0x80000000;
      goto LAB_0144684c;
    }
    if (local_3c != (uint *)0x0) goto code_r0x01446500;
    uVar3 = 0;
    if (local_6c == 0x80000000) {
      local_74 = 6;
    }
    else {
      uVar3 = local_78;
    }
    *param_1 = local_6c;
    param_1[1] = local_74;
    param_1[2] = uVar3;
    goto LAB_01446864;
  }
  local_40 = pbVar8;
  local_44 = uVar3;
  goto LAB_014463d8;
code_r0x01446500:
  local_34 = local_3c;
  local_38 = local_40;
  FUN_01445d14(&local_30,&local_38);
  pbVar14 = local_2c;
  if (local_30 == 0) goto LAB_014464c4;
  if (local_2c == (byte *)0x0) goto LAB_01446818;
  if (local_28 != 6) goto LAB_014464c4;
  iVar5 = thunk_FUN_01bed842(local_2c,"config",6);
  if (iVar5 == 0) {
    FUN_01445d14(&local_30,&local_38);
    if (local_30 == 0) goto LAB_014464bc;
    if (local_2c != (byte *)0x0) {
      local_64 = 0;
      if ((local_28 != 6) || (iVar5 = thunk_FUN_01bed842(local_2c,"system",6), iVar5 != 0))
      goto LAB_014464c4;
      FUN_01445d14(&local_30,&local_38);
      pbVar14 = extraout_r1;
      if (local_30 == 1) {
        pbVar14 = local_2c;
      }
      if (!(local_30 == 1 && pbVar14 == (byte *)0x0)) {
        local_64 = local_30 ^ 1;
        goto LAB_014464c4;
      }
    }
    goto LAB_01446818;
  }
  if ((local_64 & 1) == 0) goto LAB_014464bc;
  iVar5 = thunk_FUN_01bed842(pbVar14,"option",6);
  local_64 = 1;
  if (iVar5 != 0) goto LAB_014464c4;
  FUN_01445d14(&local_30,&local_38);
  pbVar14 = local_2c;
  if (local_30 == 0) goto LAB_014464c4;
  if (local_2c == (byte *)0x0) goto LAB_01446818;
  if (local_28 == 8) {
    iVar5 = thunk_FUN_01bed842(local_2c,&DAT_00570468,8);
    if (iVar5 == 0) {
      FUN_01445d14(&local_30,&local_38);
      pbVar14 = (byte *)0x0;
      if (local_30 == 1) {
        if (local_2c == (byte *)0x0) {
LAB_01446818:
          *param_1 = 0x80000000;
          param_1[1] = 4;
          param_1[2] = 0;
LAB_0144684c:
          if (local_6c != 0x80000000) {
            FUN_0134bd64(local_6c,local_74);
          }
LAB_01446864:
          FUN_0134bd64(local_44,local_40);
          if (local_5c != (byte *)0x0) {
            thunk_FUN_01be4678(local_60);
          }
          FUN_01bf01d6(local_4c);
          goto LAB_01446884;
        }
        local_84 = local_28;
        pbVar14 = local_2c;
      }
      FUN_01445d14(&local_30,&local_38);
      if (local_30 != 1) {
        if (pbVar14 == (byte *)0x0) goto LAB_014464c4;
        FUN_01446110(&local_30,pbVar14,local_84);
        *param_1 = local_30;
        param_1[1] = (uint)local_2c;
        param_1[2] = local_28;
        goto LAB_0144684c;
      }
LAB_014466f8:
      if (local_2c != (byte *)0x0) goto LAB_014464c4;
      goto LAB_01446818;
    }
    iVar5 = thunk_FUN_01bed842(pbVar14,&DAT_00571080,8);
    if (iVar5 == 0) {
      FUN_01445d14(&local_30,&local_38);
      local_7c = (byte *)0x0;
      if (local_30 == 1) {
        local_7c = local_2c;
        if (local_2c == (byte *)0x0) goto LAB_01446818;
        local_80 = local_28;
      }
      FUN_01445d14(&local_30,&local_38);
      if (local_30 == 1) goto LAB_014466f8;
      if (local_7c == (byte *)0x0) goto LAB_014464c4;
      uVar12 = 0;
      if ((int)local_80 < 0) {
LAB_01446a40:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,local_88);
      }
      if (local_80 == 0) {
        local_88 = 1;
        local_8c = 0;
      }
      else {
        uVar12 = 1;
        local_88 = FUN_01298504(local_80,1);
        if (local_88 == 0) {
          local_88 = local_80;
          goto LAB_01446a40;
        }
        local_8c = local_80;
      }
      FUN_01bed4e2(local_88,local_7c);
      if (local_6c != 0x80000000) {
        FUN_0134bd64(local_6c,local_74);
      }
      local_78 = local_80;
      local_6c = local_8c;
      local_74 = local_88;
    }
  }
  local_64 = 1;
  goto LAB_014464c4;
}

