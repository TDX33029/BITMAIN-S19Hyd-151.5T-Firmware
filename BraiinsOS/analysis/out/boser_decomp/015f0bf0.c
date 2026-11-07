// FUN_015f0bf0 @ 015f0bf0 size=316 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_015f0bf0(int param_1,undefined4 param_2,int param_3)

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
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar5 = FUN_01a9c24c(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),param_2,
                         param_3);
    uVar1 = uVar5 >> 0x19;
    iVar11 = *(int *)(param_1 + 0x40);
    uVar10 = *(uint *)(param_1 + 0x44);
    local_2c = 0;
    while( true ) {
      uVar5 = uVar10 & uVar5;
      uVar6 = *(uint *)(iVar11 + uVar5);
      uVar7 = uVar6 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar7 >> 8;
        uVar2 = uVar7 >> 0x10;
        uVar3 = uVar7 >> 0x18;
        uVar4 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar8 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & uVar10;
        iVar9 = iVar11 + -0x18 + uVar8 * -0x18;
        if ((param_3 == *(int *)(iVar9 + 8)) &&
           (iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3), iVar9 == 0)) {
          iVar11 = iVar11 + uVar8 * -0x18;
          param_2 = *(undefined4 *)(iVar11 + -8);
          param_3 = *(int *)(iVar11 + -4);
          goto LAB_015f0d1c;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar5 = uVar5 + local_2c;
    }
  }
LAB_015f0d1c:
  return CONCAT44(param_3,param_2);
}

