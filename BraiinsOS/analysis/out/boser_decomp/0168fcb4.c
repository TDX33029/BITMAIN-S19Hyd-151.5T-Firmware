// FUN_0168fcb4 @ 0168fcb4 size=388 calls_out=4 calls_in=0
// strings: 

byte FUN_0168fcb4(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbStack_2c;
  byte *pbStack_28;
  int local_24;
  byte *local_20;
  int local_1c;
  
  if (param_2 <= param_3) goto LAB_0168fd90;
  pbVar3 = (byte *)(param_1 + param_3);
  puVar4 = (undefined1 *)(uint)*pbVar3;
  if ((char)*pbVar3 < '\0') {
    if (puVar4 < (undefined1 *)0xc0) {
      return 0;
    }
    param_2 = param_2 - param_3;
    uVar2 = 2;
    if ((undefined1 *)0xdf < puVar4) {
      uVar2 = 3;
    }
    if (puVar4 < (undefined1 *)0xf0) {
      if (param_2 < uVar2) {
        return 0;
      }
    }
    else {
      if ((undefined1 *)0xf7 < puVar4) {
        return 0;
      }
      uVar2 = 4;
      if (param_2 < 4) {
        return 0;
      }
    }
    FUN_012fbd94(&local_24,pbVar3,uVar2);
    if (local_24 != 0) {
      return 0;
    }
    if ((local_1c == 0) ||
       (((bVar1 = *local_20, 0x7fffffff < (uint)(int)(char)bVar1 && (0xef < bVar1)) &&
        ((undefined1 *)
         ((local_20[1] & 0x3f) << 0xc | (local_20[2] & 0x3f) << 6 | local_20[3] & 0x3f |
         (bVar1 & 7) << 0x12) == &DAT_00110000)))) goto LAB_0168fe2c;
    uVar2 = 2;
    if ((undefined1 *)0xdf < puVar4) {
      uVar2 = 3;
    }
    if (puVar4 < (undefined1 *)0xf0) {
      if (uVar2 <= param_2) goto LAB_0168fd78;
    }
    else if ((puVar4 < (undefined1 *)0xf8) && (uVar2 = 4, 3 < param_2)) {
LAB_0168fd78:
      FUN_012fbd94(&local_24,pbVar3,uVar2);
      if (local_24 != 1) {
        pbStack_28 = local_20 + local_1c;
        pbStack_2c = local_20;
        puVar4 = (undefined1 *)FUN_00734c78(&pbStack_2c);
        if (puVar4 == &DAT_00110000) {
LAB_0168fe2c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08c88);
        }
        goto LAB_0168fcd8;
      }
    }
LAB_0168fd90:
    bVar1 = 1;
  }
  else {
LAB_0168fcd8:
    bVar1 = FUN_016eaf58(puVar4);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

