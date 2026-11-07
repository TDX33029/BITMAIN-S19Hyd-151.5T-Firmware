// FUN_011de8e0 @ 011de8e0 size=316 calls_out=7 calls_in=2
// strings: 

void FUN_011de8e0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar8 = (undefined4 *)*param_2;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)FUN_014333b0();
    *puVar8 = &DAT_0056d238;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    FUN_0178e884(0);
    *param_2 = puVar8;
  }
  local_30 = *param_3;
  iStack_2c = param_3[1];
  iStack_28 = param_3[2];
  iStack_24 = param_3[3];
  piVar1 = (int *)thunk_FUN_01be5118(0x10);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  iVar4 = param_3[1];
  iVar5 = param_3[2];
  iVar6 = param_3[3];
  *piVar1 = *param_3;
  piVar1[1] = iVar4;
  piVar1[2] = iVar5;
  piVar1[3] = iVar6;
  uVar9 = FUN_01415d14(puVar8,&DAT_0056a398,piVar1,&DAT_01c22178);
  if ((int)uVar9 != 0) {
    uVar9 = (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0x1c))();
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    puVar8 = (undefined4 *)uVar9;
    (**(code **)(iVar4 + 0xc))(&local_30,puVar8);
    if ((local_30 == -0xcd529db && iStack_28 == -0x545b8b1b) &&
        (iStack_2c == -0x3e5a4cd8 && iStack_24 == -0x4701492d)) {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar7 = puVar8[3];
      *param_1 = *puVar8;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar7;
      thunk_FUN_01be4678(puVar8);
      return;
    }
    FUN_00f80320(puVar8,iVar4);
  }
  *param_1 = 0;
  return;
}

