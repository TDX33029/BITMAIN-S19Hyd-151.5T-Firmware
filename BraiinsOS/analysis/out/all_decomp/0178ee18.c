// FUN_0178ee18 @ 0178ee18 size=100 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0178ee18(undefined4 param_1,undefined4 param_2,uint param_3)

{
  return CONCAT44(0 << (param_3 & 0xff) | 1 << (param_3 - 0x20 & 0xff) |
                  1U >> (0x20 - param_3 & 0xff),1 << (param_3 & 0xff));
}

