// FUN_01526858 @ 01526858 size=276 calls_out=4 calls_in=2
// strings: 

void FUN_01526858(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  
  *(undefined2 *)(param_1 + 0x252) = 0x101;
  if (param_2 != 0) {
    while (*(int *)(param_2 + 0x14) != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      uVar3 = *(int *)(param_2 + 0x10) + 1;
      piVar2 = (int *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) * 0xc);
      iVar4 = *piVar2;
      uVar1 = uVar3 - *(uint *)(param_2 + 8);
      if (uVar3 < *(uint *)(param_2 + 8)) {
        uVar1 = uVar3;
      }
      iVar6 = piVar2[1];
      uVar3 = piVar2[2];
      *(uint *)(param_2 + 0x10) = uVar1;
      if (iVar4 == -0x80000000) {
        return;
      }
      uVar1 = *(uint *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x18) = 0;
      if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,uVar3,&DAT_018af198);
      }
      iVar5 = uVar3 - uVar1;
      if (uVar1 == 0) {
        local_30 = 0;
        iStack_2c = iVar6;
        local_28 = iVar5;
        if (iVar5 != 0) goto LAB_01526918;
      }
      else if (iVar5 == 0) {
        local_28 = 0;
        local_30 = 0;
        iStack_2c = iVar6;
      }
      else {
        FUN_016dd52c(iVar6,iVar6 + uVar1,iVar5);
LAB_01526918:
        local_30 = 0;
        iStack_2c = iVar6;
        local_28 = iVar5;
        FUN_01526994(param_1,&local_30,1);
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
  }
  return;
}

