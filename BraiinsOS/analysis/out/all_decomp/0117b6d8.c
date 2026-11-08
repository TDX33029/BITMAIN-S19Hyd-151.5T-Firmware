// FUN_0117b6d8 @ 0117b6d8 size=440 calls_out=7 calls_in=2
// strings: 

int FUN_0117b6d8(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint local_ec [3];
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  iVar5 = 0;
  if (*param_2 == '\x05') {
    local_ec[2] = *(uint *)(param_2 + 4);
    local_e0 = *(undefined4 *)(param_2 + 8);
    local_cc = *(undefined4 *)(param_2 + 0xc);
    if (local_ec[2] == 0) {
      local_cc = 0;
    }
    local_ec[0] = (uint)(local_ec[2] != 0);
    local_d8 = 0;
    local_ec[1] = 0;
    local_dc = local_ec[0];
    local_d4 = local_ec[2];
    local_d0 = local_e0;
    uVar11 = FUN_00f45584(local_ec);
    if ((int)uVar11 != 0) {
      piVar6 = (int *)*param_1;
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) {
LAB_0117b894:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x117b894);
        (*pcVar1)();
      }
      uVar8 = param_1[1];
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar3 = *(int **)(param_4 + 0xc);
        do {
          iVar5 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_0117b894;
        uVar4 = 0;
        uVar9 = *(undefined4 *)(param_4 + 0xc);
        uVar10 = *(undefined4 *)(param_4 + 0x10);
        uVar7 = (*(int **)(param_4 + 4))[1];
        if (uVar7 <= uVar8) {
          iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7);
          uVar4 = uVar7;
          if (iVar5 != 0) {
            uVar4 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar6 + 2) + uVar4,uVar8 - uVar4);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar9;
        local_b4 = uVar10;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x80000016;
      local_50 = 6;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_4c = (int)((ulonglong)uVar11 >> 0x20);
      local_30 = piVar6;
      local_2c = uVar8;
      uStack_90 = local_b0;
      iVar5 = thunk_FUN_016d4a50(0x80);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar5,&local_a8,0x80);
    }
  }
  return iVar5;
}

