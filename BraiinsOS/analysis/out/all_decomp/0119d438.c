// FUN_0119d438 @ 0119d438 size=116 calls_out=2 calls_in=1
// strings: $ref~! | $ref~!

void FUN_0119d438(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  
  if (*param_4 == '\x03') {
    FUN_011eb0a0(param_1,param_2,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                 "$ref~!",4);
    return;
  }
  uVar1 = FUN_011ea9f8(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"$ref~!",4,
                       param_4);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = uVar1;
  return;
}

