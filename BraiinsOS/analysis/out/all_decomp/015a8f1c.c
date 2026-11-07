// FUN_015a8f1c @ 015a8f1c size=1620 calls_out=3 calls_in=1
// strings: EFGH | MNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789'()+;-./:=? 

/* WARNING: Removing unreachable block (ram,0x015a8f48) */
/* WARNING: Removing unreachable block (ram,0x015a8f50) */
/* WARNING: Removing unreachable block (ram,0x015a8f5c) */

uint FUN_015a8f1c(uint param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  int local_50;
  int local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  if (param_1 < 0x80) {
    iVar9 = -0x4a;
    do {
      iVar6 = iVar9;
      uVar3 = *(uint *)("[year][month][day][hour repr:24][minute][second].[subsecond]Z" + iVar6) ^
              param_1 * 0x1010101;
      uVar5 = *(uint *)("20" + iVar6) ^ param_1 * 0x1010101;
      if (((0x1010100 - uVar5 | uVar5) & 0x80808080 & (0x1010100 - uVar3 | uVar3)) != 0x80808080) {
        pbVar4 = (byte *)("20" + iVar6);
        iVar6 = -iVar6;
        goto LAB_015a90ec;
      }
      iVar9 = iVar6 + 8;
    } while (iVar6 + 0x4aU < 0x3b);
    uVar3 = 0;
    if (iVar6 + 0x52 != 0x4a) {
      pbVar4 = (byte *)("[year][month][day][hour repr:24][minute][second].[subsecond]Z" + iVar6 + 4)
      ;
      iVar6 = 0x4a - (iVar6 + 0x52);
LAB_015a90ec:
      do {
        iVar6 = iVar6 + -1;
        uVar3 = (uint)(*pbVar4 == param_1);
        if (*pbVar4 == param_1) {
          return uVar3;
        }
        pbVar4 = pbVar4 + 1;
      } while (iVar6 != 0);
    }
  }
  else {
    local_6c = CONCAT11((char)param_1,(char)(param_1 >> 6)) & 0xbfff | 0xc0;
    FUN_00fb6cfc(&local_68,"A",0x4a,&local_6c,2);
    if (local_68 == 1) {
      iVar9 = local_2c - 1;
      if (local_44 == 0xffffffff) {
        uVar3 = local_4c + iVar9;
        if (local_34 <= uVar3) {
          return 0;
        }
        uVar10 = local_58 - 1;
        uVar5 = local_2c;
        if (local_2c < local_58) {
          uVar5 = local_58;
        }
        if (local_2c <= uVar10) {
          do {
            uVar7 = *(byte *)(local_38 + uVar3) & 0x3f;
            uVar3 = local_60 >> uVar7 | local_5c << (0x20 - uVar7 & 0xff);
            if (-1 < (int)(uVar7 - 0x20)) {
              uVar3 = local_5c >> (uVar7 - 0x20 & 0xff);
            }
            if ((uVar3 & 1) == 0) {
              local_4c = local_4c + local_2c;
            }
            else {
              uVar3 = local_58;
              do {
                uVar7 = uVar3;
                if (uVar5 == uVar7) {
                  if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar10,local_2c,&DAT_018aeb10);
                  }
                  return 1;
                }
                if (local_34 <= local_4c + uVar7) {
LAB_015a9544:
                  uVar3 = local_4c + local_58;
                  if (local_4c + local_58 < local_34) {
                    uVar3 = local_34;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar3,local_34,&DAT_018aeb30);
                }
                uVar3 = uVar7 + 1;
              } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + local_4c + uVar7));
              local_4c = (1 - local_58) + local_4c + uVar7;
            }
            uVar3 = local_4c + iVar9;
            if (local_34 <= uVar3) {
              return 0;
            }
          } while( true );
        }
LAB_015a9310:
        uVar7 = *(byte *)(local_38 + uVar3) & 0x3f;
        uVar3 = local_60 >> uVar7 | local_5c << (0x20 - uVar7 & 0xff);
        if (-1 < (int)(uVar7 - 0x20)) {
          uVar3 = local_5c >> (uVar7 - 0x20 & 0xff);
        }
        if ((uVar3 & 1) == 0) {
          local_4c = local_4c + local_2c;
        }
        else {
          uVar3 = local_58;
          do {
            uVar7 = uVar3;
            if (uVar5 == uVar7) {
              uVar7 = uVar10 + local_4c;
              pcVar8 = (char *)(local_30 + uVar10);
              uVar3 = local_58;
              goto LAB_015a9390;
            }
            if (local_34 <= local_4c + uVar7) goto LAB_015a9544;
            uVar3 = uVar7 + 1;
          } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + local_4c + uVar7));
          local_4c = (1 - local_58) + local_4c + uVar7;
        }
        goto LAB_015a9300;
      }
      uVar3 = local_4c + iVar9;
      if (local_34 <= uVar3) {
        return 0;
      }
LAB_015a9128:
      uVar5 = *(byte *)(local_38 + uVar3) & 0x3f;
      uVar3 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
      if (-1 < (int)(uVar5 - 0x20)) {
        uVar3 = local_5c >> (uVar5 - 0x20 & 0xff);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = local_58;
        if (local_58 < local_44) {
          uVar3 = local_44;
        }
        uVar5 = local_2c;
        if (local_2c < uVar3) {
          uVar5 = uVar3;
        }
        uVar10 = uVar3;
LAB_015a9178:
        uVar7 = uVar10;
        if (uVar5 != uVar7) goto code_r0x015a9180;
        uVar3 = local_58;
        do {
          if (uVar3 <= local_44) {
            return 1;
          }
          uVar3 = uVar3 - 1;
          if (local_2c <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,local_2c,&DAT_018aeb10);
          }
          uVar7 = uVar3 + local_4c;
          if (local_34 <= uVar7) {
LAB_015a9524:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,local_34,&DAT_018aeb20);
          }
        } while (*(char *)(local_30 + uVar3) == *(char *)(local_38 + uVar7));
        local_4c = local_4c + local_50;
        local_44 = local_2c - local_50;
        goto LAB_015a911c;
      }
      local_4c = local_4c + local_2c;
      local_44 = 0;
      goto LAB_015a911c;
    }
    if (local_5c._2_1_ != '\0') {
      return 0;
    }
    if (local_64 != 0) {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_015a955c;
      }
      else if (local_64 != local_34) goto LAB_015a955c;
    }
    if (local_64 == local_34) {
      return local_5c & 1;
    }
    pbVar4 = (byte *)(local_38 + local_64);
    uVar5 = (uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (uVar5 < 0xe0) {
        uVar5 = pbVar4[1] & 0x3f | (uVar5 & 0x1f) << 6;
      }
      else {
        uVar3 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar5 < 0xf0) {
          uVar5 = uVar3 | (uVar5 & 0x1f) << 0xc;
        }
        else {
          uVar5 = pbVar4[3] & 0x3f | uVar3 << 6 | (uVar5 & 7) << 0x12;
        }
      }
    }
    uVar3 = 1;
    if ((local_5c & 1) == 0) {
      iVar9 = 1;
      if (0x7f < uVar5) {
        iVar9 = 2;
      }
      if ((0x7ff < uVar5) && (iVar9 = 4, uVar5 < 0x10000)) {
        iVar9 = 3;
      }
      local_64 = iVar9 + local_64;
      if (local_64 != 0) {
        if (local_64 < local_34) {
          if (*(char *)(local_38 + local_64) < -0x40) {
LAB_015a955c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
        }
        else if (local_64 != local_34) goto LAB_015a955c;
      }
      if ((local_64 != local_34) && (*(char *)(local_38 + local_64) < '\0')) {
        return 1;
      }
    }
  }
  return uVar3;
  while( true ) {
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar8;
    pcVar1 = (char *)(local_38 + uVar7);
    uVar7 = uVar7 - 1;
    pcVar8 = pcVar8 + -1;
    if (cVar2 != *pcVar1) break;
LAB_015a9390:
    if (uVar3 == 0) {
      return 1;
    }
    if (local_34 <= uVar7) goto LAB_015a9524;
  }
  local_4c = local_4c + local_50;
LAB_015a9300:
  uVar3 = local_4c + iVar9;
  if (local_34 <= uVar3) {
    return 0;
  }
  goto LAB_015a9310;
code_r0x015a9180:
  if (local_34 <= local_4c + uVar7) {
    uVar5 = uVar3 + local_4c;
    if (uVar3 + local_4c < local_34) {
      uVar5 = local_34;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,local_34,&DAT_018aeb30);
  }
  uVar10 = uVar7 + 1;
  if (*(char *)(local_30 + uVar7) != *(char *)(local_38 + local_4c + uVar7)) goto code_r0x015a91a4;
  goto LAB_015a9178;
code_r0x015a91a4:
  local_4c = (local_4c - local_58) + uVar7 + 1;
  local_44 = 0;
LAB_015a911c:
  uVar3 = local_4c + iVar9;
  if (local_34 <= uVar3) {
    return 0;
  }
  goto LAB_015a9128;
}

