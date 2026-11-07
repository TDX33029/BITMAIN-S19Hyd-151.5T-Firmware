// FUN_0155bae4 @ 0155bae4 size=344 calls_out=5 calls_in=0
// strings: 

void FUN_0155bae4(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  sVar1 = *param_2;
  if (sVar1 == 3) {
    uVar5 = 0x13;
    puVar4 = &DAT_0040c5a6;
  }
  else {
    if (sVar1 == 5) {
      puVar4 = &UNK_00565430;
    }
    else {
      if (sVar1 != 7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a8bb0);
      }
      puVar4 = &DAT_005653d0;
    }
    uVar5 = 0x10;
  }
  uVar6 = *(undefined4 *)(*(int *)(param_2 + 2) + 0x10);
  uVar8 = *(undefined4 *)(*(int *)(param_2 + 2) + 0x14);
  FUN_01561fe8(&local_34,0x30,puVar4,uVar5,1,0);
  FUN_01561fe8(&local_28,3,&DAT_0041121f,1,uVar6,uVar8);
  uVar3 = local_20;
  iVar2 = local_24;
  iVar7 = local_2c;
  if ((uint)(local_34 - local_2c) < local_20) {
    FUN_0154e5f8(&local_34,local_2c,local_20,1,1);
    iVar7 = local_2c;
  }
  FUN_016dd1aa(local_30 + iVar7,iVar2,uVar3);
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  FUN_01561fe8(&local_28,0x30,local_30,iVar7 + uVar3,1,0);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  return;
}

