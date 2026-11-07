// FUN_016bb1f8 @ 016bb1f8 size=736 calls_out=0 calls_in=1
// strings: 

bool FUN_016bb1f8(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  do {
    while( true ) {
      puVar6 = &DAT_00110000;
      if (param_1 == param_2) {
        goto LAB_016bb2c8;
      }
      puVar2 = (undefined1 *)(uint)*param_1;
      pbVar1 = param_1 + 1;
      if ((uint)(int)(char)*param_1 < 0x80000000) break;
      if (puVar2 < (undefined1 *)0xe0) {
        puVar2 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
        pbVar1 = param_1 + 2;
        break;
      }
      uVar3 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
      if ((undefined1 *)0xef < puVar2) {
        puVar2 = (undefined1 *)(param_1[3] & 0x3f | uVar3 << 6 | ((uint)puVar2 & 7) << 0x12);
        param_1 = param_1 + 4;
        pbVar1 = param_1;
        if (puVar2 != &DAT_00110000) break;
        goto LAB_016bb2c8;
      }
      puVar2 = (undefined1 *)(uVar3 | ((uint)puVar2 & 0x1f) << 0xc);
      param_1 = param_1 + 3;
      if ((undefined1 *)0xd < puVar2) goto LAB_016bb2a8;
LAB_016bb280:
      if ((1 << ((uint)puVar2 & 0xff) & 0x2600U) == 0) {
        puVar6 = puVar2;
      }
      if (puVar6 != &DAT_00110000) goto LAB_016bb2c8;
    }
    param_1 = pbVar1;
    if (puVar2 < (undefined1 *)0xe) goto LAB_016bb280;
LAB_016bb2a8:
    puVar6 = puVar2;
  } while (puVar2 == &DAT_00110000);
LAB_016bb2c8:
  do {
    puVar2 = &DAT_00110000;
    if (param_1 == param_2) break;
    puVar4 = (undefined1 *)(uint)*param_1;
    pbVar1 = param_1 + 1;
    if (0x7fffffff < (uint)(int)(char)*param_1) {
      if (puVar4 < (undefined1 *)0xe0) {
        puVar4 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
        pbVar1 = param_1 + 2;
        goto LAB_016bb33c;
      }
      uVar3 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
      if ((undefined1 *)0xef < puVar4) {
        puVar4 = (undefined1 *)(param_1[3] & 0x3f | uVar3 << 6 | ((uint)puVar4 & 7) << 0x12);
        param_1 = param_1 + 4;
        pbVar1 = param_1;
        if (puVar4 != &DAT_00110000) goto LAB_016bb33c;
        break;
      }
      puVar4 = (undefined1 *)(uVar3 | ((uint)puVar4 & 0x1f) << 0xc);
      param_1 = param_1 + 3;
      if (&DAT_0000000e <= puVar4) goto LAB_016bb36c;
LAB_016bb344:
      if ((1 << ((uint)puVar4 & 0xff) & 0x2600U) == 0) {
        puVar2 = puVar4;
      }
      if (puVar2 != &DAT_00110000) break;
      goto LAB_016bb2c8;
    }
LAB_016bb33c:
    param_1 = pbVar1;
    if (puVar4 <= &DAT_0000000d) goto LAB_016bb344;
LAB_016bb36c:
    puVar2 = puVar4;
  } while (puVar4 == &DAT_00110000);
LAB_016bb38c:
  do {
    puVar4 = &DAT_00110000;
    if (param_1 == param_2) goto LAB_016bb448;
    puVar5 = (undefined1 *)(uint)*param_1;
    pbVar1 = param_1 + 1;
    if (0x7fffffff < (uint)(int)(char)*param_1) {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pbVar1 = param_1 + 2;
        goto LAB_016bb408;
      }
      uVar3 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
      if (puVar5 < &DAT_000000f0) {
        puVar5 = (undefined1 *)(uVar3 | ((uint)puVar5 & 0x1f) << 0xc);
        param_1 = param_1 + 3;
        if (&DAT_0000000d < puVar5) goto LAB_016bb438;
        goto LAB_016bb410;
      }
      puVar5 = (undefined1 *)(param_1[3] & 0x3f | uVar3 << 6 | ((uint)puVar5 & 7) << 0x12);
      if (puVar5 == &DAT_00110000) goto LAB_016bb448;
      param_1 = param_1 + 4;
      if (puVar5 < &DAT_0000000e) goto LAB_016bb410;
LAB_016bb438:
      puVar4 = puVar5;
      if (puVar4 != &DAT_00110000) goto LAB_016bb448;
      goto LAB_016bb38c;
    }
LAB_016bb408:
    param_1 = pbVar1;
    if (&DAT_0000000e <= puVar5) goto LAB_016bb438;
LAB_016bb410:
    if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
      puVar4 = puVar5;
    }
    if (puVar4 != &DAT_00110000) {
LAB_016bb448:
      if (puVar6 != &DAT_00110000 && puVar2 != &DAT_00110000) {
        uVar3 = ((uint)puVar6 & 0xffffffdf) - 0x41;
        if (puVar4 == &DAT_00110000) {
          if (uVar3 < 0x1a) {
            return puVar2 == (undefined1 *)0x3a || puVar2 == (undefined1 *)0x7c;
          }
        }
        else if (((uVar3 < 0x1a) && (puVar2 == (undefined1 *)0x7c || puVar2 == (undefined1 *)0x3a))
                && (((puVar4 + -0x23 < (undefined1 *)0x1d &&
                     ((1 << ((uint)(puVar4 + -0x23) & 0xff) & 0x10001001U) != 0)) ||
                    (puVar4 == (undefined1 *)0x5c)))) {
          return true;
        }
      }
      return false;
    }
  } while( true );
}

