// FUN_01bee5fc @ 01bee5fc size=70 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01bee634) */

undefined *
FUN_01bee5fc(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_01d53490 != 0) &&
     (param_1 = (undefined *)FUN_01bee22c(&DAT_01d53490,&DAT_01d53c14,DAT_01d53490,0,param_4),
     DAT_01d53c14 != 0)) {
    software_interrupt(0);
    param_1 = &DAT_01d534b6;
  }
  return param_1;
}

