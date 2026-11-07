// FUN_012fca68 @ 012fca68 size=372 calls_out=4 calls_in=2
// strings: 

void FUN_012fca68(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 ***local_28;
  int iStack_24;
  int iStack_20;
  undefined4 *local_18;
  undefined4 **local_14;
  
  uVar5 = *(uint *)(param_2 + 0xa8);
  uVar3 = *(uint *)(param_2 + 0xac);
  if (uVar5 < uVar3) {
LAB_012fcb88:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,uVar5,&DAT_01890988);
  }
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_2 + 0xa4);
    iVar7 = iVar2 + uVar3 * 0x78;
    do {
      uVar5 = *(uint *)(iVar2 + 0x38);
      uVar3 = *(uint *)(iVar2 + 0x3c);
      if (uVar5 < uVar3) goto LAB_012fcb88;
      iVar6 = *(int *)(iVar2 + 0x34);
      iVar4 = uVar3 * 0x1c;
      while (iVar4 != 0) {
        if (*(char *)(iVar6 + 0xc) != '\x01') goto LAB_012fcb28;
        pcVar1 = (char *)(iVar6 + 0x18);
        iVar4 = iVar4 + -0x1c;
        iVar6 = iVar6 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_012fcb28:
          local_18 = &DAT_018d8864;
          DataMemoryBarrier(0xb);
          if (DAT_018d8864 != 0) {
            local_14 = &local_18;
            local_28 = &local_14;
            FUN_015eedc4(&DAT_018d8864,0,&local_28,&DAT_0188f0a0,&DAT_0188e9dc);
          }
          iVar2 = DAT_018d8868;
          *param_1 = 3;
          iVar2 = *(int *)(iVar2 + 0x68);
          if (*(char *)(iVar2 + 0xc) == '\x01') {
            iVar7 = *(int *)(iVar2 + 4);
            iVar2 = *(int *)(iVar2 + 8);
          }
          else {
            iVar7 = 1;
            iVar2 = 0;
          }
          param_1[1] = iVar7;
          param_1[2] = iVar2;
          return;
        }
      }
      iVar2 = iVar2 + 0x78;
    } while (iVar2 != iVar7);
  }
  FUN_012fc5f0(param_2);
  FUN_012fbf3c(&local_28,param_2,param_3);
  if (local_28 == (undefined4 ***)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

