// FUN_01afc144 @ 01afc144 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01afc144(undefined4 param_1,int param_2,int param_3)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_01bf0f98(param_3,9);
  iVar1 = 0;
  if (extraout_r1 != 0) {
    iVar1 = 9 - extraout_r1;
  }
  iVar3 = 0;
  do {
    if (param_3 <= iVar3) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 10 + (*(byte *)(param_2 + iVar3) - 0x30);
    if (iVar1 == 9) {
      iVar1 = FUN_01b32d7c(param_1,&DAT_3b9aca00);
      if ((iVar1 == 0) || (iVar1 = FUN_01b2e458(param_1,iVar2), iVar1 == 0)) {
        return 0;
      }
      iVar2 = 0;
      iVar1 = 0;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

