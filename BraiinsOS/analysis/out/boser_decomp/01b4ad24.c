// FUN_01b4ad24 @ 01b4ad24 size=392 calls_out=9 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined4
FUN_01b4ad24(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_01b47ffc(param_5,param_4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_01b70810(&DAT_01d522c8,&LAB_01b1c828);
  *(undefined4 **)(param_1 + 0x10) = &DAT_01d522cc;
  if (param_6 == 1) {
    iVar1 = FUN_01b48454();
LAB_01b4ad90:
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_5 + 4) != 0x357) {
      iVar1 = FUN_01b482e8();
      goto LAB_01b4ad90;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = 8;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800;
    *(undefined1 **)(param_1 + 8) = &LAB_01b4afac;
  }
  if ((param_3 == 0) || (iVar1 = FUN_01b48154(*(undefined4 *)(param_1 + 0xc),param_3), iVar1 != 0))
  {
    iVar1 = FUN_01b256ac(*(undefined4 *)(param_1 + 0xc),param_6);
    if ((iVar1 == 0) && (iVar1 = FUN_01b49618(param_1), iVar1 == 0)) {
LAB_01b4ae18:
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      *param_2 = *(undefined4 *)(param_1 + 0xc);
      return 1;
    }
    if (param_3 == 0) {
      FUN_01b053d4(6,0,0x77,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",100);
    }
    else {
      iVar1 = FUN_01b4aa54(param_1,param_3,param_4);
      if (iVar1 != 0) goto LAB_01b4ae18;
    }
  }
  return 0;
}

