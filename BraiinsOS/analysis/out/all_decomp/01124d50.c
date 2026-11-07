// FUN_01124d50 @ 01124d50 size=112 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01124d50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_0111dc0c(&local_38);
  if ((char)local_38 == '\x06') {
    return local_34;
  }
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_0157eb1c(param_1);
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = local_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = uStack_24;
  param_1[2] = iVar2 + 1;
  return 0;
}

