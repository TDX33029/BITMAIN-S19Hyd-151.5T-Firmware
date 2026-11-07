// FUN_0168a04c @ 0168a04c size=1104 calls_out=5 calls_in=1
// strings: 

void FUN_0168a04c(int *param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_68;
  int local_64;
  byte local_60;
  undefined1 auStack_5f [59];
  
  piVar1 = *(int **)(param_2 + 0xb4);
  if (param_3 == 0) {
    puVar2 = (undefined4 *)(*piVar1 + 300);
  }
  else if (param_3 == 1) {
    puVar2 = (undefined4 *)(*piVar1 + 0x128);
  }
  else {
    if (*(uint *)(*piVar1 + 0x154) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00569be8,0x10,&DAT_01d076cc);
    }
    puVar2 = (undefined4 *)(*(int *)(*piVar1 + 0x150) + param_4 * 4);
  }
  uVar3 = *puVar2;
  FUN_0168be48(&local_68,param_2,uVar3,0);
  bVar4 = local_60;
  iVar7 = local_64;
  if (local_68 != 0x30) {
    FUN_01bed4e2((int)param_1 + 9,auStack_5f,0x37);
    *(byte *)(param_1 + 2) = local_60;
    *param_1 = local_68;
    param_1[1] = local_64;
    return;
  }
  FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,0,local_64);
  if ((bVar4 & 1) != 0) {
    iVar5 = param_5[2];
    if (iVar5 == *param_5) {
      FUN_01a54b48(param_5);
    }
    *(int *)(param_5[1] + iVar5 * 4) = iVar7;
    param_5[2] = iVar5 + 1;
  }
  if ((*(uint *)(**(int **)(param_2 + 0xb4) + 0x134) & 0x3ffc0) == 0) {
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,1,iVar7);
  }
  else {
    FUN_0168be48(&local_68,param_2,uVar3,1);
    bVar4 = local_60;
    iVar5 = local_64;
    if (local_68 != 0x30) {
      FUN_01bed4e2((int)param_1 + 9,auStack_5f,0x37);
      *(byte *)(param_1 + 2) = local_60;
      *param_1 = local_68;
      param_1[1] = local_64;
      return;
    }
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,1,local_64);
    if ((bVar4 & 1) != 0) {
      iVar6 = param_5[2];
      if (iVar6 == *param_5) {
        FUN_01a54b48(param_5);
      }
      *(int *)(param_5[1] + iVar6 * 4) = iVar5;
      param_5[2] = iVar6 + 1;
    }
  }
  if ((*(byte *)(**(int **)(param_2 + 0xb4) + 0x134) & 0x3f) == 0) {
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,2,iVar7);
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,3,iVar7);
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,4,iVar7);
    FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,5,iVar7);
LAB_0168a474:
    *param_1 = 0x30;
  }
  else {
    FUN_0168be48(&local_68,param_2,uVar3,2);
    bVar4 = local_60;
    iVar7 = local_64;
    iVar5 = local_68;
    if (local_68 == 0x30) {
      FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,2,local_64);
      if ((bVar4 & 1) != 0) {
        iVar5 = param_5[2];
        if (iVar5 == *param_5) {
          FUN_01a54b48(param_5);
        }
        *(int *)(param_5[1] + iVar5 * 4) = iVar7;
        param_5[2] = iVar5 + 1;
      }
      FUN_0168be48(&local_68,param_2,uVar3,3);
      bVar4 = local_60;
      iVar7 = local_64;
      iVar5 = local_68;
      if (local_68 == 0x30) {
        FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,3,local_64);
        if ((bVar4 & 1) != 0) {
          iVar5 = param_5[2];
          if (iVar5 == *param_5) {
            FUN_01a54b48(param_5);
          }
          *(int *)(param_5[1] + iVar5 * 4) = iVar7;
          param_5[2] = iVar5 + 1;
        }
        FUN_0168be48(&local_68,param_2,uVar3,4);
        bVar4 = local_60;
        iVar7 = local_64;
        iVar5 = local_68;
        if (local_68 == 0x30) {
          FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,4,local_64);
          if ((bVar4 & 1) != 0) {
            iVar5 = param_5[2];
            if (iVar5 == *param_5) {
              FUN_01a54b48(param_5);
            }
            *(int *)(param_5[1] + iVar5 * 4) = iVar7;
            param_5[2] = iVar5 + 1;
          }
          FUN_0168be48(&local_68,param_2,uVar3,5);
          iVar5 = local_68;
          iVar7 = local_64;
          bVar4 = local_60;
          if (local_68 == 0x30) {
            FUN_016b33f8(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,5,local_64);
            if ((local_60 & 1) != 0) {
              iVar7 = param_5[2];
              if (iVar7 == *param_5) {
                FUN_01a54b48(param_5);
              }
              *(int *)(param_5[1] + iVar7 * 4) = local_64;
              param_5[2] = iVar7 + 1;
            }
            goto LAB_0168a474;
          }
        }
      }
    }
    FUN_01bed4e2((int)param_1 + 9,auStack_5f,0x37);
    *(byte *)(param_1 + 2) = bVar4;
    *param_1 = iVar5;
    param_1[1] = iVar7;
  }
  return;
}

