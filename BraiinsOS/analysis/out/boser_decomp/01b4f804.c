// FUN_01b4f804 @ 01b4f804 size=292 calls_out=5 calls_in=2
// strings: 

undefined8
FUN_01b4f804(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            int param_5)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  
  local_24 = DAT_01d53560;
  *param_4 = 0;
  local_38 = FUN_01b27094(param_5);
  local_30 = FUN_01b27094(param_5 + 8);
  if ((DAT_01d532f0 & 0x20) == 0) {
    if ((DAT_01d532f0 & 1) == 0) {
      FUN_01b4f79c(param_3,&local_38);
      pcVar1 = FUN_01b271d0;
      pcVar2 = FUN_01b27294;
    }
    else {
      FUN_01b75080();
      pcVar1 = (code *)&LAB_01b20694;
      pcVar2 = (code *)&LAB_01b20680;
    }
  }
  else {
    FUN_01b75380();
    pcVar1 = (code *)&LAB_01b206bc;
    pcVar2 = (code *)&LAB_01b206a8;
  }
  *param_1 = pcVar1;
  *param_2 = pcVar2;
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

