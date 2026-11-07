// FUN_01b8bd70 @ 01b8bd70 size=276 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b8bd70(int param_1,uint param_2)

{
  if ((param_2 & 0xfffffffd) == 1) {
    *(undefined4 *)(param_1 + 0x974) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  if (1 < param_2 - 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x974) != 0) {
    return 0xffffffc4;
  }
  FUN_01b8bb30();
  if (param_1 + 0xc == 0) {
    return 0xffffffff;
  }
  FUN_01bed93e(param_1 + 0xc,0,0xb0);
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return 0;
}

