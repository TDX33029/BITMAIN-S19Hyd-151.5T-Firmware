// FUN_014f880c @ 014f880c size=192 calls_out=1 calls_in=1
// strings: 

void FUN_014f880c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = param_2[2];
  iVar2 = *param_2;
  uVar3 = param_2[1];
  uVar5 = uVar3;
  if (uVar3 < uVar4) {
    uVar5 = uVar4;
  }
  uVar1 = uVar4;
  do {
    uVar7 = uVar1;
    if (uVar5 == uVar7) goto LAB_014f88b0;
    uVar6 = (uint)*(byte *)(iVar2 + uVar7);
    param_2[2] = uVar7 + 1;
    uVar8 = uVar6 - 0x30;
    bVar9 = uVar8 < 10;
    if (!bVar9) {
      uVar8 = uVar6 - 0x61;
    }
    uVar1 = uVar7 + 1;
  } while (bVar9 || uVar8 < 6);
  if (uVar6 != 0x5f) {
LAB_014f88b0:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if (uVar4 != 0) {
    if (uVar4 < uVar3) {
      if (*(char *)(iVar2 + uVar4) < -0x40) goto LAB_014f88a0;
    }
    else if (uVar4 != uVar3) goto LAB_014f88a0;
  }
  if (uVar7 <= uVar3) {
    *param_1 = iVar2 + uVar4;
    param_1[1] = uVar7 - uVar4;
    return;
  }
LAB_014f88a0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac();
}

