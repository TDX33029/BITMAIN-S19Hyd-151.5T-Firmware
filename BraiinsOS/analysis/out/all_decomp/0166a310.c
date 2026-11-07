// FUN_0166a310 @ 0166a310 size=712 calls_out=2 calls_in=1
// strings: 

void FUN_0166a310(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 *puVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  undefined4 *puVar20;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 *local_5c;
  byte *local_58;
  int local_54;
  int local_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  byte **local_28;
  
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_2 + 2);
  bVar3 = *(byte *)(param_2 + 4);
  bVar4 = *(byte *)(param_2 + 0x15);
  puVar7 = (undefined2 *)((uint)&local_70 | 5);
  piVar8 = (int *)((uint)&local_70 | 4);
  bVar5 = *(byte *)(param_2 + 0x16);
  puVar20 = &local_84;
  iVar17 = *(int *)(param_3 + 0xc);
  while( true ) {
    puVar14 = (undefined4 *)&DAT_00000004;
    pbVar16 = *(byte **)(param_3 + 8);
    if (iVar17 == 0) break;
    bVar6 = *pbVar16;
    bVar19 = bVar6 <= bVar1;
    bVar18 = bVar1 == bVar6;
    *(byte **)(param_3 + 8) = pbVar16 + 1;
    *(int *)(param_3 + 0xc) = iVar17 + -1;
    if (!bVar19 || bVar18) {
      bVar19 = bVar2 <= bVar6;
      bVar18 = bVar6 == bVar2;
    }
    if (bVar19 && !bVar18) {
      *(byte **)(param_3 + 8) = pbVar16;
      *(int *)(param_3 + 0xc) = iVar17;
      break;
    }
LAB_0166a384:
    bVar18 = *(int *)(param_3 + 0xc) == iVar17;
    iVar17 = *(int *)(param_3 + 0xc);
    if (bVar18) {
      param_1[1] = 0;
      param_1[2] = 4;
      *param_1 = 2;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
  }
  *(byte **)(param_3 + 8) = pbVar16;
  *(int *)(param_3 + 0xc) = iVar17;
  local_78 = 0;
  local_7c = 0;
  local_80 = 4;
  local_84 = 0;
  if (iVar17 != 0) {
    iVar10 = iVar17 + -1;
    pbVar9 = pbVar16 + 1;
    bVar6 = *pbVar16;
    *(byte **)(param_3 + 8) = pbVar9;
    *(int *)(param_3 + 0xc) = iVar10;
    if (bVar3 == bVar6) {
      local_58 = pbVar9;
      local_54 = iVar10;
      if (iVar10 == 0) {
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = 0;
        local_6c = local_6c & 0xffffff00;
      }
      else {
        *(int *)(param_3 + 0xc) = iVar17 + -2;
        bVar6 = pbVar16[1];
        *(byte **)(param_3 + 8) = pbVar16 + 2;
        bVar19 = bVar6 <= bVar4;
        bVar18 = bVar4 == bVar6;
        if (!bVar19 || bVar18) {
          bVar19 = bVar5 <= bVar6;
          bVar18 = bVar6 == bVar5;
        }
        if (!bVar19 || bVar18) goto LAB_0166a384;
        *(byte **)(param_3 + 8) = pbVar9;
        *(int *)(param_3 + 0xc) = iVar10;
        local_6c = 0;
      }
      local_60 = 0;
      local_64 = 0;
      local_68 = 4;
      local_50 = *piVar8;
      uStack_4c = piVar8[1];
      iStack_48 = piVar8[2];
      iStack_44 = piVar8[3];
      iStack_40 = piVar8[4];
      *piVar8 = local_50;
      piVar8[1] = uStack_4c;
      piVar8[2] = iStack_48;
      piVar8[3] = iStack_44;
      piVar8[4] = iStack_40;
      local_28 = &local_58;
      local_70 = 2;
      local_38 = *(undefined4 *)(param_2 + 8);
      uStack_34 = *(undefined4 *)(param_2 + 0xc);
      uStack_30 = *(undefined4 *)(param_2 + 0x10);
      iStack_2c = param_3;
      FUN_00953084(&local_50,&local_70,&local_38,&local_38,puVar20);
      local_70 = local_50;
      local_6c = uStack_4c;
      local_68 = iStack_48;
      local_64 = iStack_44;
      local_60 = iStack_40;
      local_5c = puStack_3c;
      if (local_50 != 3) {
        uVar15 = uStack_4c & 0xff;
        uVar12 = (uStack_4c >> 8 & 0xff) << 8;
        uVar11 = uStack_4c & 0xffff0000;
        iVar10 = iStack_48;
        iVar13 = iStack_40;
        puVar14 = puStack_3c;
        if (local_50 != 1) {
          *param_1 = local_50;
          param_1[1] = uVar11 | uVar12 | uVar15;
          param_1[2] = iStack_48;
          param_1[3] = iStack_44;
          param_1[4] = iStack_40;
          param_1[5] = (int)puStack_3c;
          return;
        }
        goto LAB_0166a580;
      }
      goto LAB_0166a384;
    }
    *(byte **)(param_3 + 8) = pbVar16;
    *(int *)(param_3 + 0xc) = iVar17;
  }
  iVar10 = 4;
  uVar11 = 0;
  uVar12 = 0;
  uVar15 = 0;
  iVar13 = 0;
LAB_0166a580:
  *(byte **)(param_3 + 8) = pbVar16;
  *(int *)(param_3 + 0xc) = iVar17;
  *param_1 = 3;
  if ((uVar11 != 0 || uVar12 != 0) || uVar15 != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  if (iVar13 != 0) {
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(iVar13);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(iVar13);
      return;
    }
  }
  return;
}

