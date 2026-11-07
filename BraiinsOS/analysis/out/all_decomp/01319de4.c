// FUN_01319de4 @ 01319de4 size=508 calls_out=5 calls_in=2
// strings: 

void FUN_01319de4(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 ***local_38;
  int iStack_34;
  int iStack_30;
  undefined4 *local_28;
  undefined4 **local_24;
  
  uVar7 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar7,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  if (uVar7 == 0) {
    iVar3 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
    iVar4 = uVar7 * 0x78;
    iVar3 = iVar5;
    do {
      uVar8 = *(uint *)(iVar3 + 0x3c);
      if (*(uint *)(iVar3 + 0x38) < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar8,*(uint *)(iVar3 + 0x38),&DAT_01890988);
      }
      iVar6 = *(int *)(iVar3 + 0x34);
      iVar2 = uVar8 * 0x1c;
      while (iVar2 != 0) {
        if (*(char *)(iVar6 + 0xc) != '\x01') goto LAB_01319e74;
        pcVar1 = (char *)(iVar6 + 0x18);
        iVar2 = iVar2 + -0x1c;
        iVar6 = iVar6 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_01319e74:
          local_28 = &DAT_018d88dc;
          DataMemoryBarrier(0xb);
          if (DAT_018d88dc != 0) {
            local_24 = &local_28;
            local_38 = &local_24;
            FUN_015eedc4(&DAT_018d88dc,0,&local_38,&DAT_0188f08c,&DAT_0188e9dc);
          }
          iVar3 = DAT_018d88e0;
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
    } while (iVar3 != iVar5 + uVar7 * 0x78);
    iVar3 = 0;
    do {
      uVar7 = FUN_012fa894(iVar5);
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
      iVar5 = iVar5 + 0x78;
      iVar4 = iVar4 + -0x78;
      iVar3 = iVar3 + uVar7 + iVar2 + 2;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  *(int *)(param_2 + 0x14) = iVar4 + iVar3;
  FUN_01300ecc(&local_38,param_2,param_3);
  if (local_38 == (undefined4 ***)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_38;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  return;
}

