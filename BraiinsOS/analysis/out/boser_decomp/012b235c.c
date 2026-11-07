// FUN_012b235c @ 012b235c size=232 calls_out=0 calls_in=3
// strings: 

int FUN_012b235c(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  iVar3 = 0;
  pbVar5 = param_1;
  bVar2 = 0;
  do {
    bVar1 = bVar2;
    if (pbVar5 == param_1 + param_2) {
      return iVar3;
    }
    pbVar4 = pbVar5 + 1;
    puVar6 = (undefined1 *)(uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (puVar6 < (undefined1 *)0xe0) {
        puVar6 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar6 & 0x1f) << 6);
        pbVar4 = pbVar5 + 2;
      }
      else {
        uVar7 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (puVar6 < (undefined1 *)0xf0) {
          puVar6 = (undefined1 *)(uVar7 | ((uint)puVar6 & 0x1f) << 0xc);
          pbVar4 = pbVar5 + 3;
        }
        else {
          puVar6 = (undefined1 *)(pbVar5[3] & 0x3f | uVar7 << 6 | ((uint)puVar6 & 7) << 0x12);
          if (puVar6 == &DAT_00110000) {
            return iVar3;
          }
          pbVar4 = pbVar5 + 4;
        }
      }
    }
    pbVar5 = pbVar4;
    if ((puVar6 < (undefined1 *)0x20) || (puVar6 == (undefined1 *)0x7f)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
      if (!(bool)(bVar1 & puVar6 == (undefined1 *)0x6d)) {
        iVar3 = iVar3 + (uint)(byte)~bVar1;
        bVar2 = bVar1;
      }
    }
  } while( true );
}

