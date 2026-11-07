// FUN_0160f63c @ 0160f63c size=112 calls_out=2 calls_in=2
// strings: 

void FUN_0160f63c(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*param_2 == '\x01') {
    local_38 = *(undefined4 *)(param_2 + 4);
    uStack_34 = *(undefined4 *)(param_2 + 8);
    uStack_30 = *(undefined4 *)(param_2 + 0xc);
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    FUN_01640430(param_1 + 1,&local_38,&local_28);
    *(undefined1 *)param_1 = 1;
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  FUN_0134bd64(*param_3,param_3[1]);
  return;
}

