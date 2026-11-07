// FUN_018a50e4 @ 018a50e4 size=160 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_018a50e4(int *param_1)

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
         || (iVar1 = FUN_018a38dc(param_1,1), iVar1 != 0)) {
        uVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (*param_1 != 0);
  }
  return CONCAT44(iVar2,uVar3);
}

