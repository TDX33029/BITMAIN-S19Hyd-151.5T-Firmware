// FUN_00f13108 @ 00f13108 size=844 calls_out=7 calls_in=1
// strings: 

void FUN_00f13108(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar4;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_lr;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 ***local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28 [2];
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 **local_18;
  code *local_14;
  
  if (param_2[1] == 0) {
    *param_1 = 0xc;
    param_1[1] = 0;
    return;
  }
  puVar5 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar5[1] == 0) {
    local_40 = (undefined4 ***)0x1;
    local_44 = (undefined4 *)0x2501;
    local_48 = (undefined4 *)0x80000000;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f1320c:
    ppuVar4 = &local_48;
    local_44 = puVar5;
LAB_00f13214:
    puVar5 = ppuVar4[1];
    puVar3 = ppuVar4[2];
    *local_44 = *ppuVar4;
    local_44[1] = puVar5;
    local_44[2] = puVar3;
    goto LAB_00f13224;
  }
  puVar5[1] = puVar5[1] + -1;
  uVar1 = (uint)*(byte *)*puVar5;
  *puVar5 = (byte *)*puVar5 + 1;
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)&DAT_0000000b;
    goto LAB_00f131d0;
  }
  if (uVar1 != 1) {
    local_48 = (undefined4 *)&DAT_80000004;
    local_44 = (undefined4 *)uVar1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00f1320c;
  }
  unaff_lr = (undefined4 *)0xf13168;
  FUN_00efbe38(&local_48,puVar5);
  if (local_48 == (undefined4 *)&DAT_00000001) goto LAB_00f13224;
  local_2c = local_3c;
  local_30 = local_40;
  if (local_3c != (undefined4 *)0x0) {
    local_14 = FUN_00fac4cc;
    local_18 = &local_30;
    FUN_00600d2c(local_28,&DAT_00584bb4,&local_18);
    local_44 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    ppuVar4 = local_28;
    goto LAB_00f13214;
  }
  puVar2 = (undefined4 *)&DAT_00000005;
  puVar3 = (undefined4 *)0x0;
  switch(local_40) {
  case (undefined4 ***)0x0:
    break;
  case (undefined4 ***)0x1:
    puVar2 = (undefined4 *)&DAT_00000006;
    break;
  case (undefined4 ***)0x2:
    if ((uint)puVar5[1] < 8) {
      local_40 = (undefined4 ***)0x8;
      local_44 = (undefined4 *)0x2501;
      local_48 = (undefined4 *)0x80000000;
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00f1320c;
    }
    puVar2 = (undefined4 *)*puVar5;
    puVar5[1] = puVar5[1] - 8;
    puVar6 = (undefined4 *)*puVar2;
    unaff_lr = (undefined4 *)puVar2[1];
    *puVar5 = puVar2 + 2;
    puVar2 = (undefined4 *)&DAT_00000007;
    puVar5 = puVar6;
    break;
  case (undefined4 ***)0x3:
    puVar2 = (undefined4 *)&DAT_00000008;
    break;
  case (undefined4 ***)0x4:
    unaff_lr = (undefined4 *)0xf1339c;
    FUN_00efc920(&local_48,puVar5);
    if (local_48 == (undefined4 *)&DAT_00000005 && local_44 == (undefined4 *)0x0) {
      local_44 = local_40;
LAB_00f13438:
      puVar3 = (undefined4 *)0x0;
      puVar2 = (undefined4 *)&DAT_0000000b;
      local_48 = local_44;
    }
    else {
      local_4c = local_34;
      local_50 = local_38;
      puVar3 = local_44;
      puVar2 = local_48;
      local_48 = local_40;
      unaff_lr = local_3c;
    }
    goto LAB_00f13440;
  case (undefined4 ***)0x5:
    unaff_lr = (undefined4 *)0xf133c4;
    FUN_00ed279c(&local_48,puVar5);
    if (local_48 == (undefined4 *)0x0) goto LAB_00f13438;
    local_50 = local_40;
    puVar3 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)&DAT_0000000a;
    unaff_lr = local_44;
LAB_00f13440:
    puVar5 = local_48;
    local_44 = local_48;
    if (puVar2 == (undefined4 *)&DAT_0000000b && puVar3 == (undefined4 *)0x0) {
LAB_00f13224:
      *param_1 = 0xd;
      param_1[1] = 0;
      param_1[2] = local_44;
      return;
    }
    break;
  default:
    local_1c = local_3c;
    local_48 = local_28;
    local_20 = local_40;
    local_28[0]._0_1_ = 1;
    local_14 = (code *)&DAT_018ab990;
    local_18 = (undefined4 **)&DAT_0187bed8;
    local_3c = (undefined4 *)&LAB_0115452c;
    local_44 = (undefined4 *)&LAB_01579e10;
    local_40 = &local_18;
    local_44 = (undefined4 *)FUN_00e94644(&DAT_0058e458,&local_48);
    goto LAB_00f13224;
  }
  local_54 = local_4c;
  local_58 = local_50;
LAB_00f131d0:
  *param_1 = puVar2;
  param_1[1] = puVar3;
  param_1[2] = puVar5;
  param_1[3] = unaff_lr;
  param_1[4] = local_58;
  param_1[5] = local_54;
  return;
}

