// FUN_0181cd54 @ 0181cd54 size=156 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0181cd54(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar2 = 0;
  if ((param_1 != 0) &&
     (puVar1 = (undefined4 *)FUN_0181cdf4(param_1,&DAT_0056ad18), puVar1 != (undefined4 *)0x0)) {
    uVar3 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
    uVar2 = (undefined4)uVar3;
    (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc))(&local_18,uVar2);
    if ((local_18 != -0x5b254f2a || iStack_10 != 0xeeb2181) ||
        (iStack_14 != 0x5d4b58dd || iStack_c != -0x1641da93)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

