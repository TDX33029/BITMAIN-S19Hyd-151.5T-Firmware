// FUN_00e9fb54 @ 00e9fb54 size=1648 calls_out=8 calls_in=1
// strings: 

void FUN_00e9fb54(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  char *pcVar17;
  undefined4 uVar16;
  undefined1 *puVar18;
  undefined4 *local_78;
  undefined4 local_74;
  char local_70;
  char local_6f;
  byte local_6e;
  undefined4 *local_6c;
  char local_68;
  char local_67;
  byte local_66;
  undefined4 *local_64;
  char local_60;
  char local_5f;
  byte local_5e;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  char local_50;
  char cStack_4f;
  byte bStack_4e;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  code *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined1 uStack_25;
  
  iVar14 = param_2[1];
  local_78 = param_2;
  if (iVar14 == 0) {
    local_30 = (undefined4 *)0x1;
    local_34 = (undefined4 *)0x2501;
    local_38 = (char *)0x80000000;
    local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00e9fe04:
    pcVar17 = (char *)&local_38;
  }
  else {
    puVar18 = (undefined1 *)*param_2;
    param_2[1] = iVar14 + -1;
    uVar1 = *puVar18;
    *param_2 = puVar18 + 1;
    if (iVar14 + -1 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -2;
    uVar2 = puVar18[1];
    *param_2 = puVar18 + 2;
    if (iVar14 + -2 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -3;
    uVar3 = puVar18[2];
    *param_2 = puVar18 + 3;
    if (iVar14 + -3 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -4;
    uVar4 = puVar18[3];
    *param_2 = puVar18 + 4;
    if (iVar14 + -4 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -5;
    bVar5 = puVar18[4];
    *param_2 = puVar18 + 5;
    if (iVar14 + -5 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -6;
    bVar6 = puVar18[5];
    *param_2 = puVar18 + 6;
    if (iVar14 + -6 == 0) {
      local_30 = (undefined4 *)0x1;
      local_34 = (undefined4 *)0x2501;
      local_38 = (char *)0x80000000;
      local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e9fe04;
    }
    param_2[1] = iVar14 + -7;
    bVar7 = puVar18[6];
    *param_2 = puVar18 + 7;
    if (iVar14 + -7 == 0) {
LAB_00e9fdcc:
      local_6c = (undefined4 *)FUN_0062f060(0x2501,1);
      goto LAB_00e9fe18;
    }
    *param_2 = puVar18 + 8;
    param_2[1] = iVar14 + -8;
    bVar8 = puVar18[7];
    local_74 = 7;
    if (iVar14 + -8 == 0) goto LAB_00e9fdcc;
    param_2[1] = iVar14 + -9;
    bVar9 = puVar18[8];
    *param_2 = puVar18 + 9;
    FUN_00f15070(&local_70,&local_78);
    if (local_70 == '\x01') goto LAB_00e9fe18;
    if (local_6f != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(9,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    FUN_00f15070(&local_68,&local_78);
    if (local_68 != '\0') {
      local_6c = local_64;
      goto LAB_00e9fe18;
    }
    if (local_67 != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(10,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    FUN_00f15070(&local_60,&local_78);
    if (local_60 != '\0') {
      local_6c = local_5c;
      goto LAB_00e9fe18;
    }
    if (local_5f != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(0xb,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    FUN_00f15070(&local_58,&local_78);
    if ((char)local_58 != '\0') {
      local_6c = local_54;
      goto LAB_00e9fe18;
    }
    if (local_58._1_1_ != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(0xc,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    uVar10 = local_58 >> 0x10;
    FUN_00f15070(&local_40,&local_78);
    if ((char)local_40 != '\0') {
      local_6c = (undefined4 *)local_3c;
      goto LAB_00e9fe18;
    }
    if (local_40._1_1_ != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(0xd,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    FUN_00f15070(&local_50,&local_78);
    if (local_50 != '\0') {
      local_6c = local_4c;
      goto LAB_00e9fe18;
    }
    if (cStack_4f != '\x01') {
      local_6c = (undefined4 *)FUN_00e94830(0xe,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    FUN_00f15070(&local_38,&local_78);
    if ((char)local_38 != '\0') {
LAB_00e9ffac:
      local_6c = local_34;
      goto LAB_00e9fe18;
    }
    if (local_38._1_1_ == '\0') {
      local_6c = (undefined4 *)FUN_00e94830(0xf,&uStack_25,&DAT_0187c4f4);
      goto LAB_00e9fe18;
    }
    uVar11 = (uint)local_38 >> 0x10;
    FUN_00efbe38(&local_38,param_2);
    puVar18 = local_2c;
    puVar12 = local_30;
    if ((local_38 == (char *)0x1) || (FUN_00efbe38(&local_38,param_2), local_38 == (char *)0x1))
    goto LAB_00e9ffac;
    local_54 = (undefined4 *)local_2c;
    local_58 = (uint)local_30;
    if (local_2c == (undefined1 *)0x0) {
      uVar13 = 0;
      if (local_30 != (undefined4 *)0x0) {
        if (local_30 != (undefined4 *)0x1) {
          local_44 = (int)local_2c;
          local_38 = &local_50;
          local_48 = (int)local_30;
          local_50 = '\x01';
          local_3c = (code *)&DAT_018ab990;
          local_40 = (undefined4 *)&DAT_0187d078;
          local_2c = &LAB_0115452c;
          local_34 = (undefined4 *)&LAB_01579e10;
          local_30 = &local_40;
          local_6c = (undefined4 *)FUN_00e94644(&DAT_0058e458,&local_38);
          goto LAB_00e9fe18;
        }
        uVar13 = 1;
      }
      param_1[3] = uVar11 << 0x18 |
                   ((uVar10 & 0xff) << 8 | ((uint)local_40 >> 0x10 & 0xff) << 0x10 |
                   (uint)bStack_4e << 0x18) >> 8;
      param_1[2] = ((uint)bVar9 << 8 | (uint)local_6e << 0x10 | (uint)local_66 << 0x18) >> 8 |
                   (uint)local_5e << 0x18;
      *param_1 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
      param_1[1] = ((uint)bVar5 << 8 | (uint)bVar6 << 0x10 | (uint)bVar7 << 0x18) >> 8 |
                   (uint)bVar8 << 0x18;
      param_1[4] = (int)puVar12;
      param_1[5] = (int)puVar18;
      *(undefined1 *)(param_1 + 6) = uVar13;
      return;
    }
    local_3c = FUN_00fac4cc;
    local_40 = &local_58;
    FUN_00600d2c(&local_50,&DAT_00584bb4,&local_40);
    local_6c = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    pcVar17 = &local_50;
  }
  uVar15 = *(undefined4 *)(pcVar17 + 4);
  uVar16 = *(undefined4 *)(pcVar17 + 8);
  *local_6c = *(undefined4 *)pcVar17;
  local_6c[1] = uVar15;
  local_6c[2] = uVar16;
LAB_00e9fe18:
  *param_1 = (int)local_6c;
  *(undefined1 *)(param_1 + 6) = 2;
  return;
}

