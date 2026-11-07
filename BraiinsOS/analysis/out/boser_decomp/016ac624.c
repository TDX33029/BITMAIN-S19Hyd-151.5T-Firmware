// FUN_016ac624 @ 016ac624 size=436 calls_out=7 calls_in=1
// strings: 

void FUN_016ac624(undefined4 *param_1,int param_2,undefined4 param_3)

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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  iVar6 = *(int *)(param_2 + 4);
  uVar8 = *(uint *)(param_2 + 8);
  local_40 = 0;
  local_48 = 0;
  local_30 = uVar8 & 1;
  if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&DAT_00533278,&local_30,0);
  }
  if (uVar8 != 0) {
    iVar11 = *(int *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar9 = 0;
    local_30 = 0;
    do {
      local_34 = 0;
      local_3c = 0;
      uVar12 = uVar9 << 1 | 1;
      local_38 = 4;
      if (uVar8 <= uVar12) {
        puVar4 = &DAT_01d0860c;
LAB_016ac7c8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar8,puVar4);
      }
      uVar13 = *(uint *)(iVar6 + uVar12 * 4);
      if (uVar13 != 0) {
        iVar3 = 4;
        do {
          uVar1 = local_34;
          uVar2 = *(uint *)(iVar6 + uVar9 * 8);
          uVar5 = *(uint *)(iVar6 + uVar12 * 4);
          if ((CARRY4(uVar5,uVar2)) || (uVar7 < uVar5 + uVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar2,uVar5 + uVar2,uVar7,&DAT_01d0867c);
          }
          if (uVar5 <= local_34) {
            puVar4 = &DAT_01d085fc;
            uVar8 = uVar5;
            uVar12 = local_34;
            goto LAB_016ac7c8;
          }
          uVar10 = *(undefined4 *)(iVar11 + uVar2 * 4 + local_34 * 4);
          if (local_34 == local_3c) {
            FUN_01a54b48(&local_3c);
            iVar3 = local_38;
          }
          local_34 = uVar1 + 1;
          *(undefined4 *)(iVar3 + uVar1 * 4) = uVar10;
        } while (uVar13 != local_34);
      }
      uVar10 = FUN_016ac838(param_3,uVar9);
      FUN_01688b98(&local_30,&local_48,uVar10,&local_3c);
      if (local_30 != 0x80000000) {
        FUN_0134aee0(local_30,local_2c,4,4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8 >> 1);
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = local_40;
  return;
}

