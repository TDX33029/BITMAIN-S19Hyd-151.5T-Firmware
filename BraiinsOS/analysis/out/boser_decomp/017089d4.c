// FUN_017089d4 @ 017089d4 size=616 calls_out=8 calls_in=0
// strings: 

undefined8 FUN_017089d4(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  
  iVar8 = param_1[2];
  if (*(int *)(iVar8 + 0x14) == 0) {
LAB_01708b50:
                    /* WARNING: Could not recover jumptable at 0x01708b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (**(code **)(param_1[1] + 0xc))
                       (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,param_2,param_3)
    ;
    return uVar14;
  }
  uVar2 = FUN_019306a8(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c),
                       *(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(iVar8 + 0x24),param_2,param_3);
  uVar1 = uVar2 >> 0x19;
  iVar13 = *(int *)(iVar8 + 8);
  uVar10 = *(uint *)(iVar8 + 0xc);
  iVar8 = 0;
  do {
    uVar2 = uVar10 & uVar2;
    uVar11 = *(uint *)(iVar13 + uVar2);
    uVar3 = uVar11 ^ uVar1 * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar10;
      iVar5 = iVar13 + -0x18 + uVar4 * -0x18;
      if ((param_3 == *(int *)(iVar5 + 8)) &&
         (iVar5 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar5 + 4),param_3), iVar5 == 0)) {
        iVar13 = iVar13 + uVar4 * -0x18;
        uVar9 = 0;
        uVar2 = *(uint *)(iVar13 + -4);
        uVar1 = uVar2 * 0x20;
        if ((0x7ffffff < uVar2) || (0x7ffffffc < uVar1)) {
LAB_01708b80:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar9,uVar1);
        }
        uVar12 = *(undefined4 *)(iVar13 + -8);
        if (uVar1 == 0) {
          iVar8 = 4;
          uVar10 = 0;
        }
        else {
          uVar9 = 4;
          iVar8 = FUN_01298504(uVar1,4);
          uVar10 = uVar2;
          if (iVar8 == 0) goto LAB_01708b80;
        }
        FUN_01bed4e2(iVar8,uVar12,uVar1);
        piVar6 = (int *)thunk_FUN_01be5118(0x10);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        *piVar6 = iVar8;
        piVar6[1] = iVar8;
        piVar6[2] = uVar10;
        piVar6[3] = iVar8 + uVar2 * 0x20;
        puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar7 = 0;
        puVar7[1] = piVar6;
        puVar7[2] = &DAT_01d19130;
        if (param_3 != 0) {
          thunk_FUN_01be4678(param_2);
        }
        return CONCAT44(&PTR_FUN_01d1914c,puVar7);
      }
    }
    if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) goto LAB_01708b50;
    iVar8 = iVar8 + 4;
    uVar2 = uVar2 + iVar8;
  } while( true );
}

