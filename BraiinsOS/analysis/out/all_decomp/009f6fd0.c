// FUN_009f6fd0 @ 009f6fd0 size=440 calls_out=6 calls_in=0
// strings: 

void FUN_009f6fd0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_r8;
  int iVar11;
  int iVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  
  iVar2 = thunk_FUN_016de0ee(param_1,param_2,0x2a8);
  puVar3 = (uint *)(iVar2 + extraout_r2);
  if ((*puVar3 & 1) == 0) {
    FUN_0162b20c(&local_38);
  }
  else {
    local_38 = puVar3[1];
    local_34 = puVar3[2];
    uStack_30 = puVar3[3];
    local_2c = puVar3[4];
  }
  iVar2 = *(int *)(param_1 + 0x18 + local_34 * 4);
  DataMemoryBarrier(0xb);
  uVar4 = local_2c;
  if (iVar2 != 0) {
    unaff_r8 = (int *)(iVar2 + local_2c * 0x14);
    uVar4 = (uint)*(byte *)(unaff_r8 + 4);
  }
  if (iVar2 == 0 || uVar4 == 0) {
    local_40 = 8;
    local_3c = 0;
    local_44 = 0;
    local_48 = 0;
    unaff_r8 = (int *)FUN_009f14cc(param_1 + 0x18,&local_38,&local_48);
    iVar2 = *unaff_r8;
  }
  else {
    iVar2 = *unaff_r8;
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ae478);
  }
  iVar8 = unaff_r8[3];
  iVar6 = unaff_r8[2];
  iVar11 = *param_2;
  iVar12 = param_2[1];
  *unaff_r8 = -1;
  iVar2 = iVar8 * 0x10;
  iVar1 = 0;
  do {
    iVar5 = iVar1;
    if (iVar2 == iVar5) break;
    iVar1 = iVar5 + 0x10;
  } while (*(int *)(iVar6 + iVar5) != iVar11 || ((int *)(iVar6 + iVar5))[1] != iVar12);
  if (iVar8 == unaff_r8[1]) {
    FUN_016a855c();
    iVar6 = unaff_r8[2];
  }
  piVar7 = (int *)(iVar6 + iVar8 * 0x10);
  *piVar7 = iVar11;
  piVar7[1] = iVar12;
  *(bool *)(piVar7 + 2) = iVar2 != iVar5;
  unaff_r8[3] = iVar8 + 1;
  *unaff_r8 = *unaff_r8 + 1;
  if (iVar2 == iVar5) {
    FUN_016a1308(param_1 + 0xc,param_2);
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar9 = *(undefined4 **)(param_1 + 4);
    puVar10 = puVar9 + *(int *)(param_1 + 8) * 2;
    do {
      (**(code **)(puVar9[1] + 0x34))(*puVar9,param_2,0,0,param_1 + 0xc);
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10);
  }
  return;
}

