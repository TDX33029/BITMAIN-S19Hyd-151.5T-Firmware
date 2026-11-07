// FUN_010b246c @ 010b246c size=484 calls_out=3 calls_in=3
// strings: 

void FUN_010b246c(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 unaff_r6;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  uVar8 = *(uint *)(param_2 + 0x28);
  if (uVar8 != 0) {
    uVar4 = FUN_010b0a24(param_2,param_3);
    iVar9 = param_3[1];
    uVar1 = *(ushort *)(param_2 + 0x38);
    uVar16 = 0;
    iVar17 = *param_3;
    iVar10 = param_3[2];
    iVar3 = param_3[1];
    iVar15 = *(int *)(param_2 + 0x18);
    uVar13 = *(uint *)(param_2 + 0x1c);
    iVar5 = *(int *)(param_2 + 0x24);
    uVar14 = (uint)uVar1 & uVar4 & 0xffff;
LAB_010b24fc:
    do {
      uVar6 = uVar14;
      uVar14 = 0;
    } while (uVar13 <= uVar6);
    puVar12 = (ushort *)(iVar15 + uVar6 * 4);
    uVar14 = (uint)*puVar12;
    uVar11 = 0;
    if ((uVar14 == 0xffff) || (uVar2 = puVar12[1], (uVar6 - (uVar2 & uVar1) & (uint)uVar1) < uVar16)
       ) goto LAB_010b25c8;
    if ((uint)uVar2 == (uVar4 & 0xffff)) {
      if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,uVar8,&DAT_018a6bf0);
      }
      iVar7 = uVar14 * 0x34 + iVar5;
      if ((*(int *)(iVar7 + 0x20) != 0) != (iVar17 == 0)) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          if (*(char *)(iVar7 + 0x24) == (char)iVar3) {
            *param_1 = 1;
            param_1[1] = uVar14;
            param_1[2] = param_2;
            return;
          }
        }
        else if ((*(int *)(iVar7 + 0x28) == iVar10) &&
                (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x24),iVar9), iVar7 == 0))
        goto code_r0x010b25c0;
      }
    }
    uVar16 = uVar16 + 1;
    uVar14 = uVar6 + 1;
    goto LAB_010b24fc;
  }
  iVar17 = *param_3;
  *param_1 = 0;
  param_1[1] = unaff_r6;
  param_1[2] = param_2;
joined_r0x010b2618:
  if (iVar17 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010b2600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar17 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  return;
code_r0x010b25c0:
  uVar11 = 1;
LAB_010b25c8:
  *param_1 = uVar11;
  param_1[1] = uVar14;
  param_1[2] = param_2;
  goto joined_r0x010b2618;
}

