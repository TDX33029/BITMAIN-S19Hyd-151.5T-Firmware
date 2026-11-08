// FUN_0160f178 @ 0160f178 size=104 calls_out=1 calls_in=6
// strings: 

void FUN_0160f178(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_18;
  code *local_14;
  int *local_10;
  code *local_c;
  
  if (param_3 == 4) {
    uVar1 = *param_2;
    *param_1 = 0x80000000;
    param_1[1] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                 uVar1 >> 0x18;
    return;
  }
  local_18 = (undefined1 *)&local_20;
  local_20 = 4;
  local_10 = &local_1c;
  local_c = FUN_012fd02c;
  local_14 = FUN_012fd02c;
  local_1c = param_3;
  FUN_00664898(param_1,&DAT_00576af8,&local_18);
  return;
}

