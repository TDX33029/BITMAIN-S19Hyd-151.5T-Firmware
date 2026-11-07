// FUN_01a50758 @ 01a50758 size=604 calls_out=3 calls_in=1
// strings: 

void FUN_01a50758(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  undefined1 uVar10;
  int iVar11;
  int unaff_r9;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  int local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  ushort local_6a;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  byte *local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  byte *pbStack_34;
  int iStack_30;
  int local_2c;
  byte **local_28;
  
  iVar3 = *(int *)(param_3 + 0xc);
  pbVar5 = *(byte **)(param_3 + 8);
  if (iVar3 != 0) {
    bVar1 = *pbVar5;
    unaff_r9 = iVar3 + -1;
    bVar2 = *(byte *)(param_2 + 2);
    bVar14 = bVar1 <= *(byte *)(param_2 + 1);
    bVar13 = *(byte *)(param_2 + 1) == bVar1;
    *(byte **)(param_3 + 8) = pbVar5 + 1;
    *(int *)(param_3 + 0xc) = unaff_r9;
    if (!bVar14 || bVar13) {
      bVar14 = bVar2 <= bVar1;
      bVar13 = bVar1 == bVar2;
    }
    if (!bVar14 || bVar13) {
      *param_1 = 3;
      param_1[1] = local_84;
      param_1[2] = local_80;
      param_1[3] = local_7c;
      param_1[4] = local_78;
      param_1[5] = local_74;
      return;
    }
    *(byte **)(param_3 + 8) = pbVar5;
    *(int *)(param_3 + 0xc) = iVar3;
  }
  *(byte **)(param_3 + 8) = pbVar5;
  *(int *)(param_3 + 0xc) = iVar3;
  if (iVar3 != 0) {
    bVar1 = *(byte *)(param_2 + 4);
    pbVar9 = pbVar5 + 1;
    bVar2 = *pbVar5;
    iVar11 = iVar3 + -1;
    *(byte **)(param_3 + 8) = pbVar9;
    *(int *)(param_3 + 0xc) = iVar11;
    if (bVar1 == bVar2) {
      local_58 = pbVar9;
      local_54 = iVar11;
      if (iVar11 == 0) {
LAB_01a50834:
        local_49 = 0;
        local_4b = 0;
        local_40 = 0;
        local_44 = 0;
        local_4c = 0;
        local_48 = 4;
        local_50 = 2;
        uVar7 = *(uint *)(param_2 + 8);
        pbVar9 = *(byte **)(param_2 + 0xc);
        iVar11 = *(int *)(param_2 + 0x10);
        local_28 = &local_58;
        local_38 = uVar7;
        pbStack_34 = pbVar9;
        iStack_30 = iVar11;
        local_2c = param_3;
        FUN_01a5cbd0(&local_70,&local_50,&local_38);
        uVar6 = 0;
        if (local_70 != 3) {
          uVar4 = (uint)local_6a;
          local_8c = local_5c;
          uVar6 = local_64;
          uVar7 = local_68;
          iVar3 = local_60;
          uVar12 = local_6a;
          uVar8 = local_6b;
          uVar10 = local_6c;
          if (local_70 != 1) goto LAB_01a5096c;
          goto LAB_01a5091c;
        }
      }
      else {
        uVar7 = (uint)*(byte *)(param_2 + 0x15);
        uVar4 = (uint)*pbVar9;
        unaff_r9 = iVar3 + -2;
        uVar6 = (uint)*(byte *)(param_2 + 0x16);
        bVar14 = uVar4 <= uVar7;
        bVar13 = uVar7 == uVar4;
        *(byte **)(param_3 + 8) = pbVar5 + 2;
        *(int *)(param_3 + 0xc) = unaff_r9;
        if (!bVar14 || bVar13) {
          bVar14 = uVar6 <= uVar4;
          bVar13 = uVar4 == uVar6;
        }
        if (bVar14 && !bVar13) {
          *(byte **)(param_3 + 8) = pbVar9;
          *(int *)(param_3 + 0xc) = iVar11;
          goto LAB_01a50834;
        }
      }
      local_60 = unaff_r9;
      local_68 = uVar7;
      local_64 = uVar6;
      local_6c = (undefined1)iVar11;
      local_6b = SUB41(pbVar9,0);
      local_70 = 3;
      uVar4 = local_74;
LAB_01a5096c:
      param_1[5] = local_8c;
      *param_1 = local_70;
      param_1[2] = local_68;
      param_1[3] = local_64;
      param_1[4] = local_60;
      *(short *)((int)param_1 + 6) = (short)uVar4;
      *(undefined1 *)((int)param_1 + 5) = local_6b;
      *(undefined1 *)(param_1 + 1) = local_6c;
      FUN_0134aee0(0,4,4,0xc);
      FUN_012d40d0(0,local_74);
      return;
    }
    *(byte **)(param_3 + 8) = pbVar5;
    *(int *)(param_3 + 0xc) = iVar3;
  }
  uVar10 = 0;
  uVar7 = 4;
  uVar8 = 0;
  iVar3 = 0;
  uVar6 = 0;
  uVar12 = 0;
LAB_01a5091c:
  FUN_0134aee0(0,4,4,0xc);
  FUN_012d40d0(0,local_74);
  param_1[5] = local_8c;
  param_1[2] = uVar7;
  param_1[3] = uVar6;
  param_1[4] = iVar3;
  *(ushort *)((int)param_1 + 6) = uVar12;
  *(undefined1 *)((int)param_1 + 5) = uVar8;
  *(undefined1 *)(param_1 + 1) = uVar10;
  *param_1 = 1;
  return;
}

