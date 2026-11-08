// FUN_016d4f3c @ 016d4f3c size=164 calls_out=2 calls_in=12
// strings: 

void FUN_016d4f3c(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *param_2;
  uVar8 = *(uint *)(iVar6 + 0x50);
  uVar1 = FUN_016d4a28(param_2);
  uVar3 = 1;
  if (0x7f < uVar1) {
    uVar3 = 2;
  }
  if ((0x7ff < uVar1) && (uVar3 = 4, uVar1 < 0x10000)) {
    uVar3 = 3;
  }
  if (CARRY4(uVar3,uVar8)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0a148);
  }
  uVar1 = *(int *)(iVar6 + 0x58) + 1;
  if (*(int *)(iVar6 + 0x58) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0a158);
  }
  uVar7 = *(uint *)(iVar6 + 0x54);
  iVar2 = FUN_016d4a28(param_2);
  uVar4 = *(uint *)(iVar6 + 0x54);
  uVar5 = *(uint *)(iVar6 + 0x58);
  if (iVar2 == 10) {
    uVar1 = 1;
    uVar7 = uVar7 + 1;
  }
  *param_1 = *(uint *)(iVar6 + 0x50);
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar3 + uVar8;
  param_1[4] = uVar7;
  param_1[5] = uVar1;
  return;
}

