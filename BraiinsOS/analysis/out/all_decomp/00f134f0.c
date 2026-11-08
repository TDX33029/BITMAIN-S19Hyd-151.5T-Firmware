// FUN_00f134f0 @ 00f134f0 size=1028 calls_out=8 calls_in=1
// strings: 

void FUN_00f134f0(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined2 unaff_r8;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined2 unaff_r10;
  byte *unaff_r11;
  undefined4 *in_r12;
  undefined4 *unaff_lr;
  undefined8 unaff_d8;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  byte *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  byte *local_50;
  byte *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 uStack_34;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar10 = (undefined4 *)*param_2;
  puVar8 = (undefined4 *)(param_2[1] + -1);
  param_2[1] = puVar8;
  if (puVar10[1] == 0) {
    local_38 = (undefined4 *)&DAT_00000001;
    local_3c = (undefined4 *)0x2501;
    local_40 = (undefined1 *)0x80000000;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f13694:
    *puVar6 = local_40;
    puVar6[1] = local_3c;
    puVar6[2] = local_38;
    goto LAB_00f136ac;
  }
  puVar10[1] = puVar10[1] + -1;
  pbVar7 = (byte *)*puVar10 + 1;
  uVar5 = (uint)*(byte *)*puVar10;
  *puVar10 = pbVar7;
  if (uVar5 == 0) {
    puVar9 = (undefined4 *)0x0;
    pbVar12 = &SUB_00000002;
    uVar4 = 0;
    local_40 = unaff_r11;
    local_3c = in_r12;
LAB_00f135ec:
    *(undefined2 *)(param_1 + 0x14) = uVar4;
    param_1[0x10] = puVar8;
    param_1[0x11] = local_40;
    param_1[0x12] = local_3c;
    param_1[0x13] = local_60;
    param_1[8] = local_4c;
    param_1[10] = local_58;
    param_1[0xb] = local_50;
    param_1[0xc] = local_54;
    param_1[0xd] = local_64;
    param_1[0xe] = local_5c;
    param_1[0xf] = local_68;
    param_1[4] = pbVar7;
    *(undefined2 *)((int)param_1 + 0x56) = unaff_r10;
    *(undefined2 *)(param_1 + 0x15) = unaff_r8;
    *(short *)((int)param_1 + 0x52) = (short)puVar10;
    param_1[9] = unaff_r5;
    *(undefined8 *)(param_1 + 6) = unaff_d8;
    param_1[3] = unaff_r6;
    param_1[5] = unaff_lr;
    param_1[1] = puVar9;
    *param_1 = pbVar12;
    param_1[2] = local_6c;
    return;
  }
  if (uVar5 != 1) {
    local_40 = &DAT_80000004;
    local_3c = (undefined4 *)uVar5;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00f13694;
  }
  local_48 = puVar10;
  FUN_00ea9fa0(&local_40,puVar10);
  if ((short)local_40 != 1) {
    puVar11 = (undefined4 *)((uint)local_3c & 0xffff);
    uVar4 = (undefined2)((uint)local_40 >> 0x10);
    FUN_00ea9fa0(&local_40,puVar10);
    puVar2 = local_3c;
    if ((short)local_40 != 1) {
      unaff_r8 = local_40._2_2_;
      FUN_00ea971c(&local_40,puVar10);
      local_58 = local_38;
      unaff_r5 = local_3c;
      local_4c = local_40;
      puVar6 = local_3c;
      if (local_40 == (byte *)0x80000001) goto LAB_00f136ac;
      FUN_00ea971c(&local_40,puVar10);
      local_64 = local_38;
      puVar3 = local_3c;
      pbVar1 = local_40;
      puVar6 = local_3c;
      if (local_40 != (byte *)0x80000001) {
        local_54 = local_3c;
        local_50 = local_40;
        FUN_00eaa748(&local_40,puVar10);
        unaff_r6 = uStack_34;
        local_6c = local_38;
        puVar9 = local_3c;
        pbVar12 = local_40;
        if (local_40 == &SUB_00000002 && local_3c == (undefined4 *)0x0) {
LAB_00f13788:
          puVar6 = local_38;
        }
        else {
          local_44 = 2;
          FUN_00eaa748(&local_40,puVar10);
          unaff_lr = local_3c;
          pbVar7 = local_40;
          if (local_40 == &SUB_00000002 && local_3c == (undefined4 *)0x0) goto LAB_00f13788;
          unaff_d8 = CONCAT44(uStack_34,local_38);
          FUN_00f14224(&local_40,&local_48);
          puVar8 = local_38;
          local_68 = local_3c;
          local_5c = local_40;
          puVar6 = local_3c;
          if (local_40 != (byte *)0x80000002) {
            if (local_40 == (byte *)0x80000001) {
              puVar6 = (undefined4 *)FUN_00e94830(6,&DAT_0187c524,&DAT_018ab990);
            }
            else {
              FUN_00f14224(&local_40,&local_48);
              puVar6 = local_3c;
              if (local_40 != (byte *)0x80000002) {
                if (local_40 != (byte *)0x80000001) {
                  local_60 = local_38;
                  unaff_r10 = SUB42(puVar2,0);
                  puVar10 = puVar11;
                  goto LAB_00f135ec;
                }
                puVar6 = (undefined4 *)FUN_00e94830(7,&DAT_0187c524,&DAT_018ab990);
              }
              if (((uint)local_5c & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(local_68);
              }
            }
          }
        }
        if (((uint)pbVar1 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(puVar3);
        }
      }
      if (((uint)local_4c & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(unaff_r5);
      }
      goto LAB_00f136ac;
    }
  }
  puVar6 = local_3c;
LAB_00f136ac:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = puVar6;
  return;
}

