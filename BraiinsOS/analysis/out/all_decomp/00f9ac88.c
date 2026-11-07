// FUN_00f9ac88 @ 00f9ac88 size=412 calls_out=5 calls_in=1
// strings: 

void FUN_00f9ac88(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 *param_5
                 )

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = *(int *)(param_1 + 0x24);
  iVar11 = *(int *)(param_1 + 0x28) << 3;
  uVar8 = 0;
  while( true ) {
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_01880854);
    }
    if ((*(int *)(iVar12 + uVar8 * 8 + 4) == param_3) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar12 + uVar8 * 8),param_2,param_3), iVar1 == 0)
       ) break;
    iVar11 = iVar11 + -8;
    uVar8 = uVar8 + 1;
  }
  if (*(uint *)(param_1 + 0x34) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,*(uint *)(param_1 + 0x34),&DAT_01880844);
  }
  iVar11 = *(int *)(param_1 + 0x30) + uVar8 * 0x3c;
  if (*(int *)(iVar11 + 0x28) == 0) {
    puVar5 = &DAT_01880894;
  }
  else {
    iVar12 = *(int *)(iVar11 + 0x24) + *(int *)(iVar11 + 0x28) * 0xc;
    iVar1 = *(int *)(iVar12 + -4);
    if (iVar1 == *(int *)(iVar12 + -0xc)) {
      FUN_00f9902c();
    }
    puVar2 = (undefined4 *)(*(int *)(iVar12 + -8) + iVar1 * 0x18);
    uVar4 = param_4[1];
    uVar6 = param_4[2];
    uVar7 = param_4[3];
    uVar9 = param_4[4];
    uVar10 = param_4[5];
    *puVar2 = *param_4;
    puVar2[1] = uVar4;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar2[4] = uVar9;
    puVar2[5] = uVar10;
    iVar3 = *(int *)(iVar11 + 0x34);
    *(int *)(iVar12 + -4) = iVar1 + 1;
    if (iVar3 != 0) {
      iVar11 = *(int *)(iVar11 + 0x30) + iVar3 * 0xc;
      iVar12 = *(int *)(iVar11 + -4);
      if (iVar12 == *(int *)(iVar11 + -0xc)) {
        FUN_015f37b0();
      }
      uVar4 = param_5[1];
      uVar6 = param_5[2];
      puVar2 = (undefined4 *)(*(int *)(iVar11 + -8) + iVar12 * 0xc);
      *puVar2 = *param_5;
      puVar2[1] = uVar4;
      puVar2[2] = uVar6;
      *(int *)(iVar11 + -4) = iVar12 + 1;
      return;
    }
    puVar5 = &DAT_018808a4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_0035e2fc,99,puVar5);
}

