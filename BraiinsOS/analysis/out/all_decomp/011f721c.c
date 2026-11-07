// FUN_011f721c @ 011f721c size=452 calls_out=8 calls_in=2
// strings: 

int FUN_011f721c(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar11 = CONCAT44(local_ac,local_b0);
  iVar6 = 0;
  if (*param_2 == '\x03') {
    uVar3 = FUN_00f5dd74(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    if (uVar10 == 0 && (uVar3 <= uVar9) <= uVar10) {
      piVar7 = (int *)*param_1;
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_011f73cc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11f73cc);
        (*pcVar1)();
      }
      uVar3 = param_1[1];
      if (param_4 == 0) {
        local_a8[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar6 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_011f73cc;
        local_b8 = *(undefined4 *)(param_4 + 0xc);
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        uVar5 = 0;
        if (uVar8 <= uVar3) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8,0,local_b4);
          uVar5 = uVar8;
          if (iVar6 != 0) {
            uVar5 = 0;
          }
        }
        uVar11 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar3 - uVar5);
        local_bc = 3;
        local_a8[0] = 2;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x8000001b;
      local_50 = 6;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = uVar9;
      local_7c = uVar10;
      local_4c = param_2;
      local_30 = piVar7;
      local_2c = uVar3;
      uStack_90 = uVar11;
      iVar6 = thunk_FUN_016d4a50(0x80);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar6,local_a8,0x80);
    }
  }
  return iVar6;
}

