// FUN_0168f1a4 @ 0168f1a4 size=912 calls_out=6 calls_in=0
// strings: 

byte FUN_0168f1a4(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  
  bVar3 = 0;
  bVar2 = 0;
  if (param_3 == 0) goto LAB_0168f33c;
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_3,param_2,&DAT_01d08c18);
  }
  uVar10 = param_3 - 1;
  uVar8 = param_3 - 4;
  if (param_3 < 4) {
    uVar8 = 0;
  }
  uVar6 = uVar10;
  uVar11 = uVar10;
  if (uVar8 < uVar10) {
    uVar11 = uVar8;
  }
  do {
    uVar5 = uVar6;
    if (uVar5 <= uVar8) {
      uVar5 = uVar11;
      goto LAB_0168f21c;
    }
    if (param_3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,param_3,&DAT_01d08c68);
    }
    uVar6 = uVar5 - 1;
  } while (*(char *)(param_1 + uVar5) < -0x40);
LAB_0168f21c:
  if (param_3 < uVar5) {
LAB_0168f4f8:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar5,param_3,param_3,&DAT_01d08c78);
  }
  if (param_3 == uVar5) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + uVar5);
  if ((char)bVar2 < '\0') {
    if (bVar2 < 0xc0) {
      return 0;
    }
    uVar6 = 2;
    if (0xdf < bVar2) {
      uVar6 = 3;
    }
    if (bVar2 < 0xf0) {
      if (param_3 - uVar5 < uVar6) {
        return 0;
      }
    }
    else {
      if (param_3 - uVar5 < 4) {
        return 0;
      }
      uVar6 = 4;
      if (0xf7 < bVar2) {
        return 0;
      }
    }
    FUN_012fbd94(&local_38,(byte *)(param_1 + uVar5),uVar6);
    if (local_38 == 1) {
      return 0;
    }
    local_28 = iStack_34 + iStack_30;
    local_2c = iStack_34;
    puVar9 = (undefined1 *)FUN_00734c78(&local_2c);
    if (puVar9 == &DAT_00110000) goto LAB_0168f504;
  }
  do {
    uVar6 = uVar10;
    uVar5 = uVar11;
    if (uVar6 <= uVar8) goto LAB_0168f268;
    if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,param_3,&DAT_01d08c68);
    }
    uVar10 = uVar6 - 1;
  } while (*(char *)(param_1 + uVar6) < -0x40);
  uVar5 = uVar6;
LAB_0168f268:
  if (param_3 < uVar5) goto LAB_0168f4f8;
  bVar2 = 0;
  if (param_3 != uVar5) {
    bVar1 = *(byte *)(param_1 + uVar5);
    if ((char)bVar1 < '\0') {
      if (0xbf < bVar1) {
        uVar10 = 2;
        if (0xdf < bVar1) {
          uVar10 = 3;
        }
        if (bVar1 < 0xf0) {
          if (uVar10 <= param_3 - uVar5) goto LAB_0168f328;
        }
        else if ((3 < param_3 - uVar5) && (uVar10 = 4, bVar1 < 0xf8)) {
LAB_0168f328:
          FUN_012fbd94(&local_38,(byte *)(param_1 + uVar5),uVar10);
          if (local_38 != 1) {
            local_28 = iStack_34 + iStack_30;
            local_2c = iStack_34;
            puVar9 = (undefined1 *)FUN_00734c78(&local_2c);
            if (puVar9 == &DAT_00110000) goto LAB_0168f504;
            goto LAB_0168f290;
          }
        }
      }
    }
    else {
LAB_0168f290:
      bVar2 = FUN_016eaf58();
    }
  }
LAB_0168f33c:
  if (param_2 <= param_3) goto LAB_0168f360;
  pbVar7 = (byte *)(param_1 + param_3);
  puVar9 = (undefined1 *)(uint)*pbVar7;
  if ((char)*pbVar7 < '\0') {
    if (puVar9 < (undefined1 *)0xc0) {
      return 0;
    }
    param_2 = param_2 - param_3;
    uVar10 = 2;
    if ((undefined1 *)0xdf < puVar9) {
      uVar10 = 3;
    }
    if (puVar9 < (undefined1 *)0xf0) {
      if (param_2 < uVar10) {
        return 0;
      }
    }
    else {
      if (param_2 < 4) {
        return 0;
      }
      uVar10 = 4;
      if ((undefined1 *)0xf7 < puVar9) {
        return 0;
      }
    }
    FUN_012fbd94(&local_38,pbVar7,uVar10);
    if (local_38 != 0) {
      return 0;
    }
    local_28 = iStack_34 + iStack_30;
    local_2c = iStack_34;
    puVar4 = (undefined1 *)FUN_00734c78(&local_2c);
    if (puVar4 == &DAT_00110000) {
LAB_0168f504:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08c88);
    }
    uVar10 = 2;
    if ((undefined1 *)0xdf < puVar9) {
      uVar10 = 3;
    }
    if (puVar9 < (undefined1 *)0xf0) {
      bVar3 = 0;
      if (param_2 < uVar10) goto LAB_0168f360;
    }
    else {
      bVar3 = 0;
      if ((param_2 < 4) || (uVar10 = 4, (undefined1 *)0xf7 < puVar9)) goto LAB_0168f360;
    }
    FUN_012fbd94(&local_38,pbVar7,uVar10);
    if (local_38 == 1) {
      bVar3 = 0;
      goto LAB_0168f360;
    }
    local_28 = iStack_34 + iStack_30;
    local_2c = iStack_34;
    puVar9 = (undefined1 *)FUN_00734c78(&local_2c);
    if (puVar9 == &DAT_00110000) goto LAB_0168f504;
  }
  bVar3 = FUN_016eaf58(puVar9);
LAB_0168f360:
  return bVar2 ^ bVar3 ^ 1;
}

