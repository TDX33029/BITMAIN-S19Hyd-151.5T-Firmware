// FUN_01a7f950 @ 01a7f950 size=328 calls_out=8 calls_in=2
// strings: 

void FUN_01a7f950(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  
  puVar3 = (undefined4 *)*param_2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_014333b0();
    *puVar3 = &DAT_0056d238;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_0178e884(0);
    *param_2 = puVar3;
  }
  FUN_01bed4e2(&local_88,param_3,0x68);
  iVar1 = thunk_FUN_01be5118(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(iVar1,param_3,0x68);
  uVar4 = FUN_01415d14(puVar3,&DAT_00568a28,iVar1,&DAT_01d2dac4);
  if ((int)uVar4 != 0) {
    uVar4 = (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x1c))();
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = (undefined4)uVar4;
    (**(code **)(iVar1 + 0xc))(&local_88,uVar2);
    if ((local_88 == -0x7711c23f && iStack_80 == -0x16983aa4) &&
        (iStack_84 == 0x62470a94 && iStack_7c == 0x32f6afe0)) {
      FUN_01bed4e2(param_1,uVar2,0x68);
      thunk_FUN_01be4678(uVar2);
      return;
    }
    FUN_01443048(uVar2,iVar1);
  }
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

