// FUN_019aeee8 @ 019aeee8 size=552 calls_out=14 calls_in=0
// strings: 

void FUN_019aeee8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 in_cr8;
  undefined8 uVar13;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_35;
  undefined4 local_34;
  int local_c;
  
  local_c = FUN_01bee47c();
  if (local_c == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_019abc1c(&local_c,&DAT_00533278,0,&DAT_01d27a34);
  local_34 = coprocessor_movefromRt(3,5,2,in_cr8,in_cr8);
  piVar11 = (int *)*puVar2;
  do {
    iVar3 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x19af10c);
    return;
  }
  uVar13 = thunk_FUN_01bee35a(iVar3,0x240);
  piVar10 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_48 = piVar11;
  if (*piVar10 != 0) {
LAB_019aefac:
    piStack_58 = piVar11;
    FUN_0197a828(&local_48,&uStack_35,&DAT_00526a1d,0xab);
    if ((char)local_48 != '\x04') {
      FUN_0197acb4(&local_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  uVar13 = thunk_FUN_01bee35a(0,0x238);
  piVar4 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  piVar12 = piVar11 + 2;
  iVar3 = piVar11[3];
  if (*piVar4 == 0 && piVar4[1] == 0) {
    *piVar4 = *piVar12;
    piVar4[1] = iVar3;
  }
  else if (*piVar4 != *piVar12 || piVar4[1] != iVar3) goto LAB_019aefac;
  FUN_019a2cbc();
  puVar8 = (undefined *)piVar11[4];
  *piVar10 = (int)piVar12;
  if (puVar8 == (undefined *)0x0) {
    ClearExclusiveLocal();
    if ((DAT_01d51ab0 == 0 && DAT_01d51ab4 == 0) ||
       (DAT_01d51ab0 != *piVar12 || DAT_01d51ab4 != piVar11[3])) goto LAB_019af094;
    uVar9 = 4;
    puVar8 = &DAT_0058dd1a;
LAB_019af06c:
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    local_48 = (int *)0x0;
    if (0xe < uVar9) {
      uVar9 = 0xf;
    }
    FUN_01bed4e2(&local_48,puVar8,uVar9);
  }
  else {
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    local_48 = (int *)0x0;
    uVar9 = piVar11[5] - 1;
    if (uVar9 != 0) goto LAB_019af06c;
  }
  piStack_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  uVar5 = FUN_01bef8f4();
  FUN_01bef91c(uVar5,&piStack_58);
LAB_019af094:
  uVar5 = puVar2[1];
  iVar3 = puVar2[2];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*puVar2);
  }
  thunk_FUN_01be4678(puVar2);
  uVar7 = FUN_019a8cb0(0);
  (**(code **)(iVar3 + 0xc))(uVar5);
  if (*(int *)(iVar3 + 4) != 0) {
    thunk_FUN_01be4678(uVar5);
  }
  FUN_019aa888(uVar7);
                    /* WARNING: Could not recover jumptable at 0x019af108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x19aef24)(0);
  return;
}

