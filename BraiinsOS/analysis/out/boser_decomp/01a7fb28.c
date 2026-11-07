// FUN_01a7fb28 @ 01a7fb28 size=288 calls_out=7 calls_in=5
// strings: 

undefined8 FUN_01a7fb28(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r5;
  undefined4 *puVar4;
  undefined8 uVar5;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_014333b0();
    unaff_r5 = 0;
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
  uVar5 = FUN_01415d14(puVar4,&DAT_00568478,puVar1,&DAT_01d2dae4);
  uVar3 = 0;
  if ((int)uVar5 != 0) {
    uVar5 = (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    puVar4 = (undefined4 *)uVar5;
    (**(code **)(iVar2 + 0xc))(&local_28,puVar4);
    unaff_r5 = 0x7b9cd51d;
    if ((local_28 == -0x5705fed && iStack_20 == 0x6347910d) &&
        (iStack_24 == 0x7b9cd51d && iStack_1c == 0x40f854fe)) {
      unaff_r5 = *puVar4;
      thunk_FUN_01be4678(puVar4);
      uVar3 = 1;
    }
    else {
      FUN_01443048(puVar4,iVar2);
    }
  }
  return CONCAT44(unaff_r5,uVar3);
}

