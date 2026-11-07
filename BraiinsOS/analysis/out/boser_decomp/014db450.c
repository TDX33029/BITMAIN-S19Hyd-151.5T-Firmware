// FUN_014db450 @ 014db450 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_014db450(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_01965c98(uVar2);
  if (iVar1 == 0) {
    FUN_014d8650(param_1,uVar2);
    return;
  }
  *param_1 = 0x80000015;
  param_1[1] = iVar1;
  return;
}

