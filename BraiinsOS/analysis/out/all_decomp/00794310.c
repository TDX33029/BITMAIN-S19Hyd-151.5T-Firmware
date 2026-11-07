// FUN_00794310 @ 00794310 size=1180 calls_out=3 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00794310(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int iStack_30;
  uint uStack_2c;
  
  FUN_00fb6cfc(&local_68,param_2,param_3,&DAT_00418eb7,1);
  if (local_68 != 1) {
    if (local_5c._2_1_ != '\0') goto LAB_007945f8;
    if (local_64 != 0) {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00794798;
      }
      else if (local_64 != local_34) goto LAB_00794798;
    }
    uVar4 = local_64;
    local_4c = local_64;
    if (local_64 == local_34) {
      if ((local_5c & 1) == 0) goto LAB_007945f8;
    }
    else {
      pbVar5 = (byte *)(local_38 + local_64);
      uVar1 = (uint)*pbVar5;
      if ((char)*pbVar5 < '\0') {
        if (uVar1 < 0xe0) {
          uVar1 = pbVar5[1] & 0x3f | (uVar1 & 0x1f) << 6;
        }
        else {
          uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (uVar1 < 0xf0) {
            uVar1 = uVar6 | (uVar1 & 0x1f) << 0xc;
          }
          else {
            uVar1 = pbVar5[3] & 0x3f | uVar6 << 6 | (uVar1 & 7) << 0x12;
          }
        }
      }
      if ((local_5c & 1) == 0) {
        iVar3 = 1;
        if (0x7f < uVar1) {
          iVar3 = 2;
        }
        if ((0x7ff < uVar1) && (iVar3 = 4, uVar1 < 0x10000)) {
          iVar3 = 3;
        }
        local_64 = iVar3 + local_64;
        if (local_64 != 0) {
          if (local_64 < local_34) {
            if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00794798;
          }
          else if (local_64 != local_34) {
LAB_00794798:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_38,local_34,local_64,local_34,&DAT_018aeb58);
          }
        }
        uVar4 = local_34;
        local_4c = local_34;
        if (local_64 != local_34) {
          uVar4 = local_64;
          local_4c = local_64;
        }
      }
    }
LAB_007946e8:
    *param_1 = param_2;
    param_1[1] = local_4c;
    param_1[2] = param_2 + uVar4;
    param_1[3] = param_3 - uVar4;
    return;
  }
  iVar3 = uStack_2c - 1;
  if (local_44 == 0xffffffff) {
    uVar4 = local_4c + iVar3;
    if (uVar4 < local_34) {
      uVar1 = uStack_2c;
      if (uStack_2c < local_58) {
        uVar1 = local_58;
      }
LAB_0079452c:
      uVar6 = *(byte *)(local_38 + uVar4) & 0x3f;
      uVar4 = local_60 >> uVar6 | local_5c << (0x20 - uVar6 & 0xff);
      if (-1 < (int)(uVar6 - 0x20)) {
        uVar4 = local_5c >> (uVar6 - 0x20 & 0xff);
      }
      if ((uVar4 & 1) == 0) {
        local_4c = local_4c + uStack_2c;
      }
      else {
        uVar4 = local_58;
        do {
          uVar6 = uVar4;
          if (uVar1 == uVar6) {
            uVar4 = local_58;
            goto LAB_0079459c;
          }
          if (local_34 <= local_4c + uVar6) {
            uVar4 = local_4c + local_58;
            if (local_4c + local_58 < local_34) {
              uVar4 = local_34;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar4,local_34,&DAT_018aeb30);
          }
          uVar4 = uVar6 + 1;
        } while (*(char *)(iStack_30 + uVar6) == *(char *)(local_38 + local_4c + uVar6));
        local_4c = (local_4c - local_58) + uVar6 + 1;
      }
      goto LAB_0079451c;
    }
  }
  else {
    uVar4 = local_4c + iVar3;
    if (uVar4 < local_34) {
LAB_007943fc:
      do {
        uVar1 = *(byte *)(local_38 + uVar4) & 0x3f;
        uVar4 = local_60 >> uVar1 | local_5c << (0x20 - uVar1 & 0xff);
        if (-1 < (int)(uVar1 - 0x20)) {
          uVar4 = local_5c >> (uVar1 - 0x20 & 0xff);
        }
        if ((uVar4 & 1) == 0) {
          local_4c = local_4c + uStack_2c;
        }
        else {
          uVar4 = local_58;
          if (local_58 < local_44) {
            uVar4 = local_44;
          }
          uVar1 = uStack_2c;
          if (uStack_2c < uVar4) {
            uVar1 = uVar4;
          }
          uVar6 = uVar4;
          do {
            uVar2 = uVar6;
            if (uVar1 == uVar2) {
              uVar4 = local_58;
              goto LAB_00794494;
            }
            if (local_34 <= local_4c + uVar2) {
              uVar1 = local_4c + uVar4;
              if (local_4c + uVar4 < local_34) {
                uVar1 = local_34;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar1,local_34,&DAT_018aeb30);
            }
            uVar6 = uVar2 + 1;
          } while (*(char *)(iStack_30 + uVar2) == *(char *)(local_38 + local_4c + uVar2));
          local_4c = (local_4c - local_58) + uVar2 + 1;
        }
        uVar4 = local_4c + iVar3;
        local_44 = 0;
      } while (uVar4 < local_34);
    }
  }
LAB_007945f8:
  *param_1 = 0;
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    if (uStack_2c <= local_58 - 1) goto LAB_00794758;
    uVar6 = uVar4 + local_4c;
    if (local_34 <= uVar6) goto LAB_00794768;
    if (*(char *)(iStack_30 + uVar4) != *(char *)(local_38 + uVar6)) break;
LAB_0079459c:
    if (uVar4 == 0) goto LAB_007945d8;
  }
  local_4c = local_4c + local_50;
LAB_0079451c:
  uVar4 = local_4c + iVar3;
  if (local_34 <= uVar4) goto LAB_007945f8;
  goto LAB_0079452c;
LAB_00794494:
  do {
    if (uVar4 <= local_44) goto LAB_007945d8;
    uVar4 = uVar4 - 1;
    if (uStack_2c <= uVar4) {
LAB_00794758:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uStack_2c,&DAT_018aeb10);
    }
    uVar6 = uVar4 + local_4c;
    if (local_34 <= uVar6) {
LAB_00794768:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,local_34,&DAT_018aeb20);
    }
  } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + uVar6));
  local_4c = local_4c + local_50;
  uVar4 = local_4c + iVar3;
  local_44 = uStack_2c - local_50;
  if (local_34 <= uVar4) goto LAB_007945f8;
  goto LAB_007943fc;
LAB_007945d8:
  uVar4 = local_4c + uStack_2c;
  goto LAB_007946e8;
}

