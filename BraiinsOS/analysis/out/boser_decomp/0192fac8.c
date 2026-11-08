// FUN_0192fac8 @ 0192fac8 size=84 calls_out=1 calls_in=48
// strings: 

int FUN_0192fac8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  iVar1 = 0;
  if (param_2 <= uVar3 - uVar4) {
    uVar2 = uVar4 + param_2;
    param_1[2] = uVar2;
    if ((CARRY4(uVar4,param_2)) || (uVar3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar4,uVar2,uVar3,&DAT_01d2563c);
    }
    iVar1 = *param_1 + uVar4;
  }
  return iVar1;
}

