// FUN_019d0db0 @ 019d0db0 size=244 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_019d0db0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar5 = 1;
  if ((char)param_1[0xe] == '\x01') {
    if (param_1[3] == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = FUN_01656218(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
      uVar1 = uVar6 >> 0x19;
      iVar8 = *param_1;
      iVar11 = 0;
      while( true ) {
        uVar6 = param_1[1] & uVar6;
        uVar10 = *(uint *)(iVar8 + uVar6);
        uVar7 = uVar10 ^ uVar1 * 0x1010101;
        uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
        while (uVar7 != 0) {
          uVar9 = uVar7 >> 8;
          uVar2 = uVar7 >> 0x10;
          uVar3 = uVar7 >> 0x18;
          uVar4 = uVar7 << 0x18;
          uVar7 = uVar7 - 1 & uVar7;
          uVar9 = uVar6 + ((uint)LZCOUNT(uVar4 | (uVar9 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                         uVar3) >> 3) & param_1[1];
          if (param_2 == *(int *)(iVar8 + -8 + uVar9 * -8)) {
            param_2 = *(int *)(iVar8 + uVar9 * -8 + -4);
            uVar5 = 1;
            goto LAB_019d0e98;
          }
        }
        uVar5 = 0;
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
        iVar11 = iVar11 + 4;
        uVar6 = uVar6 + iVar11;
      }
    }
  }
LAB_019d0e98:
  return CONCAT44(param_2,uVar5);
}

