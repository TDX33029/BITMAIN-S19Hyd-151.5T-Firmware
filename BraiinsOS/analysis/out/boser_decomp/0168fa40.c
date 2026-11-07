// FUN_0168fa40 @ 0168fa40 size=604 calls_out=6 calls_in=0
// strings: 

byte FUN_0168fa40(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_3,param_2,&DAT_01d08c38);
  }
  uVar6 = param_3 - 1;
  uVar5 = param_3 - 4;
  if (param_3 < 4) {
    uVar5 = 0;
  }
  uVar7 = uVar6;
  if (uVar5 < uVar6) {
    uVar7 = uVar5;
  }
  uVar4 = uVar6;
  do {
    uVar3 = uVar4;
    if (uVar3 <= uVar5) {
      uVar3 = uVar7;
      goto LAB_0168fab0;
    }
    if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,param_3,&DAT_01d08c68);
    }
    uVar4 = uVar3 - 1;
  } while (*(char *)(param_1 + uVar3) < -0x40);
LAB_0168fab0:
  if (uVar3 <= param_3) {
    if (param_3 == uVar3) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + uVar3);
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xc0) {
        return 0;
      }
      uVar4 = 2;
      if (0xdf < bVar1) {
        uVar4 = 3;
      }
      if (bVar1 < 0xf0) {
        if (param_3 - uVar3 < uVar4) {
          return 0;
        }
      }
      else {
        if (param_3 - uVar3 < 4) {
          return 0;
        }
        uVar4 = 4;
        if (0xf7 < bVar1) {
          return 0;
        }
      }
      FUN_012fbd94(&local_34,(byte *)(param_1 + uVar3),uVar4);
      if (local_34 == 1) {
        return 0;
      }
      local_28 = local_30;
      local_24 = local_30 + local_2c;
      puVar2 = (undefined1 *)FUN_00734c78(&local_28);
      if (puVar2 == &DAT_00110000) goto LAB_0168fc04;
    }
    do {
      uVar4 = uVar6;
      uVar3 = uVar7;
      if (uVar4 <= uVar5) goto LAB_0168fafc;
      if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,param_3,&DAT_01d08c68);
      }
      uVar6 = uVar4 - 1;
    } while (*(char *)(param_1 + uVar4) < -0x40);
    uVar3 = uVar4;
LAB_0168fafc:
    if (uVar3 <= param_3) {
      if (param_3 != uVar3) {
        bVar1 = *(byte *)(param_1 + uVar3);
        if (-1 < (char)bVar1) {
LAB_0168fb94:
          bVar1 = FUN_016eaf58();
          return bVar1 ^ 1;
        }
        if (0xbf < bVar1) {
          uVar6 = 2;
          if (0xdf < bVar1) {
            uVar6 = 3;
          }
          if (bVar1 < 0xf0) {
            if (param_3 - uVar3 < uVar6) {
              return 1;
            }
          }
          else {
            if (param_3 - uVar3 < 4) {
              return 1;
            }
            uVar6 = 4;
            if (0xf7 < bVar1) {
              return 1;
            }
          }
          FUN_012fbd94(&local_34,(byte *)(param_1 + uVar3),uVar6);
          if (local_34 != 1) {
            local_28 = local_30;
            local_24 = local_30 + local_2c;
            puVar2 = (undefined1 *)FUN_00734c78(&local_28);
            if (puVar2 == &DAT_00110000) {
LAB_0168fc04:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d08c88);
            }
            goto LAB_0168fb94;
          }
        }
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar3,param_3,param_3,&DAT_01d08c78);
}

