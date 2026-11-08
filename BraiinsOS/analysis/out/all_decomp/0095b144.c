// FUN_0095b144 @ 0095b144 size=172 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0095b144(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar1 = 0;
  do {
    iVar5 = iVar1;
    if (iVar5 == param_2) {
      iVar5 = param_2;
      break;
    }
    pbVar6 = (byte *)(param_1 + iVar5);
    pbVar4 = pbVar6 + 1;
    uVar3 = (uint)*pbVar6;
    if (0x7fffffff < (uint)(int)(char)*pbVar6) {
      if (uVar3 < 0xe0) {
        uVar3 = pbVar6[1] & 0x3f | (uVar3 & 0x1f) << 6;
        pbVar4 = pbVar6 + 2;
      }
      else {
        uVar2 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
        if (uVar3 < 0xf0) {
          uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
          pbVar4 = pbVar6 + 3;
        }
        else {
          pbVar4 = pbVar6 + 4;
          uVar3 = pbVar6[3] & 0x3f | uVar2 << 6 | (uVar3 & 7) << 0x12;
        }
      }
    }
    iVar1 = (int)pbVar4 - param_1;
  } while (uVar3 == 0x2f);
  return CONCAT44(param_2 - iVar5,param_1 + iVar5);
}

