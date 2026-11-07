// FUN_015dd2c0 @ 015dd2c0 size=356 calls_out=4 calls_in=1
// strings: 

void FUN_015dd2c0(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

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
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int local_34;
  
  uVar5 = FUN_01a9c24c(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4);
  uVar1 = uVar5 >> 0x19;
  iVar13 = *param_2;
  uVar14 = param_2[1];
  local_34 = 0;
  do {
    uVar5 = uVar14 & uVar5;
    uVar6 = *(uint *)(iVar13 + uVar5);
    uVar7 = uVar6 ^ uVar1 * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar8 = uVar7 >> 8;
      uVar2 = uVar7 >> 0x10;
      uVar3 = uVar7 >> 0x18;
      uVar4 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar8 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar8 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                      >> 3) & uVar14;
      iVar9 = iVar13 + -0x18 + uVar8 * -0x18;
      if ((param_4 == *(int *)(iVar9 + 8)) &&
         (iVar9 = thunk_FUN_01bed842(param_3,*(undefined4 *)(iVar9 + 4),param_4), iVar9 == 0)) {
        iVar13 = iVar13 + uVar8 * -0x18;
        FUN_015d28dc(param_2,iVar13);
        iVar9 = *(int *)(iVar13 + -0x18);
        if (iVar9 != -0x80000000) {
          uVar10 = *(undefined4 *)(iVar13 + -0x14);
          uVar11 = *(undefined4 *)(iVar13 + -8);
          uVar12 = *(undefined4 *)(iVar13 + -4);
          *param_1 = *(undefined4 *)(iVar13 + -0xc);
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          FUN_0134bd64(iVar9,uVar10);
          return;
        }
        goto LAB_015dd3f0;
      }
    }
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) {
LAB_015dd3f0:
      *param_1 = 0x80000000;
      return;
    }
    local_34 = local_34 + 4;
    uVar5 = uVar5 + local_34;
  } while( true );
}

