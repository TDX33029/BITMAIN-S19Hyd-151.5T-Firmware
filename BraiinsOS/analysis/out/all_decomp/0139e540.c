// FUN_0139e540 @ 0139e540 size=612 calls_out=7 calls_in=4
// strings: 

bool FUN_0139e540(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  
  if ((*(int *)(param_1 + 0xac4) == 3) ||
     ((1 < *param_3 - 1U &&
      (*(int *)(*(int *)(param_1 + 0xae8) + 0x128) != *(int *)(*(int *)(param_1 + 0xae8) + 300)))))
  {
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
          FUN_00faa444(&DAT_01893598);
        }
        local_2d = *(undefined1 *)((int)param_3 + 0x1b);
        local_2f = *(undefined2 *)((int)param_3 + 0x19);
        local_48 = *param_3;
        local_44 = param_3[1];
        iStack_40 = param_3[2];
        iStack_3c = param_3[3];
        iStack_38 = param_3[4];
        iStack_34 = param_3[5];
        local_30 = 1;
        FUN_0139e1b0(&local_2c,(uint *)(param_1 + 0xaa8),(int *)(param_2 + 0x2d4),&local_48,4,0);
        if (local_2c == 2) {
          local_48 = local_28;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_018935d8,&DAT_018935a8);
        }
        goto LAB_0139e69c;
      }
    }
    if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893588);
    }
    local_2d = *(undefined1 *)((int)param_3 + 0x1b);
    local_2f = *(undefined2 *)((int)param_3 + 0x19);
    local_48 = *param_3;
    local_44 = param_3[1];
    iStack_40 = param_3[2];
    iStack_3c = param_3[3];
    iStack_38 = param_3[4];
    iStack_34 = param_3[5];
    local_30 = 1;
    local_2c = FUN_0139e380(param_1 + 0xa90,(int *)(param_2 + 0x268),&local_48,4,0);
  }
  else {
    if (*(int *)(param_2 + 600) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018934f8);
    }
    FUN_0139dfe4(&local_48,(int *)(param_1 + 0xac4),(int *)(param_2 + 600),param_3,4,0);
    local_2c = local_48;
    if (local_48 == 2) {
      local_2c = local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018935d8,&DAT_01893508);
    }
  }
LAB_0139e69c:
  return local_2c == 1;
}

