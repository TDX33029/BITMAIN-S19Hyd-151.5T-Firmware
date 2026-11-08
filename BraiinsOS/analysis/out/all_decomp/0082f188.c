// FUN_0082f188 @ 0082f188 size=1180 calls_out=15 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0082f49c) */

void FUN_0082f188(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int *local_2c;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    param_2[1] = *param_2;
    iVar4 = *(int *)(*param_2 + 0x148);
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[3] = 0;
    param_2[5] = 4;
    param_2[6] = (int)puVar10;
    param_2[7] = 4;
    param_2[8] = 0x68;
    param_2[9] = 4;
    param_2[10] = iVar4 + 8;
    *puVar10 = 0x11017040;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018600e4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018600e4);
  case '\x04':
    goto switchD_0082f1a8_caseD_4;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      iVar4 = param_2[7];
      iVar5 = param_2[9];
      piVar9 = (int *)param_2[10];
      goto LAB_0082f3bc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_0082f260_caseD_3;
    case '\x04':
      uVar13 = *(undefined8 *)(param_2 + 0x16);
    }
    goto LAB_0082f4c8;
  }
  uVar12 = FUN_0082a1d0(param_2 + 3,param_3);
  iVar4 = (int)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    *param_1 = 0xd;
    *(undefined1 *)(param_2 + 2) = 3;
    return;
  }
  FUN_0082a018(param_2 + 3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_2[1] + 0x148);
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[3] = 0;
    param_2[5] = 4;
    param_2[6] = (int)puVar10;
    param_2[7] = 4;
    param_2[8] = 0x68;
    param_2[9] = 4;
    param_2[10] = iVar4 + 8;
    *puVar10 = 0x11017040;
switchD_0082f1a8_caseD_4:
    piVar9 = param_2 + 3;
    uVar12 = FUN_0082a1d0(piVar9,param_3);
    iVar4 = (int)(uVar12 >> 0x20);
    if ((uVar12 & 1) != 0) {
      *param_1 = 0xd;
      *(undefined1 *)(param_2 + 2) = 4;
      return;
    }
    FUN_0082a018(piVar9);
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar1 = *(byte *)(param_2[1] + 0x145);
      *(undefined2 *)(param_2 + 6) = 0;
      uVar7 = bVar1 - 1;
      param_2[5] = 0xf000000;
      *(char *)((int)param_2 + 0x13) = (char)((uVar7 & 3) >> 1);
      *(char *)((int)param_2 + 0x12) = (char)((uVar7 & 0xf) >> 2);
      *(ushort *)(param_2 + 3) = (ushort)((uVar7 & 1) << 8) | 0x80;
      *(uint *)((int)param_2 + 0xe) = ((uVar7 & 0xff) >> 4 | 0x20) << 0x18 | 0x10000;
      iVar5 = *(int *)(param_2[1] + 0x148);
      param_2[7] = 0;
      iVar5 = iVar5 + 8;
      param_2[9] = iVar5;
      param_2[10] = (int)piVar9;
      *(undefined1 *)(param_2 + 0x15) = 0;
LAB_0082f3bc:
      param_2[0xb] = iVar5;
      param_2[0xc] = iVar4;
      param_2[0xd] = param_2[8];
      param_2[0xe] = (int)piVar9;
      FUN_0080bb54(param_2 + 0xf,piVar9);
      *(undefined1 *)(param_2 + 0x24) = 0;
      param_2[0x16] = param_2[0xb] + 0xc;
switchD_0082f260_caseD_3:
      iVar4 = FUN_007d67b8(param_2 + 0x16,param_3);
      if (iVar4 == 0) {
        *(undefined1 *)(param_2 + 0x15) = 3;
        goto LAB_0082f4f8;
      }
      param_2[0x14] = iVar4;
      if ((char)param_2[0x24] == '\x03') {
        cVar2 = (char)param_2[0x23];
        bVar11 = cVar2 == '\x03';
        if (bVar11) {
          cVar2 = (char)param_2[0x1a];
        }
        if (bVar11 && cVar2 == '\x04') {
          FUN_0163c790(param_2 + 0x1b);
          if (param_2[0x1c] != 0) {
            (**(code **)(param_2[0x1c] + 0xc))(param_2[0x1d]);
          }
        }
      }
      if (param_2[0xc] == 1) {
        uVar7 = *(int *)param_2[0xb] * param_2[0xd];
        if (0xff < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar7 = (uint)*(byte *)((int *)param_2[0xb] + 1);
      }
      uVar13 = (**(code **)(*(int *)(param_2[0x14] + 0x20) + 0x14))
                         (*(undefined4 *)(param_2[0x14] + 0x1c),param_2[0xc],uVar7,param_2[0x12],
                          param_2[0x13],param_2[0x10],param_2[0x11]);
      *(undefined8 *)(param_2 + 0x16) = uVar13;
LAB_0082f4c8:
      local_2c = param_2 + 7;
      uVar12 = (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))((int)uVar13,param_3);
      iVar4 = (int)(uVar12 >> 0x20);
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x15) = 4;
        goto LAB_0082f4f8;
      }
      puVar10 = (undefined4 *)param_2[0x17];
      iVar5 = param_2[0x16];
      pcVar6 = (code *)*puVar10;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar5);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
      pcVar8 = (char *)param_2[0x14];
      if (*pcVar8 == '\0') {
        bVar11 = (bool)hasExclusiveAccess(pcVar8);
        if (!bVar11) goto LAB_0082f568;
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0082f568:
        FUN_01280da8(pcVar8);
      }
      FUN_0128236c(pcVar8);
      FUN_0163af68(pcVar8,1,pcVar8);
      if (param_2[0xf] != 0) {
        thunk_FUN_016d3fb4(param_2[0x10]);
      }
      *(undefined1 *)(param_2 + 0x15) = 1;
      if ((uVar12 & 1) != 0) {
LAB_0082f4f8:
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 2) = 5;
        return;
      }
      FUN_0082a908(local_2c);
      uVar3 = 9;
      if (iVar4 == 0) {
        uVar3 = 0xc;
      }
      goto LAB_0082f5c0;
    }
  }
  uVar3 = 9;
LAB_0082f5c0:
  *param_1 = uVar3;
  *(int *)(param_1 + 4) = iVar4;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

