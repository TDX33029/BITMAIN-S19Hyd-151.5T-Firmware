// FUN_0070ce68 @ 0070ce68 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_0070ce68(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (*param_1 == 0) {
    iVar3 = param_1[3];
    if (iVar3 != 0) {
      iVar4 = param_1[2];
      iVar6 = 0;
      iVar11 = *(int *)(param_2 + 0x40);
      iVar1 = 0;
      do {
        if (iVar11 == iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(iVar1,iVar11,&DAT_01c073ec);
        }
        iVar7 = *(int *)(param_2 + 0x3c) + iVar6;
        iVar6 = iVar6 + 0xc;
        uVar8 = *(undefined4 *)(iVar7 + 8);
        puVar9 = (undefined4 *)(iVar4 + iVar1 * 0x10);
        *puVar9 = *(undefined4 *)(iVar7 + 4);
        iVar1 = iVar1 + 1;
        puVar9[1] = uVar8;
      } while (iVar3 != iVar1);
    }
  }
  else {
    uVar2 = param_1[0xc];
    uVar12 = uVar2;
    if (2 < uVar2) {
      uVar12 = 3;
    }
    if (uVar2 != 0) {
      uVar10 = *(uint *)(param_2 + 0x40);
      uVar2 = 0;
      iVar3 = 4;
      do {
        if (uVar10 == uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,uVar10,&DAT_01c073ec);
        }
        piVar5 = (int *)(*(int *)(param_2 + 0x3c) + iVar3);
        iVar3 = iVar3 + 0xc;
        iVar6 = piVar5[1];
        iVar1 = uVar2 * 4;
        param_1[iVar1] = *piVar5;
        uVar2 = uVar2 + 1;
        (param_1 + iVar1)[1] = iVar6;
      } while (uVar12 != uVar2);
    }
  }
  return;
}

