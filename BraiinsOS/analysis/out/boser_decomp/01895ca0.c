// FUN_01895ca0 @ 01895ca0 size=248 calls_out=2 calls_in=7
// strings: 

bool FUN_01895ca0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar10 = true;
  if (param_2 != 0) {
    uVar8 = param_2 & 3;
    bVar9 = uVar8 != 0;
    uVar7 = (uint)bVar9 + (param_2 >> 2);
    if (uVar7 <= param_4) {
      FUN_01bed93e(param_3,0,param_4 << 2);
      if (uVar8 == 0) {
        uVar8 = 4;
      }
      uVar2 = 0;
      uVar1 = 0;
      do {
        uVar3 = param_2 - uVar2;
        if (param_2 < uVar2) {
          uVar3 = 0;
        }
        if (uVar3 <= uVar8 - 1) {
          return true;
        }
        uVar5 = uVar1 + 1;
        uVar6 = 0;
        pbVar4 = (byte *)(param_1 + uVar2);
        uVar3 = uVar8;
        do {
          uVar3 = uVar3 - 1;
          uVar6 = (uint)*pbVar4 | uVar6 << 8;
          pbVar4 = pbVar4 + 1;
        } while (uVar3 != 0);
        if (param_4 <= ((param_2 >> 2) + (uint)bVar9) - 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7 + ~uVar1,param_4,&DAT_01d21b6c);
        }
        uVar2 = uVar8 + uVar2;
        *(uint *)(param_3 + (uVar7 + ~uVar1) * 4) = uVar6;
        uVar8 = 4;
        uVar1 = uVar5;
      } while (uVar5 != uVar7);
      bVar10 = uVar2 != param_2;
    }
  }
  return bVar10;
}

