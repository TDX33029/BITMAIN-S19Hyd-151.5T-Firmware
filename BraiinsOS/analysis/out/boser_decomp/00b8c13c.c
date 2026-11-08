// FUN_00b8c13c @ 00b8c13c size=1028 calls_out=4 calls_in=4
// strings: 

byte FUN_00b8c13c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
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
  
  if (param_4 < param_2) {
    FUN_01306b30(&local_68,param_1,param_2,param_3,param_4);
    if (local_68 == 1) {
      iVar7 = uStack_2c - 1;
      if (local_44 == 0xffffffff) {
        bVar6 = 0;
        uVar3 = local_4c + iVar7;
        if (uVar3 < local_34) {
          uVar1 = uStack_2c;
          if (uStack_2c < local_58) {
            uVar1 = local_58;
          }
LAB_00b8c408:
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
                goto LAB_00b8c480;
              }
              if (local_34 <= local_4c + uVar4) {
                uVar3 = local_4c + local_58;
                goto LAB_00b8c520;
              }
              uVar3 = uVar4 + 1;
            } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + local_4c + uVar4));
            local_4c = (local_4c - local_58) + uVar4 + 1;
          }
          goto LAB_00b8c4b8;
        }
      }
      else {
        bVar6 = 0;
        uVar3 = local_4c + iVar7;
        if (uVar3 < local_34) {
LAB_00b8c1d8:
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
                goto LAB_00b8c27c;
              }
              if (local_34 <= local_4c + uVar2) {
                uVar3 = uVar3 + local_4c;
LAB_00b8c520:
                if (uVar3 < local_34) {
                  uVar3 = local_34;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar3,local_34,&DAT_01d2e38c);
              }
              uVar4 = uVar2 + 1;
            } while (*(char *)(iStack_30 + uVar2) == *(char *)(local_38 + local_4c + uVar2));
            local_4c = (local_4c - local_58) + uVar2 + 1;
            local_44 = 0;
          }
          goto LAB_00b8c2b8;
        }
      }
    }
    else {
      bVar6 = 0;
      if (local_5c._2_1_ == '\0') {
        bVar6 = (byte)local_5c;
        do {
          if (local_64 != 0) {
            if (local_64 < local_34) {
              if (*(char *)(local_38 + local_64) < -0x40) {
LAB_00b8c52c:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514();
              }
            }
            else if (local_64 != local_34) goto LAB_00b8c52c;
          }
          if (local_64 == local_34) break;
          pbVar5 = (byte *)(local_38 + local_64);
          uVar3 = (uint)*pbVar5;
          if (0x7fffffff < (uint)(int)(char)*pbVar5) {
            if (uVar3 < 0xe0) {
              uVar3 = pbVar5[1] & 0x3f | (uVar3 & 0x1f) << 6;
            }
            else {
              uVar1 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
              if (uVar3 < 0xf0) {
                uVar3 = uVar1 | (uVar3 & 0x1f) << 0xc;
              }
              else {
                uVar3 = pbVar5[3] & 0x3f | uVar1 << 6 | (uVar3 & 7) << 0x12;
              }
            }
          }
          if ((bVar6 & 1) != 0) goto LAB_00b8c4d0;
          iVar7 = 1;
          if (0x7f < uVar3) {
            iVar7 = 2;
          }
          bVar6 = 1;
          if ((0x7ff < uVar3) && (iVar7 = 4, uVar3 < 0x10000)) {
            iVar7 = 3;
          }
          local_64 = iVar7 + local_64;
        } while( true );
      }
    }
  }
  else {
    bVar6 = 0;
    if (param_4 == param_2) {
      iVar7 = thunk_FUN_01bed842(param_3,param_1,param_4);
      bVar6 = iVar7 == 0;
    }
  }
LAB_00b8c4d4:
  return bVar6 & 1;
  while( true ) {
    uVar3 = uVar3 - 1;
    if (uStack_2c <= local_58 - 1) goto LAB_00b8c4f0;
    uVar4 = uVar3 + local_4c;
    if (local_34 <= uVar4) goto LAB_00b8c500;
    if (*(char *)(iStack_30 + uVar3) != *(char *)(local_38 + uVar4)) break;
LAB_00b8c480:
    if (uVar3 == 0) goto LAB_00b8c4d0;
  }
  local_4c = local_4c + local_50;
LAB_00b8c4b8:
  uVar3 = local_4c + iVar7;
  if (local_34 <= uVar3) goto LAB_00b8c4c8;
  goto LAB_00b8c408;
LAB_00b8c27c:
  do {
    if (uVar3 <= local_44) goto LAB_00b8c4d0;
    uVar3 = uVar3 - 1;
    if (uStack_2c <= uVar3) {
LAB_00b8c4f0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,uStack_2c,&DAT_01d2e36c);
    }
    uVar4 = uVar3 + local_4c;
    if (local_34 <= uVar4) {
LAB_00b8c500:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,local_34,&DAT_01d2e37c);
    }
  } while (*(char *)(iStack_30 + uVar3) == *(char *)(local_38 + uVar4));
  local_4c = local_4c + local_50;
  local_44 = uStack_2c - local_50;
LAB_00b8c2b8:
  uVar3 = local_4c + iVar7;
  if (local_34 <= uVar3) goto LAB_00b8c4c8;
  goto LAB_00b8c1d8;
LAB_00b8c4d0:
  bVar6 = 1;
  goto LAB_00b8c4d4;
LAB_00b8c4c8:
  bVar6 = 0;
  goto LAB_00b8c4d4;
}

