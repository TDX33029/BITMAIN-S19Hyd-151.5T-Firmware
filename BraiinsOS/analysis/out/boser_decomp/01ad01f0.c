// FUN_01ad01f0 @ 01ad01f0 size=172 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_01ad01f0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if (iVar2 == param_2) {
      iVar2 = param_2;
      break;
    }
    pbVar3 = (byte *)(param_1 + iVar2);
    pbVar4 = pbVar3 + 1;
    uVar6 = (uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar4 = pbVar3 + 2;
      }
      else {
        uVar5 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar5 | (uVar6 & 0x1f) << 0xc;
          pbVar4 = pbVar3 + 3;
        }
        else {
          pbVar4 = pbVar3 + 4;
          uVar6 = pbVar3[3] & 0x3f | uVar5 << 6 | (uVar6 & 7) << 0x12;
        }
      }
    }
    iVar1 = (int)pbVar4 - param_1;
  } while (uVar6 == param_3);
  return CONCAT44(param_2 - iVar2,param_1 + iVar2);
}

