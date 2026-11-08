// FUN_013bcdcc @ 013bcdcc size=324 calls_out=5 calls_in=2
// strings: 

void FUN_013bcdcc(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
    puVar8 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *puVar8 = &DAT_0056d238;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
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
  uVar9 = FUN_01412188(puVar8,&DAT_005684b8,piVar1,&DAT_01cf16f0);
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  puVar8 = (undefined4 *)uVar9;
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)(iVar4 + 0xc))(&local_30,puVar8);
    if ((local_30 == -0x3ccacb24 && iStack_28 == 0x754cde46) &&
        (iStack_2c == -0xbab6f5e && iStack_24 == -0x7b67cde7)) {
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
    FUN_01443048(puVar8,iVar4);
  }
  *param_1 = 0;
  return;
}

