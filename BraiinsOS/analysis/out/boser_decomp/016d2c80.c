// FUN_016d2c80 @ 016d2c80 size=344 calls_out=5 calls_in=0
// strings: 

void FUN_016d2c80(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_016d343c(&local_60,param_2,0);
  if (local_60 == 0x2a) {
    iVar2 = param_2[1];
    local_60 = *(int *)(iVar2 + 0x1c);
    if (local_60 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_60,&DAT_0056ed00,0);
    }
    piVar1 = *(int **)(iVar2 + 0x18);
    if ((char)piVar1[3] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_004cfc4f,0x39,&DAT_01d09af8);
    }
    local_6c = *piVar1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    if (local_6c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_004cfbd9,0xf,&DAT_01d09b08);
    }
    local_64 = piVar1[2];
    local_68 = piVar1[1];
    FUN_016d35f8(&local_60,*param_2,iVar2,&local_6c);
    if (local_60 == 0x2a) {
      iVar2 = param_2[2];
      *param_1 = 0x2a;
      param_1[1] = local_5c;
      param_1[2] = iVar2;
    }
    else {
      param_1[2] = local_58;
      param_1[3] = iStack_54;
      param_1[4] = iStack_50;
      param_1[5] = iStack_4c;
      param_1[6] = local_48;
      param_1[7] = iStack_44;
      param_1[8] = iStack_40;
      param_1[9] = iStack_3c;
      param_1[10] = iStack_38;
      param_1[0xb] = local_34;
      param_1[0xc] = iStack_30;
      param_1[0xd] = iStack_2c;
      param_1[0xe] = iStack_28;
      param_1[0xf] = iStack_24;
      *param_1 = local_60;
      param_1[1] = local_5c;
    }
  }
  else {
    piVar1 = (int *)((uint)&local_60 | 4);
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    iVar4 = piVar1[3];
    iVar5 = piVar1[4];
    param_1[1] = *piVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    param_1[5] = iVar5;
    iVar2 = piVar1[6];
    iVar3 = piVar1[7];
    iVar4 = piVar1[8];
    iVar5 = piVar1[9];
    param_1[6] = piVar1[5];
    param_1[7] = iVar2;
    param_1[8] = iVar3;
    param_1[9] = iVar4;
    param_1[10] = iVar5;
    iVar2 = piVar1[0xb];
    iVar3 = piVar1[0xc];
    iVar4 = piVar1[0xd];
    iVar5 = piVar1[0xe];
    param_1[0xb] = piVar1[10];
    param_1[0xc] = iVar2;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar4;
    param_1[0xf] = iVar5;
    *param_1 = local_60;
  }
  return;
}

