// FUN_01a43b7c @ 01a43b7c size=560 calls_out=8 calls_in=1
// strings: 

void FUN_01a43b7c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_260 [112];
  int local_1f0 [26];
  undefined1 *local_188;
  int *piStack_184;
  undefined1 auStack_180 [88];
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8 [2];
  undefined1 auStack_f0 [20];
  undefined1 auStack_dc [76];
  undefined1 *local_90;
  int *piStack_8c;
  undefined1 auStack_88 [108];
  
  FUN_01a55128(param_2 + 0x38);
  iVar1 = FUN_01a55be4(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x5c) = 1;
  }
  uVar6 = FUN_01a55698(param_2);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  piVar2 = (int *)((uint)local_f8 | 4);
  uVar7 = (**(code **)(iVar1 + 0xc))((int)uVar6);
  piVar3 = (int *)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    FUN_018f2d80((int)uVar6,iVar1);
    return;
  }
  if (*(char *)(param_1 + 1) == '\x01') {
    iVar1 = *piVar3;
  }
  else {
    FUN_01bed4e2(auStack_260,piVar3,0x70);
    *piVar3 = 0;
    FUN_01a55f68(local_f8,auStack_260);
    local_1f0[0] = local_f8[0];
    if (local_f8[0] == 4) {
      FUN_01bed4e2((uint)auStack_88 | 4,auStack_f0,0x60);
      local_1f0[0] = 2;
      puVar4 = auStack_260;
      piVar5 = piVar3;
    }
    else {
      FUN_01bed4e2(auStack_88,piVar2,100);
      puVar4 = local_90;
      piVar5 = piStack_8c;
    }
    FUN_01bed4e2((uint)local_1f0 | 4,auStack_88,100);
    local_188 = puVar4;
    piStack_184 = piVar5;
    FUN_01a5665c(local_f8,local_1f0);
    local_110 = *piVar2;
    iStack_10c = piVar2[1];
    iStack_108 = piVar2[2];
    iStack_104 = piVar2[3];
    iStack_100 = piVar2[4];
    iStack_fc = piVar2[5];
    iVar1 = 3;
    if (local_f8[0] != 4) {
      FUN_01bed4e2(auStack_180,auStack_dc,0x54);
      iVar1 = local_f8[0];
    }
    local_128 = local_110;
    iStack_124 = iStack_10c;
    iStack_120 = iStack_108;
    iStack_11c = iStack_104;
    iStack_118 = iStack_100;
    iStack_114 = iStack_fc;
    *(bool *)(param_1 + 1) = iVar1 == 1;
    FUN_01a43344(piVar3);
    *piVar3 = iVar1;
    piVar3[1] = local_128;
    piVar3[2] = iStack_124;
    piVar3[3] = iStack_120;
    piVar3[4] = iStack_11c;
    piVar3[5] = iStack_118;
    piVar3[6] = iStack_114;
    FUN_01bed4e2(piVar3 + 7,auStack_180,0x54);
  }
                    /* WARNING: Could not recover jumptable at 0x01a43d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01a43d9c + *(int *)(&LAB_01a43d9c + iVar1 * 4)))();
  return;
}

