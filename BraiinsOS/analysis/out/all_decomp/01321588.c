// FUN_01321588 @ 01321588 size=340 calls_out=5 calls_in=0
// strings: 

void FUN_01321588(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 10;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_013216ac;
    }
    else {
      if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_30,param_3,uVar3);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,uVar4,uVar3), local_30 != 4))
    goto LAB_013216ac;
  }
  if (((*(byte *)(param_2 + 0x18) == 2) ||
      (FUN_01329168(&local_30,param_3,2,*(byte *)(param_2 + 0x18) & 1), local_30 == 4)) &&
     (FUN_01328b10(&local_30,param_3,*(undefined4 *)(param_2 + 0x10)), local_30 == 4)) {
    *param_1 = 4;
    return;
  }
LAB_013216ac:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

