// FUN_0191d0d0 @ 0191d0d0 size=300 calls_out=3 calls_in=1
// strings: 

void FUN_0191d0d0(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(int *)(param_2 + 0x268) != 0) && (piVar3 = *(int **)(param_2 + 0x264), *piVar3 == 1)) {
    iVar6 = 0;
    uVar4 = piVar3[3];
    uVar5 = piVar3[4];
    iVar1 = uVar5 - uVar4;
    if (uVar5 < uVar4) {
      iVar1 = 0;
    }
    if (piVar3[1] + 4 == iVar1) {
      if (*(int *)(param_2 + 0x268) == 1) {
        iVar6 = *(int *)(param_2 + 0x26c);
        *(undefined4 *)(param_2 + 0x26c) = 0;
      }
      if ((uVar5 < uVar4) || (param_4 < uVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d25314);
      }
      iVar1 = *(int *)(param_5 + 4);
      *(undefined1 *)(param_1 + 3) = 2;
      iVar2 = piVar3[2];
      param_1[2] = uVar5 - uVar4;
      uVar5 = 1;
      *param_1 = iVar2;
      param_1[1] = param_3 + uVar4;
      *(int *)(param_5 + 4) = iVar1 + iVar6;
      goto LAB_0191d178;
    }
  }
  *(undefined2 *)param_1 = 10;
  uVar5 = 0;
LAB_0191d178:
  uVar4 = *(uint *)(param_2 + 0x268);
  if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar5,uVar4,&DAT_01d2fe30);
  }
  iVar6 = uVar4 - uVar5;
  *(undefined4 *)(param_2 + 0x268) = 0;
  if (uVar5 != 0) {
    if (uVar4 == uVar5) {
      return;
    }
    FUN_01bed864(*(int *)(param_2 + 0x264),*(int *)(param_2 + 0x264) + uVar5 * 0x14,iVar6 * 0x14);
    *(int *)(param_2 + 0x268) = iVar6;
    return;
  }
  if (uVar4 != 0) {
    *(int *)(param_2 + 0x268) = iVar6;
  }
  return;
}

