// FUN_01783758 @ 01783758 size=316 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01783758(int *param_1,undefined4 param_2,int param_3)

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
  uint uVar10;
  int iVar11;
  int local_2c;
  
  if (param_1[3] != 0) {
    uVar6 = FUN_01a9c24c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar6 >> 0x19;
    uVar10 = param_1[1];
    iVar11 = *param_1;
    local_2c = 0;
    while( true ) {
      uVar6 = uVar10 & uVar6;
      uVar7 = *(uint *)(iVar11 + uVar6);
      uVar8 = uVar7 ^ uVar1 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar2 = uVar8 >> 8;
        uVar3 = uVar8 >> 0x10;
        uVar4 = uVar8 >> 0x18;
        uVar5 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        iVar9 = (uVar6 + ((uint)LZCOUNT(uVar5 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4
                                       ) >> 3) & uVar10) * -0x34 + iVar11 + -0x34;
        if ((param_3 == *(int *)(iVar9 + 8)) &&
           (iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3), iVar9 == 0)) {
          return 1;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar6 = uVar6 + local_2c;
    }
  }
  return 0;
}

