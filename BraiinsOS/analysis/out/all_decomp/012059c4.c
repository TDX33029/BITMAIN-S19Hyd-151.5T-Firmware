// FUN_012059c4 @ 012059c4 size=128 calls_out=2 calls_in=0
// strings: 

void FUN_012059c4(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)*param_1;
  iVar5 = *piVar1;
  iVar6 = piVar1[1];
  *piVar1 = 0;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  iVar7 = *(int *)(iVar5 + 0x98);
  *(undefined4 *)(iVar5 + 0x98) = 0x80000000;
  if (iVar7 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a78a8);
  }
  uVar2 = *(undefined4 *)(iVar5 + 0x9c);
  uVar3 = *(undefined4 *)(iVar5 + 0xa0);
  uVar4 = *(undefined4 *)(iVar5 + 0xa4);
  FUN_016dd52c(iVar6,iVar5,0x98);
  *(int *)(iVar6 + 0x98) = iVar7;
  *(undefined4 *)(iVar6 + 0x9c) = uVar2;
  *(undefined4 *)(iVar6 + 0xa0) = uVar3;
  *(undefined4 *)(iVar6 + 0xa4) = uVar4;
  return;
}

