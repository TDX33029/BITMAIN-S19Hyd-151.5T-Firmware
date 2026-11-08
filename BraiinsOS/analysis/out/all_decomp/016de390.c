// FUN_016de390 @ 016de390 size=70 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016de3c8) */

undefined *
FUN_016de390(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DataMemoryBarrier(0x1b);
  if ((DAT_018dda28 != 0) &&
     (param_1 = (undefined *)FUN_016ddfc0(&DAT_018dda28,&DAT_018de1ac,DAT_018dda28,0,param_4),
     DAT_018de1ac != 0)) {
    software_interrupt(0);
    param_1 = &DAT_018dda4e;
  }
  return param_1;
}

