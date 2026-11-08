// FUN_00bfdfa8 @ 00bfdfa8 size=436 calls_out=1 calls_in=2
// strings: 

void FUN_00bfdfa8(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulonglong *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_r12;
  uint extraout_r12;
  uint unaff_lr;
  ulonglong uVar10;
  
  piVar5 = (int *)param_2[1];
  uVar8 = 0;
  uVar6 = param_3[4];
  iVar9 = *(int *)*param_2;
  puVar4 = (ulonglong *)param_2[2];
  iVar1 = 1;
  if (*piVar5 != 1) {
    iVar1 = piVar5[1];
  }
  uVar2 = *(uint *)(iVar9 + 0x10);
  if (*piVar5 == 1) {
    iVar1 = piVar5[2];
  }
  piVar5 = *(int **)(uVar2 + 0x58);
  *(undefined4 *)puVar4 = 0;
  if (uVar6 != 0) {
    uVar2 = (uint)*(byte *)(piVar5 + 7);
  }
  if ((uVar6 == 0 || (uVar2 & 1) == 0) &&
     ((uVar2 = param_3[5], (uint)param_3[3] <= uVar2 || ((*(byte *)(piVar5 + 8) & 2) == 0)))) {
    if (*piVar5 == 1) {
      uVar7 = uVar2 - uVar6;
      if (uVar2 < uVar6) {
        uVar7 = 0;
      }
      if ((uVar7 < (uint)piVar5[1]) ||
         ((((*param_3 - 1U < 2 || ((*(byte *)(piVar5 + 7) & 1) != 0)) &&
           ((*(byte *)(piVar5 + 8) & 2) != 0)) && ((piVar5[2] == 1 && ((uint)piVar5[3] < uVar7))))))
      goto LAB_00bfe130;
    }
    unaff_lr = 0xbfe0a4;
    uVar10 = (**(code **)(*(int *)(iVar9 + 0xc) + 0x30))
                       (*(int *)(iVar9 + 8) +
                        (*(int *)(*(int *)(iVar9 + 0xc) + 8) - 1U & 0xfffffff8) + 8,iVar1,param_3,
                        *(undefined4 *)((int)puVar4 + 0xc),(int)puVar4[2]);
    piVar5 = (int *)(uVar10 >> 0x20);
    uVar8 = 0;
    *puVar4 = uVar10;
    in_r12 = extraout_r12;
    if ((uVar10 & 1) != 0) {
      uVar6 = 0;
      piVar3 = *(int **)(*(int *)((int)puVar4 + 0x14) + 0x10);
      uVar2 = 1;
      if (piVar3 != (int *)&DAT_00000001) {
        if (piVar3 <= piVar5) goto LAB_00bfe130;
        uVar2 = (int)piVar5 << 1 | 1;
        uVar6 = (int)piVar5 << 1;
      }
      if (uVar6 < (uint)puVar4[2]) {
        iVar1 = *(int *)(*(int *)((int)puVar4 + 0xc) + uVar6 * 4);
        if (((iVar1 != 0) && (uVar2 < (uint)puVar4[2])) &&
           (iVar9 = *(int *)(*(int *)((int)puVar4 + 0xc) + uVar2 * 4), iVar9 != 0)) {
          in_r12 = iVar9 - 1;
          unaff_lr = iVar1 - 1;
          if (in_r12 < unaff_lr) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
          }
          uVar8 = 1;
        }
      }
    }
  }
LAB_00bfe130:
  *param_1 = uVar8;
  param_1[1] = unaff_lr;
  param_1[2] = in_r12;
  param_1[3] = piVar5;
  return;
}

