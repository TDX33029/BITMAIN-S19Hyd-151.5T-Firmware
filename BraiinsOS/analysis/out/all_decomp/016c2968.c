// FUN_016c2968 @ 016c2968 size=380 calls_out=6 calls_in=2
// strings: 

void FUN_016c2968(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_9c;
  int local_98 [6];
  undefined4 local_80;
  
  puVar4 = (undefined4 *)((uint)local_98 | 4);
  if (param_4 == 0) {
    iVar6 = param_3[1];
    iVar7 = param_3[2];
    FUN_015f4cb8(local_98,iVar6,iVar7);
    if (local_98[0] == 0) goto LAB_016c2a08;
    uVar8 = *puVar4;
    uVar1 = 0;
    local_9c = puVar4[1];
    if (iVar7 < 0) {
LAB_016c29fc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,iVar7);
    }
    if (iVar7 == 0) goto LAB_016c2a90;
    iVar2 = thunk_FUN_016d4a50(iVar7);
    iVar5 = iVar7;
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_016c29fc;
    }
  }
  else {
    iVar6 = param_3[1];
    iVar7 = param_3[2];
    FUN_015f5984(local_98,iVar6,iVar7);
    if (local_98[0] == 0) {
LAB_016c2a08:
      uVar8 = puVar4[0x19];
      uVar1 = puVar4[0x1a];
      iVar7 = *param_3;
      iVar5 = param_3[1];
      iVar6 = param_3[2];
      *(char *)(param_1 + 9) = (char)param_4;
      param_1[2] = uVar8;
      *param_1 = 0;
      param_1[3] = uVar1;
      param_1[4] = iVar7;
      param_1[5] = iVar5;
      param_1[6] = iVar6;
      param_1[7] = local_80;
      param_1[8] = param_2;
      return;
    }
    uVar8 = *puVar4;
    uVar1 = 0;
    local_9c = puVar4[1];
    if (iVar7 < 0) {
LAB_016c29c0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,iVar7);
    }
    if (iVar7 == 0) {
LAB_016c2a90:
      iVar2 = 1;
      iVar5 = 0;
      goto LAB_016c2a98;
    }
    iVar2 = thunk_FUN_016d4a50(iVar7);
    iVar5 = iVar7;
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_016c29c0;
    }
  }
  iVar7 = iVar5;
LAB_016c2a98:
  FUN_016dd1aa(iVar2,iVar6,iVar7);
  iVar3 = *param_3;
  param_1[1] = 0x80000000;
  param_1[2] = iVar5;
  param_1[3] = iVar2;
  param_1[4] = iVar7;
  param_1[5] = uVar8;
  *param_1 = 1;
  param_1[6] = local_9c;
  param_1[7] = param_2;
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  return;
}

