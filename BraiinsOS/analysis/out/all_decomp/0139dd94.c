// FUN_0139dd94 @ 0139dd94 size=520 calls_out=7 calls_in=4
// strings: 

void FUN_0139dd94(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0xac4) != 3) &&
     ((*param_3 - 1U < 2 ||
      (*(int *)(*(int *)(param_1 + 0xae8) + 0x128) == *(int *)(*(int *)(param_1 + 0xae8) + 300)))))
  {
    if (*(int *)(param_2 + 600) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018934f8);
    }
    FUN_0139dfe4(&local_30,(int *)(param_1 + 0xac4),(int *)(param_2 + 600),param_3,param_4,param_5);
    if (local_30 == 2) {
      local_28 = local_2c;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018935d8,&DAT_01893508);
    }
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xaa8);
  if ((uVar1 != 2) && (((char)param_3[6] != '\x01' || ((uint)param_3[3] < 0x81)))) {
    uVar3 = 0x200000;
    if ((uVar1 & 1) != 0) {
      uVar3 = *(int *)(param_1 + 0xaac) << 3;
    }
    uVar1 = uVar3 >> 5;
    if ((uVar3 & 0x18) != 0) {
      uVar1 = (uVar3 >> 5) + 1;
    }
    uVar3 = param_3[5] - param_3[4];
    if ((uint)param_3[5] < (uint)param_3[4]) {
      uVar3 = 0;
    }
    if (uVar1 < 0x8000000) {
      iVar2 = uVar1 << 5;
    }
    else {
      iVar2 = -1;
    }
    if (*(int *)(*(int *)(param_1 + 0xac0) + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_018931a0);
    }
    iVar2 = FUN_018462e8(iVar2);
    uVar1 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    if (uVar3 <= uVar1) {
      if (*(int *)(param_2 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893518);
      }
      FUN_0139e1b0(&local_30,(uint *)(param_1 + 0xaa8),(int *)(param_2 + 0x2d4),param_3,param_4,
                   param_5);
      if (local_30 == 2) {
        local_28 = local_2c;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018935d8,&DAT_01893528);
      }
      return;
    }
  }
  if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893538);
  }
  FUN_0139e380(param_1 + 0xa90,(int *)(param_2 + 0x268),param_3,param_4);
  return;
}

