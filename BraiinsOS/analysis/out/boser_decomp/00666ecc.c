// FUN_00666ecc @ 00666ecc size=108 calls_out=1 calls_in=1
// strings: 

void FUN_00666ecc(uint *param_1,uint *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *param_2;
  uVar2 = uVar6;
  if (0x12 < uVar6) {
    uVar2 = 0x13;
  }
  iVar1 = uVar2 - 0x13;
  iVar3 = param_4;
  uVar2 = uVar6;
  do {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,0x13,&DAT_01c03ff0);
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + -1;
    *(undefined1 *)((int)param_2 + uVar2 + 4) = *param_3;
    param_3 = param_3 + 1;
    uVar2 = uVar2 + 1;
  } while (iVar3 != 0);
  *param_2 = uVar6 + param_4;
  uVar2 = param_2[1];
  uVar6 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar7 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar7;
  return;
}

