// FUN_015bcc4c @ 015bcc4c size=312 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_015bcc4c(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,int param_9,uint param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_10 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_8,param_10,&DAT_018aa86c);
  }
  FUN_016dd1aa(param_9,param_7,param_8);
  local_4c = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_50 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  local_54 = 0;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 4);
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  (*pcVar2)(&local_35,param_1,&local_54,param_5,param_6,param_9,param_8);
  if (local_35 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_018aa6c8,&DAT_018aa84c);
  }
  local_48 = local_34;
  uStack_44 = local_30;
  uStack_40 = local_2c;
  uStack_3c = local_28;
  uVar1 = param_8 + 0x10;
  if (param_10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_8,uVar1,param_10,&DAT_018aa85c);
  }
  puVar3 = (undefined4 *)(param_9 + param_8);
  *puVar3 = local_34;
  puVar3[3] = local_28;
  puVar3[2] = local_2c;
  puVar3[1] = local_30;
  return uVar1;
}

