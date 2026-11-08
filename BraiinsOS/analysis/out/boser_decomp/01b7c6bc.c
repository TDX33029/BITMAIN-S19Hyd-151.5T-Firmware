// FUN_01b7c6bc @ 01b7c6bc size=104 calls_out=1 calls_in=1
// strings: 

bool FUN_01b7c6bc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_01b7c228();
  uVar1 = DAT_01d53474;
  if (iVar2 != 0) {
    *param_1 = DAT_01d53470;
    param_1[1] = uVar1;
  }
  return iVar2 == 0;
}

