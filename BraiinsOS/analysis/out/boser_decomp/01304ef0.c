// FUN_01304ef0 @ 01304ef0 size=680 calls_out=3 calls_in=1
// strings: 

void FUN_01304ef0(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  byte *pbVar10;
  uint uVar11;
  undefined2 extraout_r12;
  undefined2 uVar12;
  undefined6 uVar13;
  byte *local_70;
  int local_6c;
  char local_48;
  ushort uStack_47;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_3b;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_70 = param_2;
  local_6c = param_3;
  FUN_01304258(&local_48,&local_70);
  if ((local_48 == '\x01') && (local_6c != 0)) {
    local_6c = local_6c + -1;
    iVar6 = CONCAT13((undefined1)uStack_44,CONCAT12(uStack_45,uStack_47));
    if (*local_70 == 0x3a) {
      local_3c = 1;
      uStack_40 = 10;
      local_48 = '\0';
      uStack_47 = 0;
      uStack_45 = 0;
      local_70 = local_70 + 1;
      uVar13 = FUN_01304b0c(&local_48,&local_70);
      uVar5 = (undefined2)((uint6)uVar13 >> 0x20);
      if (((uint)uVar13 & 0xffff) == 1) {
        if (local_6c == 0) {
          uVar2 = 0;
          uVar12 = extraout_r12;
          goto LAB_01304f90;
        }
        goto LAB_0130508c;
      }
    }
  }
  local_70 = param_2 + 1;
  local_6c = param_3 + -1;
  if ((*param_2 == 0x5b) && (FUN_013046c0(&local_48,&local_70), local_48 == '\x01')) {
    uVar5 = CONCAT11((undefined1)uStack_44,uStack_45);
    uVar11 = (uint)uStack_47;
    local_30 = CONCAT13((undefined1)uStack_40,uStack_44._1_3_);
    uStack_2c = CONCAT13(local_3c,uStack_40._1_3_);
    uStack_28 = local_3b;
    if (local_6c != 0) {
      bVar1 = *local_70;
      if (bVar1 == 0x25) {
        iVar6 = local_6c + -1;
        if (iVar6 == 0) goto LAB_0130508c;
        pbVar10 = (byte *)0x0;
        iVar8 = 1;
        do {
          pbVar3 = local_70 + iVar8;
          uVar7 = *pbVar3 - 0x30;
          if (9 < uVar7) {
            if (iVar8 != 1) goto LAB_013050bc;
LAB_013050c8:
            bVar9 = false;
            goto LAB_013050d0;
          }
          uVar4 = (uint)(ZEXT48(pbVar10) * 10);
          if (((int)(ZEXT48(pbVar10) * 10 >> 0x20) != 0) ||
             (pbVar10 = (byte *)(uVar7 + uVar4), CARRY4(uVar7,uVar4))) goto LAB_013050c8;
          iVar6 = iVar6 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar6 != 0);
        pbVar3 = local_70 + local_6c;
        iVar6 = 0;
LAB_013050bc:
        bVar9 = true;
        local_70 = pbVar3;
        local_6c = iVar6;
LAB_013050d0:
        if (local_6c == 0) goto LAB_0130508c;
        bVar1 = *local_70;
        param_2 = (byte *)0x0;
        if (bVar9) {
          param_2 = pbVar10;
        }
      }
      else {
        param_2 = (byte *)0x0;
      }
      if ((bVar1 == 0x5d) && (local_6c != 1)) {
        pbVar10 = local_70 + 1;
        local_6c = local_6c + -2;
        local_70 = local_70 + 2;
        if (*pbVar10 == 0x3a) {
          local_3c = 1;
          uStack_40 = 10;
          local_48 = '\0';
          uStack_47 = 0;
          uStack_45 = 0;
          uVar13 = FUN_01304b0c(&local_48,&local_70);
          uVar12 = (undefined2)((uint6)uVar13 >> 0x20);
          if ((((uint)uVar13 & 0xffff) == 1) && (local_6c == 0)) {
            iVar6 = uVar11 << 0x10;
            local_48 = (char)local_30;
            uStack_47 = (ushort)((uint)local_30 >> 8);
            uStack_45 = (undefined1)((uint)local_30 >> 0x18);
            uStack_44 = uStack_2c;
            uStack_40 = uStack_28;
            uVar2 = 1;
LAB_01304f90:
            param_1[0xe] = uVar12;
            *(uint *)(param_1 + 4) = CONCAT13(uStack_45,CONCAT21(uStack_47,local_48));
            *(undefined4 *)(param_1 + 6) = uStack_44;
            *(undefined4 *)(param_1 + 8) = uStack_40;
            *(undefined4 *)(param_1 + 10) = 0;
            *(byte **)(param_1 + 0xc) = param_2;
            param_1[3] = uVar5;
            *(int *)(param_1 + 1) = iVar6;
            *param_1 = uVar2;
            return;
          }
        }
      }
    }
  }
LAB_0130508c:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

