// FUN_01ab9098 @ 01ab9098 size=228 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01ab9098(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_1[3] != 0) {
    uVar6 = FUN_01ab33ec(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar6 >> 0x19;
    iVar9 = 0;
    while( true ) {
      uVar6 = param_1[1] & uVar6;
      uVar8 = *(uint *)(*param_1 + uVar6);
      uVar7 = uVar8 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar2 = uVar7 >> 8;
        uVar3 = uVar7 >> 0x10;
        uVar4 = uVar7 >> 0x18;
        uVar5 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        if (param_2 ==
            *(int *)(*param_1 + -0x160 +
                    (uVar6 + ((uint)LZCOUNT(uVar5 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                            uVar4) >> 3) & param_1[1]) * -0x160)) {
          return 1;
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar6 = uVar6 + iVar9;
    }
  }
  return 0;
}

