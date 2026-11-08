// FUN_00f12cd4 @ 00f12cd4 size=940 calls_out=8 calls_in=1
// strings: 

void FUN_00f12cd4(undefined4 *param_1,undefined4 *param_2)

{
  byte ***pppbVar1;
  uint uVar2;
  byte ***pppbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 unaff_r8;
  byte **unaff_r9;
  byte **unaff_r10;
  byte ***unaff_r11;
  byte ***in_r12;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  byte **local_60;
  byte *local_5c;
  byte ***local_58;
  undefined1 *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  byte *local_40;
  int local_3c;
  byte *local_38;
  int local_34;
  byte **local_2c;
  code *local_28;
  
  if (param_2[1] == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  puVar7 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar7[1] == 0) {
    local_58 = (byte ***)0x1;
    local_5c = (byte *)0x2501;
    local_60 = (byte **)0x80000000;
    pppbVar3 = (byte ***)thunk_FUN_016d4a50(0xc);
    if (pppbVar3 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f12e20:
    ppbVar4 = (byte **)&local_60;
  }
  else {
    puVar7[1] = puVar7[1] + -1;
    ppbVar4 = (byte **)((byte *)*puVar7 + 1);
    uVar2 = (uint)*(byte *)*puVar7;
    *puVar7 = ppbVar4;
    if (uVar2 == 0) {
      local_5c = (byte *)0x0;
      local_60 = (byte **)&DAT_00000007;
      local_58 = (byte ***)0x0;
LAB_00f12d9c:
      param_1[10] = ppbVar4;
      param_1[8] = local_94;
      param_1[0x10] = local_84;
      param_1[7] = local_90;
      param_1[0xb] = local_8c;
      param_1[0xf] = local_88;
      param_1[6] = unaff_r10;
      param_1[0xe] = unaff_r9;
      param_1[0xc] = unaff_r11;
      *(undefined1 *)(param_1 + 0x13) = unaff_r8;
      param_1[0x12] = in_r12;
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_80;
      param_1[4] = local_7c;
      param_1[5] = local_78;
      return;
    }
    if (uVar2 != 1) {
      local_60 = (byte **)&DAT_80000004;
      local_5c = (byte *)uVar2;
      pppbVar3 = (byte ***)thunk_FUN_016d4a50(0xc);
      if (pppbVar3 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00f12e20;
    }
    FUN_00efbe38(&local_60,puVar7);
    pppbVar1 = local_58;
    if (local_60 == (byte **)&DAT_00000001) {
LAB_00f12d40:
      pppbVar3 = (byte ***)local_5c;
      goto LAB_00f12e34;
    }
    local_34 = (int)local_54;
    local_38 = (byte *)local_58;
    if (local_54 == (undefined1 *)0x0) {
      if (&DAT_00000007 < local_58) {
        local_3c = (int)local_54;
        local_60 = (byte **)local_48;
        local_40 = (byte *)local_58;
        local_48[0] = 1;
        local_28 = (code *)&DAT_018ab990;
        local_2c = (byte **)&DAT_0187aa04;
        local_54 = &LAB_0115452c;
        local_5c = &LAB_01579e10;
        local_58 = &local_2c;
        pppbVar3 = (byte ***)FUN_00e94644(&DAT_0058e458,&local_60);
        goto LAB_00f12e34;
      }
      FUN_00eaa17c(&local_60,puVar7);
      local_94 = (byte *)local_58;
      local_90 = local_5c;
      unaff_r10 = local_60;
      if (local_58 != (byte ***)0x3b9aca01) {
        FUN_00eaa17c(&local_60,puVar7);
        unaff_r11 = local_58;
        local_8c = local_5c;
        ppbVar4 = local_60;
        if (local_58 != (byte ***)0x3b9aca01) {
          FUN_00eaa488(&local_60,puVar7);
          local_88 = local_5c;
          unaff_r9 = local_60;
          if (local_58 != (byte ***)0x3b9aca01) {
            local_84 = (byte *)local_58;
            FUN_00efbe38(&local_60,puVar7);
            in_r12 = local_58;
            if (local_60 == (byte **)&DAT_00000001) goto LAB_00f12d40;
            local_34 = (int)local_54;
            local_38 = (byte *)local_58;
            if (local_54 == (undefined1 *)0x0) {
              FUN_00e66bc0(&local_60,puVar7);
              pppbVar3 = local_58;
              if (local_60 != (byte **)&DAT_00000007 || local_5c != (byte *)0x0) {
                local_80 = (int)local_54;
                local_7c = uStack_50;
                local_78 = uStack_4c;
                unaff_r8 = SUB41(pppbVar1,0);
                goto LAB_00f12d9c;
              }
              goto LAB_00f12e34;
            }
            local_28 = FUN_00fac4cc;
            local_2c = &local_38;
            FUN_00600d2c(local_48,&DAT_00584bb4,&local_2c);
            pppbVar3 = (byte ***)thunk_FUN_016d4a50(0xc);
            if (pppbVar3 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            goto LAB_00f12ea0;
          }
        }
      }
      pppbVar3 = (byte ***)local_60;
      goto LAB_00f12e34;
    }
    local_28 = FUN_00fac4cc;
    local_2c = &local_38;
    FUN_00600d2c(local_48,&DAT_00584bb4,&local_2c);
    pppbVar3 = (byte ***)thunk_FUN_016d4a50(0xc);
    if (pppbVar3 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f12ea0:
    ppbVar4 = (byte **)local_48;
  }
  pbVar5 = ppbVar4[1];
  pbVar6 = ppbVar4[2];
  *pppbVar3 = (byte **)*ppbVar4;
  *(byte **)((int)pppbVar3 + 4) = pbVar5;
  *(byte **)((int)pppbVar3 + 8) = pbVar6;
LAB_00f12e34:
  *param_1 = 9;
  param_1[1] = 0;
  param_1[2] = pppbVar3;
  return;
}

