// FUN_00660818 @ 00660818 size=244 calls_out=1 calls_in=2
// strings: 

void FUN_00660818(uint *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  uVar6 = *param_2;
  uVar4 = *(uint *)(*param_3 + 8);
  if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,uVar4,&DAT_01c03e28);
  }
  uVar3 = param_2[-1];
  if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,uVar4,&DAT_01c03e38);
  }
  iVar5 = *(int *)(*param_3 + 4);
  if (*(uint *)(iVar5 + uVar3 * 0xc + 8) < *(uint *)(iVar5 + uVar6 * 0xc + 8)) {
    puVar7 = &DAT_01c03e28;
    puVar1 = param_2 + -1;
    do {
      puVar2 = puVar1;
      puVar2[1] = uVar3;
      if (puVar2 == param_1) break;
      uVar4 = *(uint *)(*param_3 + 8);
      if (uVar4 <= uVar6) {
LAB_006608d4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar4,puVar7);
      }
      uVar3 = puVar2[-1];
      if (uVar4 <= uVar3) {
        uVar6 = uVar3;
        puVar7 = &DAT_01c03e38;
        goto LAB_006608d4;
      }
      iVar5 = *(int *)(*param_3 + 4);
      puVar1 = puVar2 + -1;
    } while (*(uint *)(iVar5 + uVar3 * 0xc + 8) < *(uint *)(iVar5 + uVar6 * 0xc + 8));
    *puVar2 = uVar6;
  }
  return;
}

