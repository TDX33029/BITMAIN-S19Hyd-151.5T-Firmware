// FUN_0142eb5c @ 0142eb5c size=1356 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

void FUN_0142eb5c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 auStack_3c [24];
  
  iVar18 = *(int *)(param_1 + 0x18);
  uVar24 = 0x34;
  uVar19 = *(uint *)(param_1 + 0x28);
  iVar22 = *(int *)(param_1 + 0x24);
  uVar25 = *(uint *)(param_1 + 0x1c);
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar26 = *(uint *)(param_2 + 0x28);
  uVar23 = *(uint *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x24);
  uVar6 = *(uint *)(param_2 + 0x34);
  iVar20 = *(int *)(param_2 + 0x30);
  uVar2 = *(ushort *)(param_2 + 0x38);
  iVar13 = iVar22;
LAB_0142ebd8:
  if (iVar13 == uVar19 * 0x34 + iVar22) {
    return;
  }
  piVar7 = (int *)(iVar13 + 0x20);
  if (uVar26 != 0) {
    uVar8 = FUN_013b3258(param_2,piVar7);
    uVar24 = 0;
    uVar29 = (uint)uVar2 & uVar8 & 0xffff;
LAB_0142ec18:
    do {
      uVar28 = uVar29;
      uVar29 = 0;
    } while (uVar23 <= uVar28);
    puVar9 = (ushort *)(iVar4 + uVar28 * 4);
    uVar29 = (uint)*puVar9;
    if ((uVar29 == 0xffff) || (uVar3 = puVar9[1], (uVar28 - (uVar3 & uVar2) & (uint)uVar2) < uVar24)
       ) goto LAB_0142ecfc;
    if ((uint)uVar3 == (uVar8 & 0xffff)) {
      if (uVar26 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar29,uVar26,&DAT_01cf5368);
      }
      iVar10 = iVar5 + uVar29 * 0x30;
      if ((*(int *)(iVar10 + 0x1c) != 0) != (*piVar7 == 0)) {
        if (*(int *)(iVar10 + 0x1c) == 0) {
          if (*(char *)(iVar10 + 0x20) == *(char *)(iVar13 + 0x24)) goto LAB_0142eff0;
        }
        else if ((*(int *)(iVar10 + 0x24) == *(int *)(iVar13 + 0x28)) &&
                (iVar10 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + 0x20),
                                             *(undefined4 *)(iVar13 + 0x24)), iVar10 == 0))
        goto LAB_0142eff0;
      }
    }
    uVar24 = uVar24 + 1;
    uVar29 = uVar28 + 1;
    goto LAB_0142ec18;
  }
LAB_0142ecfc:
  puVar11 = &local_40;
  uVar29 = 0xffffffff;
  uVar28 = 2;
  uVar8 = 2;
  goto LAB_0142ed0c;
LAB_0142eff0:
  if (uVar26 <= uVar29) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar29,uVar26,&DAT_01cf52b8);
  }
  uVar28 = 0;
  piVar16 = (int *)(iVar5 + uVar29 * 0x30);
  iVar10 = *piVar16;
  uVar8 = piVar16[2];
  local_40 = 0;
  if (iVar10 != 0) {
    local_40 = 2 - iVar10;
  }
  puVar11 = &local_44;
LAB_0142ed0c:
  *puVar11 = uVar8;
  if (uVar19 != 0) {
    uVar8 = FUN_013b3258(param_1,piVar7);
    uVar27 = 0;
    uVar24 = (uint)uVar1 & uVar8 & 0xffff;
LAB_0142ed40:
    do {
      uVar12 = uVar24;
      uVar24 = 0;
    } while (uVar25 <= uVar12);
    puVar9 = (ushort *)(iVar18 + uVar12 * 4);
    uVar24 = (uint)*puVar9;
    uVar21 = 0;
    if ((uVar24 == 0xffff) || (uVar3 = puVar9[1], (uVar12 - (uVar3 & uVar1) & (uint)uVar1) < uVar27)
       ) goto LAB_0142ee30;
    if ((uint)uVar3 == (uVar8 & 0xffff)) {
      if (uVar19 <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar24,uVar19,&DAT_01cf5368);
      }
      iVar10 = uVar24 * 0x34 + iVar22;
      if ((*(int *)(iVar10 + 0x20) != 0) != (*piVar7 == 0)) {
        if (*(int *)(iVar10 + 0x20) == 0) {
          if (*(char *)(iVar10 + 0x24) == *(char *)(iVar13 + 0x24)) goto LAB_0142f020;
        }
        else if ((*(int *)(iVar10 + 0x28) == *(int *)(iVar13 + 0x28)) &&
                (iVar10 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + 0x24),
                                             *(undefined4 *)(iVar13 + 0x24)), iVar10 == 0))
        goto LAB_0142f020;
      }
    }
    uVar27 = uVar27 + 1;
    uVar24 = uVar12 + 1;
    goto LAB_0142ed40;
  }
  uVar21 = 0;
LAB_0142ee30:
  iVar13 = iVar13 + 0x34;
  FUN_0142f9bc(auStack_3c,param_1,uVar21,uVar24);
  uVar8 = local_44;
  piVar16 = (int *)(iVar5 + uVar29 * 0x30);
  uVar24 = local_40;
  while( true ) {
    uVar30 = FUN_01430b30(auStack_3c);
    iVar10 = (int)uVar30;
    if (iVar10 == 0) break;
    if (uVar28 == 2) {
      uVar30 = FUN_00f80570(piVar7);
      if (param_4 == 0) {
        FUN_01ac6cbc(param_3,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
      }
      else {
        FUN_0142f0d0(param_3,(int)uVar30);
      }
      uVar28 = 2;
    }
    else {
      if ((uVar28 & 1) == 0) {
        if (uVar26 <= uVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar29,uVar26,&DAT_01cf5508);
        }
        if (uVar24 == 0) {
          uVar24 = 2;
          uVar28 = 2;
        }
        else {
          if (*piVar16 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf5518);
          }
          local_48 = piVar16[1];
          uVar28 = 1;
        }
        piVar15 = piVar16 + 3;
      }
      else {
        if (uVar6 <= local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_48,uVar6,&DAT_01cf5528);
        }
        uVar27 = (uint)((ulonglong)uVar30 >> 0x20);
        if (uVar24 == 1) {
          uVar27 = uVar8;
        }
        uVar28 = 2;
        iVar14 = iVar20 + local_48 * 0x20;
        if (uVar24 == 1 && local_48 == uVar27) {
          uVar24 = 2;
          local_48 = uVar8;
        }
        else if (*(int *)(iVar14 + 8) == 1) {
          local_48 = *(uint *)(iVar14 + 0xc);
          uVar28 = 1;
        }
        piVar15 = (int *)(iVar14 + 0x10);
      }
      FUN_01ac6cbc(param_3,piVar15[1],piVar15[2]);
    }
    if (*(int *)(iVar10 + 8) == 0) {
      uVar21 = 3;
      puVar17 = &DAT_00477f7d;
    }
    else {
      FUN_01ac6cbc(param_3,0x5312dd,2);
      FUN_01ac6cbc(param_3,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      uVar21 = 2;
      puVar17 = &DAT_00531047;
    }
    FUN_01ac6cbc(param_3,puVar17,uVar21);
  }
  goto LAB_0142ebd8;
LAB_0142f020:
  uVar21 = 1;
  goto LAB_0142ee30;
}

