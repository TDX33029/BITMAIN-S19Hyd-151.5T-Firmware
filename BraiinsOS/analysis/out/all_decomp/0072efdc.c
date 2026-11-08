// FUN_0072efdc @ 0072efdc size=276 calls_out=2 calls_in=0
// strings: AeadErrorNotEnoughBytesTooSmallBufferSecp256k1FailedHandshakeUnfinishedHandshake

undefined4 FUN_0072efdc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,
                    "AeadErrorNotEnoughBytesTooSmallBufferSecp256k1FailedHandshakeUnfinishedHandshake"
                    ,9);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8(*param_1,param_1[1],uVar3,iVar4);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar3;
    iStack_2c = iVar4;
    iVar1 = FUN_00faa4e8(*param_1,param_1[1],&local_30,&DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

