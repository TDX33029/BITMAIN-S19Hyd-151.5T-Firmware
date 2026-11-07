// FUN_01696b30 @ 01696b30 size=444 calls_out=0 calls_in=2
// strings: 

int FUN_01696b30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r7;
  int iVar8;
  bool bVar9;
  
  iVar7 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc00) + 0x54);
  iVar2 = 0;
  if (*(char *)(param_1 + 0xa8c) != '\x02') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0xa84) + 0x18))
                      (*(int *)(param_1 + 0xa80) +
                       (*(int *)(*(int *)(param_1 + 0xa84) + 8) - 1U & 0xfffffff8) + 8);
  }
  iVar3 = *(int *)(param_1 + 0xc08);
  iVar6 = *(int *)(param_1 + 0xc04);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x13c);
    unaff_r7 = *(int *)(iVar3 + 0x148) * 0x14;
    iVar7 = unaff_r7 + *(int *)(iVar3 + 0x154) * 4 + *(int *)(iVar7 + 0x10) * 8 +
            *(int *)(iVar7 + 0x1c) * 0x20 + *(int *)(iVar7 + 0x28) * 0xc + *(int *)(iVar7 + 0x2c) +
            *(int *)(iVar3 + 0x138) + 0x180;
  }
  iVar4 = *(int *)(param_1 + 0xac4);
  iVar8 = 0;
  iVar5 = *(int *)(iVar6 + 0x13c);
  iVar3 = 0;
  bVar9 = iVar4 != 3;
  if (bVar9) {
    unaff_r7 = *(int *)(param_1 + 0xae4);
    iVar4 = *(int *)(param_1 + 0xad8);
  }
  if (bVar9) {
    unaff_r7 = unaff_r7 << 2;
  }
  if (bVar9) {
    iVar8 = unaff_r7 + iVar4 * 8;
  }
  if (*(int *)(param_1 + 0x950) != 2) {
    iVar3 = (*(int *)(param_1 + 0x970) + *(int *)(param_1 + 0x820) + *(int *)(param_1 + 0x930) +
             *(int *)(param_1 + 0x93c) + *(int *)(param_1 + 0x94c) +
            *(int *)(param_1 + 0x6b8) + *(int *)(param_1 + 0x568) + *(int *)(param_1 + 0x678) +
            *(int *)(param_1 + 0x684) + *(int *)(param_1 + 0x694)) * 4;
  }
  return iVar1 * 0x34 + iVar2 + *(int *)(iVar6 + 0x148) * 0x14 + *(int *)(iVar6 + 0x154) * 4 +
         *(int *)(iVar5 + 0x10) * 8 + *(int *)(iVar5 + 0x1c) * 0x20 + *(int *)(iVar5 + 0x28) * 0xc +
         *(int *)(iVar5 + 0x2c) + *(int *)(iVar6 + 0x138) + iVar7 + iVar8 + iVar3 + 0x1b4;
}

