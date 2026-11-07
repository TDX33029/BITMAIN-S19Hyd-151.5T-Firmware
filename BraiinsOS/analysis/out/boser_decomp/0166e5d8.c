// FUN_0166e5d8 @ 0166e5d8 size=288 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0166e5d8(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_28;
  
  if (param_1[3] != 0) {
    uVar6 = FUN_01676700(param_1 + 4);
    uVar1 = uVar6 >> 0x19;
    iVar9 = *param_1;
    uVar11 = param_1[1];
    local_28 = 0;
    while( true ) {
      uVar6 = uVar11 & uVar6;
      uVar10 = *(uint *)(iVar9 + uVar6);
      uVar7 = uVar10 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar2 = uVar7 >> 8;
        uVar3 = uVar7 >> 0x10;
        uVar4 = uVar7 >> 0x18;
        uVar5 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        iVar8 = *(int *)(iVar9 + -0xc +
                        (uVar6 + ((uint)LZCOUNT(uVar5 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8
                                                | uVar4) >> 3) & uVar11) * -0xc);
        if ((param_3 == *(int *)(iVar8 + 0x10)) &&
           (iVar8 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar8 + 0xc),param_3), iVar8 == 0)) {
          return 1;
        }
      }
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar6 = uVar6 + local_28;
    }
  }
  return 0;
}

