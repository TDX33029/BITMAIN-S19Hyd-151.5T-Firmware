// FUN_011de530 @ 011de530 size=340 calls_out=7 calls_in=1
// strings: 

void FUN_011de530(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  puVar11 = (undefined4 *)*param_2;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)FUN_014333b0();
    *puVar11 = &DAT_0056d238;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    FUN_0178e884(0);
    *param_2 = puVar11;
  }
  local_50 = *param_3;
  iStack_4c = param_3[1];
  iStack_48 = param_3[2];
  iStack_44 = param_3[3];
  iStack_40 = param_3[4];
  local_3c = param_3[5];
  iStack_38 = param_3[6];
  iStack_34 = param_3[7];
  iStack_30 = param_3[8];
  iStack_2c = param_3[9];
  iStack_28 = param_3[10];
  piVar1 = (int *)thunk_FUN_01be5118(0x2c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  iVar4 = param_3[1];
  iVar5 = param_3[2];
  iVar6 = param_3[3];
  iVar8 = param_3[4];
  *piVar1 = *param_3;
  piVar1[1] = iVar4;
  piVar1[2] = iVar5;
  piVar1[3] = iVar6;
  piVar1[4] = iVar8;
  iVar4 = param_3[6];
  iVar5 = param_3[7];
  iVar6 = param_3[8];
  iVar8 = param_3[9];
  iVar12 = param_3[10];
  piVar1[5] = param_3[5];
  piVar1[6] = iVar4;
  piVar1[7] = iVar5;
  piVar1[8] = iVar6;
  piVar1[9] = iVar8;
  piVar1[10] = iVar12;
  uVar13 = FUN_01415d14(puVar11,&DAT_0056a238,piVar1,&DAT_01c22138);
  if ((int)uVar13 != 0) {
    uVar13 = (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0x1c))();
    iVar4 = (int)((ulonglong)uVar13 >> 0x20);
    puVar11 = (undefined4 *)uVar13;
    (**(code **)(iVar4 + 0xc))(&local_50,puVar11);
    if ((local_50 == 0x5d34444c && iStack_48 == -0x132b3f37) &&
        (iStack_4c == 0x49c3d5e && iStack_44 == -0x18a87cf9)) {
      uVar2 = puVar11[1];
      uVar3 = puVar11[2];
      uVar7 = puVar11[3];
      uVar9 = puVar11[4];
      *param_1 = *puVar11;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar7;
      param_1[4] = uVar9;
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      uVar7 = puVar11[8];
      uVar9 = puVar11[9];
      uVar10 = puVar11[10];
      param_1[5] = puVar11[5];
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      param_1[8] = uVar7;
      param_1[9] = uVar9;
      param_1[10] = uVar10;
      thunk_FUN_01be4678(puVar11);
      return;
    }
    FUN_00f80320(puVar11,iVar4);
  }
  *(undefined1 *)param_1 = 3;
  return;
}

