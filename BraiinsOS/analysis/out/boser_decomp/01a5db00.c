// FUN_01a5db00 @ 01a5db00 size=348 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_01a5db00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == 0x80000003) {
LAB_01a5db4c:
    FUN_01a61d00(&local_2c,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    puVar6 = local_28;
    uVar2 = 1;
    iVar5 = 1;
    if ((int)local_2c < 0) {
      uVar2 = (uint)local_2c ^ 0x80000000;
    }
    if (uVar2 == 0) {
      puVar6 = (undefined1 *)0x1;
      iVar4 = 0;
    }
    else {
      if (uVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2c738);
      }
      uVar1 = 0;
      if (local_24 < 0) {
LAB_01a5db94:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar1,local_24);
      }
      if (local_24 == 0) {
        iVar4 = 0;
      }
      else {
        uVar1 = 1;
        iVar5 = FUN_01298504(local_24,1);
        if (iVar5 == 0) goto LAB_01a5db94;
        iVar4 = local_24;
      }
    }
    FUN_01bed4e2(iVar5,puVar6,iVar4);
    local_38 = iVar4;
    local_34 = iVar5;
    local_30 = iVar4;
    if (-1 < (int)local_2c) {
      FUN_0134bd64(local_2c,local_28);
    }
  }
  else {
    uVar3 = 1;
    if ((int)uVar2 < 0) {
      uVar3 = uVar2 ^ 0x80000000;
    }
    local_34 = 1;
    local_30 = 0;
    if (uVar3 != 0) {
      if (uVar3 != 1) goto LAB_01a5db4c;
      local_34 = *(int *)(param_1 + 0x10);
      local_30 = *(int *)(param_1 + 0x14);
    }
    local_38 = -0x80000000;
  }
  local_28 = &LAB_012b97d8;
  local_2c = (undefined1 *)&local_38;
  uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_2c);
  if (local_38 != -0x80000000) {
    FUN_0134bd64(local_38,local_34);
  }
  return uVar1;
}

