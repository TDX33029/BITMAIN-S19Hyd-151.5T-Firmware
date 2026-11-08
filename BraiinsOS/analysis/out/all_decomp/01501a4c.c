// FUN_01501a4c @ 01501a4c size=344 calls_out=2 calls_in=1
// strings: 

int FUN_01501a4c(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r8;
  int local_30;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar2 = FUN_015023d0(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  uVar1 = uVar2 >> 0x19;
  iVar7 = *param_1;
  uVar8 = param_1[1];
  local_30 = 0;
  while( true ) {
    uVar2 = uVar8 & uVar2;
    uVar3 = *(uint *)(iVar7 + uVar2);
    uVar4 = uVar3 ^ uVar1 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar9 = uVar4, uVar9 != 0) {
      uVar4 = uVar9 - 1 & uVar9;
      unaff_r8 = uVar2 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                        (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar8;
      puVar5 = (undefined4 *)(iVar7 + -0x10 + unaff_r8 * -0x10);
      if ((param_3 == puVar5[1]) &&
         (iVar6 = thunk_FUN_016dd50a(param_2,*puVar5,param_3), iVar6 == 0)) goto LAB_01501b7c;
    }
    if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
    local_30 = local_30 + 4;
    uVar2 = uVar2 + local_30;
  }
LAB_01501b7c:
  iVar7 = iVar7 + unaff_r8 * -0x10 + -8;
  if (uVar9 == 0) {
    iVar7 = 0;
  }
  return iVar7;
}

