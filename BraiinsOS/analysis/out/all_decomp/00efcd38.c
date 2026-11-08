// FUN_00efcd38 @ 00efcd38 size=648 calls_out=4 calls_in=4
// strings:  Byte 255 is treated as an extension point; it should not be encoding anything. Do you have a mismatched bincode version or configuration? 

void FUN_00efcd38(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    local_20 = 1;
    local_24 = 0x2501;
    local_28 = 0x80000000;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00efcdc0;
  }
  pbVar3 = (byte *)*param_2;
  puVar6 = (uint *)(pbVar3 + 1);
  uVar1 = (uint)*pbVar3;
  *param_2 = puVar6;
  param_2[1] = uVar5 - 1;
  if (uVar1 < 0xfb) goto LAB_00efcd6c;
  switch(uVar1) {
  case 0xfb:
    if (uVar5 < 3) {
      local_20 = 2;
      local_24 = 0x2501;
      local_28 = 0x80000000;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00efcdc0;
    }
    *param_2 = pbVar3 + 3;
    param_2[1] = uVar5 - 3;
    uVar1 = (uint)*(ushort *)(pbVar3 + 1);
    break;
  case 0xfc:
    if (uVar5 < 5) {
      local_20 = 4;
      local_24 = 0x2501;
      local_28 = 0x80000000;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00efcdc0;
    }
    *param_2 = pbVar3 + 5;
    param_2[1] = uVar5 - 5;
    uVar1 = *(uint *)(pbVar3 + 1);
    break;
  case 0xfd:
    if (uVar5 < 9) {
      local_20 = 8;
      local_24 = 0x2501;
      local_28 = 0x80000000;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00efcdc0;
    }
    uVar1 = *puVar6;
    uVar8 = *(undefined4 *)(pbVar3 + 5);
    *param_2 = pbVar3 + 9;
    param_2[1] = uVar5 - 9;
    goto LAB_00efcd70;
  case 0xfe:
    if (uVar5 < 0x11) {
      local_20 = 0x10;
      local_24 = 0x2501;
      local_28 = 0x80000000;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00efcdc0;
    }
    uVar1 = *puVar6;
    uVar8 = *(undefined4 *)(pbVar3 + 5);
    uVar4 = *(undefined4 *)(pbVar3 + 9);
    uVar7 = *(undefined4 *)(pbVar3 + 0xd);
    *param_2 = pbVar3 + 0x11;
    param_2[1] = uVar5 - 0x11;
    goto LAB_00efcd78;
  default:
    local_24 = thunk_FUN_016d4a50(0x8b);
    if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x8b);
    }
    FUN_016dd1aa(local_24,
                 "\nByte 255 is treated as an extension point; it should not be encoding anything.\nDo you have a mismatched bincode version or configuration?\n"
                 ,0x8b);
    local_20 = 0x8b;
    local_28 = 0x8b;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00efcdc0:
    *puVar2 = local_28;
    puVar2[1] = local_24;
    puVar2[2] = local_20;
    param_1[1] = puVar2;
    *param_1 = 1;
    return;
  }
LAB_00efcd6c:
  uVar8 = 0;
LAB_00efcd70:
  uVar4 = 0;
  uVar7 = 0;
LAB_00efcd78:
  param_1[2] = uVar1;
  param_1[3] = uVar8;
  param_1[4] = uVar4;
  param_1[5] = uVar7;
  *param_1 = 0;
  return;
}

