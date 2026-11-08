// FUN_011de718 @ 011de718 size=332 calls_out=7 calls_in=1
// strings: 

void FUN_011de718(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar7 = (undefined4 *)*param_2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)FUN_014333b0();
    *puVar7 = &DAT_0056d238;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN_0178e884(0);
    *param_2 = puVar7;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x3c);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  uVar5 = param_3[8];
  uVar6 = param_3[9];
  puVar1[5] = param_3[5];
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  puVar1[8] = uVar5;
  puVar1[9] = uVar6;
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  uVar5 = param_3[0xd];
  uVar6 = param_3[0xe];
  puVar1[10] = param_3[10];
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  uVar8 = FUN_01415d14(puVar7,&DAT_00568fa8,puVar1,&DAT_01c22158);
  if ((int)uVar8 != 0) {
    uVar8 = (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar8 >> 0x20);
    puVar7 = (undefined4 *)uVar8;
    (**(code **)(iVar2 + 0xc))(&local_30,puVar7);
    if ((local_30 == -0x12108374 && iStack_28 == -0x2e332b93) &&
        (iStack_2c == -0x29eb1557 && iStack_24 == -0x71000656)) {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      uVar6 = puVar7[4];
      *param_1 = *puVar7;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = uVar6;
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      uVar5 = puVar7[8];
      uVar6 = puVar7[9];
      param_1[5] = puVar7[5];
      param_1[6] = uVar3;
      param_1[7] = uVar4;
      param_1[8] = uVar5;
      param_1[9] = uVar6;
      uVar3 = puVar7[0xb];
      uVar4 = puVar7[0xc];
      uVar5 = puVar7[0xd];
      uVar6 = puVar7[0xe];
      param_1[10] = puVar7[10];
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar4;
      param_1[0xd] = uVar5;
      param_1[0xe] = uVar6;
      thunk_FUN_01be4678(puVar7);
      return;
    }
    FUN_00f80320(puVar7,iVar2);
  }
  *param_1 = 0x80000000;
  return;
}

