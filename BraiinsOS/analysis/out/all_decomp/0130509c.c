// FUN_0130509c @ 0130509c size=276 calls_out=5 calls_in=4
// strings: 

void FUN_0130509c(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if ((*(byte *)(param_2 + 0x18) == 2) ||
     (FUN_01329168(&local_30,param_3,0x21,*(byte *)(param_2 + 0x18) & 1), local_30 == 4)) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_2 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 8),&DAT_01890988);
    }
    if (uVar1 != 0) {
      iVar3 = *(int *)(param_2 + 4);
      iVar2 = uVar1 * 0x78;
      do {
        FUN_01328ef8(&local_30,param_3,0x1f3a);
        if (((local_30 != 4) ||
            (FUN_01328ef8(&local_30,param_3,*(undefined4 *)(iVar3 + 0x74)), local_30 != 4)) ||
           (FUN_012fb034(&local_30,iVar3,param_3), local_30 != 4)) goto LAB_01305190;
        iVar3 = iVar3 + 0x78;
        iVar2 = iVar2 + -0x78;
      } while (iVar2 != 0);
    }
    FUN_01328b10(&local_30,param_3,*(undefined4 *)(param_2 + 0x10));
    if (local_30 == 4) {
      *param_1 = 4;
      return;
    }
  }
LAB_01305190:
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  return;
}

