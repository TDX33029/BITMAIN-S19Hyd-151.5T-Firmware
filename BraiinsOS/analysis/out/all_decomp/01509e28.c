// FUN_01509e28 @ 01509e28 size=644 calls_out=6 calls_in=1
// strings: 

void FUN_01509e28(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  ushort local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  uint local_28;
  
  FUN_0152d84c(&local_34,&DAT_005654a0,param_2);
  if (local_34 != '\x18') {
    *(char *)(param_1 + 1) = local_34;
    *(undefined1 *)((int)param_1 + 7) = uStack_31;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_32,uStack_33);
    param_1[2] = CONCAT22(uStack_2e,local_30);
    param_1[3] = CONCAT22(uStack_2a,local_2c);
    *param_1 = 1;
    return;
  }
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  local_48 = CONCAT22(uStack_2e,local_30);
  if (uVar6 - uVar7 < local_48) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  uVar5 = uVar7 + local_48;
  param_2[2] = uVar5;
  if ((CARRY4(uVar7,local_48)) || (uVar6 < uVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar7,uVar5,uVar6,&DAT_018a78f8);
  }
  local_4c = *param_2 + uVar7;
  local_44 = 0;
  local_38 = 0;
  local_50 = 4;
  local_3c = 4;
  local_40 = 0;
  if (local_48 != 0) {
    iVar8 = 8;
    do {
      iVar3 = local_38;
      FUN_0152a6b0(&local_34,&local_4c);
      if (local_34 != '\x18') {
        local_28 = CONCAT22(uStack_2a,local_2c);
        uVar7 = (uint)local_30 | CONCAT22(local_2c,uStack_2e) << 0x10;
        uVar6 = CONCAT22(CONCAT11(uStack_31,uStack_32),CONCAT11(uStack_33,local_34));
LAB_0150a024:
        iVar2 = local_3c;
        iVar8 = 0;
        *param_1 = 1;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = local_28;
        if (iVar3 != 0) {
          do {
            if (*(int *)(iVar2 + iVar8 * 0x10) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + iVar8 * 0x10 + 4));
            }
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
        }
        if (local_40 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(iVar2);
        return;
      }
      uVar5 = CONCAT22(local_30,CONCAT11(uStack_31,uStack_32));
      FUN_015409a4(&local_34,&local_4c);
      uVar7 = local_28;
      uVar6 = CONCAT22(uStack_2e,local_30);
      uVar1 = CONCAT22(uStack_2a,local_2c);
      if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34))) == 1) {
        uVar7 = uVar1;
        goto LAB_0150a024;
      }
      if (uVar6 == 0x80000000) {
        uVar6 = uVar1;
        local_28 = uVar5;
        goto LAB_0150a024;
      }
      if (iVar3 == local_40) {
        FUN_0154e184(&local_40);
        local_50 = local_3c;
      }
      puVar4 = (uint *)(local_50 + iVar3 * 0x10);
      *puVar4 = uVar6;
      local_38 = iVar3 + 1;
      puVar4[1] = uVar1;
      puVar4 = (uint *)(local_50 + iVar8);
      *puVar4 = uVar7;
      iVar8 = iVar8 + 0x10;
      puVar4[1] = uVar5;
    } while (local_44 < local_48);
  }
  *param_1 = 0;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  return;
}

