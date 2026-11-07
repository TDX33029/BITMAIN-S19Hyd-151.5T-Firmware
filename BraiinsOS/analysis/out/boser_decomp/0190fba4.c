// FUN_0190fba4 @ 0190fba4 size=260 calls_out=3 calls_in=0
// strings: 

void FUN_0190fba4(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ushort local_22;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_01ac6cbc(&local_30,param_2 + 1,0x20);
  FUN_01ac6cbc(&local_30,param_2 + 9,0x20);
  if (param_7 != 0) {
    if (0xffff < param_8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_005210d8,0x29,&DAT_01d23f10);
    }
    local_22 = (ushort)((param_8 & 0xff) << 8) | (ushort)(param_8 >> 8) & 0xff;
    FUN_01ac6cbc(&local_30,&local_22,2);
    FUN_01ac6cbc(&local_30,param_7,param_8);
  }
  uVar1 = local_2c;
  (**(code **)(((undefined4 *)*param_2)[1] + 0x10))
            (*(undefined4 *)*param_2,param_3,param_4,param_2 + 0x11,0x30,param_5,param_6,local_2c,
             local_28);
  FUN_0134bd64(local_30,uVar1);
  *param_1 = 0x80000029;
  return;
}

