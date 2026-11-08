// FUN_0126da20 @ 0126da20 size=276 calls_out=3 calls_in=1
// strings: 

void FUN_0126da20(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  undefined2 uVar4;
  short *psVar5;
  int unaff_r7;
  uint uVar6;
  undefined1 *unaff_r8;
  int unaff_r9;
  short local_b0;
  ushort local_ae;
  undefined1 *local_ac;
  uint local_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  undefined4 local_30;
  undefined2 uStack_2a;
  undefined2 local_28;
  int local_26;
  
  psVar5 = &local_b0;
  local_30 = 0x80;
  iVar1 = FUN_016d6e26(param_2,&local_b0,&local_30,0x80800);
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_016d2bc8();
    local_26 = *piVar2;
    uVar6 = 0;
LAB_0126db10:
    param_1[2] = uVar6 & 0xff | (int)piVar2 << 8;
    param_1[3] = local_26;
    *(undefined2 *)(param_1 + 1) = 2;
    return;
  }
  if (local_b0 == 10) {
    uVar3 = local_ae << 8 | local_ae >> 8;
    uVar4 = 1;
    unaff_r7 = local_9c;
    unaff_r8 = local_ac;
    unaff_r9 = local_98;
    local_26 = iStack_a4;
  }
  else {
    uVar3 = (ushort)&local_28;
    if (local_b0 != 2) {
      uStack_2a = 0x1401;
      uVar6 = CONCAT22(local_28,0x1401);
      FUN_016dffb2();
      piVar2 = (int *)(uVar6 >> 8);
      goto LAB_0126db10;
    }
    uVar4 = 0;
    uStack_2a = (undefined2)((uint)local_ac >> 0x10);
    local_a8 = CONCAT22(local_ae << 8 | local_ae >> 8,uStack_2a);
    psVar5 = (short *)local_ac;
    iStack_a0 = 0x126da50;
  }
  *param_1 = iVar1;
  param_1[2] = local_a8;
  param_1[3] = local_26;
  param_1[4] = iStack_a0;
  param_1[5] = unaff_r7;
  *(short *)((int)param_1 + 6) = (short)psVar5;
  *(undefined2 *)(param_1 + 1) = uVar4;
  param_1[6] = (int)unaff_r8;
  param_1[7] = unaff_r9;
  *(ushort *)(param_1 + 8) = uVar3;
  return;
}

