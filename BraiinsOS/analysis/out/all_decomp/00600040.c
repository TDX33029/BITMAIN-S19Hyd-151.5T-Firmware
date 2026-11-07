// FUN_00600040 @ 00600040 size=272 calls_out=1 calls_in=1
// strings: 

void FUN_00600040(uint *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  puVar9 = param_1 + 1;
  iVar10 = 0;
  do {
    uVar7 = *puVar9;
    uVar3 = *(uint *)(*param_3 + 8);
    if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar3,&DAT_018574a8);
    }
    uVar2 = puVar9[-1];
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar3,&DAT_018574b8);
    }
    iVar4 = *(int *)(*param_3 + 4);
    if (*(uint *)(iVar4 + uVar2 * 0xc + 8) < *(uint *)(iVar4 + uVar7 * 0xc + 8)) {
      iVar4 = iVar10;
      do {
        iVar8 = iVar4;
        *(uint *)((int)param_1 + iVar8 + 4) = uVar2;
        if (iVar8 == 0) {
          puVar1 = param_1;
          goto LAB_0060005c;
        }
        uVar3 = *(uint *)(*param_3 + 8);
        if (uVar3 <= uVar7) {
          puVar6 = &DAT_018574a8;
LAB_00600130:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar7,uVar3,puVar6);
        }
        uVar2 = *(uint *)((int)param_1 + iVar8 + -4);
        if (uVar3 <= uVar2) {
          puVar6 = &DAT_018574b8;
          uVar7 = uVar2;
          goto LAB_00600130;
        }
        iVar5 = *(int *)(*param_3 + 4);
        iVar4 = iVar8 + -4;
      } while (*(uint *)(iVar5 + uVar2 * 0xc + 8) < *(uint *)(iVar5 + uVar7 * 0xc + 8));
      puVar1 = (uint *)((int)param_1 + iVar8);
LAB_0060005c:
      *puVar1 = uVar7;
    }
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + 4;
    if (puVar9 == param_1 + param_2) {
      return;
    }
  } while( true );
}

