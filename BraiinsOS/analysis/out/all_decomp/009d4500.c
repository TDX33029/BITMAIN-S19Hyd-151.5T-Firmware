// FUN_009d4500 @ 009d4500 size=300 calls_out=1 calls_in=2
// strings: 

void FUN_009d4500(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186abe8);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
LAB_009d45fc:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ae12,0x13,&DAT_0186ab78);
  }
  puVar1 = *(uint **)(param_1 + 4);
  if (iVar3 != 1) {
    uVar5 = *puVar1;
    uVar4 = iVar3 - 1U & 0x3fffffff;
    puVar7 = puVar1;
    do {
      puVar7 = puVar7 + 1;
      uVar8 = *puVar7;
      if (uVar8 < uVar5) {
        puVar1 = puVar7;
      }
      if (uVar8 <= uVar5) {
        uVar5 = uVar8;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar5 = *puVar1;
  if (param_2 != 1) {
    iVar3 = 0;
    do {
      iVar2 = param_1 + 0x18 + iVar3 * 0x18;
      iVar6 = *(int *)(iVar2 + 8);
      if (iVar6 == 0) goto LAB_009d45fc;
      puVar1 = *(uint **)(iVar2 + 4);
      if (iVar6 != 1) {
        uVar4 = *puVar1;
        uVar8 = iVar6 - 1U & 0x3fffffff;
        puVar7 = puVar1;
        do {
          puVar7 = puVar7 + 1;
          uVar9 = *puVar7;
          if (uVar9 < uVar4) {
            puVar1 = puVar7;
          }
          if (uVar9 <= uVar4) {
            uVar4 = uVar9;
          }
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar3 = iVar3 + 1;
      if (*puVar1 <= uVar5) {
        uVar5 = *puVar1;
      }
    } while (iVar3 != (param_2 * 0x18 - 0x18U >> 3) * -0x55555555);
  }
  return;
}

