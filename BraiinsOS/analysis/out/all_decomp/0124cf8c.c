// FUN_0124cf8c @ 0124cf8c size=472 calls_out=5 calls_in=0
// strings: 

bool FUN_0124cf8c(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint local_64 [3];
  undefined4 uStack_58;
  uint local_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  
  bVar4 = true;
  if (*param_2 == '\x05') {
    local_64[2] = *(uint *)(param_2 + 4);
    uStack_58 = *(undefined4 *)(param_2 + 8);
    iVar8 = *param_1;
    local_50 = 0;
    local_44 = *(undefined4 *)(param_2 + 0xc);
    if (local_64[2] == 0) {
      local_44 = 0;
    }
    local_64[1] = 0;
    local_64[0] = (uint)(local_64[2] != 0);
    local_54 = local_64[0];
    iStack_4c = local_64[2];
    uStack_48 = uStack_58;
    do {
      while( true ) {
        while( true ) {
          iVar1 = FUN_00f45584(local_64);
          if (iVar1 == 0) goto LAB_0124d144;
          iVar9 = *(int *)(iVar1 + 8);
          uVar6 = *(undefined4 *)(iVar1 + 4);
          if (iVar9 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = thunk_FUN_016d4a50(iVar9);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar9);
            }
          }
          FUN_016dd1aa(iVar2,uVar6,iVar9);
          local_40[0] = 3;
          uVar3 = 1;
          if ((int)*(uint *)(iVar8 + 8) < 0) {
            uVar3 = *(uint *)(iVar8 + 8) ^ 0x80000000;
          }
          local_3c = iVar9;
          local_38 = iVar2;
          local_34 = iVar9;
          if (uVar3 != 0) break;
          iVar9 = *(int *)(iVar8 + 0xc);
          FUN_01164f34(local_40);
          if (iVar9 != 0) goto LAB_0124d144;
        }
        if (uVar3 == 1) break;
        puVar5 = *(undefined4 **)(iVar8 + 0x10);
        iVar9 = *(int *)(iVar8 + 0x14) << 5;
        while (iVar9 != 0) {
          iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,local_40,param_3);
          iVar9 = iVar9 + -0x20;
          puVar5 = puVar5 + 8;
          if (iVar2 == 0) goto LAB_0124d13c;
        }
LAB_0124d130:
        FUN_01164f34(local_40);
      }
      iVar9 = *(int *)(iVar8 + 0x10);
      puVar5 = *(undefined4 **)(iVar8 + 0xc);
      if (iVar9 != 1) {
        if (iVar9 != 0) {
          puVar7 = puVar5 + iVar9 * 8;
          do {
            iVar9 = (**(code **)(puVar5[1] + 0x10))(*puVar5,local_40,param_3);
            if (iVar9 == 0) goto LAB_0124d13c;
            puVar5 = puVar5 + 8;
          } while (puVar5 != puVar7);
        }
        goto LAB_0124d130;
      }
      iVar9 = (**(code **)(puVar5[1] + 0x10))(*puVar5,local_40,param_3);
      FUN_01164f34(local_40);
    } while (iVar9 != 0);
LAB_0124d144:
    bVar4 = iVar1 == 0;
  }
  return bVar4;
LAB_0124d13c:
  FUN_01164f34(local_40);
  goto LAB_0124d144;
}

