// FUN_0083c3d0 @ 0083c3d0 size=896 calls_out=11 calls_in=1
// strings: 

uint FUN_0083c3d0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  undefined1 uVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  code *pcVar25;
  byte *pbVar26;
  char *pcVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    iVar23 = param_1[2];
    pbVar26 = (byte *)param_1[3];
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = pbVar26;
    param_1[4] = iVar23;
    puVar22 = (uint *)FUN_016d38c8(4,1);
    if (puVar22 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    bVar1 = *pbVar26;
    bVar2 = pbVar26[1];
    bVar3 = pbVar26[2];
    bVar4 = pbVar26[3];
    bVar5 = pbVar26[0xf];
    bVar6 = pbVar26[0x10];
    bVar7 = pbVar26[8];
    bVar8 = pbVar26[0x11];
    bVar9 = pbVar26[7];
    bVar10 = pbVar26[6];
    bVar11 = pbVar26[4];
    bVar12 = pbVar26[5];
    bVar13 = pbVar26[0xe];
    bVar14 = pbVar26[0xd];
    bVar15 = pbVar26[0xc];
    bVar16 = pbVar26[0x12];
    bVar17 = pbVar26[0xb];
    bVar18 = pbVar26[10];
    bVar19 = pbVar26[9];
    param_1[0xf] = iVar23 + 0xc;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[9] = puVar22;
    param_1[10] = 4;
    param_1[0xb] = 0x18;
    param_1[8] = 4;
    param_1[0xc] = 4;
    *puVar22 = ((bVar17 & 0x1ffffff9) << 3 | (bVar16 & 3) << 4 | (uint)bVar15 << 2 |
                (uint)bVar14 << 1 | (uint)bVar13 | (uint)bVar19 << 7 | (uint)bVar18 << 6) << 0x18 |
               (((bVar9 & 0x7ffffff1) << 1 | (bVar8 & 7) << 2 | (uint)bVar7 |
                (uint)bVar11 << 7 | (uint)bVar12 << 6 | (uint)bVar10 << 5) & 0xff) << 0x10 |
               (((uint)bVar1 << 7 | (uint)bVar2 << 6 | (uint)bVar3 << 5 | (uint)bVar4 << 4) & 0xff |
               bVar6 & 0xf) << 8 | (uint)bVar5;
  case 3:
    iVar23 = FUN_007d67b8(param_1 + 0xf,param_2);
    if (iVar23 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 3;
      return 1;
    }
    param_1[0xd] = iVar23;
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar20 = *(char *)(param_1 + 0x1c);
      bVar30 = cVar20 == '\x03';
      if (bVar30) {
        cVar20 = *(char *)(param_1 + 0x13);
      }
      if (bVar30 && cVar20 == '\x04') {
        FUN_0163c790(param_1 + 0x14);
        if (param_1[0x15] != 0) {
          (**(code **)(param_1[0x15] + 0xc))(param_1[0x16]);
        }
      }
    }
    if (param_1[5] == 1) {
      uVar24 = *(int *)param_1[4] * param_1[6];
      if (0xff < uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar24 = (uint)*(byte *)((int *)param_1[4] + 1);
    }
    uVar31 = (**(code **)(*(int *)(param_1[0xd] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0xd] + 0x1c),param_1[5],uVar24,param_1[0xb],
                        param_1[0xc],param_1[9],param_1[10]);
    *(undefined8 *)(param_1 + 0xf) = uVar31;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dac);
  case 4:
    uVar31 = *(undefined8 *)(param_1 + 0xf);
  }
  uVar24 = (**(code **)((int)((ulonglong)uVar31 >> 0x20) + 0xc))((int)uVar31,param_2);
  if ((uVar24 & 1) != 0) {
    uVar21 = 4;
    uVar24 = 1;
    goto LAB_0083c704;
  }
  uVar28 = param_1[0xf];
  puVar29 = (undefined4 *)param_1[0x10];
  pcVar25 = (code *)*puVar29;
  if (pcVar25 != (code *)0x0) {
    (*pcVar25)(uVar28);
  }
  if (puVar29[1] != 0) {
    thunk_FUN_016d3fb4(uVar28);
  }
  pcVar27 = (char *)param_1[0xd];
  if (*pcVar27 == '\0') {
    bVar30 = (bool)hasExclusiveAccess(pcVar27);
    if (!bVar30) goto LAB_0083c6cc;
    *pcVar27 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0083c6cc:
    FUN_01280da8(pcVar27);
  }
  FUN_0128236c(pcVar27);
  FUN_0163af68(pcVar27,1,pcVar27);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  uVar21 = 1;
LAB_0083c704:
  *(undefined1 *)(param_1 + 0xe) = uVar21;
  return uVar24;
}

