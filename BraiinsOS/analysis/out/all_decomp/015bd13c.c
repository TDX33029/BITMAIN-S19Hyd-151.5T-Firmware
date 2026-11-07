// FUN_015bd13c @ 015bd13c size=296 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_015bd13c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,int param_9,
                 uint param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_54 = 0;
  local_50 = param_3;
  local_4c = param_4;
  if (param_10 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_8,param_10,&DAT_018aa8e0);
  }
  FUN_016dd1aa(param_9,param_7,param_8);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 4);
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  (*pcVar2)(&local_31,param_1,&local_54,param_5,param_6,param_9,param_8);
  if (local_31 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_018aa6c8,&DAT_018aa8c0);
  }
  local_48 = local_30;
  uStack_44 = local_2c;
  uStack_40 = local_28;
  uStack_3c = local_24;
  uVar1 = param_8 + 0x10;
  if (param_10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_8,uVar1,param_10,&DAT_018aa8d0);
  }
  puVar3 = (undefined4 *)(param_9 + param_8);
  *puVar3 = local_30;
  puVar3[3] = local_24;
  puVar3[2] = local_28;
  puVar3[1] = local_2c;
  return uVar1;
}

