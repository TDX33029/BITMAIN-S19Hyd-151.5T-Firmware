// FUN_01305494 @ 01305494 size=268 calls_out=5 calls_in=3
// strings: 

void FUN_01305494(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  iVar4 = 0;
  if (*(char *)(param_2 + 0x18) != '\x02') {
    iVar4 = 3;
  }
  if (uVar1 != 0) {
    iVar5 = *(int *)(param_2 + 4);
    iVar3 = uVar1 * 0x78;
    do {
      uVar1 = FUN_012fa894(iVar5);
      iVar2 = 1;
      if (0x7f < uVar1) {
        iVar2 = 2;
        if (0x3fff < uVar1) {
          iVar2 = 3;
        }
        if ((0x1fffff < uVar1) && (iVar2 = 5, uVar1 < 0x10000000)) {
          iVar2 = 4;
        }
      }
      iVar5 = iVar5 + 0x78;
      iVar3 = iVar3 + -0x78;
      iVar4 = iVar4 + uVar1 + iVar2 + 2;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  *(int *)(param_2 + 0x14) = iVar3 + iVar4;
  FUN_01328ef8(&local_30,param_3);
  if ((local_30 == 4) && (FUN_0130509c(&local_30,param_2,param_3), local_30 == 4)) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  return;
}

