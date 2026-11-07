// FUN_012f9a5c @ 012f9a5c size=520 calls_out=5 calls_in=2
// strings: 

void FUN_012f9a5c(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 ***local_38;
  int iStack_34;
  int iStack_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  iVar6 = *(int *)(param_2 + 4);
  if (uVar3 != 0) {
    iVar2 = iVar6;
    do {
      uVar7 = *(uint *)(iVar2 + 0x3c);
      if (*(uint *)(iVar2 + 0x38) < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar7,*(uint *)(iVar2 + 0x38),&DAT_01890988);
      }
      iVar5 = *(int *)(iVar2 + 0x34);
      iVar4 = uVar7 * 0x1c;
      while (iVar4 != 0) {
        if (*(char *)(iVar5 + 0xc) != '\x01') goto LAB_012f9b60;
        pcVar1 = (char *)(iVar5 + 0x18);
        iVar4 = iVar4 + -0x1c;
        iVar5 = iVar5 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_012f9b60:
          local_2c = &DAT_018d885c;
          DataMemoryBarrier(0xb);
          if (DAT_018d885c != 0) {
            local_28 = &local_2c;
            local_38 = &local_28;
            FUN_015eedc4(&DAT_018d885c,0,&local_38,&DAT_0188f17c,&DAT_0188e9dc);
          }
          iVar6 = DAT_018d8860;
          *param_1 = 3;
          iVar6 = *(int *)(iVar6 + 0x68);
          if (*(char *)(iVar6 + 0xc) == '\x01') {
            iVar2 = *(int *)(iVar6 + 4);
            iVar6 = *(int *)(iVar6 + 8);
          }
          else {
            iVar2 = 1;
            iVar6 = 0;
          }
          param_1[1] = iVar2;
          param_1[2] = iVar6;
          return;
        }
      }
      iVar2 = iVar2 + 0x78;
    } while (iVar2 != iVar6 + uVar3 * 0x78);
  }
  iVar2 = 0;
  if (*(char *)(param_2 + 0x18) != '\x02') {
    iVar2 = 2;
  }
  if (*(char *)(param_2 + 0x19) != '\x02') {
    iVar2 = iVar2 + 2;
  }
  if (uVar3 != 0) {
    iVar4 = uVar3 * 0x78;
    do {
      uVar3 = FUN_012fa894(iVar6);
      iVar5 = 1;
      if (0x7f < uVar3) {
        iVar5 = 2;
        if (0x3fff < uVar3) {
          iVar5 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar5 = 5, uVar3 < 0x10000000)) {
          iVar5 = 4;
        }
      }
      iVar6 = iVar6 + 0x78;
      iVar4 = iVar4 + -0x78;
      iVar2 = iVar2 + uVar3 + iVar5 + 2;
    } while (iVar4 != 0);
  }
  iVar6 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  *(int *)(param_2 + 0x14) = iVar6 + iVar2;
  FUN_012f9858(&local_38,param_2,param_3);
  if (local_38 == (undefined4 ***)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_38;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  return;
}

