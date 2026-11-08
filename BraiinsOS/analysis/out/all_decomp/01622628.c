// FUN_01622628 @ 01622628 size=616 calls_out=9 calls_in=10
// strings: 

void FUN_01622628(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  byte unaff_r8;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_34;
  int iStack_30;
  undefined *local_2c;
  undefined4 local_28;
  
  pbVar7 = (byte *)*param_2;
  pbVar8 = (byte *)param_2[1];
  if (pbVar8 == pbVar7) {
    *param_1 = -0x7ffffffb;
    param_1[1] = (int)pbVar7;
    param_1[2] = 1;
  }
  else {
    local_38 = -0x7ffffffb;
    FUN_00f2cc28(&local_38);
    puVar5 = (undefined4 *)(uint)*pbVar7;
    puVar6 = (undefined4 *)0x0;
    *param_2 = pbVar7 + 1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x1;
      local_58 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(puVar5);
      local_58 = puVar5;
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar5);
      }
    }
    local_54 = puVar2;
    while( true ) {
      puVar1 = local_54;
      local_50 = puVar6;
      if (puVar5 == puVar6) {
        local_48 = (undefined **)local_58;
        local_44 = local_54;
        local_40 = puVar6;
        FUN_00fab1e0(&local_38,local_54,puVar6);
        ppuVar4 = local_48;
        if (local_38 == 0) {
          puVar5 = local_44;
        }
        else {
          if (local_48 != (undefined **)0x80000000) {
            local_44 = &DAT_0157d360;
            local_48 = &local_2c;
            local_28 = 0x14;
            local_2c = &DAT_00411a09;
            FUN_00600d2c(&local_38,&DAT_00590e71,&local_48);
            if (ppuVar4 != (undefined **)0x0) {
              thunk_FUN_016d3fb4(puVar1);
            }
            *param_1 = local_38;
            param_1[1] = (int)local_34;
            param_1[2] = iStack_30;
            return;
          }
          ppuVar4 = (undefined **)local_44;
          puVar6 = local_34;
          puVar5 = local_40;
        }
        if ((undefined4 *)0xff < puVar6) {
          if (ppuVar4 != (undefined **)0x0) {
            thunk_FUN_016d3fb4(puVar5);
          }
          FUN_01613578(param_1,puVar6,&DAT_00569af0,&DAT_018abad0);
          return;
        }
        if (puVar6 < ppuVar4) {
          if (puVar6 == (undefined4 *)0x0) {
            thunk_FUN_016d3fb4(puVar5);
            puVar5 = (undefined4 *)0x1;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_016d4ea4(puVar5,puVar6);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,puVar6);
            }
          }
        }
        param_1[1] = (int)puVar5;
        param_1[2] = (int)puVar6;
        *param_1 = -0x7ffffff6;
        return;
      }
      pbVar3 = pbVar7 + 1 + (int)puVar6;
      if (pbVar3 == pbVar8) break;
      unaff_r8 = *pbVar3;
      *param_2 = pbVar3 + 1;
      local_38 = -0x7ffffffb;
      FUN_00f2cc28(&local_38);
      if (puVar6 == local_58) {
        FUN_006029c0(&local_58);
        puVar2 = local_54;
      }
      *(byte *)((int)puVar2 + (int)puVar6) = unaff_r8;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(byte *)((int)param_1 + 5) = unaff_r8;
    *param_1 = -0x7ffffffb;
    if (local_58 != (undefined4 *)0x0) {
      thunk_FUN_016d3fb4(puVar2);
      return;
    }
  }
  return;
}

