// FUN_013636f8 @ 013636f8 size=448 calls_out=7 calls_in=1
// strings: 

void FUN_013636f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  
  iVar6 = *(int *)(param_2 + 4);
  uVar8 = *(uint *)(param_2 + 8);
  local_70 = 0;
  local_78 = 0;
  local_60 = uVar8 & 1;
  if (local_60 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&DAT_00568f30,&local_60,0);
  }
  if (uVar8 != 0) {
    iVar11 = *(int *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar9 = 0;
    local_60 = 0;
    do {
      local_64 = 0;
      local_6c = 0;
      uVar12 = uVar9 << 1 | 1;
      local_68 = 4;
      if (uVar8 <= uVar12) {
        puVar4 = &DAT_01894878;
LAB_013638a8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar8,puVar4);
      }
      uVar13 = *(uint *)(iVar6 + uVar12 * 4);
      if (uVar13 != 0) {
        iVar3 = 4;
        do {
          uVar1 = local_64;
          uVar2 = *(uint *)(iVar6 + uVar9 * 8);
          uVar5 = *(uint *)(iVar6 + uVar12 * 4);
          if ((CARRY4(uVar5,uVar2)) || (uVar7 < uVar5 + uVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar2,uVar5 + uVar2,uVar7,&DAT_01894888);
          }
          if (uVar5 <= local_64) {
            puVar4 = &DAT_01894818;
            uVar8 = uVar5;
            uVar12 = local_64;
            goto LAB_013638a8;
          }
          uVar10 = *(undefined4 *)(iVar11 + uVar2 * 4 + local_64 * 4);
          if (local_64 == local_6c) {
            FUN_013c1038(&local_6c);
            iVar3 = local_68;
          }
          local_64 = uVar1 + 1;
          *(undefined4 *)(iVar3 + uVar1 * 4) = uVar10;
        } while (uVar13 != local_64);
      }
      uVar10 = FUN_0136399c(param_3,uVar9);
      FUN_013ce6bc(&local_60,&local_78,uVar10,&local_6c);
      if ((local_60 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_5c);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8 >> 1);
  }
  *param_1 = local_78;
  param_1[1] = uStack_74;
  param_1[2] = local_70;
  return;
}

