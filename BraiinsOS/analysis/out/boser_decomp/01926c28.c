// FUN_01926c28 @ 01926c28 size=548 calls_out=9 calls_in=2
// strings: 

void FUN_01926c28(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *extraout_r1;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_fc [68];
  undefined8 local_b8;
  int iStack_b0;
  uint local_ac [16];
  uint local_6c;
  uint local_68 [17];
  
  iVar6 = *(int *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(iVar6 + 0x18);
  iVar7 = *(int *)(iVar6 + 0x1c);
  FUN_018ea5f0(local_ac,param_5);
  uVar9 = 0;
  iVar1 = *param_5;
  if (-1 < iVar1) {
    bVar11 = param_5[8] == 0;
    iVar2 = 0;
    piVar5 = extraout_r1;
    if (!bVar11) {
      iVar2 = param_5[7] + param_5[8] * 0x24;
      piVar5 = (int *)(iVar2 + -0x24);
      bVar11 = piVar5 == (int *)0x0;
    }
    if ((!bVar11) && (*piVar5 == -0x7ffffff6)) {
      local_68[2] = 0;
      local_68[1] = 1;
      local_68[0] = 0;
      FUN_018e7470(*(undefined4 *)(iVar2 + -0x10),*(undefined4 *)(iVar2 + -0xc),local_68);
      uVar9 = local_68[2];
      FUN_0134bd64(local_68[0],local_68[1]);
    }
  }
  uVar3 = local_ac[2] - uVar9;
  if (local_ac[2] < uVar9) {
    uVar3 = local_ac[2];
  }
  FUN_0191e28c(auStack_fc,param_3,param_4,uVar10,*(undefined4 *)(iVar7 + 0xc),local_ac[1],uVar3);
  local_b8 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x10))
                       (*(undefined4 *)(iVar6 + 8),0,*(undefined4 *)(param_2 + 0x28),
                        *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  iStack_b0 = iVar6;
  FUN_018fe910(local_68,&local_b8,0);
  puVar8 = local_68;
  FUN_018fe998(local_ac,iVar6,puVar8,auStack_fc);
  iVar6 = 0;
  do {
    *(undefined1 *)((int)puVar8 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x40);
  if (-1 < iVar1) {
    if (0x40 < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_6c,0x40,&DAT_01d258d8);
    }
    bVar11 = param_5[8] == 0;
    puVar4 = (uint *)0x0;
    if (!bVar11) {
      puVar8 = (uint *)(param_5[7] + param_5[8] * 0x24);
      puVar4 = puVar8 + -9;
      bVar11 = puVar4 == (uint *)0x0;
    }
    if ((!bVar11) && (*puVar4 == 0x8000000a)) {
      FUN_0193a93c(local_68,local_ac);
      if (puVar8[-3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d23390);
      }
      puVar8 = (uint *)puVar8[-4];
      FUN_0134bd64(*puVar8,puVar8[1]);
      *puVar8 = local_68[0];
      puVar8[1] = local_68[1];
      puVar8[2] = local_68[2];
    }
  }
  *param_1 = local_b8;
  *(int *)(param_1 + 1) = iStack_b0;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)local_ac + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  FUN_0134bd64(local_ac[0],local_ac[1]);
  return;
}

