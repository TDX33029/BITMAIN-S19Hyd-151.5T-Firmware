// FUN_00df11a8 @ 00df11a8 size=720 calls_out=4 calls_in=0
// strings: Tuner not running

void FUN_00df11a8(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  uint uVar20;
  double dVar21;
  undefined8 uVar22;
  uint local_88;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_3c;
  undefined1 *local_38;
  
  uVar18 = *param_2;
  pcVar15 = *(code **)(param_2[1] + 0xc);
  do {
    uVar22 = (*pcVar15)(uVar18);
    iVar7 = (int)((ulonglong)uVar22 >> 0x20);
    iVar1 = (int)uVar22;
    if (iVar1 == 0) {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    uVar17 = *(uint *)(iVar1 + 0x238);
    iVar14 = *(int *)(iVar1 + 0x23c);
    uVar2 = 0;
    if (uVar17 != 7 || iVar14 != 0) {
      iVar7 = *(int *)(iVar1 + 0x84);
      uVar2 = *(uint *)(iVar1 + 0x80) ^ 2;
    }
  } while (uVar17 == 7 && iVar14 == 0 || uVar2 == 0 && iVar7 == 0);
  uVar2 = 0;
  if ((*(uint *)(iVar1 + 0x90) & 1) != 0) {
    uVar2 = (uint)(0.0 < *(double *)(iVar1 + 0x98)) * (int)(longlong)*(double *)(iVar1 + 0x98);
  }
  *(int *)param_2[2] = *(int *)param_2[2] + uVar2;
  if ((uint)-iVar14 < (uint)(uVar17 < 5)) {
                    /* WARNING: Could not recover jumptable at 0x00df1260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00df1264 + *(int *)(&DAT_00df1264 + uVar17 * 4)))
              (*(undefined4 *)(iVar1 + 0x240),*(undefined4 *)(iVar1 + 0x244));
    return;
  }
  if (*(char *)param_2[4] == '\x02') {
    cVar13 = '\x01';
    if ((uint)(uVar17 < 5) <= (uint)-iVar14) {
      cVar13 = (char)(0x10002 >> (uVar17 * 8 - 0x28 & 0xf8));
    }
    *(char *)param_2[4] = cVar13;
  }
  uVar9 = *(uint *)(iVar1 + 0x250);
  uVar10 = *(uint *)(iVar1 + 0x254);
  uVar11 = *(uint *)(iVar1 + 0x260);
  uVar12 = *(uint *)(iVar1 + 0x264);
  uVar16 = *(uint *)(&DAT_0056c388 + (uint)*(byte *)(iVar1 + 0x284) * 4);
  puVar19 = (&PTR_s_Tuner_not_running_01d30e78)[*(byte *)(iVar1 + 0x284)];
  puVar3 = *(undefined1 **)(iVar1 + 600);
  puVar4 = *(undefined1 **)(iVar1 + 0x268);
  iVar7 = *(int *)(iVar1 + 0x2a0);
  uVar5 = *(uint *)(iVar1 + 0x2a4);
  uVar6 = FUN_01298504(uVar16,1);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar16);
  }
  FUN_01bed4e2(uVar6,puVar19,uVar16);
  cVar13 = *(char *)(iVar1 + 0x284);
  local_48 = *(undefined1 **)(iVar1 + 0x278);
  uVar8 = *(uint *)(iVar1 + 0x280);
  dVar21 = *(double *)(iVar1 + 0x240);
  if (local_48 == &DAT_3b9aca00) {
    uVar20 = 0;
    local_40 = &DAT_3b9aca00;
  }
  else {
    local_50 = *(undefined4 *)(iVar1 + 0x270);
    local_4c = *(undefined4 *)(iVar1 + 0x274);
    FUN_014aeff4(&local_40,&local_50);
    local_88 = local_3c;
    uVar20 = (uint)(local_38 == &DAT_3b9aca00);
  }
  param_1[9] = uVar6;
  param_1[2] = (uint)local_40;
  param_1[10] = uVar16;
  param_1[8] = uVar16;
  param_1[0xc] = uVar8;
  param_1[3] = local_88;
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  param_1[0xb] = uVar5;
  if (puVar4 == &DAT_3b9aca00) {
    uVar11 = 0;
    uVar12 = 0;
  }
  *param_1 = uVar20;
  if (puVar3 == &DAT_3b9aca00) {
    uVar9 = 0;
    uVar10 = 0;
  }
  param_1[1] = 0;
  param_1[0xe] = uVar2;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  *(bool *)(param_1 + 0xf) = cVar13 != '\0';
  uVar2 = 0;
  if (uVar17 == 6 && iVar14 == 0) {
    uVar2 = (uint)(0.0 < dVar21) * (int)(longlong)dVar21;
  }
  param_1[0xd] = uVar2;
  return;
}

