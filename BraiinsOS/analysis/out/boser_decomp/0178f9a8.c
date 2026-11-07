// FUN_0178f9a8 @ 0178f9a8 size=320 calls_out=6 calls_in=0
// strings: 

void FUN_0178f9a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *puVar4 = &DAT_0056d238;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    FUN_0178e884(0);
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
  uVar6 = FUN_01412188(puVar4,&DAT_00567d18,puVar1,&DAT_01d1b738);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  puVar4 = (undefined4 *)uVar6;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(iVar2 + 0xc))(&local_30,puVar4);
    if ((local_30 == 0x2478b573 && iStack_28 == -0x50275e73) &&
        (iStack_2c == -0x4866f3b3 && iStack_24 == -0x7176b16)) {
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

