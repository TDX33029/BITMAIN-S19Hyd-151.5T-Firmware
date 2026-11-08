// FUN_01509c40 @ 01509c40 size=448 calls_out=5 calls_in=1
// strings: 

void FUN_01509c40(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_30;
  undefined1 local_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  
  FUN_0152d84c(&local_30,&DAT_018a76e0,param_2);
  if (local_30 != '\x18') {
    *(char *)(param_1 + 1) = local_30;
    *(undefined1 *)((int)param_1 + 7) = uStack_2d;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_2e,local_2f);
    param_1[2] = CONCAT22(uStack_2a,uStack_2c);
    param_1[3] = CONCAT22(uStack_26,uStack_28);
    *param_1 = 1;
    return;
  }
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  local_48 = CONCAT22(uStack_2a,uStack_2c);
  if (uVar7 - uVar9 < local_48) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  uVar5 = uVar9 + local_48;
  param_2[2] = uVar5;
  if ((CARRY4(uVar9,local_48)) || (uVar7 < uVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar9,uVar5,uVar7,&DAT_018a78f8);
  }
  iVar8 = 0;
  iVar6 = 2;
  local_4c = *param_2 + uVar9;
  local_44 = 0;
  local_38 = 0;
  local_3c = 2;
  local_40 = 0;
  if (local_48 != 0) {
    do {
      iVar2 = local_38;
      FUN_0152a85c(&local_30,&local_4c);
      uVar3 = uStack_2c;
      if (local_30 != '\x18') {
        *(char *)(param_1 + 1) = local_30;
        *(uint *)((int)param_1 + 10) = CONCAT22(uStack_28,uStack_2a);
        *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
        *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2c,CONCAT11(uStack_2d,uStack_2e));
        *(undefined1 *)((int)param_1 + 5) = local_2f;
        *param_1 = 1;
        if (local_40 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(iVar6);
        return;
      }
      uVar1 = CONCAT11(uStack_2d,uStack_2e);
      if (iVar2 == local_40) {
        FUN_0154e0bc(&local_40);
        iVar6 = local_3c;
      }
      local_38 = iVar2 + 1;
      puVar4 = (undefined2 *)(iVar6 + iVar8);
      *puVar4 = uVar1;
      iVar8 = iVar8 + 4;
      puVar4[1] = uVar3;
    } while (local_44 < local_48);
  }
  *param_1 = 0;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  return;
}

