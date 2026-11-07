// FUN_00f12a90 @ 00f12a90 size=528 calls_out=3 calls_in=1
// strings: 

void FUN_00f12a90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *unaff_r6;
  byte *pbVar5;
  uint unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_d16;
  byte *local_48;
  uint local_44;
  undefined4 *local_40;
  undefined4 uStack_3c;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar4 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar4[1] == 0) {
    local_40 = (undefined4 *)&DAT_00000001;
    local_44 = 0x2501;
    local_48 = (byte *)0x80000000;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    puVar4[1] = puVar4[1] + -1;
    pbVar3 = (byte *)*puVar4 + 1;
    uVar2 = (uint)*(byte *)*puVar4;
    *puVar4 = pbVar3;
    if (uVar2 == 0) {
      uVar2 = 0;
      pbVar5 = &SUB_00000002;
      local_44 = 0;
LAB_00f12bf0:
      *(undefined8 *)(param_1 + 6) = unaff_d8;
      *(undefined8 *)(param_1 + 10) = unaff_d9;
      param_1[4] = unaff_r6;
      param_1[8] = unaff_r10;
      param_1[0xc] = pbVar3;
      *(undefined8 *)(param_1 + 0xe) = in_d16;
      param_1[5] = unaff_r11;
      param_1[9] = unaff_r9;
      param_1[0xd] = local_44;
      *param_1 = pbVar5;
      param_1[1] = uVar2;
      param_1[2] = puVar4;
      param_1[3] = param_4;
      return;
    }
    if (uVar2 == 1) {
      FUN_00eaa2d0(&local_48,puVar4);
      param_4 = uStack_3c;
      puVar1 = local_40;
      uVar2 = local_44;
      pbVar5 = local_48;
      if (local_48 != &SUB_00000002 || local_44 != 0) {
        FUN_00eaa2d0(&local_48,puVar4);
        unaff_r11 = local_44;
        unaff_r6 = local_48;
        if (local_48 != &SUB_00000002 || local_44 != 0) {
          unaff_d8 = CONCAT44(uStack_3c,local_40);
          FUN_00eaa2d0(&local_48,puVar4);
          unaff_r9 = local_44;
          unaff_r10 = local_48;
          if (local_48 != &SUB_00000002 || local_44 != 0) {
            unaff_d9 = CONCAT44(uStack_3c,local_40);
            FUN_00eaa2d0(&local_48,puVar4);
            if (local_48 != &SUB_00000002 || local_44 != 0) {
              in_d16 = CONCAT44(uStack_3c,local_40);
              pbVar3 = local_48;
              puVar4 = puVar1;
              goto LAB_00f12bf0;
            }
          }
        }
      }
      puVar4 = local_40;
      goto LAB_00f12c64;
    }
    local_48 = &DAT_80000004;
    local_44 = uVar2;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  *puVar4 = local_48;
  puVar4[1] = local_44;
  puVar4[2] = local_40;
LAB_00f12c64:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = puVar4;
  return;
}

