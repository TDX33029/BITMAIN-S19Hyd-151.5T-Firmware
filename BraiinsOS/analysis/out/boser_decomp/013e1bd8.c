// FUN_013e1bd8 @ 013e1bd8 size=120 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_013e1bd8(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00474ab2,0x25,&DAT_01cf2f68);
  }
  if (*(uint *)(param_1 + 8) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00474ad7,0x2a,&DAT_01cf2f78);
  }
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_3,param_4,*(uint *)(param_1 + 8),&DAT_01cf2f88);
  }
  return CONCAT44(param_4 - param_3,*(int *)(param_1 + 4) + param_3);
}

