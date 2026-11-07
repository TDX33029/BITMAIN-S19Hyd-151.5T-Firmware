// FUN_00f146ac @ 00f146ac size=456 calls_out=5 calls_in=1
// strings: 

void FUN_00f146ac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r7;
  undefined1 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  int local_44;
  byte *pbStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  code *local_1c;
  
  if (param_2[1] == 0) {
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  puVar3 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar3[1] == 0) {
    local_48 = 1;
    local_4c = (undefined4 *)0x2501;
    local_50 = (undefined1 *)0x80000000;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f147ac:
    local_30 = local_50;
    uStack_2c = (uint)local_4c;
    uStack_28 = local_48;
LAB_00f147b0:
    *puVar3 = local_30;
    puVar3[1] = uStack_2c;
    puVar3[2] = uStack_28;
  }
  else {
    puVar3[1] = puVar3[1] + -1;
    pbVar2 = (byte *)*puVar3 + 1;
    uVar1 = (uint)*(byte *)*puVar3;
    *puVar3 = pbVar2;
    if (uVar1 == 0) {
      uStack_3c = 0;
      uVar4 = 0;
      local_44 = 0;
      local_48 = param_4;
LAB_00f14778:
      param_1[2] = local_48;
      *param_1 = uVar4;
      param_1[1] = 0;
      param_1[3] = local_44;
      param_1[4] = pbVar2;
      param_1[5] = uStack_3c;
      param_1[6] = unaff_r7;
      return;
    }
    if (uVar1 != 1) {
      local_50 = &DAT_80000004;
      local_4c = (undefined4 *)uVar1;
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00f147ac;
    }
    FUN_00efbe38(&local_50,puVar3);
    unaff_r7 = local_48;
    if (local_50 != (undefined1 *)0x1) {
      local_34 = local_44;
      local_38 = local_48;
      if (local_44 != 0) {
        local_1c = FUN_00fac4cc;
        local_20 = &local_38;
        FUN_00600d2c(&local_30,&DAT_00584bb4,&local_20);
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00f147b0;
      }
      FUN_00efcd38(&local_50,puVar3);
      if (local_50 == (undefined1 *)0x0) {
        uVar4 = 1;
        pbVar2 = pbStack_40;
        goto LAB_00f14778;
      }
    }
    puVar3 = local_4c;
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = puVar3;
  return;
}

