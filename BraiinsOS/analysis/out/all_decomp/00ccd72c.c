// FUN_00ccd72c @ 00ccd72c size=488 calls_out=3 calls_in=1
// strings: 

void FUN_00ccd72c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  uint unaff_r10;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  iVar6 = param_2[10];
  uVar10 = param_2[9];
  if (iVar6 == 0) {
    local_38 = 1;
  }
  else {
    local_38 = thunk_FUN_016d4a50(iVar6);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  local_34 = iVar6;
  FUN_016dd1aa(local_38,uVar10,iVar6);
  bVar1 = *(byte *)(param_2 + 0x17);
  uVar2 = *(undefined1 *)(param_2 + 0xd);
  iVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar5 = param_2[0x13];
  uVar10 = param_2[0x14];
  uVar13 = param_2[0x15];
  uVar17 = *(undefined8 *)(param_2 + 6);
  local_3c = param_2[0x16];
  uVar11 = *param_2;
  uVar14 = param_2[1];
  if (param_2[2] == -0x80000000) {
    puVar3 = &local_50;
    uVar15 = 0x80000000;
    local_50 = uVar7;
    local_4c = iVar6;
    local_44 = uVar14;
    local_40 = uVar11;
    local_48._0_1_ = bVar1;
  }
  else {
    unaff_r10 = param_2[4];
    if ((int)(unaff_r10 | unaff_r10 << 1) < 0) {
      uVar10 = 0;
      iVar9 = iVar6;
LAB_00ccd7f0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,iVar9);
    }
    iVar9 = unaff_r10 << 1;
    local_48 = (uint)bVar1;
    if (iVar9 == 0) {
      uVar15 = 0;
      puVar3 = (undefined4 *)&DAT_00000001;
      local_50 = uVar7;
      local_4c = iVar6;
      local_44 = uVar14;
      local_40 = uVar11;
    }
    else {
      puVar12 = (undefined2 *)param_2[3];
      local_50 = uVar7;
      local_4c = iVar6;
      local_44 = uVar14;
      local_40 = uVar11;
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(iVar9);
      if (puVar3 == (undefined4 *)0x0) {
        uVar10 = 1;
        goto LAB_00ccd7f0;
      }
      uVar15 = unaff_r10;
      if (unaff_r10 == 0) {
      }
      else {
        uVar4 = 0;
        do {
          bVar16 = iVar9 != 0;
          if (bVar16) {
            iVar6 = uVar4 * 2;
            iVar9 = iVar9 + -2;
            uVar4 = uVar4 + 1;
            *(undefined2 *)((int)puVar3 + iVar6) = *puVar12;
            puVar12 = puVar12 + 1;
          }
        } while (bVar16 && unaff_r10 != uVar4);
      }
    }
    uVar14 = param_2[5];
  }
  param_1[0x15] = uVar13;
  param_1[10] = local_34;
  param_1[9] = local_38;
  param_1[8] = local_34;
  uVar7 = param_2[0xf];
  uVar11 = param_2[0x10];
  uVar13 = param_2[0x11];
  uVar8 = param_2[0x12];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar11;
  param_1[0x11] = uVar13;
  param_1[0x12] = uVar8;
  param_1[0x16] = local_3c;
  param_1[0x14] = uVar10;
  param_1[0x13] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  param_1[0xc] = local_50;
  param_1[0xb] = local_4c;
  *(byte *)(param_1 + 0x17) = (byte)local_48;
  *param_1 = local_40;
  *(undefined8 *)(param_1 + 6) = uVar17;
  param_1[1] = local_44;
  param_1[2] = uVar15;
  param_1[3] = puVar3;
  param_1[4] = unaff_r10;
  param_1[5] = uVar14;
  return;
}

