// FUN_019f66a8 @ 019f66a8 size=716 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_019f66a8(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined4 local_124;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 auStack_a7 [39];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined1 local_58;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar21 = FUN_019f16d8();
  uVar7 = (uint)((ulonglong)uVar21 >> 0x20);
  local_d0 = uVar7;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = (int)uVar21;
  uVar21 = thunk_FUN_01bee35a(1,0x2c0);
  puVar14 = (uint *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  local_ec = 0;
  local_f0 = 0;
  local_f8 = 0;
  uVar16 = *(undefined4 *)(param_1 + 0x1c);
  if (puVar9 == &DAT_3b9aca00) {
    uVar16 = 0;
    puVar19 = (undefined1 *)0x0;
  }
  else {
    puVar19 = puVar9;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  if (puVar9 == &DAT_3b9aca00) {
    uVar12 = 10;
  }
  local_f4 = 4;
  if ((char)puVar14[4] == '\0') {
    FUN_019ae6ac(&local_d0);
    *puVar14 = local_d0;
    puVar14[1] = local_cc;
    puVar14[2] = local_c8;
    puVar14[3] = local_c4;
    *(undefined1 *)(puVar14 + 4) = 1;
  }
  uVar8 = *puVar14;
  uVar10 = puVar14[1];
  uVar4 = puVar14[2];
  uVar5 = puVar14[3];
  *puVar14 = uVar8 + 1;
  puVar14[1] = uVar10 + (0xfffffffe < uVar8);
  local_d0 = local_f8;
  local_cc = local_f4;
  local_c8 = local_f0;
  local_c4 = local_ec;
  local_c0 = &DAT_0056d238;
  uStack_bc = 0;
  local_b8 = (undefined1 *)0x0;
  uStack_b4 = 0;
  FUN_01bed4e2((uint)&local_f8 | 7,&local_d0,0x20);
  piVar20 = *(int **)(param_1 + 0x28);
  do {
    iVar6 = *piVar20;
    bVar2 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar2);
  *piVar20 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_019f6974:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19f6974);
    (*pcVar1)();
  }
  piVar15 = *(int **)(param_1 + 0x30);
  uVar18 = *(undefined4 *)(param_1 + 8);
  uVar13 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  if (piVar15 != (int *)0x0) {
    do {
      iVar6 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_019f6974;
    local_124 = *(undefined4 *)(param_1 + 0x34);
  }
  piVar17 = *(int **)(param_1 + 0x38);
  if (piVar17 != (int *)0x0) {
    do {
      iVar6 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_019f6974;
    param_1 = *(int *)(param_1 + 0x3c);
  }
  FUN_01bed4e2(auStack_a7,&local_f8,0x27);
  local_cc = 1;
  local_d0 = 1;
  local_4c = local_124;
  local_68 = 0;
  local_a8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  local_5c = 0;
  local_70 = 0;
  local_c8 = uVar18;
  local_c4 = uVar13;
  local_c0 = (undefined4 *)uVar12;
  uStack_bc = uVar16;
  local_b8 = puVar19;
  local_b0 = piVar20;
  local_ac = uVar11;
  local_80 = uVar8;
  local_7c = uVar10;
  local_78 = uVar4;
  local_74 = uVar5;
  local_6c = puVar3;
  local_50 = piVar15;
  local_48 = piVar17;
  local_44 = param_1;
  local_3c = param_2;
  iVar6 = thunk_FUN_01be5118(0xa8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar6,&local_d0,0xa8);
  return CONCAT44(uVar7,iVar6);
}

