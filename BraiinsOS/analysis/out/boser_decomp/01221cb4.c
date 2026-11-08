// FUN_01221cb4 @ 01221cb4 size=548 calls_out=2 calls_in=1
// strings: 

void FUN_01221cb4(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  do {
    if (param_2[7] == 2) {
LAB_01221d5c:
      if ((*param_2 != 1) || (iVar3 = FUN_012209b0(param_2 + 1), iVar3 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00f80320(param_2,&DAT_01c2458c);
        return;
      }
    }
    else {
      iVar4 = param_2[8];
      iVar3 = param_2[9];
      iVar6 = param_2[10];
      while( true ) {
        if (iVar3 != 0) {
          iVar8 = 0;
          if (iVar3 != iVar6) {
            iVar8 = iVar3 + 0x30;
          }
          param_2[9] = iVar8;
          if (iVar3 != iVar6) goto LAB_01221d78;
        }
        bVar9 = (param_2[7] & 1U) != 0;
        if (bVar9) {
          param_2[8] = 0;
        }
        if (!bVar9 || iVar4 == 0) break;
        iVar6 = *(int *)(iVar4 + 8);
        iVar3 = *(int *)(iVar4 + 4);
        param_2[9] = iVar3;
        iVar6 = iVar3 + iVar6 * 0x30;
        param_2[10] = iVar6;
        iVar4 = 0;
      }
      iVar3 = param_2[0xb];
      if (iVar3 == 0) {
LAB_01221d58:
        param_2[7] = 2;
        goto LAB_01221d5c;
      }
      iVar4 = 0;
      if (iVar3 != param_2[0xc]) {
        iVar4 = iVar3 + 0x30;
      }
      param_2[0xb] = iVar4;
      if (iVar3 == param_2[0xc]) goto LAB_01221d58;
    }
LAB_01221d78:
  } while (*(char *)(iVar3 + 0x28) != '\x02');
  uVar10 = *(undefined8 *)(iVar3 + 0x10);
  do {
    if (param_2[7] == 2) {
LAB_01221e1c:
      if ((*param_2 != 1) || (iVar3 = FUN_012209b0(param_2 + 1), iVar3 == 0)) {
        FUN_00f80320(param_2,&DAT_01c2458c);
        *param_1 = 1;
        param_1[1] = 0;
        *(undefined8 *)(param_1 + 2) = uVar10;
        return;
      }
    }
    else {
      iVar4 = param_2[8];
      iVar3 = param_2[9];
      iVar6 = param_2[10];
      while( true ) {
        if (iVar3 != 0) {
          iVar8 = 0;
          if (iVar3 != iVar6) {
            iVar8 = iVar3 + 0x30;
          }
          param_2[9] = iVar8;
          if (iVar3 != iVar6) goto LAB_01221e38;
        }
        bVar9 = (param_2[7] & 1U) != 0;
        if (bVar9) {
          param_2[8] = 0;
        }
        if (!bVar9 || iVar4 == 0) break;
        iVar6 = *(int *)(iVar4 + 8);
        iVar3 = *(int *)(iVar4 + 4);
        param_2[9] = iVar3;
        iVar6 = iVar3 + iVar6 * 0x30;
        param_2[10] = iVar6;
        iVar4 = 0;
      }
      iVar3 = param_2[0xb];
      if (iVar3 == 0) {
LAB_01221e18:
        param_2[7] = 2;
        goto LAB_01221e1c;
      }
      iVar4 = 0;
      if (iVar3 != param_2[0xc]) {
        iVar4 = iVar3 + 0x30;
      }
      param_2[0xb] = iVar4;
      if (iVar3 == param_2[0xc]) goto LAB_01221e18;
    }
LAB_01221e38:
    if (*(char *)(iVar3 + 0x28) == '\x02') {
      uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar11 = *(undefined8 *)(iVar3 + 0x10);
      uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
      uVar1 = (int)uVar5 >> 0x1f;
      uVar5 = uVar1 >> 1 ^ uVar5;
      uVar2 = (int)uVar7 >> 0x1f;
      uVar7 = uVar2 >> 1 ^ uVar7;
      bVar9 = (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar11) <
              (((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar10);
      if ((int)(uVar7 - (uVar5 + bVar9)) < 0 !=
          (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)bVar9))) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11;
    }
  } while( true );
}

