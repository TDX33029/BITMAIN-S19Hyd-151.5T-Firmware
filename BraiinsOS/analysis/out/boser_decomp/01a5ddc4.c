// FUN_01a5ddc4 @ 01a5ddc4 size=340 calls_out=4 calls_in=1
// strings: always at least one key

undefined4 FUN_01a5ddc4(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *unaff_r5;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  bVar13 = param_2 == 0;
  piVar1 = param_1;
  if (!bVar13) {
    piVar1 = param_1 + param_2 + -1;
    bVar13 = piVar1 == (int *)0x0;
    unaff_r5 = param_1;
  }
  if (bVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("always at least one key",0x17,&DAT_01d2c628);
  }
  iVar2 = *piVar1;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  iVar10 = 0;
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  while( true ) {
    iVar12 = *(int *)((int)unaff_r5 - iVar10);
    iVar11 = iVar12 + 0x30;
    if (iVar10 == 0) {
      iVar3 = FUN_01a559a0(iVar2 + 0x18,param_3,uVar4,uVar5);
      if (iVar3 != 0) {
        return 1;
      }
    }
    else {
      iVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,".",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_01a559a0(iVar11,param_3,1,0);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar12 = FUN_01a5db00(iVar12,param_3);
    if (iVar12 != 0) {
      return 1;
    }
    if (param_2 * 4 + iVar10 == 4) {
      iVar11 = iVar2 + 0x18;
      uVar8 = uVar6;
      uVar9 = uVar7;
    }
    else {
      uVar8 = 1;
      uVar9 = 0;
    }
    iVar11 = FUN_01a55a04(iVar11,param_3,uVar8,uVar9);
    if (iVar11 != 0) break;
    iVar10 = iVar10 + -4;
    if (param_2 * 4 + iVar10 == 0) {
      return 0;
    }
  }
  return 1;
}

