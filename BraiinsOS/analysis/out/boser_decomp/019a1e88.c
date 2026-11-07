// FUN_019a1e88 @ 019a1e88 size=1160 calls_out=4 calls_in=1
// strings: 

uint FUN_019a1e88(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
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
  int iStack_30;
  uint uStack_2c;
  
  if (param_4 <= param_2) {
    uVar3 = 0;
    if (param_2 == param_4) {
      iVar6 = thunk_FUN_01bed842(param_1,param_3,param_2);
      uVar3 = (uint)(iVar6 == 0);
    }
    goto LAB_019a227c;
  }
  FUN_01306b30(&local_68,param_3,param_4,param_1,param_2);
  if (local_68 == 1) {
    iVar6 = uStack_2c - 1;
    if (local_44 == 0xffffffff) {
      uVar3 = local_4c + iVar6;
      if (uVar3 < local_34) {
        uVar1 = uStack_2c;
        if (uStack_2c < local_58) {
          uVar1 = local_58;
        }
LAB_019a20e0:
        uVar4 = *(byte *)(local_38 + uVar3) & 0x3f;
        uVar3 = local_60 >> uVar4 | local_5c << (0x20 - uVar4 & 0xff);
        if (-1 < (int)(uVar4 - 0x20)) {
          uVar3 = local_5c >> (uVar4 - 0x20 & 0xff);
        }
        if ((uVar3 & 1) == 0) {
          local_4c = local_4c + uStack_2c;
        }
        else {
          uVar3 = local_58;
          do {
            uVar4 = uVar3;
            if (uVar1 == uVar4) {
              uVar3 = local_58;
              goto LAB_019a2154;
            }
            if (local_34 <= local_4c + uVar4) {
              uVar3 = local_4c + local_58;
              goto LAB_019a22d0;
            }
            uVar3 = uVar4 + 1;
          } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + local_4c + uVar4));
          local_4c = (local_4c - local_58) + uVar4 + 1;
        }
        goto LAB_019a20d0;
      }
    }
    else {
      uVar3 = local_4c + iVar6;
      if (uVar3 < local_34) {
LAB_019a1fa4:
        uVar1 = *(byte *)(local_38 + uVar3) & 0x3f;
        uVar3 = local_60 >> uVar1 | local_5c << (0x20 - uVar1 & 0xff);
        if (-1 < (int)(uVar1 - 0x20)) {
          uVar3 = local_5c >> (uVar1 - 0x20 & 0xff);
        }
        if ((uVar3 & 1) == 0) {
          local_4c = local_4c + uStack_2c;
          local_44 = 0;
        }
        else {
          uVar3 = local_58;
          if (local_58 < local_44) {
            uVar3 = local_44;
          }
          uVar1 = uStack_2c;
          if (uStack_2c < uVar3) {
            uVar1 = uVar3;
          }
          uVar4 = uVar3;
          do {
            uVar2 = uVar4;
            if (uVar1 == uVar2) {
              uVar3 = local_58;
              goto LAB_019a204c;
            }
            if (local_34 <= local_4c + uVar2) {
              uVar3 = local_4c + uVar3;
LAB_019a22d0:
              if (uVar3 < local_34) {
                uVar3 = local_34;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar3,local_34,&DAT_01d27e34);
            }
            uVar4 = uVar2 + 1;
          } while (*(char *)(iStack_30 + uVar2) == *(char *)(local_38 + local_4c + uVar2));
          local_4c = (local_4c - local_58) + uVar2 + 1;
          local_44 = 0;
        }
        goto LAB_019a1f98;
      }
    }
LAB_019a2190:
    uVar3 = 0;
    goto LAB_019a227c;
  }
  uVar3 = 0;
  if (local_5c._2_1_ != '\0') goto LAB_019a227c;
  uVar3 = local_5c & 0xff;
  if (local_64 != 0) {
    if (local_64 < local_34) {
      if (*(char *)(local_38 + local_64) < -0x40) goto LAB_019a22fc;
    }
    else if (local_64 != local_34) goto LAB_019a22fc;
  }
  if (local_64 != local_34) {
    pbVar5 = (byte *)(local_38 + local_64);
    uVar1 = (uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (uVar1 < 0xe0) {
        uVar1 = pbVar5[1] & 0x3f | (uVar1 & 0x1f) << 6;
      }
      else {
        uVar3 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (uVar1 < 0xf0) {
          uVar1 = uVar3 | (uVar1 & 0x1f) << 0xc;
        }
        else {
          uVar1 = pbVar5[3] & 0x3f | uVar3 << 6 | (uVar1 & 7) << 0x12;
        }
      }
    }
    uVar3 = 1;
    if ((local_5c & 1) == 0) {
      if (0x7f < uVar1) {
        uVar3 = 2;
      }
      if ((0x7ff < uVar1) && (uVar3 = 4, uVar1 < 0x10000)) {
        uVar3 = 3;
      }
      uVar3 = uVar3 + local_64;
      if (uVar3 != 0) {
        if (uVar3 < local_34) {
          if (*(char *)(local_38 + uVar3) < -0x40) goto LAB_019a22fc;
        }
        else if (uVar3 != local_34) {
LAB_019a22fc:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
      }
      uVar3 = 1;
    }
  }
  goto LAB_019a227c;
  while( true ) {
    uVar3 = uVar3 - 1;
    if (uStack_2c <= local_58 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,uStack_2c,&DAT_01d27e14);
    }
    uVar4 = uVar3 + local_4c;
    if (local_34 <= uVar4) goto LAB_019a22b0;
    if (*(char *)(iStack_30 + uVar3) != *(char *)(local_38 + uVar4)) break;
LAB_019a2154:
    if (uVar3 == 0) goto LAB_019a2198;
  }
  local_4c = local_4c + local_50;
LAB_019a20d0:
  uVar3 = local_4c + iVar6;
  if (local_34 <= uVar3) goto LAB_019a2190;
  goto LAB_019a20e0;
LAB_019a204c:
  do {
    if (uVar3 <= local_44) goto LAB_019a2198;
    uVar3 = uVar3 - 1;
    if (uStack_2c <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,uStack_2c,&DAT_01d27e14);
    }
    uVar4 = uVar3 + local_4c;
    if (local_34 <= uVar4) {
LAB_019a22b0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,local_34,&DAT_01d27e24);
    }
  } while (*(char *)(iStack_30 + uVar3) == *(char *)(local_38 + uVar4));
  local_4c = local_4c + local_50;
  local_44 = uStack_2c - local_50;
LAB_019a1f98:
  uVar3 = local_4c + iVar6;
  if (local_34 <= uVar3) goto LAB_019a2190;
  goto LAB_019a1fa4;
LAB_019a2198:
  uVar3 = 1;
LAB_019a227c:
  return uVar3 & 1;
}

