// FUN_009507e0 @ 009507e0 size=88 calls_out=5 calls_in=0
// strings: 

void FUN_009507e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint auStack_48 [3];
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  int iStack_1c;
  
  if (param_1[0x1a] == -0x80000000) {
    FUN_00949bc0(param_1);
    return;
  }
  FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  FUN_01ad74cc(param_1 + 0x14);
  FUN_0094cbc0(param_1 + 8);
  if (*param_1 != 0) {
    FUN_01ada488(param_1);
  }
  iVar3 = param_1[0x17];
  if (iVar3 == 0) {
    iStack_28 = 0;
  }
  else {
    iStack_3c = param_1[0x18];
    iStack_28 = param_1[0x19];
    uStack_34 = 0;
    auStack_48[1] = 0;
    auStack_48[2] = iVar3;
    iStack_30 = iVar3;
    iStack_2c = iStack_3c;
  }
  auStack_48[0] = (uint)(iVar3 != 0);
  uStack_38 = auStack_48[0];
  while( true ) {
    FUN_01ad846c(aiStack_24,auStack_48);
    iVar1 = iStack_1c;
    iVar3 = aiStack_24[0];
    if (aiStack_24[0] == 0) break;
    iVar2 = aiStack_24[0] + iStack_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar2 + 0x794),*(undefined4 *)(iVar2 + 0x798));
    FUN_01ad8610(iVar1 * 0xb0 + iVar3);
  }
  return;
}

