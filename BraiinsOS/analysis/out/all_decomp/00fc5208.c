// FUN_00fc5208 @ 00fc5208 size=224 calls_out=3 calls_in=0
// strings: 

void FUN_00fc5208(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar5 = *(uint *)(param_2 + 8);
  bVar7 = 0x7fffffe < uVar5;
  bVar6 = uVar5 == 0x7ffffff;
  uVar4 = uVar5 * 0x20;
  if (uVar5 < 0x8000000) {
    bVar7 = 0x7ffffffb < uVar4;
    bVar6 = uVar4 == 0x7ffffffc;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  if (uVar4 == 0) {
    local_54 = 4;
    local_58 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    local_54 = thunk_FUN_016d4a50(uVar4);
    if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
    local_58 = uVar5;
    if (uVar5 != 0) {
      uVar3 = 0;
      do {
        if (uVar4 == 0) break;
        FUN_00fc5304(&local_48,iVar2);
        puVar1 = (undefined4 *)(local_54 + uVar3 * 0x20);
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 - 0x20;
        iVar2 = iVar2 + 0x20;
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        puVar1[4] = local_38;
        puVar1[5] = uStack_34;
        puVar1[6] = uStack_30;
        puVar1[7] = uStack_2c;
      } while (uVar5 != uVar3);
    }
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = uVar5;
  return;
}

