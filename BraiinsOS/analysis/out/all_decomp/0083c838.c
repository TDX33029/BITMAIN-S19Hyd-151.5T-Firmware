// FUN_0083c838 @ 0083c838 size=656 calls_out=11 calls_in=1
// strings: 

uint FUN_0083c838(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  ushort *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 uStack_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    iVar7 = param_1[2];
    puVar10 = (ushort *)param_1[3];
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = puVar10;
    param_1[4] = iVar7;
    puVar6 = (uint *)FUN_016d38c8(4,1);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    bVar1 = *(byte *)((int)puVar10 + 3);
    uVar4 = puVar10[1];
    param_1[0xb] = 0x19;
    uVar3 = *puVar10;
    param_1[0xc] = 4;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0xf] = iVar7 + 0xc;
    param_1[10] = 4;
    param_1[9] = puVar6;
    param_1[8] = 4;
    *puVar6 = (uint)bVar1 << 0x18 | (uint)(byte)uVar4 << 0x10 |
              ((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10;
  case 3:
    iVar7 = FUN_007d67b8(param_1 + 0xf,param_2);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 3;
      return 1;
    }
    param_1[0xd] = iVar7;
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar2 = *(char *)(param_1 + 0x1c);
      bVar14 = cVar2 == '\x03';
      if (bVar14) {
        cVar2 = *(char *)(param_1 + 0x13);
      }
      if (bVar14 && cVar2 == '\x04') {
        FUN_0163c790(param_1 + 0x14);
        if (param_1[0x15] != 0) {
          (**(code **)(param_1[0x15] + 0xc))(param_1[0x16]);
        }
      }
    }
    if (param_1[5] == 1) {
      uVar8 = *(int *)param_1[4] * param_1[6];
      if (0xff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_21,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar8 = (uint)*(byte *)((int *)param_1[4] + 1);
    }
    uVar15 = (**(code **)(*(int *)(param_1[0xd] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0xd] + 0x1c),param_1[5],uVar8,param_1[0xb],
                        param_1[0xc],param_1[9],param_1[10]);
    *(undefined8 *)(param_1 + 0xf) = uVar15;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dac);
  case 4:
    uVar15 = *(undefined8 *)(param_1 + 0xf);
  }
  uVar8 = (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))((int)uVar15,param_2);
  if ((uVar8 & 1) != 0) {
    uVar5 = 4;
    uVar8 = 1;
    goto LAB_0083ca7c;
  }
  uVar12 = param_1[0xf];
  puVar13 = (undefined4 *)param_1[0x10];
  pcVar9 = (code *)*puVar13;
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(uVar12);
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  pcVar11 = (char *)param_1[0xd];
  if (*pcVar11 == '\0') {
    bVar14 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar14) goto LAB_0083ca44;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0083ca44:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  FUN_0163af68(pcVar11,1,pcVar11);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  uVar5 = 1;
LAB_0083ca7c:
  *(undefined1 *)(param_1 + 0xe) = uVar5;
  return uVar8;
}

