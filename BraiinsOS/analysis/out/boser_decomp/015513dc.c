// FUN_015513dc @ 015513dc size=136 calls_out=2 calls_in=0
// strings: 

void FUN_015513dc(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar1 = (int *)*param_1;
  iVar4 = *piVar1;
  iVar5 = piVar1[1];
  *piVar1 = 0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar7 = *(int *)(iVar4 + 0x98);
  *(undefined4 *)(iVar4 + 0x98) = 0x80000000;
  if (iVar7 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  uVar2 = *(undefined4 *)(iVar4 + 0x9c);
  uVar3 = *(undefined4 *)(iVar4 + 0xa0);
  uVar6 = *(undefined4 *)(iVar4 + 0xa4);
  FUN_01bed864(iVar5,iVar4,0x98);
  *(int *)(iVar5 + 0x98) = iVar7;
  *(undefined4 *)(iVar5 + 0x9c) = uVar2;
  *(undefined4 *)(iVar5 + 0xa0) = uVar3;
  *(undefined4 *)(iVar5 + 0xa4) = uVar6;
  return;
}

