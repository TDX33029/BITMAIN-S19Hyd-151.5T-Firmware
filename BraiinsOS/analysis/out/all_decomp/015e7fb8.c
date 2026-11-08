// FUN_015e7fb8 @ 015e7fb8 size=1212 calls_out=4 calls_in=1
// strings: 

uint FUN_015e7fb8(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

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
  
  if (param_2 < param_4) {
    FUN_00fb6cfc(&local_68,param_3,param_4,param_1,param_2);
    if (local_68 == 1) {
      iVar6 = uStack_2c - 1;
      if (local_44 == 0xffffffff) {
        uVar3 = local_4c + iVar6;
        if (uVar3 < local_34) {
          uVar1 = uStack_2c;
          if (uStack_2c < local_58) {
            uVar1 = local_58;
          }
LAB_015e8224:
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
                goto LAB_015e8298;
              }
              if (local_34 <= local_4c + uVar4) {
                uVar3 = local_4c + local_58;
                if (local_4c + local_58 < local_34) {
                  uVar3 = local_34;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar3,local_34,&DAT_018ab238);
              }
              uVar3 = uVar4 + 1;
            } while (*(char *)(iStack_30 + uVar4) == *(char *)(local_38 + local_4c + uVar4));
            local_4c = (local_4c - local_58) + uVar4 + 1;
          }
          goto LAB_015e8214;
        }
      }
      else {
        uVar3 = local_4c + iVar6;
        if (uVar3 < local_34) {
LAB_015e80b4:
          uVar1 = *(byte *)(local_38 + uVar3) & 0x3f;
          uVar3 = local_60 >> uVar1 | local_5c << (0x20 - uVar1 & 0xff);
          if (-1 < (int)(uVar1 - 0x20)) {
            uVar3 = local_5c >> (uVar1 - 0x20 & 0xff);
          }
          if ((uVar3 & 1) != 0) {
            uVar3 = local_58;
            if (local_58 < local_44) {
              uVar3 = local_44;
            }
            uVar1 = uStack_2c;
            if (uStack_2c < uVar3) {
              uVar1 = uVar3;
            }
            uVar4 = uVar3;
LAB_015e8100:
            uVar2 = uVar4;
            if (uVar1 != uVar2) goto code_r0x015e8108;
            uVar3 = local_58;
            do {
              if (uVar3 <= local_44) {
                return 1;
              }
              uVar3 = uVar3 - 1;
              if (uStack_2c <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar3,uStack_2c,&DAT_018ab218);
              }
              uVar4 = uVar3 + local_4c;
              if (local_34 <= uVar4) {
LAB_015e8414:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar4,local_34,&DAT_018ab228);
              }
            } while (*(char *)(iStack_30 + uVar3) == *(char *)(local_38 + uVar4));
            local_4c = local_4c + local_50;
            local_44 = uStack_2c - local_50;
            goto LAB_015e80a8;
          }
          local_4c = local_4c + uStack_2c;
          local_44 = 0;
          goto LAB_015e80a8;
        }
      }
      return 0;
    }
    if (local_5c._2_1_ != '\0') {
      return 0;
    }
    if (local_64 != 0) {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_015e8460;
      }
      else if (local_64 != local_34) goto LAB_015e8460;
    }
    if (local_64 == local_34) {
      return local_5c & 1;
    }
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
      local_64 = uVar3 + local_64;
      if (local_64 != 0) {
        if (local_64 < local_34) {
          if (*(char *)(local_38 + local_64) < -0x40) {
LAB_015e8460:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
        }
        else if (local_64 != local_34) goto LAB_015e8460;
      }
      uVar3 = 1;
      if ((local_64 != local_34) && (0x7fffffff < (uint)(int)*(char *)(local_38 + local_64))) {
        return 1;
      }
    }
  }
  else {
    uVar3 = 0;
    if (param_2 == param_4) {
      iVar6 = thunk_FUN_016dd50a(param_1,param_3,param_2);
      return (uint)(iVar6 == 0);
    }
  }
  return uVar3;
  while (*(char *)(iStack_30 + uVar3) == *(char *)(local_38 + uVar4)) {
LAB_015e8298:
    if (uVar3 == 0) {
      return 1;
    }
    uVar3 = uVar3 - 1;
    if (uStack_2c <= local_58 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uStack_2c,&DAT_018ab218);
    }
    uVar4 = uVar3 + local_4c;
    if (local_34 <= uVar4) goto LAB_015e8414;
  }
  local_4c = local_4c + local_50;
LAB_015e8214:
  uVar3 = local_4c + iVar6;
  if (local_34 <= uVar3) {
    return 0;
  }
  goto LAB_015e8224;
code_r0x015e8108:
  if (local_34 <= local_4c + uVar2) {
    uVar1 = local_4c + uVar3;
    if (local_4c + uVar3 < local_34) {
      uVar1 = local_34;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,local_34,&DAT_018ab238);
  }
  uVar4 = uVar2 + 1;
  if (*(char *)(iStack_30 + uVar2) != *(char *)(local_38 + local_4c + uVar2)) goto code_r0x015e812c;
  goto LAB_015e8100;
code_r0x015e812c:
  local_4c = (local_4c - local_58) + uVar2 + 1;
  local_44 = 0;
LAB_015e80a8:
  uVar3 = local_4c + iVar6;
  if (local_34 <= uVar3) {
    return 0;
  }
  goto LAB_015e80b4;
}

