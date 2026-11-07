// FUN_00f3354c @ 00f3354c size=220 calls_out=5 calls_in=1
// strings: 

void FUN_00f3354c(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x03') {
    uVar2 = FUN_00f36124(param_2,&local_38,&DAT_0187e918);
    FUN_00f3615c(param_2);
    *param_1 = 0;
    param_1[1] = uVar2;
    return;
  }
  iVar3 = *(int *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (iVar3 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = uVar2;
    return;
  }
  FUN_00f30690(&local_50,uVar2,*(undefined4 *)(param_2 + 0xc));
  if (local_50 == -0x7ffffffb) {
    *param_1 = uStack_4c;
    param_1[1] = uStack_48;
  }
  else {
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uVar1 = FUN_00f33664();
    *param_1 = 0;
    param_1[1] = uVar1;
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return;
}

