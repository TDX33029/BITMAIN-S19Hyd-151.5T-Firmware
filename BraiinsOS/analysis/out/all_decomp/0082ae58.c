// FUN_0082ae58 @ 0082ae58 size=780 calls_out=11 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0082afec) */

void FUN_0082ae58(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x21]) {
  case '\0':
    *(undefined4 *)((int)param_2 + 6) = 0x7070707;
    *(undefined1 *)((int)param_2 + 10) = 7;
    piVar4 = param_2 + 1;
    *(undefined2 *)piVar4 = 0x77;
    iVar6 = *(int *)(*param_2 + 0x148);
    iVar3 = 0;
    param_2[3] = 0;
    iVar6 = iVar6 + 8;
    param_2[5] = iVar6;
    param_2[6] = (int)piVar4;
    *(undefined1 *)(param_2 + 0x11) = 0;
LAB_0082af10:
    param_2[7] = iVar6;
    param_2[8] = iVar3;
    param_2[9] = param_2[4];
    param_2[10] = (int)piVar4;
    FUN_0080b8e8(param_2 + 0xb);
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x12] = param_2[7] + 0xc;
switchD_0082aeec_caseD_3:
    iVar3 = FUN_007d67b8(param_2 + 0x12,param_3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_2 + 0x11) = 3;
      goto LAB_0082b050;
    }
    param_2[0x10] = iVar3;
    if ((char)param_2[0x20] == '\x03') {
      cVar1 = (char)param_2[0x1f];
      bVar10 = cVar1 == '\x03';
      if (bVar10) {
        cVar1 = (char)param_2[0x16];
      }
      if (bVar10 && cVar1 == '\x04') {
        FUN_0163c790(param_2 + 0x17);
        if (param_2[0x18] != 0) {
          (**(code **)(param_2[0x18] + 0xc))(param_2[0x19]);
        }
      }
    }
    if (param_2[8] == 1) {
      uVar7 = *(int *)param_2[7] * param_2[9];
      if (0xff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar7 = (uint)*(byte *)((int *)param_2[7] + 1);
    }
    uVar11 = (**(code **)(*(int *)(param_2[0x10] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x10] + 0x1c),param_2[8],uVar7,param_2[0xe],
                        param_2[0xf],param_2[0xc],param_2[0xd]);
    *(undefined8 *)(param_2 + 0x12) = uVar11;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185ffac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185ffac);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x11]) {
    case '\0':
      iVar3 = param_2[3];
      iVar6 = param_2[5];
      piVar4 = (int *)param_2[6];
      goto LAB_0082af10;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_0082aeec_caseD_3;
    case '\x04':
      uVar11 = *(undefined8 *)(param_2 + 0x12);
    }
  }
  uVar12 = (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))((int)uVar11,param_3);
  iVar3 = (int)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x11) = 4;
    goto LAB_0082b050;
  }
  puVar9 = (undefined4 *)param_2[0x13];
  iVar6 = param_2[0x12];
  pcVar5 = (code *)*puVar9;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar6);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  pcVar8 = (char *)param_2[0x10];
  if (*pcVar8 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar10) goto LAB_0082b0c0;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0082b0c0:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0163af68(pcVar8,1,pcVar8);
  if (param_2[0xb] != 0) {
    thunk_FUN_016d3fb4(param_2[0xc]);
  }
  *(undefined1 *)(param_2 + 0x11) = 1;
  if ((uVar12 & 1) == 0) {
    FUN_0082a908(param_2 + 3);
    uVar2 = 9;
    if (iVar3 == 0) {
      uVar2 = 0xc;
    }
    *(int *)(param_1 + 4) = iVar3;
    *param_1 = uVar2;
    *(undefined1 *)(param_2 + 0x21) = 1;
    return;
  }
LAB_0082b050:
  *param_1 = 0xd;
  *(undefined1 *)(param_2 + 0x21) = 3;
  return;
}

