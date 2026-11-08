// FUN_018a5b44 @ 018a5b44 size=156 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_018a5b44(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    iVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_018a388c(param_1,0x45);
      if (iVar1 != 0) break;
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = param_1[4];
      }
      if (((iVar2 != 0 && iVar1 != 0) && (iVar1 = FUN_012fb940(iVar1,&DAT_00533bc1,2), iVar1 != 0))
         || (iVar1 = FUN_018a3158(param_1), iVar1 != 0)) {
        uVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (*param_1 != 0);
  }
  return CONCAT44(iVar2,uVar3);
}

