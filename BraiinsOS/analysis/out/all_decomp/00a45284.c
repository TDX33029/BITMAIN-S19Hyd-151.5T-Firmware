// FUN_00a45284 @ 00a45284 size=192 calls_out=3 calls_in=0
// strings: 

void FUN_00a45284(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar6 = param_2[6];
  uVar7 = param_2[5];
  if (iVar6 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  FUN_016dd1aa(iVar1,uVar7,iVar6);
  param_1[6] = iVar6;
  param_1[4] = iVar6;
  param_1[5] = iVar1;
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  uVar7 = param_2[0xe];
  uVar2 = param_2[0xf];
  uVar4 = param_2[0x10];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar4;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar7 = param_2[7];
  uVar10 = *param_2;
  uVar2 = param_2[3];
  uVar3 = param_2[0xc];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar3;
  param_1[7] = uVar7;
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  param_1[3] = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  *param_1 = uVar10;
  return;
}

