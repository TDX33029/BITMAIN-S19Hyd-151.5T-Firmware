// FUN_00a1823c @ 00a1823c size=1376 calls_out=4 calls_in=3
// strings: 

bool FUN_00a1823c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
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
    FUN_00fb6cfc(&local_68,param_1,param_2,param_3,param_4);
    if (local_68 == 1) {
      iVar9 = uStack_2c - 1;
      if (local_44 == 0xffffffff) {
        uVar4 = local_4c + iVar9;
        if (local_34 <= uVar4) {
          return false;
        }
        uVar10 = local_58 - 1;
        uVar3 = uStack_2c;
        if (uStack_2c < local_58) {
          uVar3 = local_58;
        }
        if (uStack_2c <= uVar10) {
          do {
            uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
            uVar4 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
            if (-1 < (int)(uVar5 - 0x20)) {
              uVar4 = local_5c >> (uVar5 - 0x20 & 0xff);
            }
            if ((uVar4 & 1) == 0) {
              local_4c = local_4c + uStack_2c;
            }
            else {
              uVar4 = local_58;
              do {
                uVar5 = uVar4;
                if (uVar3 == uVar5) {
                  if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar10,uStack_2c,&DAT_018aeb10);
                  }
                  return true;
                }
                if (local_34 <= local_4c + uVar5) {
LAB_00a1875c:
                  uVar4 = local_4c + local_58;
                  if (local_4c + local_58 < local_34) {
                    uVar4 = local_34;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar4,local_34,&DAT_018aeb30);
                }
                uVar4 = uVar5 + 1;
              } while (*(char *)(iStack_30 + uVar5) == *(char *)(local_38 + local_4c + uVar5));
              local_4c = (1 - local_58) + local_4c + uVar5;
            }
            uVar4 = local_4c + iVar9;
            if (local_34 <= uVar4) {
              return false;
            }
          } while( true );
        }
LAB_00a18528:
        uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
        uVar4 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar4 = local_5c >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar4 & 1) == 0) {
          local_4c = local_4c + uStack_2c;
        }
        else {
          uVar4 = local_58;
          do {
            uVar5 = uVar4;
            if (uVar3 == uVar5) {
              uVar5 = uVar10 + local_4c;
              pcVar7 = (char *)(iStack_30 + uVar10);
              uVar4 = local_58;
              goto LAB_00a185a8;
            }
            if (local_34 <= local_4c + uVar5) goto LAB_00a1875c;
            uVar4 = uVar5 + 1;
          } while (*(char *)(iStack_30 + uVar5) == *(char *)(local_38 + local_4c + uVar5));
          local_4c = (1 - local_58) + local_4c + uVar5;
        }
        goto LAB_00a18518;
      }
      uVar4 = local_4c + iVar9;
      if (local_34 <= uVar4) {
        return false;
      }
LAB_00a18354:
      uVar3 = *(byte *)(local_38 + uVar4) & 0x3f;
      uVar4 = local_60 >> uVar3 | local_5c << (0x20 - uVar3 & 0xff);
      if (-1 < (int)(uVar3 - 0x20)) {
        uVar4 = local_5c >> (uVar3 - 0x20 & 0xff);
      }
      if ((uVar4 & 1) != 0) {
        uVar4 = local_58;
        if (local_58 < local_44) {
          uVar4 = local_44;
        }
        uVar3 = uStack_2c;
        if (uStack_2c < uVar4) {
          uVar3 = uVar4;
        }
        uVar10 = uVar4;
LAB_00a183a4:
        uVar5 = uVar10;
        if (uVar3 != uVar5) goto code_r0x00a183ac;
        uVar4 = local_58;
        do {
          if (uVar4 <= local_44) {
            return true;
          }
          uVar4 = uVar4 - 1;
          if (uStack_2c <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar4,uStack_2c,&DAT_018aeb10);
          }
          uVar5 = uVar4 + local_4c;
          if (local_34 <= uVar5) {
LAB_00a1873c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,local_34,&DAT_018aeb20);
          }
        } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + uVar5));
        local_4c = local_4c + local_50;
        local_44 = uStack_2c - local_50;
        goto LAB_00a18348;
      }
      local_4c = local_4c + uStack_2c;
      local_44 = 0;
      goto LAB_00a18348;
    }
    if (local_5c._2_1_ != '\0') {
      return false;
    }
    if (local_64 != 0) {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00a18774;
      }
      else if (local_64 != local_34) goto LAB_00a18774;
    }
    if (local_64 == local_34) {
      return (bool)((byte)local_5c & 1);
    }
    pbVar8 = (byte *)(local_38 + local_64);
    uVar4 = (uint)*pbVar8;
    if (0x7fffffff < (uint)(int)(char)*pbVar8) {
      if (uVar4 < 0xe0) {
        uVar4 = pbVar8[1] & 0x3f | (uVar4 & 0x1f) << 6;
      }
      else {
        uVar3 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar3 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          uVar4 = pbVar8[3] & 0x3f | uVar3 << 6 | (uVar4 & 7) << 0x12;
        }
      }
    }
    bVar6 = true;
    if ((local_5c & 1) == 0) {
      iVar9 = 1;
      if (0x7f < uVar4) {
        iVar9 = 2;
      }
      if ((0x7ff < uVar4) && (iVar9 = 4, uVar4 < 0x10000)) {
        iVar9 = 3;
      }
      local_64 = iVar9 + local_64;
      if (local_64 != 0) {
        if (local_64 < local_34) {
          if (*(char *)(local_38 + local_64) < -0x40) {
LAB_00a18774:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
        }
        else if (local_64 != local_34) goto LAB_00a18774;
      }
      if ((local_64 != local_34) && (0x7fffffff < (uint)(int)*(char *)(local_38 + local_64))) {
        return true;
      }
    }
  }
  else {
    bVar6 = false;
    if (param_4 == param_2) {
      iVar9 = thunk_FUN_016dd50a(param_3,param_1,param_4);
      return iVar9 == 0;
    }
  }
  return bVar6;
  while( true ) {
    pcVar1 = (char *)(local_38 + uVar5);
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar7 + -1;
    if (cVar2 != *pcVar1) break;
LAB_00a185a8:
    if (uVar4 == 0) {
      return true;
    }
    if (local_34 <= uVar5) goto LAB_00a1873c;
  }
  local_4c = local_4c + local_50;
LAB_00a18518:
  uVar4 = local_4c + iVar9;
  if (local_34 <= uVar4) {
    return false;
  }
  goto LAB_00a18528;
code_r0x00a183ac:
  if (local_34 <= local_4c + uVar5) {
    uVar3 = uVar4 + local_4c;
    if (uVar4 + local_4c < local_34) {
      uVar3 = local_34;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,local_34,&DAT_018aeb30);
  }
  uVar10 = uVar5 + 1;
  if (*(char *)(iStack_30 + uVar5) != *(char *)(local_38 + local_4c + uVar5)) goto code_r0x00a183d0;
  goto LAB_00a183a4;
code_r0x00a183d0:
  local_4c = (local_4c - local_58) + uVar5 + 1;
  local_44 = 0;
LAB_00a18348:
  uVar4 = local_4c + iVar9;
  if (local_34 <= uVar4) {
    return false;
  }
  goto LAB_00a18354;
}

