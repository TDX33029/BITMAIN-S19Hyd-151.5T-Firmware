// FUN_0120658c @ 0120658c size=236 calls_out=0 calls_in=1
// strings: 

void FUN_0120658c(byte *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_30 [2];
  byte *local_28;
  
  local_30[0] = param_3;
  local_30[1] = param_4;
  local_28 = param_1;
  if (param_2 != 0) {
    pbVar8 = param_1 + param_2;
    do {
      pbVar7 = pbVar8 + -1;
      uVar4 = (uint)(char)*pbVar7;
      if (0x7fffffff < uVar4) {
        pbVar7 = pbVar8 + -2;
        bVar2 = *pbVar7;
        if ((char)bVar2 < -0x40) {
          pbVar7 = pbVar8 + -3;
          bVar3 = *pbVar7;
          if ((char)bVar3 < -0x40) {
            pbVar7 = pbVar8 + -4;
            uVar5 = (int)(char)bVar3 & 0x3fU | (*pbVar7 & 7) << 6;
          }
          else {
            uVar5 = bVar3 & 0xf;
          }
          uVar5 = (int)(char)bVar2 & 0x3fU | uVar5 << 6;
        }
        else {
          uVar5 = bVar2 & 0x1f;
        }
        uVar4 = uVar4 & 0x3f | uVar5 << 6;
      }
      iVar6 = 0;
      do {
        if (iVar6 == 8) {
          return;
        }
        puVar1 = (uint *)((int)local_30 + iVar6);
        iVar6 = iVar6 + 4;
      } while (*puVar1 != uVar4);
      pbVar8 = pbVar7;
    } while (param_1 != pbVar7);
  }
  return;
}

