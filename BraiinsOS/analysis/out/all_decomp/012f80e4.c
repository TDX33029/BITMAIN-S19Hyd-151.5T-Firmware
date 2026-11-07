// FUN_012f80e4 @ 012f80e4 size=428 calls_out=4 calls_in=1
// strings: 

void FUN_012f80e4(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  if (*param_2 == 1) {
    iVar3 = param_2[1];
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 8;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_012f8268;
    }
    else {
      if (uVar2 < uVar1) goto LAB_012f827c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_30,param_3,iVar3,iVar3 >> 0x1f);
    if (local_30 != 4) goto LAB_012f8268;
  }
  if (param_2[2] != 0) {
    iVar3 = param_2[3];
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 0x10;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_012f8268;
    }
    else {
      if (uVar2 < uVar1) {
LAB_012f827c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_30,param_3,iVar3,iVar3 >> 0x1f);
    if (local_30 != 4) goto LAB_012f8268;
  }
  FUN_01328b10(&local_30,param_3,param_2[4]);
  if (local_30 == 4) {
    *param_1 = 4;
    return;
  }
LAB_012f8268:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

