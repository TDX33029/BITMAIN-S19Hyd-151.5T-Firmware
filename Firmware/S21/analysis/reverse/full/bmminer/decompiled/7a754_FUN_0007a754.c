// FUN_0007a754 @ 0007a754  size=400  callers=1
// program: bmminer


undefined4 FUN_0007a754(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  uint local_10;
  int local_c;
  
  uVar3 = *(int *)(param_1 + 8) + 1;
  iVar1 = 1 << (uVar3 & 0xff);
  iVar2 = FUN_0007d8a0(iVar1 << 3);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_0007d8e8(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 4) = iVar2;
    *(uint *)(param_1 + 8) = uVar3;
    for (local_10 = 0; local_10 < (uint)(1 << (*(uint *)(param_1 + 8) & 0xff));
        local_10 = local_10 + 1) {
      iVar2 = *(int *)(param_1 + 4) + local_10 * 8;
      *(int *)(iVar2 + 4) = param_1 + 0xc;
      *(undefined4 *)(*(int *)(param_1 + 4) + local_10 * 8) = *(undefined4 *)(iVar2 + 4);
    }
    local_c = *(int *)(param_1 + 0x10);
    FUN_0007a2e4(param_1 + 0xc);
    while (local_c != param_1 + 0xc) {
      iVar2 = *(int *)(local_c + 4);
      FUN_0009863c(*(undefined4 *)(local_c + 0x10),iVar1);
      FUN_0007a420(param_1,*(int *)(param_1 + 4) + extraout_r1 * 8,local_c);
      local_c = iVar2;
    }
    uVar4 = 0;
  }
  return uVar4;
}

