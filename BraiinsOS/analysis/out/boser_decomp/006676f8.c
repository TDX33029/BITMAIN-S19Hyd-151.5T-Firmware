// FUN_006676f8 @ 006676f8 size=124 calls_out=3 calls_in=137
// strings: 

void FUN_006676f8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      return;
    }
    if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
    }
  }
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00667650(iVar1);
    iVar1 = iVar1 + 0x1c;
  }
  FUN_0134aee0(*param_1,iVar3,4,0x1c);
  return;
}

