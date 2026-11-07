// FUN_0171e4f8 @ 0171e4f8 size=160 calls_out=2 calls_in=2
// strings: 

bool FUN_0171e4f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)&DAT_0044c414;
  if (*(int *)(param_1 + 4) * 0x20 < 0x401) {
    iVar3 = 0x200;
  }
  else {
    iVar3 = 0x400;
  }
  iVar1 = iVar3 * 2;
  do {
    puVar4 = puVar4 + 1;
    uVar2 = *puVar4;
    iVar3 = FUN_01718998(param_1,uVar2,param_3,iVar3);
    if (iVar3 == 0) {
      iVar3 = FUN_0171817c(param_1,uVar2);
      return iVar3 == 0;
    }
    iVar3 = 0;
    param_3 = extraout_r2;
  } while (puVar4 != (undefined2 *)(&DAT_0044c412 + iVar1));
  return false;
}

