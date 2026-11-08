// FUN_009d415c @ 009d415c size=264 calls_out=5 calls_in=2
// strings: 

void FUN_009d415c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_2 + 8) == -0x80000000) {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar1 = param_3;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    param_1[4] = puVar2;
    *param_1 = 1;
    param_1[1] = puVar1;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[5] = 1;
    *puVar2 = 0;
    return;
  }
  FUN_009c4470(&local_20,param_3,*(undefined4 *)(param_2 + 0x10));
  uVar6 = *(uint *)(param_2 + 0x14);
  uVar3 = 0;
  if ((0x3fffffff < uVar6) || (param_2 = uVar6 * 4, 0x7ffffffc < param_2)) {
LAB_009d4228:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,param_2);
  }
  if (param_2 == 0) {
    iVar4 = 4;
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_016d38c8(param_2,1);
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_009d4228;
    }
    uVar5 = uVar6;
  }
  param_1[3] = uVar5;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[4] = iVar4;
  param_1[5] = uVar6;
  return;
}

