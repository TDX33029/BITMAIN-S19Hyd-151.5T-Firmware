// FUN_013ce1a0 @ 013ce1a0 size=1168 calls_out=5 calls_in=1
// strings: 

void FUN_013ce1a0(int *param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_68;
  int local_64;
  byte local_60;
  undefined1 auStack_5f [59];
  
  iVar2 = **(int **)(param_2 + 0xb4);
  if (param_3 == 0) {
    puVar3 = (undefined4 *)(iVar2 + 300);
  }
  else if (param_3 == 1) {
    puVar3 = (undefined4 *)(iVar2 + 0x128);
  }
  else {
    if (*(uint *)(iVar2 + 0x154) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00564fa0,0x10,&DAT_01894858);
    }
    puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x150) + param_4 * 4);
  }
  uVar4 = *puVar3;
  FUN_013cf7d0(&local_68,param_2,uVar4,0);
  bVar1 = local_60;
  iVar2 = local_64;
  if (local_68 != 0x30) {
    FUN_016dd1aa((int)param_1 + 9,auStack_5f,0x37);
    *(byte *)(param_1 + 2) = local_60;
    *param_1 = local_68;
    param_1[1] = local_64;
    return;
  }
  FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,0,local_64);
  if ((bVar1 & 1) != 0) {
    iVar5 = param_5[2];
    if (iVar5 == *param_5) {
      FUN_013c1038(param_5);
    }
    *(int *)(param_5[1] + iVar5 * 4) = iVar2;
    param_5[2] = iVar5 + 1;
  }
  if ((*(uint *)(**(int **)(param_2 + 0xb4) + 0x134) & 0x3ffc0) == 0) {
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,1,iVar2);
  }
  else {
    FUN_013cf7d0(&local_68,param_2,uVar4,1);
    bVar1 = local_60;
    iVar5 = local_64;
    if (local_68 != 0x30) {
      FUN_016dd1aa((int)param_1 + 9,auStack_5f,0x37);
      *(byte *)(param_1 + 2) = local_60;
      *param_1 = local_68;
      param_1[1] = local_64;
      return;
    }
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,1,local_64);
    if ((bVar1 & 1) != 0) {
      iVar6 = param_5[2];
      if (iVar6 == *param_5) {
        FUN_013c1038(param_5);
      }
      *(int *)(param_5[1] + iVar6 * 4) = iVar5;
      param_5[2] = iVar6 + 1;
    }
  }
  if ((*(byte *)(**(int **)(param_2 + 0xb4) + 0x134) & 0x3f) == 0) {
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,2,iVar2);
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,3,iVar2);
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,4,iVar2);
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,5,iVar2);
LAB_013ce5c0:
    *param_1 = 0x30;
    return;
  }
  FUN_013cf7d0(&local_68,param_2,uVar4,2);
  bVar1 = local_60;
  iVar2 = local_64;
  if (local_68 == 0x30) {
    FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,2,local_64);
    if ((bVar1 & 1) != 0) {
      iVar5 = param_5[2];
      if (iVar5 == *param_5) {
        FUN_013c1038(param_5);
      }
      *(int *)(param_5[1] + iVar5 * 4) = iVar2;
      param_5[2] = iVar5 + 1;
    }
    FUN_013cf7d0(&local_68,param_2,uVar4,3);
    bVar1 = local_60;
    iVar2 = local_64;
    if (local_68 == 0x30) {
      FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,3,local_64);
      if ((bVar1 & 1) != 0) {
        iVar5 = param_5[2];
        if (iVar5 == *param_5) {
          FUN_013c1038(param_5);
        }
        *(int *)(param_5[1] + iVar5 * 4) = iVar2;
        param_5[2] = iVar5 + 1;
      }
      FUN_013cf7d0(&local_68,param_2,uVar4,4);
      bVar1 = local_60;
      iVar2 = local_64;
      if (local_68 == 0x30) {
        FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,4,local_64);
        if ((bVar1 & 1) != 0) {
          iVar5 = param_5[2];
          if (iVar5 == *param_5) {
            FUN_013c1038(param_5);
          }
          *(int *)(param_5[1] + iVar5 * 4) = iVar2;
          param_5[2] = iVar5 + 1;
        }
        FUN_013cf7d0(&local_68,param_2,uVar4,5);
        if (local_68 == 0x30) {
          FUN_0136ca50(*(undefined4 *)(param_2 + 0xb8),param_3,param_4,5,local_64);
          if ((local_60 & 1) != 0) {
            iVar2 = param_5[2];
            if (iVar2 == *param_5) {
              FUN_013c1038(param_5);
            }
            *(int *)(param_5[1] + iVar2 * 4) = local_64;
            param_5[2] = iVar2 + 1;
            *param_1 = 0x30;
            return;
          }
          goto LAB_013ce5c0;
        }
      }
    }
  }
  FUN_016dd1aa((int)param_1 + 9,auStack_5f,0x37);
  *(byte *)(param_1 + 2) = local_60;
  *param_1 = local_68;
  param_1[1] = local_64;
  return;
}

