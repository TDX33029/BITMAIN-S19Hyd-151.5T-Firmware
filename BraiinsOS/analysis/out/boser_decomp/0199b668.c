// FUN_0199b668 @ 0199b668 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_0199b668(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  cVar1 = *param_2;
  if (*param_1 == 'S') {
    uVar3 = *(undefined2 *)(param_2 + 1);
    cVar2 = param_2[3];
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = cVar1;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined2 *)(param_1 + 1) = uVar3;
    param_1[3] = cVar2;
    return;
  }
  if (cVar1 != 'S') {
    thunk_FUN_01999584(cVar1);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526af1,0x1d,&DAT_01d27e44);
  }
  return;
}

