// FUN_01a44f0c @ 01a44f0c size=244 calls_out=1 calls_in=4
// strings: 

void FUN_01a44f0c(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_4 < param_3) {
    uVar1 = 2;
  }
  else {
    iVar3 = *(int *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    uVar2 = 0;
    while (uVar4 != uVar2) {
      if (*(byte *)(iVar3 + uVar2) - 0x3a < 0xfffffff6) {
        if (uVar2 < param_3) goto LAB_01a44fb8;
        if (uVar2 <= uVar4) {
          param_1[2] = uVar2;
          *(uint *)(param_2 + 8) = iVar3 + uVar2;
          *(uint *)(param_2 + 0xc) = uVar4 - uVar2;
          *param_1 = 3;
          param_1[1] = iVar3;
          return;
        }
        goto LAB_01a44f7c;
      }
      uVar2 = uVar2 + 1;
      if (param_4 + 1 == uVar2) {
        if (param_4 <= uVar4) {
          param_1[2] = param_4;
          *(uint *)(param_2 + 8) = iVar3 + param_4;
          *(uint *)(param_2 + 0xc) = uVar4 - param_4;
          *param_1 = 3;
          param_1[1] = iVar3;
          return;
        }
LAB_01a44f7c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
      }
    }
    if (param_3 <= uVar4) {
      *(uint *)(param_2 + 8) = iVar3 + uVar4;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *param_1 = 3;
      param_1[1] = iVar3;
      param_1[2] = uVar4;
      return;
    }
LAB_01a44fb8:
    uVar1 = 1;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

