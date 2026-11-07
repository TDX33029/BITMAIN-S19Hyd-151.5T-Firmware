// FUN_015dd424 @ 015dd424 size=324 calls_out=4 calls_in=1
// strings: 

void FUN_015dd424(int *param_1,undefined4 param_2,int param_3)

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
  int iVar10;
  uint uVar11;
  int local_30;
  
  uVar5 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  uVar1 = uVar5 >> 0x19;
  iVar10 = *param_1;
  uVar11 = param_1[1];
  local_30 = 0;
  do {
    uVar5 = uVar11 & uVar5;
    uVar6 = *(uint *)(iVar10 + uVar5);
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
      iVar9 = iVar10 + -0xc + uVar8 * -0xc;
      if ((param_3 == *(int *)(iVar9 + 8)) &&
         (iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3), iVar9 == 0)) {
        iVar10 = iVar10 + uVar8 * -0xc;
        FUN_015d2850(param_1,iVar10);
        if (*(int *)(iVar10 + -0xc) == -0x80000000) {
          return;
        }
        FUN_0134bd64(*(int *)(iVar10 + -0xc),*(undefined4 *)(iVar10 + -8));
        return;
      }
    }
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) {
      return;
    }
    local_30 = local_30 + 4;
    uVar5 = uVar5 + local_30;
  } while( true );
}

