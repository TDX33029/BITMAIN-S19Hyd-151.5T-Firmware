// FUN_009d43c4 @ 009d43c4 size=300 calls_out=1 calls_in=1
// strings: 

void FUN_009d43c4(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186abd8);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
LAB_009d44c0:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ae12,0x13,&DAT_0186ab68);
  }
  puVar1 = *(uint **)(param_1 + 4);
  if (iVar3 != 1) {
    uVar5 = *puVar1;
    uVar4 = iVar3 - 1U & 0x3fffffff;
    puVar8 = puVar1;
    do {
      puVar8 = puVar8 + 1;
      if (uVar5 <= *puVar8) {
        uVar5 = *puVar8;
        puVar1 = puVar8;
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
      if (iVar6 == 0) goto LAB_009d44c0;
      puVar1 = *(uint **)(iVar2 + 4);
      if (iVar6 != 1) {
        uVar4 = *puVar1;
        uVar7 = iVar6 - 1U & 0x3fffffff;
        puVar8 = puVar1;
        do {
          puVar8 = puVar8 + 1;
          if (uVar4 <= *puVar8) {
            uVar4 = *puVar8;
            puVar1 = puVar8;
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar3 = iVar3 + 1;
      if (uVar5 <= *puVar1) {
        uVar5 = *puVar1;
      }
    } while (iVar3 != (param_2 * 0x18 - 0x18U >> 3) * -0x55555555);
  }
  return;
}

