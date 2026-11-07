// FUN_00efbe38 @ 00efbe38 size=664 calls_out=4 calls_in=34
// strings: Invalid value (u128 range): you may have a version or configuration disagreement? |  Byte 255 is treated as an extension point; it should not be encoding anything. Do you have a mismatched bincode version or configuration? 

void FUN_00efbe38(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    local_28 = 1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00efbeac;
  }
  pbVar3 = (byte *)*param_2;
  uVar5 = (uint)*pbVar3;
  *param_2 = pbVar3 + 1;
  param_2[1] = uVar1 - 1;
  if (uVar5 < 0xfb) {
    param_1[2] = uVar5;
    param_1[3] = 0;
    *param_1 = 0;
    return;
  }
  switch(uVar5) {
  case 0xfb:
    if (2 < uVar1) {
      iVar4 = uVar1 - 3;
      uVar1 = (uint)*(ushort *)(pbVar3 + 1);
      pbVar3 = pbVar3 + 3;
LAB_00efc0a8:
      param_1[2] = uVar1;
      *param_2 = pbVar3;
      param_2[1] = iVar4;
      param_1[3] = 0;
      *param_1 = 0;
      return;
    }
    local_28 = 2;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    break;
  case 0xfc:
    if (4 < uVar1) {
      iVar4 = uVar1 - 5;
      uVar1 = *(uint *)(pbVar3 + 1);
      pbVar3 = pbVar3 + 5;
      goto LAB_00efc0a8;
    }
    local_28 = 4;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    break;
  case 0xfd:
    if (8 < uVar1) {
      uVar7 = *(undefined4 *)(pbVar3 + 5);
      uVar6 = *(undefined4 *)(pbVar3 + 1);
      *param_2 = pbVar3 + 9;
      param_2[1] = uVar1 - 9;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      *param_1 = 0;
      return;
    }
    local_28 = 8;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    break;
  case 0xfe:
    local_2c = thunk_FUN_016d4a50(0x51);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x51);
    }
    FUN_016dd1aa(local_2c,
                 "Invalid value (u128 range): you may have a version or configuration disagreement?"
                 ,0x51);
    local_28 = 0x51;
    local_30 = 0x51;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00efc040;
  default:
    local_2c = thunk_FUN_016d4a50(0x8b);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x8b);
    }
    FUN_016dd1aa(local_2c,
                 "\nByte 255 is treated as an extension point; it should not be encoding anything.\nDo you have a mismatched bincode version or configuration?\n"
                 ,0x8b);
    local_28 = 0x8b;
    local_30 = 0x8b;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00efc040;
  }
LAB_00efbeac:
  local_2c = 0x2501;
  local_30 = 0x80000000;
LAB_00efc040:
  *puVar2 = local_30;
  puVar2[1] = local_2c;
  puVar2[2] = local_28;
  param_1[1] = puVar2;
  *param_1 = 1;
  return;
}

