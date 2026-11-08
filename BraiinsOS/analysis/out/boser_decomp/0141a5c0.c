// FUN_0141a5c0 @ 0141a5c0 size=700 calls_out=11 calls_in=1
// strings: 

void FUN_0141a5c0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  
  uVar9 = *(uint *)(param_1 + 0x28);
  iVar13 = *(int *)(param_1 + 0x24);
  uVar14 = *(uint *)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x18);
  uVar1 = *(ushort *)(param_1 + 0x38);
  iVar7 = iVar13;
LAB_0141a614:
  if (iVar7 == uVar9 * 0x34 + iVar13) {
    return;
  }
  piVar16 = (int *)(iVar7 + 0x20);
  FUN_0141df14(auStack_3c,param_2,piVar16);
  FUN_0141e854(auStack_54,auStack_3c);
  if (uVar9 != 0) {
    uVar3 = FUN_0137e53c(param_1,piVar16);
    uVar15 = 0;
    uVar17 = (uint)uVar1 & uVar3 & 0xffff;
LAB_0141a674:
    do {
      uVar4 = uVar17;
      uVar17 = 0;
    } while (uVar14 <= uVar4);
    puVar5 = (ushort *)(iVar11 + uVar4 * 4);
    uVar17 = (uint)*puVar5;
    uVar12 = 0;
    if (uVar17 == 0xffff) goto LAB_0141a760;
    uVar2 = puVar5[1];
    if ((uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar15) goto LAB_0141a760;
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar9 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,uVar9,&DAT_01d2f55c);
      }
      iVar6 = uVar17 * 0x34 + iVar13;
      if ((*(int *)(iVar6 + 0x20) != 0) != (*piVar16 == 0)) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          if (*(char *)(iVar6 + 0x24) == *(char *)(iVar7 + 0x24)) goto LAB_0141a858;
        }
        else if ((*(int *)(iVar6 + 0x28) == *(int *)(iVar7 + 0x28)) &&
                (iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x24),
                                            *(undefined4 *)(iVar7 + 0x24)), iVar6 == 0))
        goto LAB_0141a858;
      }
    }
    uVar15 = uVar15 + 1;
    uVar17 = uVar4 + 1;
    goto LAB_0141a674;
  }
  uVar12 = 0;
  uVar17 = param_4;
  goto LAB_0141a760;
LAB_0141a858:
  uVar12 = 1;
LAB_0141a760:
  iVar7 = iVar7 + 0x34;
  FUN_0141c42c(auStack_3c,param_1,uVar12,uVar17);
  while (iVar6 = FUN_0141ea00(auStack_3c), iVar6 != 0) {
    iVar8 = FUN_0141e8d8(auStack_54);
    if (iVar8 == 0) {
      uVar18 = FUN_00f80570(piVar16);
      if (param_4 == 0) goto LAB_0141a7f0;
      FUN_0142f0d0(param_3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    }
    else {
      uVar18 = *(undefined8 *)(iVar8 + 4);
LAB_0141a7f0:
      FUN_01ac6cbc(param_3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    }
    if (*(int *)(iVar6 + 8) == 0) {
      uVar12 = 3;
      puVar10 = &DAT_00477f7d;
    }
    else {
      FUN_01ac6cbc(param_3,0x5312dd,2);
      FUN_01ac6cbc(param_3,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
      uVar12 = 2;
      puVar10 = &DAT_00531047;
    }
    FUN_01ac6cbc(param_3,puVar10,uVar12);
  }
  goto LAB_0141a614;
}

