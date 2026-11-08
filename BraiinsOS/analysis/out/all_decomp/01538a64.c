// FUN_01538a64 @ 01538a64 size=484 calls_out=4 calls_in=0
// strings: assertion failed: context.len() <= 0xffff

void FUN_01538a64(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_0154e5f8(&local_30,0,0x20,1,1);
  iVar1 = local_28;
  iVar3 = local_2c;
  FUN_016dd1aa(local_2c + local_28,param_2 + 1,0x20);
  local_28 = iVar1 + 0x20;
  if ((uint)(local_30 - local_28) < 0x20) {
    FUN_0154e5f8(&local_30,local_28,0x20,1,1);
    iVar3 = local_2c;
  }
  iVar1 = local_28;
  FUN_016dd1aa(iVar3 + local_28,param_2 + 9,0x20);
  local_28 = iVar1 + 0x20;
  if (param_7 != 0) {
    if (0xffff < param_8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: context.len() <= 0xffff",0x29,&DAT_018a8ae8);
    }
    if ((uint)(local_30 - local_28) < 2) {
      FUN_0154e5f8(&local_30,local_28,2,1,1);
      iVar3 = local_2c;
    }
    puVar2 = (ushort *)(iVar3 + local_28);
    local_28 = local_28 + 2;
    *puVar2 = (ushort)((param_8 << 0x18) >> 0x10) | (ushort)(param_8 >> 8) & 0xff;
    if ((uint)(local_30 - local_28) < param_8) {
      FUN_0154e5f8(&local_30,local_28,param_8,1,1);
    }
    iVar1 = local_28;
    iVar3 = local_2c;
    FUN_016dd1aa(local_2c + local_28,param_7,param_8);
    local_28 = iVar1 + param_8;
  }
  (**(code **)(((undefined4 *)*param_2)[1] + 0x10))
            (*(undefined4 *)*param_2,param_3,param_4,param_2 + 0x11,0x30,param_5,param_6,iVar3,
             local_28);
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  *param_1 = 0x80000029;
  return;
}

