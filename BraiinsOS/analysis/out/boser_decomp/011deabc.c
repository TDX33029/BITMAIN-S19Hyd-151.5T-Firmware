// FUN_011deabc @ 011deabc size=304 calls_out=7 calls_in=1
// strings: 

void FUN_011deabc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar6 = (undefined4 *)*param_2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_014333b0();
    *puVar6 = &DAT_0056d238;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    FUN_0178e884(0);
    *param_2 = puVar6;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar7 = FUN_01415d14(puVar6,&DAT_00569bc8,puVar1,&DAT_01c22198);
  if ((int)uVar7 != 0) {
    uVar7 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar7 >> 0x20);
    puVar6 = (undefined4 *)uVar7;
    (**(code **)(iVar2 + 0xc))(&local_38,puVar6);
    if ((local_38 == -0x60001fdc && iStack_30 == -0x630294a3) &&
        (iStack_34 == -0x21717f1c && iStack_2c == 0x314a1582)) {
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *param_1 = *puVar6;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      thunk_FUN_01be4678(puVar6);
      return;
    }
    FUN_00f80320(puVar6,iVar2);
  }
  *param_1 = 0x80000000;
  return;
}

