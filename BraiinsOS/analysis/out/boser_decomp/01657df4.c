// FUN_01657df4 @ 01657df4 size=320 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_01657df4(int *param_1,uint param_2,int param_3)

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
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int local_2c;
  
  if (param_1[3] == 0) {
    uVar10 = 0;
    uVar7 = param_2;
  }
  else {
    uVar5 = FUN_01a9c24c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar5 >> 0x19;
    iVar12 = *param_1;
    uVar11 = param_1[1];
    local_2c = 0;
    while( true ) {
      uVar5 = uVar11 & uVar5;
      uVar6 = *(uint *)(iVar12 + uVar5);
      uVar7 = uVar6 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar7 >> 8;
        uVar2 = uVar7 >> 0x10;
        uVar3 = uVar7 >> 0x18;
        uVar4 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar8 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & uVar11;
        iVar9 = iVar12 + -0x18 + uVar8 * -0x18;
        if ((param_3 == *(int *)(iVar9 + 8)) &&
           (iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3), iVar9 == 0)) {
          iVar12 = iVar12 + uVar8 * -0x18;
          uVar10 = *(undefined4 *)(iVar12 + -8);
          uVar7 = *(uint *)(iVar12 + -4);
          goto LAB_01657f2c;
        }
      }
      uVar10 = 0;
      uVar7 = uVar6 & 0x80808080;
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar5 = uVar5 + local_2c;
    }
  }
LAB_01657f2c:
  return CONCAT44(uVar7,uVar10);
}

