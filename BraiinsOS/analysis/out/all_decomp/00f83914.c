// FUN_00f83914 @ 00f83914 size=2124 calls_out=5 calls_in=1
// strings: 

void FUN_00f83914(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_9c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  FUN_00fb6cfc(&local_68,param_2,param_3,"{n}",3);
  uVar10 = local_2c;
  if (local_2c < local_58) {
    uVar10 = local_58;
  }
  if ((local_68 & 1) != 0) {
    uVar13 = 0;
    uVar14 = 0;
    iVar4 = local_2c - 1;
    local_9c = 1;
    uVar12 = local_4c;
    uVar11 = local_44;
joined_r0x00f839ec:
    uVar7 = uVar12 + iVar4;
    if (uVar11 == 0xffffffff) {
joined_r0x00f83afc:
      if (uVar7 < local_34) {
        uVar7 = *(byte *)(local_38 + uVar7) & 0x3f;
        uVar11 = local_60 >> uVar7 | local_5c << (0x20 - uVar7 & 0xff);
        if (-1 < (int)(uVar7 - 0x20)) {
          uVar11 = local_5c >> (uVar7 - 0x20 & 0xff);
        }
        if ((uVar11 & 1) == 0) {
          uVar12 = uVar12 + local_2c;
        }
        else {
          uVar11 = local_58;
          do {
            uVar7 = uVar11;
            if (uVar10 == uVar7) {
              uVar7 = local_58 - 1;
              goto LAB_00f83b8c;
            }
            uVar5 = local_58;
            if (local_34 <= uVar12 + uVar7) goto LAB_00f840a8;
            uVar11 = uVar7 + 1;
          } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + uVar12 + uVar7));
          uVar12 = (uVar12 - local_58) + uVar7 + 1;
        }
        goto LAB_00f83b08;
      }
      goto LAB_00f84004;
    }
    if (uVar7 < local_34) {
LAB_00f83a14:
      uVar5 = *(byte *)(local_38 + uVar7) & 0x3f;
      uVar7 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
      if (-1 < (int)(uVar5 - 0x20)) {
        uVar7 = local_5c >> (uVar5 - 0x20 & 0xff);
      }
      if ((uVar7 & 1) == 0) {
        uVar12 = uVar12 + local_2c;
        uVar11 = 0;
      }
      else {
        uVar5 = local_58;
        if (local_58 < uVar11) {
          uVar5 = uVar11;
        }
        uVar7 = local_2c;
        if (local_2c < uVar5) {
          uVar7 = uVar5;
        }
        uVar3 = uVar5;
        do {
          uVar6 = uVar3;
          if (uVar7 == uVar6) {
            uVar7 = local_58;
            goto LAB_00f83ab0;
          }
          if (local_34 <= uVar12 + uVar6) goto LAB_00f840a8;
          uVar3 = uVar6 + 1;
        } while (*(char *)(local_30 + uVar6) == *(char *)(local_38 + uVar12 + uVar6));
        uVar12 = (uVar12 - local_58) + uVar6 + 1;
        uVar11 = 0;
      }
      goto LAB_00f83a04;
    }
    goto LAB_00f84004;
  }
  uVar13 = 0;
  if ((local_5c & 0x10000) != 0) {
    uVar14 = 0;
LAB_00f84004:
    uVar10 = param_3 - uVar14;
    if (local_78 - uVar13 < uVar10) {
      FUN_00f991dc(&local_78,uVar13,uVar10,1,1);
      uVar13 = local_70;
    }
    FUN_016dd1aa(local_74 + uVar13,param_2 + uVar14,uVar10);
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = uVar13 + uVar10;
    return;
  }
  if (local_64 != 0) {
    if (local_64 < local_34) {
      if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00f84144;
    }
    else if (local_64 != local_34) goto LAB_00f84144;
  }
  if (local_64 == local_34) {
    uVar10 = local_34;
    uVar14 = 0;
    if ((local_5c & 1) != 0) goto LAB_00f83df8;
    goto LAB_00f84004;
  }
  pbVar8 = (byte *)(local_38 + local_64);
  uVar13 = (uint)*pbVar8;
  if ((char)*pbVar8 < '\0') {
    if (uVar13 < 0xe0) {
      uVar13 = pbVar8[1] & 0x3f | (uVar13 & 0x1f) << 6;
    }
    else {
      uVar10 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
      if (uVar13 < 0xf0) {
        uVar13 = uVar10 | (uVar13 & 0x1f) << 0xc;
      }
      else {
        uVar13 = pbVar8[3] & 0x3f | uVar10 << 6 | (uVar13 & 7) << 0x12;
      }
    }
  }
  uVar10 = local_64;
  if ((local_5c & 1) != 0) goto LAB_00f83df8;
  iVar4 = 1;
  if (0x7f < uVar13) {
    iVar4 = 2;
  }
  if ((0x7ff < uVar13) && (iVar4 = 4, uVar13 < 0x10000)) {
    iVar4 = 3;
  }
  uVar14 = iVar4 + local_64;
  if (uVar14 != 0) {
    if (uVar14 < local_34) {
      if (-0x41 < *(char *)(local_38 + uVar14)) goto LAB_00f83dd0;
    }
    else if (uVar14 == local_34) goto LAB_00f83dd0;
LAB_00f84140:
    local_64 = uVar14;
LAB_00f84144:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(local_38,local_34,local_64,local_34,&DAT_018aeb58);
  }
LAB_00f83dd0:
  uVar10 = local_34;
  if (uVar14 != local_34) {
    uVar10 = uVar14;
  }
LAB_00f83df8:
  if (local_78 < uVar10) {
    FUN_00f991dc(&local_78,0,uVar10,1,1);
    uVar12 = local_74;
    uVar13 = local_70;
  }
  else {
    uVar12 = 1;
    uVar13 = 0;
  }
  uVar14 = local_78;
  FUN_016dd1aa(uVar12 + uVar13,param_2,uVar10);
  local_70 = uVar13 + uVar10;
  if (uVar14 == local_70) {
    FUN_00f991dc(&local_78,uVar14,1,1,1);
    uVar12 = local_74;
  }
  *(undefined1 *)(uVar12 + local_70) = 10;
  local_64 = uVar10;
  do {
    uVar13 = local_70 + 1;
    local_70 = uVar13;
    if (local_64 != 0) {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00f84144;
      }
      else if (local_64 != local_34) goto LAB_00f84144;
    }
    uVar14 = local_64;
    if (local_64 == local_34) goto LAB_00f84004;
    pbVar8 = (byte *)(local_38 + local_64);
    iVar4 = 1;
    if (0x7fffffff < (uint)(int)(char)*pbVar8) {
      uVar10 = (uint)*pbVar8;
      if (uVar10 < 0xe0) {
        uVar14 = pbVar8[1] & 0x3f | (uVar10 & 0x1f) << 6;
      }
      else {
        uVar14 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
        if (uVar10 < 0xf0) {
          uVar14 = uVar14 | (uVar10 & 0x1f) << 0xc;
        }
        else {
          uVar14 = pbVar8[3] & 0x3f | uVar14 << 6 | (uVar10 & 7) << 0x12;
        }
      }
      if (0x7f < uVar14) {
        iVar4 = 2;
      }
      if ((0x7ff < uVar14) && (iVar4 = 4, uVar14 < 0x10000)) {
        iVar4 = 3;
      }
    }
    uVar14 = iVar4 + local_64;
    if (uVar14 != 0) {
      if (uVar14 < local_34) {
        if (*(char *)(local_38 + uVar14) < -0x40) goto LAB_00f84140;
      }
      else if (uVar14 != local_34) goto LAB_00f84140;
    }
    uVar10 = local_34;
    if (uVar14 != local_34) {
      uVar10 = uVar14;
    }
    uVar14 = uVar10 - local_64;
    if (local_78 - uVar13 < uVar14) {
      FUN_00f991dc(&local_78,uVar13,uVar14,1,1);
      uVar12 = local_74;
    }
    uVar11 = local_70;
    uVar13 = local_78;
    FUN_016dd1aa(uVar12 + local_70,param_2 + local_64,uVar14);
    local_70 = uVar11 + uVar14;
    if (uVar13 == local_70) {
      FUN_00f991dc(&local_78,uVar13,1,1,1);
      uVar12 = local_74;
    }
    *(undefined1 *)(uVar12 + local_70) = 10;
    local_64 = uVar10;
  } while( true );
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_00f84128;
    uVar5 = uVar12 + uVar7;
    if (local_34 <= uVar5) goto LAB_00f84118;
    pcVar1 = (char *)(local_38 + uVar12 + uVar7);
    pcVar2 = (char *)(local_30 + uVar7);
    uVar7 = uVar7 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_00f83b8c:
    if (uVar7 == 0xffffffff) {
      uVar11 = 0xffffffff;
      goto LAB_00f83bd0;
    }
  }
  uVar12 = uVar12 + local_50;
LAB_00f83b08:
  uVar7 = uVar12 + iVar4;
  goto joined_r0x00f83afc;
LAB_00f83ab0:
  if (uVar11 < uVar7) {
    uVar7 = uVar7 - 1;
    if (local_2c <= uVar7) goto LAB_00f84128;
    uVar5 = uVar7 + uVar12;
    if (local_34 <= uVar5) goto LAB_00f84118;
    if (*(char *)(local_30 + uVar7) != *(char *)(local_38 + uVar5)) goto code_r0x00f83ae0;
    goto LAB_00f83ab0;
  }
  uVar11 = 0;
LAB_00f83bd0:
  uVar7 = uVar12 - uVar14;
  if (local_78 - uVar13 < uVar7) {
    FUN_00f991dc(&local_78,uVar13,uVar7,1,1);
    local_9c = local_74;
    uVar13 = local_70;
  }
  else {
  }
  uVar5 = local_78;
  FUN_016dd1aa(local_9c + uVar13,param_2 + uVar14,uVar7);
  local_70 = uVar13 + uVar7;
  if (uVar5 == local_70) {
    FUN_00f991dc(&local_78,uVar5,1,1,1);
    local_9c = local_74;
  }
  uVar14 = uVar12 + local_2c;
  uVar13 = local_70 + 1;
  *(undefined1 *)(local_9c + local_70) = 10;
  local_70 = uVar13;
  uVar12 = uVar14;
  goto joined_r0x00f839ec;
LAB_00f84128:
  puVar9 = &DAT_018aeb10;
  local_34 = local_2c;
  goto LAB_00f84134;
code_r0x00f83ae0:
  uVar12 = uVar12 + local_50;
  uVar11 = local_2c - local_50;
LAB_00f83a04:
  uVar7 = uVar12 + iVar4;
  if (local_34 <= uVar7) goto LAB_00f84004;
  goto LAB_00f83a14;
LAB_00f840a8:
  puVar9 = &DAT_018aeb30;
  uVar7 = uVar12 + uVar5;
  if (uVar12 + uVar5 < local_34) {
    uVar7 = local_34;
  }
  goto LAB_00f84134;
LAB_00f84118:
  puVar9 = &DAT_018aeb20;
  uVar7 = uVar5;
LAB_00f84134:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar7,local_34,puVar9);
}

