// FUN_01ad0838 @ 01ad0838 size=328 calls_out=2 calls_in=2
// strings: 

void FUN_01ad0838(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar6;
  byte *pbVar5;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (param_3 != 0) {
    iVar9 = 1;
    do {
      iVar3 = local_28;
      puVar4 = (undefined1 *)FUN_01ac9ff4(param_2);
      if (puVar4 == &DAT_00110000) break;
      uVar8 = 1;
      if ((undefined1 *)0x7f < puVar4) {
        uVar8 = 2;
      }
      if (((undefined1 *)0x7ff < puVar4) && (uVar8 = 4, puVar4 < (undefined1 *)0x10000)) {
        uVar8 = 3;
      }
      iVar6 = iVar3;
      if ((uint)(local_30 - iVar3) < uVar8) {
        FUN_01af7b44(&local_30,iVar3,uVar8,1,1);
        iVar6 = local_28;
        iVar9 = local_2c;
      }
      pbVar5 = (byte *)(iVar9 + iVar6);
      if (puVar4 < (undefined1 *)0x80) {
        *pbVar5 = (byte)puVar4;
      }
      else {
        bVar1 = (byte)puVar4 & 0x3f | 0x80;
        bVar7 = (byte)((uint)puVar4 >> 6);
        if (puVar4 < (undefined1 *)0x800) {
          bVar7 = bVar7 | 0xc0;
          pbVar5[1] = bVar1;
        }
        else {
          bVar2 = bVar7 & 0x3f | 0x80;
          bVar7 = (byte)((uint)puVar4 >> 0xc);
          if ((uint)puVar4 >> 0x10 != 0) {
            pbVar5[3] = bVar1;
            pbVar5[2] = bVar2;
            pbVar5[1] = bVar7 & 0x3f | 0x80;
            *pbVar5 = (byte)((uint)puVar4 >> 0x12) | 0xf0;
            goto LAB_01ad0930;
          }
          pbVar5[1] = bVar2;
          bVar7 = bVar7 | 0xe0;
          pbVar5[2] = bVar1;
        }
        *pbVar5 = bVar7;
      }
LAB_01ad0930:
      local_28 = uVar8 + iVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

