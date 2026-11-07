// FUN_011b6d58 @ 011b6d58 size=608 calls_out=8 calls_in=1
// strings: 

int FUN_011b6d58(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  double dVar12;
  undefined8 uVar13;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 local_8c;
  byte local_8b;
  undefined1 local_58;
  undefined1 *local_54;
  undefined8 local_40;
  int *local_38;
  uint local_34;
  
  uVar13 = CONCAT44(local_b4,local_b8);
  bVar2 = *(byte *)(param_1 + 2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    bVar4 = bVar2 & 8;
    break;
  case 1:
    bVar4 = bVar2 & 2;
    break;
  case 2:
    uVar7 = *(uint *)(param_2 + 8);
    uVar10 = *(uint *)(param_2 + 0xc);
    if ((uVar10 != 0 || uVar10 < (1 < uVar7)) &&
       (dVar12 = *(double *)(param_2 + 0x10),
       uVar11 = FUN_016d62a0(SUB84(dVar12,0),param_1,uVar10 - (1 >= uVar7),uVar7 - 2),
       dVar12 - (double)CONCAT44(extraout_s1,uVar11) != 0.0)) {
      bVar4 = bVar2 & 0x10;
      goto joined_r0x011b6e34;
    }
    bVar4 = bVar2 & 0x14;
    break;
  case 3:
    bVar4 = bVar2 & 0x40;
    goto joined_r0x011b6e34;
  case 4:
    bVar4 = bVar2 & 1;
    goto joined_r0x011b6e34;
  case 5:
    bVar4 = bVar2 & 0x20;
joined_r0x011b6e34:
    if (bVar4 != 0) {
      return 0;
    }
    goto LAB_011b6e38;
  }
  iVar6 = 0;
  if (bVar4 == 0) {
LAB_011b6e38:
    piVar8 = (int *)*param_1;
    do {
      iVar6 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_011b6fb4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11b6fb4);
      (*pcVar1)();
    }
    uVar10 = param_1[1];
    if (param_4 == 0) {
      local_b0[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar5 = *(int **)(param_4 + 0xc);
      do {
        iVar6 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_011b6fb4;
      local_c0 = *(undefined4 *)(param_4 + 0xc);
      local_bc = *(undefined4 *)(param_4 + 0x10);
      uVar9 = (*(int **)(param_4 + 4))[1];
      uVar7 = 0;
      if (uVar9 <= uVar10) {
        iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
        uVar7 = uVar9;
        if (iVar6 != 0) {
          uVar7 = 0;
        }
      }
      uVar13 = FUN_011e1508((int)(piVar8 + 2) + uVar7,uVar10 - uVar7);
      local_c4 = 3;
      local_b0[0] = 2;
    }
    local_40 = FUN_01238114(param_3);
    local_8c = 1;
    local_90 = &DAT_80000028;
    local_58 = 6;
    uStack_a4 = local_c4;
    local_a0 = local_c0;
    uStack_9c = local_bc;
    local_8b = bVar2;
    local_54 = param_2;
    local_38 = piVar8;
    local_34 = uVar10;
    uStack_98 = uVar13;
    iVar6 = thunk_FUN_016d4a50(0x80);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar6,local_b0,0x80);
  }
  return iVar6;
}

