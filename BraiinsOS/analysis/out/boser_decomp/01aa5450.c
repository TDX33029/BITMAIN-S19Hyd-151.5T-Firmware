// FUN_01aa5450 @ 01aa5450 size=424 calls_out=1 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aa5450(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  int local_30;
  int local_2c;
  int local_28;
  
  pbVar9 = (byte *)param_2[2];
  puVar10 = (undefined1 *)*param_2;
  pbVar11 = (byte *)param_2[1];
  local_28 = 0;
  local_30 = 0;
  iVar5 = (int)pbVar9 - (int)pbVar11;
  local_2c = 1;
  uVar8 = iVar5 * 2;
  if (puVar10 != &DAT_00110000) {
    uVar8 = iVar5 * 2 | 1;
  }
  if (uVar8 != 0) {
    FUN_01af7b44(&local_30,0,uVar8,1,1);
  }
  iVar5 = param_2[3];
  do {
    iVar4 = local_28;
    puVar6 = &DAT_00110000;
    if (puVar10 == &DAT_00110000) {
      if (pbVar11 == pbVar9) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
      puVar10 = (undefined1 *)(uint)*(byte *)(iVar5 + (uint)(*pbVar11 >> 4));
      puVar6 = (undefined1 *)(uint)*(byte *)(iVar5 + (*pbVar11 & 0xf));
      pbVar11 = pbVar11 + 1;
    }
    uVar8 = 1;
    if ((undefined1 *)0x7f < puVar10) {
      uVar8 = 2;
    }
    if (((undefined1 *)0x7ff < puVar10) && (uVar8 = 4, puVar10 < (undefined1 *)0x10000)) {
      uVar8 = 3;
    }
    if ((uint)(local_30 - local_28) < uVar8) {
      FUN_01af7b44(&local_30,local_28,uVar8,1,1);
    }
    pbVar7 = (byte *)(local_2c + local_28);
    if (puVar10 < (undefined1 *)0x80) {
      *pbVar7 = (byte)puVar10;
    }
    else {
      bVar1 = (byte)puVar10 & 0x3f | 0x80;
      bVar2 = (byte)((uint)puVar10 >> 6);
      if (puVar10 < (undefined1 *)0x800) {
        pbVar7[1] = bVar1;
        *pbVar7 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)((uint)puVar10 >> 0xc);
        if ((uint)puVar10 >> 0x10 == 0) {
          pbVar7[1] = bVar2;
          pbVar7[2] = bVar1;
          *pbVar7 = bVar3 | 0xe0;
        }
        else {
          pbVar7[3] = bVar1;
          pbVar7[2] = bVar2;
          pbVar7[1] = bVar3 & 0x3f | 0x80;
          *pbVar7 = (byte)((uint)puVar10 >> 0x12) | 0xf0;
        }
      }
    }
    local_28 = uVar8 + iVar4;
    puVar10 = puVar6;
  } while( true );
}

