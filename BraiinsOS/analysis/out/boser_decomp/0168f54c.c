// FUN_0168f54c @ 0168f54c size=616 calls_out=6 calls_in=0
// strings: 

byte FUN_0168f54c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbStack_2c;
  byte *pbStack_28;
  int local_24;
  byte *local_20;
  int local_1c;
  
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_3,param_2,&DAT_01d08c58);
  }
  bVar2 = 1;
  if (param_3 != 0) {
    uVar5 = param_3 - 1;
    uVar7 = param_3 - 4;
    if (param_3 < 4) {
      uVar7 = 0;
    }
    uVar4 = uVar5;
    if (uVar7 < uVar5) {
      uVar4 = uVar7;
    }
    do {
      uVar6 = uVar5;
      if (uVar6 <= uVar7) goto LAB_0168f5b4;
      if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,param_3,&DAT_01d08c68);
      }
      uVar5 = uVar6 - 1;
    } while (*(char *)(param_1 + uVar6) < -0x40);
    uVar4 = uVar6;
LAB_0168f5b4:
    if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar4,param_3,param_3,&DAT_01d08c78);
    }
    if (param_3 != uVar4) {
      bVar3 = *(byte *)(param_1 + uVar4);
      puVar8 = (undefined1 *)(uint)bVar3;
      if ((char)bVar3 < '\0') {
        if ((undefined1 *)0xbf < puVar8) {
          uVar5 = 2;
          if ((undefined1 *)0xdf < puVar8) {
            uVar5 = 3;
          }
          if (puVar8 < (undefined1 *)0xf0) {
            if (uVar5 <= param_3 - uVar4) goto LAB_0168f610;
          }
          else if ((3 < param_3 - uVar4) && (uVar5 = 4, puVar8 < (undefined1 *)0xf8)) {
LAB_0168f610:
            FUN_012fbd94(&local_24,(byte *)(param_1 + uVar4),uVar5);
            if (local_24 != 1) {
              pbStack_28 = local_20 + local_1c;
              pbStack_2c = local_20;
              puVar8 = (undefined1 *)FUN_00734c78(&pbStack_2c);
              if (puVar8 == &DAT_00110000) goto LAB_0168f7a8;
              goto LAB_0168f5d4;
            }
          }
        }
      }
      else {
LAB_0168f5d4:
        bVar2 = FUN_016eaf58(puVar8);
        bVar2 = bVar2 ^ 1;
      }
    }
  }
  bVar3 = 0;
  if (param_2 == param_3) goto LAB_0168f68c;
  bVar1 = *(byte *)(param_1 + param_3);
  puVar8 = (undefined1 *)(uint)bVar1;
  if ((char)bVar1 < '\0') {
    if (puVar8 < (undefined1 *)0xc0) goto LAB_0168f68c;
    uVar5 = 2;
    if ((undefined1 *)0xdf < puVar8) {
      uVar5 = 3;
    }
    if (puVar8 < (undefined1 *)0xf0) {
      if (param_2 - param_3 < uVar5) goto LAB_0168f68c;
    }
    else if ((param_2 - param_3 < 4) || (uVar5 = 4, (undefined1 *)0xf7 < puVar8)) goto LAB_0168f68c;
    FUN_012fbd94(&local_24,(byte *)(param_1 + param_3),uVar5);
    if (local_24 != 0) goto LAB_0168f68c;
    if (local_1c == 0) {
LAB_0168f7a8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08c88);
    }
    puVar8 = (undefined1 *)(uint)*local_20;
    if (0x7fffffff < (uint)(int)(char)*local_20) {
      if (puVar8 < (undefined1 *)0xe0) {
        puVar8 = (undefined1 *)(local_20[1] & 0x3f | ((uint)puVar8 & 0x1f) << 6);
      }
      else {
        uVar5 = local_20[2] & 0x3f | (local_20[1] & 0x3f) << 6;
        if (puVar8 < (undefined1 *)0xf0) {
          puVar8 = (undefined1 *)(uVar5 | ((uint)puVar8 & 0x1f) << 0xc);
        }
        else {
          puVar8 = (undefined1 *)(local_20[3] & 0x3f | uVar5 << 6 | ((uint)puVar8 & 7) << 0x12);
          if (puVar8 == &DAT_00110000) goto LAB_0168f7a8;
        }
      }
    }
  }
  bVar3 = FUN_016eaf58(puVar8);
LAB_0168f68c:
  return bVar2 & bVar3;
}

