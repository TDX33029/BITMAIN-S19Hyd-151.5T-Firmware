// FUN_0070ccf4 @ 0070ccf4 size=288 calls_out=6 calls_in=1
// strings: 

void FUN_0070ccf4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar4 = (undefined4 *)*param_2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_014333b0();
    *puVar4 = &DAT_0056d238;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *param_2 = puVar4;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar5;
  uVar6 = FUN_01415d14(puVar4,&DAT_00569438,puVar1,&DAT_01c06ecc);
  if ((int)uVar6 != 0) {
    uVar6 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    puVar4 = (undefined4 *)uVar6;
    (**(code **)(iVar2 + 0xc))(&local_30,puVar4);
    if ((local_30 == -0x2155a0ae && iStack_28 == 0x1e239a6a) &&
        (iStack_2c == -0xd4b508e && iStack_24 == 0x7069884)) {
      uVar3 = puVar4[1];
      uVar5 = puVar4[2];
      *param_1 = *puVar4;
      param_1[1] = uVar3;
      param_1[2] = uVar5;
      thunk_FUN_01be4678(puVar4);
      return;
    }
    FUN_01443048(puVar4,iVar2);
  }
  *param_1 = 0x80000001;
  return;
}

