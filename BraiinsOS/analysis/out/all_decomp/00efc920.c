// FUN_00efc920 @ 00efc920 size=876 calls_out=6 calls_in=6
// strings: 

void FUN_00efc920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 **ppuVar6;
  undefined4 *puVar5;
  undefined8 uVar7;
  undefined4 **local_48;
  undefined4 *local_44;
  int **local_40;
  undefined1 *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  code *local_14;
  
  FUN_00efbe38(&local_48);
  if (local_48 == (undefined4 **)0x1) {
    puVar1 = local_44;
  }
  else {
    local_1c = (int)local_3c;
    local_20 = (int)local_40;
    if (local_3c == (undefined1 *)0x0) {
      switch(local_40) {
      case (int **)0x0:
        FUN_00efcd38(&local_48,param_2);
        if (local_48 == (undefined4 **)0x0) {
          param_1[2] = local_40;
          param_1[3] = local_3c;
          param_1[4] = uStack_38;
          param_1[5] = uStack_34;
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        param_1[2] = local_44;
        *param_1 = 5;
        param_1[1] = 0;
        return;
      case (int **)0x1:
        uVar2 = param_2[1];
        if (7 < uVar2) {
          puVar4 = (undefined8 *)*param_2;
          *param_1 = 1;
          param_1[1] = 0;
          uVar7 = *puVar4;
          param_2[1] = uVar2 - 8;
LAB_00efcc1c:
          *param_2 = puVar4 + 1;
          *(undefined8 *)(param_1 + 2) = uVar7;
          return;
        }
        local_40 = (int **)0x8;
        local_44 = (undefined4 *)0x2501;
        local_48 = (undefined4 **)0x80000000;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        break;
      case (int **)0x2:
        uVar2 = param_2[1];
        if (7 < uVar2) {
          puVar4 = (undefined8 *)*param_2;
          *param_1 = 2;
          param_1[1] = 0;
          uVar7 = *puVar4;
          param_2[1] = uVar2 - 8;
          goto LAB_00efcc1c;
        }
        local_40 = (int **)0x8;
        local_44 = (undefined4 *)0x2501;
        local_48 = (undefined4 **)0x80000000;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        break;
      case (int **)0x3:
        uVar2 = param_2[1];
        if (7 < uVar2) {
          puVar4 = (undefined8 *)*param_2;
          *param_1 = 3;
          param_1[1] = 0;
          uVar7 = *puVar4;
          param_2[1] = uVar2 - 8;
          goto LAB_00efcc1c;
        }
        local_40 = (int **)0x8;
        local_44 = (undefined4 *)0x2501;
        local_48 = (undefined4 **)0x80000000;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        break;
      case (int **)0x4:
        uVar2 = param_2[1];
        if (7 < uVar2) {
          puVar4 = (undefined8 *)*param_2;
          *param_1 = 4;
          param_1[1] = 0;
          uVar7 = *puVar4;
          param_2[1] = uVar2 - 8;
          goto LAB_00efcc1c;
        }
        local_40 = (int **)0x8;
        local_44 = (undefined4 *)0x2501;
        local_48 = (undefined4 **)0x80000000;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        break;
      default:
        local_28 = (int)local_40;
        local_30[0] = 1;
        local_40 = &local_18;
        local_48 = (undefined4 **)local_30;
        local_24 = (int)local_3c;
        local_14 = (code *)&DAT_018ab990;
        local_18 = (int *)&DAT_0187d088;
        local_3c = &LAB_0115452c;
        local_44 = (undefined4 *)&LAB_01579e10;
        puVar1 = (undefined4 *)FUN_00e94644(&DAT_0058e458,&local_48);
        goto LAB_00efcb18;
      }
      ppuVar6 = &local_48;
    }
    else {
      local_14 = FUN_00fac4cc;
      local_18 = &local_20;
      FUN_00600d2c(local_30,&DAT_00584bb4,&local_18);
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      ppuVar6 = (undefined4 **)local_30;
    }
    puVar3 = ppuVar6[1];
    puVar5 = ppuVar6[2];
    *puVar1 = *ppuVar6;
    puVar1[1] = puVar3;
    puVar1[2] = puVar5;
  }
LAB_00efcb18:
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = puVar1;
  return;
}

