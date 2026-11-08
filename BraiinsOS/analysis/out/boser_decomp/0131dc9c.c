// FUN_0131dc9c @ 0131dc9c size=220 calls_out=2 calls_in=2
// strings: 

void FUN_0131dc9c(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_3 / 3;
  if (2 < param_3) {
    uVar2 = uVar1;
    iVar3 = param_4;
    iVar4 = param_2;
    do {
      FUN_0131ec38(param_1,iVar4,3,iVar3,8);
      iVar4 = iVar4 + 3;
      iVar3 = iVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = uVar1 * 3;
  if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,param_3,param_3,&DAT_01ce4da0);
  }
  if (param_5 < uVar1 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1 * 8,param_5,param_5,&DAT_01ce4db0);
  }
  FUN_0131ec38(param_1,param_2 + uVar2,param_3 % 3,param_4 + uVar1 * 8);
  return;
}

