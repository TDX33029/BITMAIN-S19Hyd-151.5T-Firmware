// FUN_01561fe8 @ 01561fe8 size=684 calls_out=5 calls_in=3
// strings: 

void FUN_01561fe8(int *param_1,undefined1 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  
  uVar6 = param_6 + param_4;
  if (uVar6 < 0x80) {
    iVar4 = uVar6 + 2;
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(iVar4);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar4);
    }
    puVar3[1] = (char)uVar6;
    *puVar3 = param_2;
    local_28 = 2;
    local_30 = iVar4;
    local_2c = puVar3;
    FUN_016dd1aa(puVar3 + 2,param_3,param_4);
    iVar4 = param_4 + 2;
    local_28 = iVar4;
    FUN_016dd1aa(puVar3 + iVar4,param_5,param_6);
  }
  else {
    uVar1 = uVar6 >> 8 & 0xff;
    uVar5 = uVar6 >> 0x10 & 0xff;
    local_34 = uVar6 * 0x1000000 | uVar1 << 0x10 | uVar5 << 8 | uVar6 >> 0x18;
    puVar7 = &local_34;
    if (uVar6 >> 0x18 == 0) {
      if (uVar5 == 0) {
        uVar5 = 2;
        if (uVar1 == 0) {
          uVar5 = 3;
        }
        puVar7 = (uint *)((uint)&local_34 | uVar5);
        iVar4 = (uVar6 - uVar5) + 6;
      }
      else {
        puVar7 = (uint *)((uint)puVar7 | 1);
        uVar5 = 1;
        iVar4 = uVar6 + 5;
      }
    }
    else {
      uVar5 = 0;
      iVar4 = uVar6 + 6;
    }
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar4);
    }
    if (iVar4 == 0) {
      local_28 = 0;
      local_2c = &DAT_00000001;
      local_30 = 0;
      FUN_006029c0(&local_30);
    }
    else {
      local_2c = (undefined1 *)thunk_FUN_016d4a50(iVar4);
      if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
      local_30 = iVar4;
    }
    *local_2c = param_2;
    local_28 = 1;
    if (local_30 == 1) {
      FUN_006029c0(&local_30);
    }
    uVar6 = 4 - uVar5;
    local_2c[1] = -0x7c - (char)uVar5;
    local_28 = 2;
    if (local_30 - 2U < uVar6) {
      FUN_0154e5f8(&local_30,2,uVar6,1,1);
    }
    iVar2 = local_28;
    puVar3 = local_2c;
    iVar4 = local_30;
    FUN_016dd1aa(local_2c + local_28,puVar7,uVar6);
    local_28 = iVar2 + uVar6;
    if ((uint)(iVar4 - local_28) < param_4) {
      FUN_0154e5f8(&local_30,local_28,param_4,1,1);
      puVar3 = local_2c;
      iVar4 = local_30;
    }
    iVar2 = local_28;
    FUN_016dd1aa(puVar3 + local_28,param_3,param_4);
    local_28 = iVar2 + param_4;
    if ((uint)(iVar4 - local_28) < param_6) {
      FUN_0154e5f8(&local_30,local_28,param_6,1,1);
      puVar3 = local_2c;
    }
    iVar4 = local_28;
    FUN_016dd1aa(puVar3 + local_28,param_5);
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = iVar4 + param_6;
  return;
}

