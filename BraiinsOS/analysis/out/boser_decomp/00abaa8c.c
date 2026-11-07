// FUN_00abaa8c @ 00abaa8c size=488 calls_out=3 calls_in=3
// strings: 

void FUN_00abaa8c(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_64;
  
  uVar1 = FUN_01743c30(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar6 = uVar1 >> 0x19;
  iVar12 = *param_2;
  uVar9 = param_2[1];
  local_64 = 0;
  while( true ) {
    uVar1 = uVar9 & uVar1;
    uVar2 = *(uint *)(iVar12 + uVar1);
    uVar3 = uVar2 ^ uVar6 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar10 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar9;
      iVar4 = FUN_01744014(param_3,iVar12 + -0x28 + uVar10 * -0x28);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar10 * 0x28) >> 3) * -0x33333333;
        puVar5 = (uint *)(iVar12 + (iVar4 - 4U & uVar9));
        uVar1 = *puVar5;
        uVar6 = *(uint *)(iVar12 + iVar4) & 0x80808080 & *(uint *)(iVar12 + iVar4) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar8 = 0xff;
        }
        iVar7 = iVar12 + uVar10 * -0x28;
        *(undefined1 *)(iVar12 + iVar4) = uVar8;
        iVar12 = param_2[3];
        *(undefined1 *)(puVar5 + 1) = uVar8;
        param_2[3] = iVar12 + -1;
        iVar12 = *(int *)(iVar7 + -0xc);
        iVar4 = *(int *)(iVar7 + -8);
        iVar11 = *(int *)(iVar7 + -4);
        if (*(int *)(iVar7 + -0x10) != -0x80000000) {
          *param_1 = *(int *)(iVar7 + -0x10);
          param_1[1] = iVar12;
          param_1[2] = iVar4;
          param_1[3] = iVar11;
          FUN_0184c61c();
          return;
        }
        goto LAB_00abac3c;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_64 = local_64 + 4;
    uVar1 = uVar1 + local_64;
  }
LAB_00abac3c:
  *param_1 = -0x80000000;
  return;
}

