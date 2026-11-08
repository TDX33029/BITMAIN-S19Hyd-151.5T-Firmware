// FUN_015539f8 @ 015539f8 size=212 calls_out=2 calls_in=0
// strings: 

void FUN_015539f8(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (param_5 == 4) {
    if (param_7 == 8) {
      uVar12 = 0;
      uVar13 = *param_4;
      uVar14 = *param_6;
      uVar11 = param_6[1];
      if (*(int *)(*param_2 + 0xc) != 0x10) {
        if (*(int *)(*param_2 + 0xc) != 0x20) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a7f34);
        }
        uVar12 = 1;
      }
      uVar1 = *param_3;
      uVar5 = param_3[1];
      uVar7 = param_3[2];
      uVar9 = param_3[3];
      uVar2 = param_3[4];
      uVar3 = param_3[5];
      uVar6 = param_3[6];
      uVar8 = param_3[7];
      uVar10 = param_3[8];
      *param_1 = uVar12;
      param_1[1] = uVar1;
      param_1[2] = uVar5;
      param_1[3] = uVar7;
      param_1[4] = uVar9;
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = uVar6;
      param_1[8] = uVar8;
      param_1[9] = uVar10;
      param_1[10] = uVar13;
      param_1[0xb] = uVar14;
      param_1[0xc] = uVar11;
      return;
    }
    uVar11 = 8;
    puVar4 = &DAT_018a89e8;
  }
  else {
    uVar11 = 4;
    puVar4 = &DAT_018a89d8;
    param_7 = param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7204(uVar11,param_7,puVar4);
}

