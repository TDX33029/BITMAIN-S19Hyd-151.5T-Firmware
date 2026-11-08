// FUN_0086ea84 @ 0086ea84 size=784 calls_out=12 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0086ec28) */

ulonglong FUN_0086ea84(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *local_2c;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 0:
    iVar5 = *(int *)*param_1;
    uVar3 = 0;
    puVar4 = param_1 + 1;
    *puVar4 = 0;
    iVar5 = iVar5 + 8;
    param_1[2] = 0;
    param_1[4] = iVar5;
    param_1[5] = puVar4;
    *(undefined1 *)(param_1 + 0x10) = 0;
LAB_0086eb20:
    param_1[7] = uVar3;
    param_1[8] = param_1[3];
    param_1[9] = puVar4;
    param_1[6] = iVar5;
    uVar8 = *puVar4;
    puVar4 = (uint *)FUN_016d38c8(4,1);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    param_1[10] = 4;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x11] = iVar5 + 0xc;
    uVar6 = uVar8 & 0xfffffff;
    param_1[0xb] = puVar4;
    param_1[0xc] = 4;
    param_1[0xd] = 4;
    param_1[0xe] = 4;
    *puVar4 = uVar8 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
switchD_0086eb00_caseD_3:
    iVar5 = FUN_007d67b8(param_1 + 0x11,param_2);
    if (iVar5 != 0) {
      param_1[0xf] = iVar5;
      if (*(char *)(param_1 + 0x1f) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1e);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x15);
        }
        if (bVar11 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x16);
          if (param_1[0x17] != 0) {
            (**(code **)(param_1[0x17] + 0xc))(param_1[0x18]);
          }
        }
      }
      if (param_1[7] == 1) {
        uVar8 = *(int *)param_1[6] * param_1[8];
        if (0xff < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar8 = (uint)*(byte *)((int *)param_1[6] + 1);
      }
      uVar12 = (**(code **)(*(int *)(param_1[0xf] + 0x20) + 0x14))
                         (*(undefined4 *)(param_1[0xf] + 0x1c),param_1[7],uVar8,param_1[0xd],
                          param_1[0xe],param_1[0xb],param_1[0xc]);
      *(undefined8 *)(param_1 + 0x11) = uVar12;
      goto LAB_0086ec60;
    }
    *(undefined1 *)(param_1 + 0x10) = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862b94);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862b94);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x10)) {
    case 0:
      uVar3 = param_1[2];
      iVar5 = param_1[4];
      puVar4 = (uint *)param_1[5];
      goto LAB_0086eb20;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case 3:
      goto switchD_0086eb00_caseD_3;
    case 4:
      uVar12 = *(undefined8 *)(param_1 + 0x11);
    }
LAB_0086ec60:
    local_2c = param_1 + 2;
    uVar13 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))((int)uVar12,param_2);
    unaff_r6 = (undefined4)(uVar13 >> 0x20);
    if ((uVar13 & 1) == 0) {
      uVar3 = param_1[0x11];
      puVar10 = (undefined4 *)param_1[0x12];
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar3);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      pcVar9 = (char *)param_1[0xf];
      if (*pcVar9 == '\0') {
        bVar11 = (bool)hasExclusiveAccess(pcVar9);
        if (!bVar11) goto LAB_0086ecf0;
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0086ecf0:
        FUN_01280da8(pcVar9);
      }
      FUN_0128236c(pcVar9);
      FUN_0163af68(pcVar9,1,pcVar9);
      if (param_1[10] != 0) {
        thunk_FUN_016d3fb4(param_1[0xb]);
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      if ((uVar13 & 1) == 0) {
        FUN_0081b77c(local_2c);
        uVar2 = 1;
        goto LAB_0086ed40;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 4;
    }
  }
  uVar2 = 3;
  uVar13 = CONCAT44(unaff_r6,1);
LAB_0086ed40:
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  return uVar13;
}

