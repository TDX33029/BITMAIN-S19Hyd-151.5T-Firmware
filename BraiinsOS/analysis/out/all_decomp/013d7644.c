// FUN_013d7644 @ 013d7644 size=300 calls_out=5 calls_in=2
// strings: 

void FUN_013d7644(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_r5;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  
  iVar11 = *param_2;
  uVar4 = *(uint *)(iVar11 + 0x20);
  if (uVar4 < 0x7fffffff) {
    iVar3 = *(int *)(iVar11 + 0x2c) * 0x98;
    *(uint *)(iVar11 + 0x20) = uVar4 + 1;
    do {
      if (iVar3 == 0) {
        *(uint *)(iVar11 + 0x20) = uVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceeb3,0x3b,&DAT_01894dc8);
      }
      iVar7 = *(int *)(iVar11 + 0x28) + iVar3;
      iVar3 = iVar3 + -0x98;
    } while (*(int *)(iVar7 + -0x98) == 0x110009);
    iVar3 = *(int *)(iVar11 + 0x28) + iVar3;
    uVar1 = *(undefined4 *)(iVar3 + 0x58);
    uVar5 = *(undefined4 *)(iVar3 + 0x5c);
    uVar6 = *(undefined4 *)(iVar3 + 0x60);
    uVar8 = *(undefined4 *)(iVar3 + 100);
    uVar9 = *(undefined4 *)(iVar3 + 0x68);
    uVar10 = *(undefined4 *)(iVar3 + 0x6c);
    unaff_r5 = param_2[2];
    if (unaff_r5 < 0) {
      uVar1 = 0;
      goto LAB_013d76c8;
    }
    iVar3 = param_2[1];
    if (unaff_r5 == 0) {
      iVar2 = 1;
      iVar7 = 0;
LAB_013d7700:
      FUN_016dd1aa(iVar2,iVar3,unaff_r5);
      param_1[7] = iVar7;
      *param_1 = 4;
      param_1[8] = iVar2;
      param_1[9] = unaff_r5;
      param_1[10] = uVar1;
      param_1[0xb] = uVar5;
      param_1[0xc] = uVar6;
      param_1[0xd] = uVar8;
      param_1[0xe] = uVar9;
      param_1[0xf] = uVar10;
      *(int *)(iVar11 + 0x20) = *(int *)(iVar11 + 0x20) + -1;
      return;
    }
    iVar2 = thunk_FUN_016d4a50(unaff_r5);
    if (iVar2 != 0) {
      iVar7 = unaff_r5;
      goto LAB_013d7700;
    }
  }
  else {
    FUN_00fb71b0(&DAT_01894db8);
  }
  uVar1 = 1;
LAB_013d76c8:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar1,unaff_r5);
}

