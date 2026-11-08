// FUN_008c9df0 @ 008c9df0 size=864 calls_out=12 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x008c9fd0) */

longlong FUN_008c9df0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint unaff_r5;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined4 *local_2c;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x83)) {
  case 0:
    puVar12 = (undefined4 *)param_1[0x1e];
    *(undefined4 *)((int)param_1 + 0x7f) = *(undefined4 *)((int)param_1 + 0x87);
    pbVar14 = (byte *)(param_1 + 0x1f);
    *(undefined4 *)pbVar14 = param_1[0x21];
    uVar8 = *puVar12;
    uVar10 = puVar12[1];
    iVar16 = puVar12[2] + 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = iVar16;
    param_1[3] = pbVar14;
LAB_008c9e90:
    param_1[4] = iVar16;
    param_1[5] = uVar8;
    param_1[6] = uVar10;
    param_1[7] = pbVar14;
    puVar9 = (uint *)FUN_016d38c8(4,1);
    if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    bVar1 = pbVar14[6];
    bVar2 = *pbVar14;
    bVar3 = pbVar14[1];
    bVar4 = pbVar14[2];
    unaff_r5 = (uint)pbVar14[3];
    bVar5 = pbVar14[4];
    bVar6 = pbVar14[5];
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0xb] = 0x1c;
    param_1[0xc] = 4;
    param_1[10] = 4;
    param_1[8] = 4;
    param_1[9] = puVar9;
    param_1[0xf] = iVar16 + 0xc;
    *puVar9 = (uint)bVar1 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar5 << 8 |
              ((uint)bVar3 << 6 | (uint)bVar2 << 7 | unaff_r5 << 1) & 0xff | (uint)bVar4;
switchD_008c9e70_caseD_3:
    local_2c = param_1 + 0xe;
    iVar16 = FUN_007d67b8(param_1 + 0xf,param_2);
    if (iVar16 == 0) {
      *(undefined1 *)local_2c = 3;
      goto LAB_008ca03c;
    }
    param_1[0xd] = iVar16;
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar7 = *(char *)(param_1 + 0x1c);
      bVar17 = cVar7 == '\x03';
      if (bVar17) {
        cVar7 = *(char *)(param_1 + 0x13);
      }
      if (bVar17 && cVar7 == '\x04') {
        FUN_0163c790(param_1 + 0x14);
        if (param_1[0x15] != 0) {
          (**(code **)(param_1[0x15] + 0xc))(param_1[0x16]);
        }
      }
    }
    if (param_1[5] == 1) {
      uVar13 = *(int *)param_1[4] * param_1[6];
      if (0xff < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar13 = (uint)*(byte *)((int *)param_1[4] + 1);
    }
    uVar18 = (**(code **)(*(int *)(param_1[0xd] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0xd] + 0x1c),param_1[5],uVar13,param_1[0xb],
                        param_1[0xc],param_1[9],param_1[10]);
    *(undefined8 *)(param_1 + 0xf) = uVar18;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018646a8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018646a8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xe)) {
    case 0:
      pbVar14 = (byte *)param_1[3];
      uVar8 = *param_1;
      uVar10 = param_1[1];
      iVar16 = param_1[2];
      goto LAB_008c9e90;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case 3:
      goto switchD_008c9e70_caseD_3;
    case 4:
      uVar18 = *(undefined8 *)(param_1 + 0xf);
    }
  }
  local_2c = param_1 + 0xe;
  uVar19 = (**(code **)((int)((ulonglong)uVar18 >> 0x20) + 0xc))((int)uVar18,param_2);
  unaff_r5 = (uint)(uVar19 >> 0x20);
  if ((uVar19 & 1) != 0) {
    *(undefined1 *)local_2c = 4;
    goto LAB_008ca03c;
  }
  uVar8 = param_1[0xf];
  puVar12 = (undefined4 *)param_1[0x10];
  pcVar11 = (code *)*puVar12;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar8);
  }
  if (puVar12[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  pcVar15 = (char *)param_1[0xd];
  if (*pcVar15 == '\0') {
    bVar17 = (bool)hasExclusiveAccess(pcVar15);
    if (!bVar17) goto LAB_008ca0a8;
    *pcVar15 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_008ca0a8:
    FUN_01280da8(pcVar15);
  }
  FUN_0128236c(pcVar15);
  FUN_0163af68(pcVar15,1,pcVar15);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  *(undefined1 *)local_2c = 1;
  if ((uVar19 & 1) == 0) {
    FUN_0081b77c(param_1);
    *(undefined1 *)((int)param_1 + 0x83) = 1;
    return (ulonglong)unaff_r5 << 0x20;
  }
LAB_008ca03c:
  *(undefined1 *)((int)param_1 + 0x83) = 3;
  return CONCAT44(unaff_r5,1);
}

