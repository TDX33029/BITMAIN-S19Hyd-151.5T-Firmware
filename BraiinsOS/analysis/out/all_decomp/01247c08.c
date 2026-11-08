// FUN_01247c08 @ 01247c08 size=424 calls_out=8 calls_in=2
// strings: 

int FUN_01247c08(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
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
  undefined8 local_80;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *piStack_30;
  uint uStack_2c;
  
  uVar10 = CONCAT44(local_ac,local_b0);
  iVar6 = 0;
  if ((*param_2 == '\x02') &&
     (iVar3 = FUN_011c79a4((int)*(undefined8 *)(param_1 + 2),param_2 + 8), iVar3 == 0)) {
    piVar7 = (int *)*param_1;
    do {
      iVar6 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01247d9c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1247d9c);
      (*pcVar1)();
    }
    uVar9 = param_1[1];
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
      if (iVar6 < 0) goto LAB_01247d9c;
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      uVar8 = (*(int **)(param_4 + 4))[1];
      uVar5 = 0;
      if (uVar8 <= uVar9) {
        iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
        uVar5 = uVar8;
        if (iVar6 != 0) {
          uVar5 = 0;
        }
      }
      uVar10 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar9 - uVar5);
      local_bc = 3;
      local_a8[0] = 2;
    }
    local_38 = FUN_01238114(param_3);
    local_80 = *(undefined8 *)(param_1 + 2);
    local_50 = 6;
    local_88 = 0x80000021;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_4c = param_2;
    piStack_30 = piVar7;
    uStack_2c = uVar9;
    uStack_90 = uVar10;
    iVar6 = thunk_FUN_016d4a50(0x80);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar6,local_a8,0x80);
  }
  return iVar6;
}

