// FUN_000380c8 @ 000380c8  size=196  callers=4
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000380c8(void)

{
  char local_810 [2052];
  
  _DAT_00087e04 = CONCAT11((char)DAT_0008a83c,DAT_00087e04);
  _DAT_00087e04 = CONCAT22(CONCAT11(DAT_00087e04_3,(char)DAT_0008a840),_DAT_00087e04);
  if (3 < DAT_00087bbc) {
    snprintf(local_810,0x800,"pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",_DAT_00087e04 & 0xff
             ,DAT_0008a840 & 0xff,DAT_0008a83c & 0xff);
    FUN_00032218(3,local_810,0);
  }
  return _DAT_00087e04 & 0xffffff;
}

