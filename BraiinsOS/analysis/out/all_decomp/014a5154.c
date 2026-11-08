// FUN_014a5154 @ 014a5154 size=568 calls_out=4 calls_in=3
// strings: 

void FUN_014a5154(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  int local_90;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x98);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x98);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  bVar25 = *(char *)((int)param_1 + 0x7a) == '\x01';
  if (bVar25) {
    local_38 = *(undefined4 *)((int)param_1 + 0x7b);
    uStack_34 = *(undefined4 *)((int)param_1 + 0x7f);
    uStack_30 = *(undefined4 *)((int)param_1 + 0x83);
    uStack_2c = *(undefined4 *)((int)param_1 + 0x87);
  }
  uVar6 = param_1[0xe];
  uVar15 = param_1[0xf];
  uVar7 = param_1[0x12];
  uVar8 = param_1[0x10];
  uVar9 = param_1[0x14];
  uVar10 = param_1[10];
  uVar11 = param_1[0xb];
  uVar12 = param_1[0xc];
  uVar13 = param_1[0xd];
  uVar16 = param_1[0x13];
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  uVar20 = *(undefined4 *)((int)param_1 + 0x76);
  uVar2 = *(undefined1 *)((int)param_1 + 0x8b);
  uVar3 = *(undefined1 *)((int)param_1 + 0x75);
  uVar4 = *(undefined1 *)(param_1 + 0x1d);
  if (param_1[0x1a] == -0x80000000) {
    iVar19 = -0x80000000;
  }
  else {
    iVar19 = param_1[0x1c];
    uVar14 = param_1[0x1b];
    if (iVar19 == 0) {
      local_90 = 1;
    }
    else {
      local_90 = thunk_FUN_016d4a50(iVar19);
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar19);
      }
    }
    FUN_016dd1aa(local_90,uVar14,iVar19);
  }
  uVar14 = param_1[0x18];
  uVar24 = param_1[0x16];
  uVar21 = param_1[0x17];
  uVar17 = param_1[1];
  uVar18 = param_1[2];
  uVar22 = param_1[3];
  uVar23 = param_1[4];
  puVar5[2] = *param_1;
  puVar5[3] = uVar17;
  puVar5[4] = uVar18;
  puVar5[5] = uVar22;
  puVar5[6] = uVar23;
  uVar17 = param_1[6];
  uVar18 = param_1[7];
  uVar22 = param_1[8];
  uVar23 = param_1[9];
  puVar5[7] = param_1[5];
  puVar5[8] = uVar17;
  puVar5[9] = uVar18;
  puVar5[10] = uVar22;
  puVar5[0xb] = uVar23;
  puVar5[0x1d] = local_90;
  puVar5[0xc] = uVar10;
  puVar5[0xd] = uVar11;
  puVar5[0xe] = uVar12;
  puVar5[0xf] = uVar13;
  puVar5[0x12] = uVar8;
  puVar5[0x16] = uVar9;
  puVar5[0x10] = uVar6;
  puVar5[0x11] = uVar15;
  puVar5[0x1a] = uVar14;
  puVar5[0x14] = uVar7;
  puVar5[0x15] = uVar16;
  *(bool *)((int)puVar5 + 0x82) = bVar25;
  *(undefined4 *)((int)puVar5 + 0x7e) = uVar20;
  *(undefined4 *)((int)puVar5 + 0x83) = local_38;
  *(undefined1 *)((int)puVar5 + 0x7d) = uVar3;
  *(undefined1 *)(puVar5 + 0x25) = uVar1;
  puVar5[0x18] = uVar24;
  puVar5[0x19] = uVar21;
  puVar5[0x1e] = iVar19;
  puVar5[0x1c] = iVar19;
  *(undefined1 *)(puVar5 + 0x1f) = uVar4;
  *(undefined4 *)((int)puVar5 + 0x87) = uStack_34;
  *(undefined4 *)((int)puVar5 + 0x8b) = uStack_30;
  *(undefined4 *)((int)puVar5 + 0x8f) = uStack_2c;
  *(undefined1 *)((int)puVar5 + 0x93) = uVar2;
  return;
}

