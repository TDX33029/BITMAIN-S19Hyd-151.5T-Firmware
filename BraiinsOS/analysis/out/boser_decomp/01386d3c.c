// FUN_01386d3c @ 01386d3c size=308 calls_out=6 calls_in=2
// strings: 

void FUN_01386d3c(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar8 = (undefined4 *)*param_2;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)FUN_014333b0();
    *puVar8 = &DAT_0056d238;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *param_2 = puVar8;
  }
  local_38 = *param_3;
  iStack_34 = param_3[1];
  iStack_30 = param_3[2];
  iStack_2c = param_3[3];
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
  uVar9 = FUN_01415d14(puVar8,&DAT_00568fd8,piVar1,&DAT_01ceb284);
  if ((int)uVar9 != 0) {
    uVar9 = (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0x1c))();
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    puVar8 = (undefined4 *)uVar9;
    (**(code **)(iVar4 + 0xc))(&local_38,puVar8);
    if ((local_38 == 0x178dbdce && iStack_30 == 0x43bc703d) &&
        (iStack_34 == -0x20d254ee && iStack_2c == 0x2d4cf703)) {
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

