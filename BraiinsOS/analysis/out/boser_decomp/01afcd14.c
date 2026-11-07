// FUN_01afcd14 @ 01afcd14 size=204 calls_out=3 calls_in=6
// strings: /aws-lc/crypto/bytestring/cbb.c

undefined4 FUN_01afcd14(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_01b053d4(0xe,0,0x42,"/aws-lc/crypto/bytestring/cbb.c",0x74);
    return 0;
  }
  iVar1 = FUN_01afca7c();
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (param_2 == (undefined4 *)0x0) goto LAB_01afcdbc;
  }
  else if (param_3 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 8);
LAB_01afcdbc:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01afca0c(param_1);
  return 1;
}

