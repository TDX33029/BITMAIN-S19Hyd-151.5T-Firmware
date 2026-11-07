// FUN_01164770 @ 01164770 size=352 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01164770(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_1;
  do {
    if (pbVar7 == (byte *)param_1[1]) {
      return 0;
    }
    pbVar3 = pbVar7 + 1;
    bVar1 = *pbVar7;
    puVar6 = (undefined1 *)(uint)bVar1;
    *param_1 = pbVar3;
    if ((char)bVar1 < '\0') {
      bVar1 = pbVar7[1];
      pbVar3 = pbVar7 + 2;
      *param_1 = pbVar3;
      if (puVar6 < (undefined1 *)0xe0) {
        puVar6 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar6 & 0x1f) << 6);
      }
      else {
        bVar2 = pbVar7[2];
        pbVar3 = pbVar7 + 3;
        *param_1 = pbVar3;
        uVar5 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (puVar6 < (undefined1 *)0xf0) {
          puVar6 = (undefined1 *)(uVar5 | ((uint)puVar6 & 0x1f) << 0xc);
        }
        else {
          bVar1 = pbVar7[3];
          pbVar3 = pbVar7 + 4;
          *param_1 = pbVar3;
          puVar6 = (undefined1 *)(bVar1 & 0x3f | uVar5 << 6 | ((uint)puVar6 & 7) << 0x12);
          if (puVar6 == &DAT_00110000) {
            return 0;
          }
        }
      }
      if (puVar6 < (undefined1 *)0x1680) goto LAB_01164840;
LAB_01164878:
      if (puVar6 < (undefined1 *)0x205f) {
        if ((puVar6 + -0x2028 < (undefined1 *)0x8) &&
           ((1 << ((uint)(puVar6 + -0x2028) & 0xff) & 0x83U) != 0)) {
          return 1;
        }
        if (puVar6 == (undefined1 *)0x1680) {
          return 1;
        }
      }
      else {
        puVar4 = (undefined1 *)0x205f;
        if (puVar6 == (undefined1 *)0x205f) {
          return 1;
        }
        if (puVar6 != (undefined1 *)0x3000) {
          puVar4 = (undefined1 *)0xfeff;
        }
        if (puVar6 == (undefined1 *)0x3000 || puVar6 == puVar4) {
          return 1;
        }
      }
    }
    else {
      if ((undefined1 *)0x167f < puVar6) goto LAB_01164878;
LAB_01164840:
      if ((puVar6 + -9 < (undefined1 *)0x18) &&
         ((1 << ((uint)(puVar6 + -9) & 0xff) & 0x80001fU) != 0)) {
        return 1;
      }
      if (puVar6 == (undefined1 *)0xa0) {
        return 1;
      }
    }
    pbVar7 = pbVar3;
    if (puVar6 + -0x2000 < (undefined1 *)0xb) {
      return 1;
    }
  } while( true );
}

