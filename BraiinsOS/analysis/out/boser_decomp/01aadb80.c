// FUN_01aadb80 @ 01aadb80 size=136 calls_out=1 calls_in=1
// strings: 

void FUN_01aadb80(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2[1];
  if (iVar6 != 0) {
    iVar3 = *param_2;
    iVar5 = iVar6 << 3;
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)(iVar3 + iVar4 * 8);
      if ((puVar1[1] == param_4) &&
         (iVar2 = thunk_FUN_01bed842(*puVar1,param_3,param_4), iVar2 == 0)) {
        iVar5 = param_2[2];
        iVar2 = param_2[3];
        param_1[1] = iVar6;
        param_1[2] = iVar5;
        param_1[3] = iVar2;
        param_1[4] = iVar4;
        goto LAB_01aadbfc;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
  }
  iVar3 = 0;
LAB_01aadbfc:
  *param_1 = iVar3;
  return;
}

