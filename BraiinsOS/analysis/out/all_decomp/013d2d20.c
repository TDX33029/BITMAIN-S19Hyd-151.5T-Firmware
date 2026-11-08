// FUN_013d2d20 @ 013d2d20 size=264 calls_out=3 calls_in=23
// strings: 

undefined4 FUN_013d2d20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar6 = *param_1;
  uVar7 = 0;
  uVar5 = param_1[2];
  uVar4 = *(uint *)(iVar6 + 0x50);
  if (uVar4 != uVar5) {
    uVar8 = *(uint *)(iVar6 + 0x54);
    uVar9 = *(uint *)(iVar6 + 0x58);
    iVar1 = FUN_013d2518();
    if (iVar1 == 10) {
      bVar10 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01894e48);
      }
      iVar1 = 1;
    }
    else {
      iVar1 = uVar9 + 1;
      if (0xfffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01894e68);
      }
    }
    uVar9 = FUN_013d2518(param_1);
    iVar3 = 1;
    if (0x7f < uVar9) {
      iVar3 = 2;
    }
    if ((0x7ff < uVar9) && (iVar3 = 4, uVar9 < 0x10000)) {
      iVar3 = 3;
    }
    iVar2 = param_1[1];
    uVar4 = iVar3 + uVar4;
    *(uint *)(iVar6 + 0x50) = uVar4;
    *(uint *)(iVar6 + 0x54) = uVar8;
    *(int *)(iVar6 + 0x58) = iVar1;
    if (uVar4 != 0) {
      if (uVar4 < uVar5) {
        if (*(char *)(iVar2 + uVar4) < -0x40) {
LAB_013d2db8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar2,uVar5,uVar4,uVar5,&DAT_01894e58);
        }
      }
      else if (uVar4 != uVar5) goto LAB_013d2db8;
    }
    if (uVar4 != uVar5) {
      uVar7 = 1;
    }
  }
  return uVar7;
}

