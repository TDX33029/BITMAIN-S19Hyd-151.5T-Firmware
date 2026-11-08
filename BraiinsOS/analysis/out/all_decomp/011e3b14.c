// FUN_011e3b14 @ 011e3b14 size=432 calls_out=7 calls_in=2
// strings: 

int FUN_011e3b14(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
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
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *piStack_30;
  uint uStack_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  if ((*param_2 != '\x01') || (iVar5 = 0, *(char *)(param_1 + 2) != param_2[1])) {
    piVar6 = (int *)*param_1;
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_011e3ca8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11e3ca8);
      (*pcVar1)();
    }
    uVar8 = param_1[1];
    if (param_4 == 0) {
      local_a8[0] = 0;
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
      if (iVar5 < 0) goto LAB_011e3ca8;
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = (*(int **)(param_4 + 4))[1];
      uVar4 = 0;
      if (uVar7 <= uVar8) {
        iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7);
        uVar4 = uVar7;
        if (iVar5 != 0) {
          uVar4 = 0;
        }
      }
      uStack_90 = FUN_011e1508((int)(piVar6 + 2) + uVar4,uVar8 - uVar4);
      local_bc = 3;
      local_a8[0] = 2;
    }
    local_38 = FUN_01238114(param_3);
    local_7f = *(undefined1 *)(param_1 + 2);
    local_50 = 6;
    local_80 = 1;
    local_88 = 0x8000000e;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_4c = param_2;
    piStack_30 = piVar6;
    uStack_2c = uVar8;
    iVar5 = thunk_FUN_016d4a50(0x80);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar5,local_a8,0x80);
  }
  return iVar5;
}

