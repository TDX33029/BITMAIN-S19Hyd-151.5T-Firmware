// FUN_0130e64c @ 0130e64c size=532 calls_out=5 calls_in=2
// strings: 

void FUN_0130e64c(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 ***local_38;
  int iStack_34;
  int iStack_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  uVar7 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar7,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  if (uVar7 == 0) {
    iVar3 = 0;
    if (*(char *)(param_2 + 0x18) != '\x02') {
      iVar3 = 2;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
    uVar6 = uVar7 * 0x78;
    iVar3 = iVar4;
    do {
      uVar8 = *(uint *)(iVar3 + 0x3c);
      if (*(uint *)(iVar3 + 0x38) < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar8,*(uint *)(iVar3 + 0x38),&DAT_01890988);
      }
      iVar5 = *(int *)(iVar3 + 0x34);
      iVar2 = uVar8 * 0x1c;
      while (iVar2 != 0) {
        if (*(char *)(iVar5 + 0xc) != '\x01') goto LAB_0130e6ec;
        pcVar1 = (char *)(iVar5 + 0x18);
        iVar2 = iVar2 + -0x1c;
        iVar5 = iVar5 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_0130e6ec:
          local_2c = &DAT_018d88a4;
          DataMemoryBarrier(0xb);
          if (DAT_018d88a4 != 0) {
            local_28 = &local_2c;
            local_38 = &local_28;
            FUN_015eedc4(&DAT_018d88a4,0,&local_38,&DAT_0188f118,&DAT_0188e9dc);
          }
          iVar3 = DAT_018d88a8;
          *param_1 = 3;
          iVar3 = *(int *)(iVar3 + 0x68);
          if (*(char *)(iVar3 + 0xc) == '\x01') {
            iVar4 = *(int *)(iVar3 + 4);
            iVar3 = *(int *)(iVar3 + 8);
          }
          else {
            iVar4 = 1;
            iVar3 = 0;
          }
          param_1[1] = iVar4;
          param_1[2] = iVar3;
          return;
        }
      }
      iVar3 = iVar3 + 0x78;
    } while (iVar3 != iVar4 + uVar7 * 0x78);
    iVar3 = 0;
    if (*(char *)(param_2 + 0x18) != '\x02') {
      iVar3 = 2;
    }
    while (uVar7 != 0) {
      uVar7 = FUN_012fa894(iVar4);
      iVar2 = 1;
      if (0x7f < uVar7) {
        iVar2 = 2;
        if (0x3fff < uVar7) {
          iVar2 = 3;
        }
        if ((0x1fffff < uVar7) && (iVar2 = 5, uVar7 < 0x10000000)) {
          iVar2 = 4;
        }
      }
      iVar4 = iVar4 + 0x78;
      iVar3 = iVar3 + uVar7 + iVar2 + 2;
      uVar6 = uVar6 - 0x78;
      uVar7 = uVar6;
    }
  }
  iVar4 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  *(int *)(param_2 + 0x14) = iVar4 + iVar3;
  FUN_0130e084(&local_38,param_2,param_3);
  if (local_38 == (undefined4 ***)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_38;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  return;
}

