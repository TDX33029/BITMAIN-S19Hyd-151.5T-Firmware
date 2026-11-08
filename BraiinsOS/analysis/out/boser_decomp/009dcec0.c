// FUN_009dcec0 @ 009dcec0 size=332 calls_out=6 calls_in=1
// strings: 

void FUN_009dcec0(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar4 = (int *)(param_1 + 0x98);
  if (*piVar4 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (bVar1) {
      *piVar4 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_009dcf00;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164d8d8(piVar4);
LAB_009dcf00:
  FUN_0165098c(piVar4);
  FUN_0165098c((uint)piVar4 | 1);
  local_58 = *param_2;
  iStack_54 = param_2[1];
  local_50 = param_2[2];
  iStack_4c = param_2[3];
  local_48 = param_2[4];
  local_44 = param_2[5];
  iStack_40 = param_2[6];
  iStack_3c = param_2[7];
  iStack_38 = param_2[8];
  piVar3 = (int *)(param_1 + 0x9c);
  iVar2 = *piVar3;
  if (local_58 == 4 || iVar2 == 4) {
    if (local_58 == 4 && iVar2 == 4) {
      FUN_009dd2ac(&local_58);
      FUN_009dd354(piVar4);
      return;
    }
  }
  else if (iVar2 == local_58) {
                    /* WARNING: Could not recover jumptable at 0x009dcfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_009dcfec + *(int *)(&DAT_009dcfec + local_58 * 4)))
              ((uint)&local_58 | 4,param_1 + 0xa0);
    return;
  }
  FUN_009dd2ac(piVar3);
  *piVar3 = local_58;
  *(int *)(param_1 + 0xa0) = iStack_54;
  *(int *)(param_1 + 0xa4) = local_50;
  *(int *)(param_1 + 0xa8) = iStack_4c;
  *(int *)(param_1 + 0xac) = local_48;
  *(int *)(param_1 + 0xb0) = local_44;
  *(int *)(param_1 + 0xb4) = iStack_40;
  *(int *)(param_1 + 0xb8) = iStack_3c;
  *(int *)(param_1 + 0xbc) = iStack_38;
  FUN_0128e808(&local_30);
  *(undefined4 *)(param_1 + 0xc0) = local_30;
  *(undefined4 *)(param_1 + 0xc4) = uStack_2c;
  *(undefined4 *)(param_1 + 200) = uStack_28;
  piVar3 = (int *)(param_1 + 0xcc);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 2;
  FUN_009dd354(piVar4);
  iVar2 = 0;
  do {
    FUN_019e03e8(param_1 + 8 + iVar2);
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != 0x80);
  return;
}

