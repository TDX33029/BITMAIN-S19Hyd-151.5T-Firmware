// FUN_00a8027c @ 00a8027c size=344 calls_out=5 calls_in=3
// strings: 

void FUN_00a8027c(undefined4 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r8;
  int local_48 [2];
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  local_30 = 0;
  local_24 = 1;
  local_3c = 0x2e;
  local_28 = 0x2e;
  local_38 = param_2;
  local_34 = param_3;
  local_2c = param_3;
  FUN_0062a644(local_48,&local_3c);
  if (local_48[0] == 1) {
    param_2 = param_2 + local_40;
    param_3 = param_3 - local_40;
  }
  if ((param_3 < 0xe) || (*(char *)(param_2 + 0xd) < -0x40)) {
LAB_00a80304:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034de06,0x38,&DAT_0186d8e8);
  }
  if (param_3 < 0x11) {
    if (param_3 != 0x10) goto LAB_00a80304;
  }
  else if (*(char *)(param_2 + 0x10) < -0x40) goto LAB_00a80304;
  puVar2 = (undefined2 *)thunk_FUN_016d4a50(3);
  if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,3);
  }
  uVar1 = *(undefined1 *)(param_2 + 0xf);
  *puVar2 = *(undefined2 *)(param_2 + 0xd);
  uVar3 = 0x80000000;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  if (param_3 < 0x11) {
    param_3 = 0;
  }
  else if (-0x41 < *(char *)(param_2 + 0x10)) {
    uVar3 = param_3 - 0x10;
    if ((int)uVar3 < 0) {
      uVar4 = 0;
    }
    else {
      unaff_r8 = thunk_FUN_016d4a50(uVar3);
      if (unaff_r8 != 0) {
        FUN_016dd1aa(unaff_r8,(char *)(param_2 + 0x10),uVar3);
        param_3 = uVar3;
        goto LAB_00a803a4;
      }
      uVar4 = 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,uVar3);
  }
LAB_00a803a4:
  param_1[3] = uVar3;
  *param_1 = 3;
  param_1[1] = puVar2;
  param_1[2] = 3;
  param_1[4] = unaff_r8;
  param_1[5] = param_3;
  return;
}

