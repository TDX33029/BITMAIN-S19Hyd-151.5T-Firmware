// FUN_01443b00 @ 01443b00 size=368 calls_out=10 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | [internal

void FUN_01443b00(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 extraout_r1;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_54;
  int local_50;
  undefined2 local_4c;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar3 = FUN_019d8a74(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar7 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar5 = *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("[internal",0x2d,&DAT_01d29564);
    }
    FUN_019ec5bc();
    local_4c = 0;
    local_54 = iVar5;
    local_50 = iVar6;
    FUN_019bb418(&local_78,&local_54);
    uVar2 = local_78;
    if (iVar6 != 0) {
      thunk_FUN_01be4678(iVar5);
    }
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    local_78 = 2;
    FUN_0144568c(param_1 + 0x18,&local_78);
    local_40 = 0;
    uStack_3c = uVar2;
    uStack_38 = uStack_74;
    uStack_34 = uStack_70;
    local_48[0] = 1;
    local_30 = uStack_6c;
    local_2c = extraout_r1;
    FUN_0144568c(param_1 + 0x18,local_48);
    break;
  case 1:
    FUN_01445968(param_1 + 0x18);
    break;
  case 2:
    return;
  case 3:
    piVar4 = *(int **)(param_1 + 0x18);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      }
    }
    FUN_01445b28(param_1 + 0x28);
    FUN_014b1410(param_1 + 0x48);
    thunk_FUN_01be4678(param_1);
    return;
  }
  FUN_01445b64(param_1);
  return;
}

