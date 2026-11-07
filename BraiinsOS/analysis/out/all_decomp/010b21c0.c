// FUN_010b21c0 @ 010b21c0 size=612 calls_out=5 calls_in=2
// strings: 

void FUN_010b21c0(int *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  uVar15 = *(uint *)(param_2 + 0x28);
  if (uVar15 != 0) {
    uVar3 = FUN_010b0a24(param_2,param_3);
    iVar8 = *param_3;
    iVar9 = param_3[1];
    uVar14 = 0;
    iVar13 = param_3[1];
    iVar10 = param_3[2];
    iVar17 = *(int *)(param_2 + 0x24);
    iVar11 = *(int *)(param_2 + 0x18);
    uVar12 = *(uint *)(param_2 + 0x1c);
    uVar1 = *(ushort *)(param_2 + 0x38);
    uVar16 = (uint)uVar1 & uVar3 & 0xffff;
LAB_010b2250:
    do {
      uVar4 = uVar16;
      uVar16 = 0;
    } while (uVar12 <= uVar4);
    puVar5 = (ushort *)(iVar11 + uVar4 * 4);
    uVar16 = (uint)*puVar5;
    if ((uVar16 == 0xffff) || (uVar2 = puVar5[1], (uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar14))
    goto LAB_010b2374;
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar15 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar15,&DAT_018a6bf0);
      }
      iVar6 = uVar16 * 0x34 + iVar17;
      if ((*(int *)(iVar6 + 0x20) != 0) != (iVar8 == 0)) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          if (*(char *)(iVar6 + 0x24) == (char)iVar13) goto LAB_010b22fc;
        }
        else if ((*(int *)(iVar6 + 0x28) == iVar10) &&
                (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 0x24),iVar9), iVar6 == 0))
        goto LAB_010b22fc;
      }
    }
    uVar14 = uVar14 + 1;
    uVar16 = uVar4 + 1;
    goto LAB_010b2250;
  }
LAB_010b2374:
  *(undefined1 *)(param_1 + 4) = 2;
LAB_010b2384:
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  }
  return;
LAB_010b22fc:
  piVar7 = (int *)(iVar17 + uVar16 * 0x34);
  if (*piVar7 == 1) {
    iVar13 = piVar7[1];
    while (FUN_010b1bc4(auStack_58,iVar17,uVar15,param_2 + 0x2c,iVar13), iVar13 = local_4c,
          local_50 == 1) {
      (**(code **)(local_48 + 0x10))(&iStack_3c,iStack_44,iStack_40);
      iVar17 = *(int *)(param_2 + 0x24);
      uVar15 = *(uint *)(param_2 + 0x28);
    }
    (**(code **)(local_48 + 0x10))(&iStack_3c,iStack_44,iStack_40);
  }
  FUN_014428b8(auStack_58,param_2,uVar4,uVar16);
  *param_1 = local_4c;
  param_1[1] = local_48;
  param_1[2] = iStack_44;
  param_1[3] = iStack_40;
  param_1[4] = iStack_3c;
  if (local_38 != 0) {
    (**(code **)(local_38 + 0x10))(auStack_2c,local_34,local_30);
  }
  goto LAB_010b2384;
}

