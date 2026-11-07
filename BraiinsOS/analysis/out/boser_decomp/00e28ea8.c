// FUN_00e28ea8 @ 00e28ea8 size=244 calls_out=0 calls_in=0
// strings: 

void FUN_00e28ea8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint unaff_r5;
  int unaff_r6;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int *piVar7;
  int unaff_lr;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  
  piVar1 = (int *)param_1[1];
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  if (iVar3 == 2 && iVar4 == 0) {
    iVar6 = 0;
  }
  else {
    in_d19 = *(undefined8 *)(piVar1 + 2);
    in_d18 = *(undefined8 *)(piVar1 + 6);
    unaff_r6 = piVar1[4];
    iVar6 = piVar1[5];
    unaff_r10 = piVar1[8];
    unaff_r5 = piVar1[9];
    in_d17 = *(undefined8 *)(piVar1 + 10);
    in_d16 = *(undefined8 *)(piVar1 + 0xe);
    unaff_r8 = piVar1[0xc];
    unaff_r9 = piVar1[0xd];
    piVar1 = (int *)(uint)*(byte *)(piVar1 + 0x10);
  }
  piVar7 = (int *)param_1[3];
  piVar5 = *(int **)(*param_1 + 8);
  piVar5[8] = unaff_r10;
  *(char *)(piVar5 + 0x10) = (char)piVar1;
  *(undefined8 *)(piVar5 + 0xe) = in_d16;
  piVar5[0xc] = unaff_r8;
  piVar5[0xd] = unaff_r9;
  *(undefined8 *)(piVar5 + 10) = in_d17;
  piVar5[9] = unaff_r5;
  *(undefined8 *)(piVar5 + 6) = in_d18;
  piVar5[4] = unaff_r6;
  piVar5[5] = iVar6;
  *(undefined8 *)(piVar5 + 2) = in_d19;
  *piVar5 = iVar3;
  piVar5[1] = iVar4;
  iVar2 = *piVar7;
  if (iVar2 != 2) {
    unaff_lr = piVar7[1];
    unaff_r11 = piVar7[2];
    piVar5 = (int *)piVar7[3];
    iVar4 = piVar7[4];
    iVar3 = piVar7[5];
    iVar6 = piVar7[6];
    unaff_r6 = piVar7[7];
    unaff_r10 = piVar7[8];
    unaff_r5 = (uint)*(byte *)(piVar7 + 0xc);
    unaff_r9 = piVar7[9];
    unaff_r8 = piVar7[10];
    piVar7 = (int *)piVar7[0xb];
  }
  piVar1 = *(int **)(param_1[2] + 8);
  *piVar1 = iVar2;
  piVar1[1] = unaff_lr;
  *(char *)(piVar1 + 0xc) = (char)unaff_r5;
  piVar1[8] = unaff_r10;
  piVar1[9] = unaff_r9;
  piVar1[10] = unaff_r8;
  piVar1[0xb] = (int)piVar7;
  piVar1[2] = unaff_r11;
  piVar1[3] = (int)piVar5;
  piVar1[4] = iVar4;
  piVar1[5] = iVar3;
  piVar1[6] = iVar6;
  piVar1[7] = unaff_r6;
  return;
}

