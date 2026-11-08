// FUN_00a5284c @ 00a5284c size=280 calls_out=7 calls_in=11
// strings: 

undefined4 FUN_00a5284c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_014333b0();
    *puVar4 = &DAT_0056d238;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    FUN_0178e884(0);
    *param_1 = puVar4;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = param_2;
  uVar5 = FUN_01415d14(puVar4,&DAT_00569858,puVar1,&DAT_01c0e9e0);
  uVar3 = 0;
  if ((int)uVar5 != 0) {
    uVar5 = (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    puVar4 = (undefined4 *)uVar5;
    (**(code **)(iVar2 + 0xc))(&local_28,puVar4);
    if ((local_28 == 0x157615a7 && iStack_20 == 0x5b3543bf) &&
        (iStack_24 == -0x19b0166d && iStack_1c == -0x2ccc9e20)) {
      uVar3 = *puVar4;
      thunk_FUN_01be4678(puVar4);
    }
    else {
      FUN_01443048(puVar4,iVar2);
    }
  }
  return uVar3;
}

