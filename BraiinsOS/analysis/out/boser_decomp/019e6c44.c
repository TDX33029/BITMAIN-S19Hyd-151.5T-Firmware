// FUN_019e6c44 @ 019e6c44 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_019e6c44(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar1 = uVar3 - uVar4;
  if (uVar5 - uVar6 < uVar3 - uVar4) {
    uVar1 = uVar5 - uVar6;
  }
  if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,uVar3,uVar3,&DAT_01d29254);
  }
  uVar2 = uVar1 + uVar6;
  if ((CARRY4(uVar1,uVar6)) || (uVar5 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar6,uVar2,uVar5,&DAT_01d29264);
  }
  FUN_01bed4e2(*param_2 + uVar6,*(int *)(param_1 + 4) + uVar4,uVar1);
  param_2[2] = uVar2;
  if ((uint)param_2[3] < uVar2) {
    param_2[3] = uVar2;
  }
  *(uint *)(param_1 + 0xc) = uVar4 + uVar1;
  if (uVar4 + uVar1 == uVar3) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

