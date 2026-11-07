// FUN_016b5984 @ 016b5984 size=384 calls_out=0 calls_in=3
// strings: 

bool FUN_016b5984(byte *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  pbVar4 = param_1;
  pbVar7 = (byte *)*param_3;
  while (pbVar3 = pbVar4, pbVar3 != param_1 + param_2) {
    pbVar4 = pbVar3 + 1;
    puVar10 = (undefined1 *)(uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (puVar10 < (undefined1 *)0xe0) {
        puVar10 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
        pbVar4 = pbVar3 + 2;
      }
      else {
        uVar5 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (puVar10 < (undefined1 *)0xf0) {
          puVar10 = (undefined1 *)(uVar5 | ((uint)puVar10 & 0x1f) << 0xc);
          pbVar4 = pbVar3 + 3;
        }
        else {
          puVar10 = (undefined1 *)(pbVar3[3] & 0x3f | uVar5 << 6 | ((uint)puVar10 & 7) << 0x12);
          pbVar4 = pbVar3 + 4;
        }
      }
    }
    do {
      while( true ) {
        if (pbVar7 == (byte *)param_3[1]) goto LAB_016b5af4;
        pbVar6 = pbVar7 + 1;
        bVar1 = *pbVar7;
        puVar9 = (undefined1 *)(uint)bVar1;
        *param_3 = pbVar6;
        if ((char)bVar1 < '\0') break;
        puVar8 = puVar9;
        if (puVar9 < &DAT_0000000e) goto LAB_016b5ac0;
LAB_016b5a14:
        pbVar7 = pbVar6;
        if (puVar8 != &DAT_00110000) goto LAB_016b5aec;
      }
      bVar1 = pbVar7[1];
      pbVar6 = pbVar7 + 2;
      *param_3 = pbVar6;
      if (puVar9 < (undefined1 *)0xe0) {
        puVar9 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar9 & 0x1f) << 6);
      }
      else {
        bVar2 = pbVar7[2];
        pbVar6 = pbVar7 + 3;
        *param_3 = pbVar6;
        uVar5 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (puVar9 < (undefined1 *)0xf0) {
          puVar9 = (undefined1 *)(uVar5 | ((uint)puVar9 & 0x1f) << 0xc);
          puVar8 = puVar9;
          if (puVar9 < (undefined1 *)0xe) goto LAB_016b5ac0;
          goto LAB_016b5a14;
        }
        bVar1 = pbVar7[3];
        pbVar6 = pbVar7 + 4;
        *param_3 = pbVar6;
        puVar9 = (undefined1 *)(bVar1 & 0x3f | uVar5 << 6 | ((uint)puVar9 & 7) << 0x12);
        if (puVar9 == &DAT_00110000) goto LAB_016b5af4;
      }
      puVar8 = puVar9;
      if (&DAT_0000000d < puVar9) goto LAB_016b5a14;
LAB_016b5ac0:
      puVar8 = &DAT_00110000;
      if ((1 << ((uint)puVar9 & 0xff) & 0x2600U) == 0) {
        puVar8 = puVar9;
      }
      pbVar7 = pbVar6;
    } while (puVar8 == &DAT_00110000);
LAB_016b5aec:
    pbVar7 = pbVar6;
    if (puVar8 != puVar10) break;
  }
LAB_016b5af4:
  return pbVar3 == param_1 + param_2;
}

