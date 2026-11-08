// FUN_010e1aa0 @ 010e1aa0 size=692 calls_out=9 calls_in=8
// strings: 

void FUN_010e1aa0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int local_68;
  undefined4 local_64;
  byte *local_60;
  byte *local_58;
  byte *local_54;
  byte *local_50;
  undefined **local_48;
  byte *local_44;
  byte *local_40;
  int local_38;
  byte *local_34;
  byte *pbStack_30;
  undefined *local_2c;
  undefined4 local_28;
  
  if (param_2[1] == 0) {
    *param_1 = -0x7ffffff6;
    param_1[1] = 0;
    return;
  }
  puVar5 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  pbVar7 = (byte *)*puVar5;
  if ((byte *)puVar5[1] == pbVar7) {
    local_60 = &DAT_00000001;
    local_68 = -0x7ffffffb;
    local_64 = pbVar7;
    goto LAB_010e1d04;
  }
  local_38 = -0x7ffffffb;
  FUN_00f2cc28(&local_38);
  *puVar5 = pbVar7 + 1;
  pbVar6 = (byte *)(uint)*pbVar7;
  pbVar7 = (byte *)0x0;
  if (pbVar6 == (byte *)0x0) {
    pbVar2 = &DAT_00000001;
    local_58 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)thunk_FUN_016d4a50(pbVar6);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pbVar6);
    }
    local_58 = pbVar6;
  }
  piVar8 = param_1;
  local_54 = pbVar2;
  while( true ) {
    pbVar3 = local_54;
    local_50 = pbVar7;
    if (pbVar6 == pbVar7) break;
    pbVar3 = (byte *)*puVar5;
    if (pbVar3 == (byte *)puVar5[1]) {
      local_64 = (byte *)CONCAT31(CONCAT21(local_64._2_2_,(char)piVar8),1);
      if (local_58 != (byte *)0x0) {
        thunk_FUN_016d3fb4(pbVar2);
      }
      local_68 = -0x7ffffffb;
      goto LAB_010e1d04;
    }
    bVar1 = *pbVar3;
    piVar8 = (int *)(uint)bVar1;
    *puVar5 = pbVar3 + 1;
    local_38 = -0x7ffffffb;
    FUN_00f2cc28(&local_38);
    if (pbVar7 == local_58) {
      FUN_006029c0(&local_58);
      pbVar2 = local_54;
    }
    pbVar2[(int)pbVar7] = bVar1;
    pbVar7 = pbVar7 + 1;
  }
  local_48 = (undefined **)local_58;
  local_44 = local_54;
  local_40 = pbVar7;
  FUN_00fab1e0(&local_38,local_54,pbVar7);
  ppuVar4 = local_48;
  if (local_38 == 0) {
    pbVar6 = local_44;
LAB_010e1c3c:
    if (pbVar7 < &DAT_00000100) {
      if (pbVar7 < ppuVar4) {
        if (pbVar7 == (byte *)0x0) {
          thunk_FUN_016d3fb4(pbVar6);
          pbVar6 = &DAT_00000001;
        }
        else {
          pbVar6 = (byte *)thunk_FUN_016d4ea4(pbVar6,pbVar7);
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,pbVar7);
          }
        }
      }
      local_68 = -0x7ffffff6;
      local_60 = pbVar7;
      local_64 = pbVar6;
      goto LAB_010e1d04;
    }
    if (ppuVar4 != (undefined **)0x0) {
      thunk_FUN_016d3fb4(pbVar6);
    }
    FUN_01613578(&local_68,pbVar7,&DAT_00569af0,&DAT_018abad0);
  }
  else {
    if (local_48 == (undefined **)&DAT_80000000) {
      ppuVar4 = (undefined **)local_44;
      pbVar7 = local_34;
      pbVar6 = local_40;
      goto LAB_010e1c3c;
    }
    local_44 = (byte *)&DAT_0157d360;
    local_48 = &local_2c;
    local_28 = 0x14;
    local_2c = &DAT_00411a09;
    FUN_00600d2c(&local_38,&DAT_00590e71,&local_48);
    if (ppuVar4 != (undefined **)0x0) {
      thunk_FUN_016d3fb4(pbVar3);
    }
    local_64 = local_34;
    local_60 = pbStack_30;
    local_68 = local_38;
  }
  if (local_68 == -0x7ffffff6) {
    local_68 = -0x7ffffff6;
  }
LAB_010e1d04:
  *param_1 = local_68;
  param_1[1] = (int)local_64;
  param_1[2] = (int)local_60;
  return;
}

