// FUN_0091fa34 @ 0091fa34 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_0091fa34(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_38;
  int iStack_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  
LAB_0091fa54:
  if (*(uint *)(param_2 + 0x44) <= *(uint *)(param_2 + 0x38)) {
    FUN_00a49bec(&local_30,param_2,param_3);
    if ((local_30 & 0xff) == 5) {
LAB_0091fab0:
      FUN_00a79c48(&local_28,param_2,param_3);
      if ((local_28 & 0xff) != 4) {
        if ((local_28 & 0xff) == 5) {
          uVar1 = 7;
LAB_0091fae8:
          *param_1 = uVar1;
        }
        else {
          uVar1 = 3;
LAB_0091fb08:
          *(char *)(param_1 + 1) = (char)local_28;
          *param_1 = uVar1;
          *(uint *)((int)param_1 + 5) = local_28 >> 8 | local_24 << 0x18;
          *(char *)((int)param_1 + 0xb) = (char)((uint)local_24 >> 0x18);
          *(short *)((int)param_1 + 9) = (short)((uint)local_24 >> 8);
        }
        return;
      }
      goto LAB_0091fa54;
    }
    if ((local_30 & 0xff) != 4) {
      local_24 = local_2c;
      local_28 = local_30;
      FUN_0175191c(&local_38,&local_28);
      if ((local_38 & 0xff) == 5) goto LAB_0091fab0;
      if ((local_38 & 0xff) == 4) goto LAB_0091fae4;
      uVar1 = 1;
      local_28 = local_38;
      local_24 = iStack_34;
      goto LAB_0091fb08;
    }
  }
LAB_0091fae4:
  uVar1 = 5;
  goto LAB_0091fae8;
}

