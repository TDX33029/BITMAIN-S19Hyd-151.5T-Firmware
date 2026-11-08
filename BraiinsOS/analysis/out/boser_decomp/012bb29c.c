// FUN_012bb29c @ 012bb29c size=32 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_012bb29c(uint param_1)

{
  return CONCAT44(*(undefined4 *)(&DAT_005364f8 + (param_1 & 0xff) * 4),
                  (&PTR_DAT_01d31ccc)[param_1 & 0xff]);
}

