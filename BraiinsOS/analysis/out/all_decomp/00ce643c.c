// FUN_00ce643c @ 00ce643c size=440 calls_out=1 calls_in=2
// strings: 

void FUN_00ce643c(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  int local_30;
  int local_2c;
  int local_28;
  
  pbVar9 = (byte *)param_2[1];
  pbVar7 = (byte *)param_2[2];
  puVar11 = (undefined1 *)*param_2;
  local_28 = 0;
  local_30 = 0;
  iVar4 = (int)pbVar7 - (int)pbVar9;
  iVar10 = param_2[3];
  uVar6 = iVar4 * 2;
  if (puVar11 != &DAT_00110000) {
    uVar6 = iVar4 * 2 | 1;
  }
  local_2c = 1;
  if (uVar6 != 0) {
    FUN_00d653ec(&local_30,0,uVar6,1,1);
  }
  do {
    iVar4 = local_28;
    puVar5 = &DAT_00110000;
    if (puVar11 == &DAT_00110000) {
      if (pbVar9 == pbVar7) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
      puVar11 = (undefined1 *)(uint)*(byte *)(iVar10 + (uint)(*pbVar9 >> 4));
      puVar5 = (undefined1 *)(uint)*(byte *)(iVar10 + (*pbVar9 & 0xf));
      pbVar9 = pbVar9 + 1;
    }
    uVar6 = 1;
    if ((undefined1 *)0x7f < puVar11) {
      uVar6 = 2;
    }
    if (((undefined1 *)0x7ff < puVar11) && (uVar6 = 4, puVar11 < (undefined1 *)0x10000)) {
      uVar6 = 3;
    }
    if ((uint)(local_30 - local_28) < uVar6) {
      FUN_00d653ec(&local_30,local_28,uVar6,1,1);
      pbVar8 = (byte *)(local_2c + local_28);
      if (&DAT_00000080 <= puVar11) goto LAB_00ce6504;
LAB_00ce648c:
      *pbVar8 = (byte)puVar11;
    }
    else {
      pbVar8 = (byte *)(local_2c + local_28);
      if (puVar11 < (undefined1 *)0x80) goto LAB_00ce648c;
LAB_00ce6504:
      bVar1 = (byte)puVar11 & 0x3f | 0x80;
      bVar2 = (byte)((uint)puVar11 >> 6);
      if (puVar11 < (undefined1 *)0x800) {
        pbVar8[1] = bVar1;
        *pbVar8 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)((uint)puVar11 >> 0xc);
        if ((uint)puVar11 >> 0x10 == 0) {
          pbVar8[1] = bVar2;
          pbVar8[2] = bVar1;
          *pbVar8 = bVar3 | 0xe0;
        }
        else {
          pbVar8[3] = bVar1;
          pbVar8[2] = bVar2;
          pbVar8[1] = bVar3 & 0x3f | 0x80;
          *pbVar8 = (byte)((uint)puVar11 >> 0x12) | 0xf0;
        }
      }
    }
    local_28 = uVar6 + iVar4;
    puVar11 = puVar5;
  } while( true );
}

