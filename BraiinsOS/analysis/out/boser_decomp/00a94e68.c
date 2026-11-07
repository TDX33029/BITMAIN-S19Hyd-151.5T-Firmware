// FUN_00a94e68 @ 00a94e68 size=124 calls_out=1 calls_in=3
// strings: 

void FUN_00a94e68(int *param_1,int *param_2,int *param_3)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  undefined4 **local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 ***local_24;
  int iStack_20;
  int iStack_1c;
  
  local_30 = (undefined4 **)*param_2;
  iStack_2c = param_2[1];
  iStack_28 = param_2[2];
  pppuVar4 = &local_24;
  local_24 = (undefined4 ***)*param_3;
  iStack_20 = param_3[1];
  iStack_1c = param_3[2];
  pppuVar1 = pppuVar4;
  if (local_30 != (undefined4 **)0x0) {
    pppuVar1 = local_24;
  }
  if (local_30 != (undefined4 **)0x0 && pppuVar1 != (undefined4 ***)0x0) {
    *param_1 = 3;
    FUN_009436dc(&local_30);
  }
  else {
    if (local_30 == (undefined4 **)0x0) {
      pppuVar4 = &local_30;
      param_2 = param_3;
    }
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
  }
  FUN_009436dc(pppuVar4);
  return;
}

