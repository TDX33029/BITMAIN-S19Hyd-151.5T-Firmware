// FUN_0136e864 @ 0136e864 size=520 calls_out=4 calls_in=1
// strings: assertion failed: prefix_len < ranges.len()assertion failed: self.state.uncompiled[0].last.is_none() | non-empty nodes | assertion failed: self.state.uncompiled[last].last.is_none()

void FUN_0136e864(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  bool bVar17;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar10 = *(int *)(param_2 + 4);
  uVar3 = *(uint *)(iVar10 + 0x1c);
  if (param_4 <= *(uint *)(iVar10 + 0x1c)) {
    uVar3 = param_4;
  }
  if (uVar3 == 0) {
    uVar13 = 0;
  }
  else {
    pbVar9 = (byte *)(param_3 + 1);
    uVar13 = 0;
    do {
      uVar12 = *(int *)(iVar10 + 0x18) + uVar13 * 0x10;
      if (*(char *)(uVar12 + 0xc) != '\x01') goto LAB_0136e8e4;
      uVar8 = (uint)*(byte *)(uVar12 + 0xd);
      bVar17 = uVar8 != pbVar9[-1];
      if (!bVar17) {
        uVar8 = (uint)*pbVar9;
        uVar12 = (uint)*(byte *)(uVar12 + 0xe);
      }
      if (bVar17 || uVar12 != uVar8) goto LAB_0136e8e4;
      uVar13 = uVar13 + 1;
      pbVar9 = pbVar9 + 2;
    } while (uVar3 != uVar13);
    uVar13 = uVar3;
  }
LAB_0136e8e4:
  if (param_4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prefix_len < ranges.len()assertion failed: self.state.uncompiled[0].last.is_none()"
                 ,0x2b,&DAT_018927f0);
  }
  FUN_0136ea84(&local_68,param_2,uVar13);
  if (local_68 != 0x2a) {
    *param_1 = local_68;
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    return;
  }
  if (*(int *)(iVar10 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("non-empty nodes",0xf,&DAT_018927d0);
  }
  iVar6 = *(int *)(iVar10 + 0x18) + *(int *)(iVar10 + 0x1c) * 0x10;
  if (*(char *)(iVar6 + -4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.state.uncompiled[last].last.is_none()",0x3c,&DAT_018927c0);
  }
  puVar4 = (undefined2 *)(param_3 + uVar13 * 2);
  *(undefined1 *)(iVar6 + -4) = 1;
  *(undefined2 *)(iVar6 + -3) = *puVar4;
  if (param_4 - uVar13 != 1) {
    iVar6 = *(int *)(iVar10 + 0x1c);
    iVar15 = 8;
    iVar14 = 0;
    do {
      iVar11 = iVar6 + iVar14;
      puVar16 = puVar4 + iVar14 + 1;
      uVar1 = *(undefined1 *)puVar16;
      uVar2 = *(undefined1 *)((int)puVar16 + 1);
      if (iVar11 == *(int *)(iVar10 + 0x14)) {
        FUN_013c40f0(iVar10 + 0x14);
      }
      iVar5 = *(int *)(iVar10 + 0x18) + iVar6 * 0x10;
      *(undefined4 *)(iVar5 + iVar15 + -8) = 0;
      iVar7 = iVar5 + iVar14 * 0x10;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(iVar7 + 4) = 4;
      *(undefined4 *)(iVar5 + iVar15) = 0;
      iVar15 = iVar15 + 0x10;
      *(undefined1 *)(iVar7 + 0xc) = 1;
      *(undefined1 *)(iVar7 + 0xe) = uVar2;
      *(undefined1 *)(iVar7 + 0xd) = uVar1;
      *(int *)(iVar10 + 0x1c) = iVar11 + 1;
    } while (puVar16 + 1 != puVar4 + (param_4 - uVar13));
  }
  *param_1 = 0x2a;
  return;
}

