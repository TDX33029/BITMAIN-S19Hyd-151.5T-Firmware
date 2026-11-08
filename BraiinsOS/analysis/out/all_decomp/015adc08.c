// FUN_015adc08 @ 015adc08 size=576 calls_out=4 calls_in=1
// strings: 

void FUN_015adc08(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  undefined2 uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar6 = (int *)(param_2 + 0x2c);
  piVar7 = (int *)*piVar6;
  if (piVar7 == (int *)&DAT_00000009) {
    FUN_015ade58(&local_60,param_2);
    *piVar6 = local_60;
    *(int **)(param_2 + 0x30) = local_5c;
    *(int *)(param_2 + 0x34) = local_58;
    *(int **)(param_2 + 0x38) = local_54;
    *(int *)(param_2 + 0x3c) = local_50;
    *(int *)(param_2 + 0x40) = iStack_4c;
    piVar7 = *(int **)(param_2 + 0x2c);
  }
  cVar4 = *(char *)(param_2 + 0x30);
  bVar2 = *(byte *)(param_2 + 0x31);
  if (piVar7 == (int *)&DAT_00000007 && cVar4 == '\x01') {
    if ((bVar2 & 1) != 0) goto LAB_015adddc;
    piVar3 = *(int **)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x2c) = 9;
LAB_015adcec:
    piVar7 = &local_40;
    FUN_015ade58(piVar7,param_2);
    *piVar6 = local_40;
    *(undefined4 *)(param_2 + 0x30) = uStack_3c;
    *(undefined4 *)(param_2 + 0x34) = uStack_38;
    *(undefined4 *)(param_2 + 0x38) = uStack_34;
    *(undefined4 *)(param_2 + 0x3c) = uStack_30;
    *(undefined4 *)(param_2 + 0x40) = uStack_2c;
    if (*(int *)(param_2 + 0x2c) == 7) {
      bVar2 = *(byte *)(param_2 + 0x30);
      bVar8 = bVar2 == 1;
      if (bVar8) {
        bVar2 = *(byte *)(param_2 + 0x31);
      }
      if (!bVar8 || (bVar2 & 1) != 0) goto LAB_015add2c;
      *piVar6 = 9;
      iVar1 = 1;
    }
    else {
LAB_015add2c:
      FUN_015afc14(&local_60,piVar3,param_2);
      iVar1 = local_60;
      piVar7 = local_5c;
    }
LAB_015add54:
    cVar4 = (char)local_58;
    bVar2 = local_58._1_1_;
    uVar5 = local_58._2_2_;
    if (iVar1 == 6) goto LAB_015adddc;
    local_60 = local_50;
    local_5c = (int *)iStack_4c;
    local_58 = iStack_48;
    piVar3 = local_54;
    if (iVar1 != 5) {
      param_1[3] = (int)local_54;
      *(undefined2 *)((int)param_1 + 10) = uVar5;
      param_1[4] = local_50;
      param_1[5] = iStack_4c;
      param_1[6] = iStack_48;
      *(byte *)((int)param_1 + 9) = bVar2;
      *(char *)(param_1 + 2) = cVar4;
      *param_1 = iVar1;
      param_1[1] = (int)piVar7;
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 9;
    if (piVar7 == (int *)&DAT_00000008) goto LAB_015adddc;
    piVar3 = *(int **)(param_2 + 0x34);
    if (piVar7 == (int *)&DAT_00000007) {
      if (cVar4 == '\x01') {
        if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0040f484,0x8d,&DAT_018aa1cc);
        }
        goto LAB_015adcec;
      }
      if (cVar4 != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0040f441,0x87,&DAT_018aa1bc);
      }
      local_58 = *(int *)(param_2 + 0x38);
      local_54 = *(int **)(param_2 + 0x3c);
      local_50 = *(int *)(param_2 + 0x40);
      iVar1 = 0;
      piVar7 = piVar3;
      goto LAB_015add54;
    }
    local_60 = *(int *)(param_2 + 0x38);
    local_5c = *(int **)(param_2 + 0x3c);
    local_58 = *(int *)(param_2 + 0x40);
    uVar5 = *(undefined2 *)(param_2 + 0x32);
  }
  if ((*param_3 - 1U < 2) && (param_3[2] != 0)) {
    thunk_FUN_016d3fb4(param_3[3]);
  }
  *(undefined2 *)((int)param_3 + 6) = uVar5;
  *(byte *)((int)param_3 + 5) = bVar2;
  *(char *)(param_3 + 1) = cVar4;
  *param_3 = (int)piVar7;
  param_3[2] = (int)piVar3;
  param_3[3] = local_60;
  param_3[4] = (int)local_5c;
  param_3[5] = local_58;
LAB_015adddc:
  *param_1 = 5;
  return;
}

