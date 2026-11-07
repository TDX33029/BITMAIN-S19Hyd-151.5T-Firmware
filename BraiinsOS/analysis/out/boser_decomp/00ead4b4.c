// FUN_00ead4b4 @ 00ead4b4 size=148 calls_out=2 calls_in=3
// strings: 

void FUN_00ead4b4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  
  if (*param_2 == -0x80000000) {
    iVar1 = param_2[1];
    puStack_2c = &LAB_019ba78c;
    uStack_40 = param_3;
    uStack_3c = param_4;
    puStack_30 = &uStack_40;
    FUN_00664898(&uStack_50,&DAT_005b9f2e,&puStack_30);
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    puStack_30 = (undefined4 *)0x3;
    iStack_34 = iVar1;
    iVar1 = FUN_00ead570(&uStack_40,&puStack_30);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

