// FUN_015a6cf4 @ 015a6cf4 size=196 calls_out=2 calls_in=1
// strings: 

void FUN_015a6cf4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  iVar1 = thunk_FUN_01be5118(0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x40);
  }
  iVar5 = 0;
  do {
    puVar7 = (undefined4 *)(param_3 + iVar5);
    uVar2 = *puVar7;
    uVar4 = puVar7[1];
    uVar6 = puVar7[2];
    uVar8 = puVar7[3];
    puVar3 = (undefined4 *)(iVar1 + iVar5);
    *(undefined4 *)(param_3 + iVar5) = 1;
    iVar5 = iVar5 + 0x10;
    puVar7[1] = 0;
    puVar7[2] = 1;
    puVar7[3] = 0;
    *puVar3 = uVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar6;
    puVar3[3] = uVar8;
  } while (iVar5 != 0x30);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(iVar1 + 0x30) = *param_2;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar4;
  *(undefined4 *)(iVar1 + 0x3c) = uVar6;
  *param_1 = 4;
  param_1[1] = iVar1;
  param_1[2] = 4;
  return;
}

