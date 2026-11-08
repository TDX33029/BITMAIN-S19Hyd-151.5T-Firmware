// FUN_014c9140 @ 014c9140 size=504 calls_out=5 calls_in=1
// strings: 

void FUN_014c9140(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  uVar15 = *(uint *)(param_2 + 0x28);
  if (uVar15 != 0) {
    uVar4 = FUN_014c1c00(param_2,param_3);
    iVar8 = *param_3;
    iVar9 = param_3[1];
    uVar14 = 0;
    uVar1 = *(ushort *)(param_2 + 0x38);
    iVar16 = *(int *)(param_2 + 0x24);
    iVar10 = param_3[2];
    iVar12 = *(int *)(param_2 + 0x18);
    uVar13 = *(uint *)(param_2 + 0x1c);
    iVar3 = param_3[1];
    uVar11 = (uint)uVar1 & uVar4 & 0xffff;
LAB_014c91d0:
    do {
      uVar5 = uVar11;
      uVar11 = 0;
    } while (uVar13 <= uVar5);
    puVar6 = (ushort *)(iVar12 + uVar5 * 4);
    uVar11 = (uint)*puVar6;
    if ((uVar11 == 0xffff) || (uVar2 = puVar6[1], (uVar5 - (uVar2 & uVar1) & (uint)uVar1) < uVar14))
    goto LAB_014c92e8;
    if ((uint)uVar2 == (uVar4 & 0xffff)) {
      if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,uVar15,&DAT_018a6bf0);
      }
      iVar7 = uVar11 * 0x34 + iVar16;
      if ((*(int *)(iVar7 + 0x20) != 0) != (iVar8 == 0)) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          if (*(char *)(iVar7 + 0x24) == (char)iVar3) goto LAB_014c927c;
        }
        else if ((*(int *)(iVar7 + 0x28) == iVar10) &&
                (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x24),iVar9), iVar7 == 0))
        goto LAB_014c927c;
      }
    }
    uVar14 = uVar14 + 1;
    uVar11 = uVar5 + 1;
    goto LAB_014c91d0;
  }
LAB_014c92e8:
  *(undefined1 *)(param_1 + 4) = 2;
LAB_014c92f4:
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  }
  return;
LAB_014c927c:
  piVar17 = (int *)(iVar16 + uVar11 * 0x34);
  if (*piVar17 == 1) {
    FUN_01442274(param_2,piVar17[1]);
  }
  FUN_014428b8(auStack_58,param_2,uVar5,uVar11);
  *param_1 = local_4c;
  param_1[1] = uStack_48;
  param_1[2] = uStack_44;
  param_1[3] = uStack_40;
  param_1[4] = uStack_3c;
  if (local_38 != 0) {
    (**(code **)(local_38 + 0x10))(auStack_2c,local_34,local_30);
  }
  goto LAB_014c92f4;
}

