// FUN_016bd1e0 @ 016bd1e0 size=568 calls_out=1 calls_in=2
// strings: 

void FUN_016bd1e0(int *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (param_3 != 0) {
    pbVar9 = (byte *)*param_2;
    pbVar10 = (byte *)param_2[1];
    iVar11 = 1;
    local_34 = param_3;
    do {
      iVar4 = local_28;
      local_34 = local_34 + -1;
      pbVar6 = pbVar9;
      do {
        while( true ) {
          if (pbVar6 == pbVar10) goto LAB_016bd400;
          pbVar9 = pbVar6 + 1;
          bVar1 = *pbVar6;
          puVar5 = (undefined1 *)(uint)bVar1;
          *param_2 = pbVar9;
          if ((char)bVar1 < '\0') break;
          if (puVar5 <= &DAT_0000000d) goto LAB_016bd2c8;
LAB_016bd2f0:
          puVar8 = puVar5;
          pbVar6 = pbVar9;
          if (puVar5 != &DAT_00110000) goto LAB_016bd2fc;
        }
        bVar1 = pbVar6[1];
        pbVar9 = pbVar6 + 2;
        *param_2 = pbVar9;
        if (puVar5 < (undefined1 *)0xe0) {
          puVar5 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        }
        else {
          bVar2 = pbVar6[2];
          pbVar9 = pbVar6 + 3;
          *param_2 = pbVar9;
          uVar7 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
          if (puVar5 < (undefined1 *)0xf0) {
            puVar5 = (undefined1 *)(uVar7 | ((uint)puVar5 & 0x1f) << 0xc);
            if (puVar5 < (undefined1 *)0xe) goto LAB_016bd2c8;
            goto LAB_016bd2f0;
          }
          bVar1 = pbVar6[3];
          pbVar9 = pbVar6 + 4;
          *param_2 = pbVar9;
          puVar5 = (undefined1 *)(bVar1 & 0x3f | uVar7 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 == &DAT_00110000) goto LAB_016bd400;
        }
        if (&DAT_0000000e <= puVar5) goto LAB_016bd2f0;
LAB_016bd2c8:
        puVar8 = &DAT_00110000;
        if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
          puVar8 = puVar5;
        }
        pbVar6 = pbVar9;
      } while (puVar8 == &DAT_00110000);
LAB_016bd2fc:
      uVar7 = 1;
      if ((undefined1 *)0x7f < puVar8) {
        uVar7 = 2;
      }
      if (((undefined1 *)0x7ff < puVar8) && (uVar7 = 4, puVar8 < (undefined1 *)0x10000)) {
        uVar7 = 3;
      }
      if ((uint)(local_30 - local_28) < uVar7) {
        FUN_016bd7fc(&local_30,local_28,uVar7,1,1);
        pbVar6 = (byte *)(local_2c + local_28);
        iVar11 = local_2c;
        if (puVar8 < (undefined1 *)0x80) goto LAB_016bd330;
LAB_016bd374:
        bVar1 = (byte)puVar8 & 0x3f | 0x80;
        bVar2 = (byte)((uint)puVar8 >> 6);
        if (puVar8 < (undefined1 *)0x800) {
          pbVar6[1] = bVar1;
          *pbVar6 = bVar2 | 0xc0;
        }
        else {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)((uint)puVar8 >> 0xc);
          if ((uint)puVar8 >> 0x10 == 0) {
            pbVar6[2] = bVar1;
            pbVar6[1] = bVar2;
            *pbVar6 = bVar3 | 0xe0;
          }
          else {
            pbVar6[3] = bVar1;
            pbVar6[2] = bVar2;
            pbVar6[1] = bVar3 & 0x3f | 0x80;
            *pbVar6 = (byte)((uint)puVar8 >> 0x12) | 0xf0;
          }
        }
      }
      else {
        pbVar6 = (byte *)(iVar11 + local_28);
        if (&DAT_00000080 <= puVar8) goto LAB_016bd374;
LAB_016bd330:
        *pbVar6 = (byte)puVar8;
      }
      local_28 = uVar7 + iVar4;
    } while (local_34 != 0);
  }
LAB_016bd400:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

