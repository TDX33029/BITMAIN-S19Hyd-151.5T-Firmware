// FUN_00f29b3c @ 00f29b3c size=460 calls_out=1 calls_in=1
// strings: 

void FUN_00f29b3c(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar8 = 0;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (param_2 != param_3) {
    iVar11 = 1;
    do {
      pbVar9 = param_2 + 1;
      puVar10 = (undefined1 *)(uint)*param_2;
      if (0x7fffffff < (uint)(int)(char)*param_2) {
        if (puVar10 < (undefined1 *)0xe0) {
          puVar10 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
          pbVar9 = param_2 + 2;
        }
        else {
          uVar7 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
          if (puVar10 < (undefined1 *)0xf0) {
            puVar10 = (undefined1 *)(uVar7 | ((uint)puVar10 & 0x1f) << 0xc);
            pbVar9 = param_2 + 3;
          }
          else {
            puVar10 = (undefined1 *)(param_2[3] & 0x3f | uVar7 << 6 | ((uint)puVar10 & 7) << 0x12);
            if (puVar10 == &DAT_00110000) break;
            pbVar9 = param_2 + 4;
          }
        }
      }
      puVar5 = puVar10 + -0x30;
      bVar13 = (undefined1 *)0x9 < puVar5;
      bVar12 = puVar5 == (undefined1 *)0xa;
      if (bVar13) {
        puVar5 = (undefined1 *)(((uint)puVar10 & 0xffffffdf) - 0x41);
        bVar12 = puVar5 == (undefined1 *)0x5;
      }
      if ((!bVar13 || puVar5 < (undefined1 *)0x5) || bVar12) {
        uVar7 = 1;
        if ((undefined1 *)0x7f < puVar10) {
          uVar7 = 2;
        }
        if (((undefined1 *)0x7ff < puVar10) && (uVar7 = 4, puVar10 < (undefined1 *)0x10000)) {
          uVar7 = 3;
        }
        if ((uint)(local_30 - iVar8) < uVar7) {
          FUN_00edff4c(&local_30,iVar8,uVar7,1,1);
          pbVar6 = (byte *)(local_2c + local_28);
          iVar11 = local_2c;
          if (puVar10 < &DAT_00000080) goto LAB_00f29b78;
LAB_00f29c4c:
          bVar1 = (byte)puVar10 & 0x3f | 0x80;
          bVar2 = (byte)((uint)puVar10 >> 6);
          if (puVar10 < (undefined1 *)0x800) {
            pbVar6[1] = bVar1;
            *pbVar6 = bVar2 | 0xc0;
          }
          else {
            bVar2 = bVar2 & 0x3f | 0x80;
            bVar3 = (byte)((uint)puVar10 >> 0xc);
            if ((uint)puVar10 >> 0x10 == 0) {
              pbVar6[2] = bVar1;
              bVar4 = bVar3 | 0xe0;
              pbVar6[1] = bVar2;
            }
            else {
              bVar4 = (byte)((uint)puVar10 >> 0x12) | 0xf0;
              pbVar6[3] = bVar1;
              pbVar6[2] = bVar2;
              pbVar6[1] = bVar3 & 0x3f | 0x80;
            }
            *pbVar6 = bVar4;
          }
        }
        else {
          pbVar6 = (byte *)(iVar11 + iVar8);
          if ((undefined1 *)0x7f < puVar10) goto LAB_00f29c4c;
LAB_00f29b78:
          *pbVar6 = (byte)puVar10;
        }
        iVar8 = uVar7 + iVar8;
        local_28 = iVar8;
      }
      param_2 = pbVar9;
    } while (pbVar9 != param_3);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

