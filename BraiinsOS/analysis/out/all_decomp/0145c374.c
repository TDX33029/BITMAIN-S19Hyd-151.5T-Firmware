// FUN_0145c374 @ 0145c374 size=608 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_0145c374(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  
  iVar9 = param_1[2];
  if (*(int *)(iVar9 + 0x14) == 0) {
LAB_0145c4f0:
                    /* WARNING: Could not recover jumptable at 0x0145c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_1[1] + 0xc))
                       (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,param_2,param_3)
    ;
    return uVar13;
  }
  uVar2 = FUN_006a4f44(*(undefined4 *)(iVar9 + 0x18),*(undefined4 *)(iVar9 + 0x1c),
                       *(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar9 + 0x24),param_2,param_3);
  uVar1 = uVar2 >> 0x19;
  iVar12 = *(int *)(iVar9 + 8);
  uVar10 = *(uint *)(iVar9 + 0xc);
  iVar9 = 0;
  do {
    uVar2 = uVar10 & uVar2;
    uVar11 = *(uint *)(iVar12 + uVar2);
    uVar3 = uVar11 ^ uVar1 * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar10;
      iVar5 = iVar12 + -0x18 + uVar4 * -0x18;
      if ((param_3 == *(int *)(iVar5 + 8)) &&
         (iVar5 = thunk_FUN_016dd50a(param_2,*(undefined4 *)(iVar5 + 4),param_3), iVar5 == 0)) {
        iVar12 = iVar12 + uVar4 * -0x18;
        uVar6 = 0;
        uVar2 = *(uint *)(iVar12 + -4);
        uVar1 = uVar2 * 0x20;
        if ((0x7ffffff < uVar2) || (0x7ffffffc < uVar1)) {
LAB_0145c520:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,uVar1);
        }
        uVar6 = *(undefined4 *)(iVar12 + -8);
        if (uVar1 == 0) {
          iVar9 = 4;
          uVar10 = 0;
        }
        else {
          iVar9 = thunk_FUN_016d4a50(uVar1);
          uVar10 = uVar2;
          if (iVar9 == 0) {
            uVar6 = 4;
            goto LAB_0145c520;
          }
        }
        FUN_016dd1aa(iVar9,uVar6,uVar1);
        piVar7 = (int *)thunk_FUN_016d4a50(0x10);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *piVar7 = iVar9;
        piVar7[1] = iVar9;
        piVar7[2] = uVar10;
        piVar7[3] = iVar9 + uVar2 * 0x20;
        puVar8 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar8 = 0;
        puVar8[1] = piVar7;
        puVar8[2] = &DAT_018a4460;
        if (param_3 != 0) {
          thunk_FUN_016d3fb4(param_2);
        }
        return CONCAT44(&PTR_FUN_018a447c,puVar8);
      }
    }
    if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) goto LAB_0145c4f0;
    iVar9 = iVar9 + 4;
    uVar2 = uVar2 + iVar9;
  } while( true );
}

