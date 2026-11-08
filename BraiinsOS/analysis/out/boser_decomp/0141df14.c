// FUN_0141df14 @ 0141df14 size=352 calls_out=3 calls_in=2
// strings: 

void FUN_0141df14(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint unaff_r5;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = *(uint *)(param_2 + 0x28);
  if (uVar9 != 0) {
    uVar4 = FUN_0137e53c(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x38);
    uVar10 = 0;
    iVar11 = *(int *)(param_2 + 0x18);
    uVar12 = *(uint *)(param_2 + 0x1c);
    iVar13 = *(int *)(param_2 + 0x24);
    uVar3 = (uint)uVar1 & uVar4 & 0xffff;
LAB_0141df64:
    do {
      uVar5 = uVar3;
      uVar3 = 0;
    } while (uVar12 <= uVar5);
    puVar8 = (ushort *)(iVar11 + uVar5 * 4);
    unaff_r5 = (uint)*puVar8;
    uVar6 = 0;
    if ((unaff_r5 == 0xffff) ||
       (uVar2 = puVar8[1], (uVar5 - (uVar2 & uVar1) & (uint)uVar1) < uVar10)) goto LAB_0141e044;
    if ((uint)uVar2 == (uVar4 & 0xffff)) {
      if (uVar9 <= unaff_r5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(unaff_r5,uVar9,&DAT_01d2f55c);
      }
      iVar7 = iVar13 + unaff_r5 * 0x30;
      if ((*(int *)(iVar7 + 0x1c) != 0) != (*param_3 == 0)) {
        if (*(int *)(iVar7 + 0x1c) == 0) {
          if (*(char *)(iVar7 + 0x20) == (char)param_3[1]) goto LAB_0141e05c;
        }
        else if ((*(int *)(iVar7 + 0x24) == param_3[2]) &&
                (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar7 + 0x20),param_3[1]), iVar7 == 0))
        goto LAB_0141e05c;
      }
    }
    uVar10 = uVar10 + 1;
    uVar3 = uVar5 + 1;
    goto LAB_0141df64;
  }
  uVar6 = 0;
LAB_0141e044:
  *param_1 = uVar6;
  param_1[1] = unaff_r5;
  param_1[2] = param_2;
  return;
LAB_0141e05c:
  uVar6 = 1;
  goto LAB_0141e044;
}

