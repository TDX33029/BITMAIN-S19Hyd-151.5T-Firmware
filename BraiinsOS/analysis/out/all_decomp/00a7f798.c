// FUN_00a7f798 @ 00a7f798 size=364 calls_out=2 calls_in=3
// strings: stratum+tcp | stratum+tcp+secureDrain

void FUN_00a7f798(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  uint6 uVar10;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar9 = (**(code **)(param_3 + 0x40))(param_2 + (*(int *)(param_3 + 8) - 1U & 0xfffffff8) + 8);
  puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
  uVar1 = (undefined4)uVar9;
  (*(code *)puVar3[10])(&local_40,uVar1);
  if (local_40 == -0x80000000) {
    *param_1 = 6;
    pcVar4 = (code *)*puVar3;
    goto joined_r0x00a7f8dc;
  }
  uVar10 = (*(code *)puVar3[0xb])(uVar1);
  (*(code *)puVar3[0xf])(&local_30,uVar1);
  uVar7 = 0xd08;
  uVar8 = 0xd08;
  if (local_30 != -0x80000000) {
    uVar8 = uVar7;
    if (local_28 == 0x12) {
      uVar6 = 0x12;
      pcVar5 = "stratum+tcp+secureDrain";
LAB_00a7f898:
      iVar2 = thunk_FUN_016dd50a(local_2c,pcVar5,uVar6);
      if (iVar2 == 0) {
        uVar8 = 0xd05;
      }
    }
    else {
      if (local_28 == 0xb) {
        uVar6 = 0xb;
        pcVar5 = "stratum+tcp";
        goto LAB_00a7f898;
      }
      if ((local_28 == 5) && (iVar2 = thunk_FUN_016dd50a(local_2c,&DAT_0034e521,5), iVar2 == 0)) {
        uVar8 = 0;
      }
    }
    if (local_30 != 0) {
      thunk_FUN_016d3fb4(local_2c);
    }
  }
  if ((uVar10 & 1) != 0) {
    uVar8 = (short)(uVar10 >> 0x20);
  }
  *param_1 = 3;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = uStack_38;
  param_1[4] = 0x80000000;
  *(undefined2 *)(param_1 + 8) = uVar8;
  pcVar4 = (code *)*puVar3;
joined_r0x00a7f8dc:
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar1);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  return;
}

