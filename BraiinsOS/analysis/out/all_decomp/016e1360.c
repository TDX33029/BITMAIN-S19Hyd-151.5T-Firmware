// FUN_016e1360 @ 016e1360 size=248 calls_out=3 calls_in=6
// strings: /aws-lc/crypto/bytestring/cbb.c

undefined8 FUN_016e1360(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_016e9cd0(0xe,0,0x42,"/aws-lc/crypto/bytestring/cbb.c",0x74);
    return 0;
  }
  iVar1 = FUN_016e1048();
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 8);
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_016e13d0;
  }
  else {
    if (param_3 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  *param_3 = *(undefined4 *)(param_1 + 0xc);
LAB_016e13d0:
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_016e0fd8(param_1);
  return 1;
}

