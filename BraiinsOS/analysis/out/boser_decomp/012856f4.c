// FUN_012856f4 @ 012856f4 size=144 calls_out=1 calls_in=1
// strings: too short for i64

void FUN_012856f4(uint *param_1,uint *param_2,uint param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_4 == '\0') {
    if (param_3 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,4,param_3,&DAT_01c25bd8);
    }
    uVar3 = *param_2;
    uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18;
    *param_1 = uVar3;
    param_1[1] = (int)uVar3 >> 0x1f;
    uVar3 = 0x3b9aca10;
  }
  else {
    uVar3 = 0x3b9aca03;
    if (param_3 == 8) {
      uVar2 = *param_2;
      uVar3 = 0x3b9aca10;
      uVar1 = param_2[1];
      *param_1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                 uVar1 >> 0x18;
      param_1[1] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                   uVar2 >> 0x18;
    }
    else {
      *param_1 = (uint)"too short for i64";
      param_1[1] = 0x11;
    }
  }
  param_1[2] = uVar3;
  return;
}

