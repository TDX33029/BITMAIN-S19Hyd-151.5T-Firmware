// FUN_01322b0c @ 01322b0c size=568 calls_out=5 calls_in=2
// strings: 

void FUN_01322b0c(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  
  iVar4 = 0;
  if (*param_2 == 1) {
    uVar1 = param_2[1];
    iVar4 = 2;
    if (0x7f < uVar1) {
      iVar4 = 3;
    }
    if (0x3fff < uVar1) {
      iVar4 = 4;
      if (0x1fffff < uVar1) {
        iVar4 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar4 = 0xb, uVar1 < 0x80000000)) {
        iVar4 = 6;
      }
    }
  }
  if (param_2[2] == 1) {
    uVar1 = param_2[3];
    iVar2 = 2;
    if (0x7f < uVar1) {
      iVar2 = 3;
    }
    if (0x3fff < uVar1) {
      iVar2 = 4;
      if (0x1fffff < uVar1) {
        iVar2 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar2 = 0xb, uVar1 < 0x80000000)) {
        iVar2 = 6;
      }
    }
    iVar4 = iVar2 + iVar4;
  }
  iVar2 = FUN_01337c54(param_2[4]);
  param_2[5] = iVar2 + iVar4;
  if (*param_2 == 1) {
    iVar4 = param_2[1];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar1 < 5) {
      local_1d = 8;
      local_1c = 0;
      FUN_01328914(&local_2c,param_3,&local_1d,1);
      if (local_2c != 4) goto LAB_01322cd4;
    }
    else {
      if (uVar3 < uVar1) goto LAB_01322d30;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_2c,param_3,iVar4,iVar4 >> 0x1f);
    if (local_2c != 4) goto LAB_01322cd4;
  }
  if (param_2[2] == 1) {
    iVar4 = param_2[3];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar1 < 5) {
      local_1d = 0x10;
      local_1c = 0;
      FUN_01328914(&local_2c,param_3,&local_1d,1);
      if (local_2c != 4) goto LAB_01322cd4;
    }
    else {
      if (uVar3 < uVar1) {
LAB_01322d30:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_2c,param_3,iVar4,iVar4 >> 0x1f);
    if (local_2c != 4) goto LAB_01322cd4;
  }
  FUN_01328b10(&local_2c,param_3,param_2[4]);
  if (local_2c == 4) {
    *param_1 = 4;
    return;
  }
LAB_01322cd4:
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = local_24;
  return;
}

