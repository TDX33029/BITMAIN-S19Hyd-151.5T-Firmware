// FUN_0103947c @ 0103947c size=792 calls_out=5 calls_in=2
// strings: 

/* WARNING: Switch with 1 destination removed at 0x010395c4 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0103947c(undefined4 *param_1,int *param_2,byte *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar12 = param_2[1];
  uVar13 = param_2[3];
  uVar5 = uVar12 - uVar13;
  if ((param_4 & 1) != 0) {
    if (uVar5 < param_5) {
      pbVar10 = (byte *)param_2[2];
      do {
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (uVar13 == 0) goto LAB_0103978c;
        bVar4 = *pbVar10;
        if (bVar4 == 0) {
          param_3[0x40] = 1;
        }
        else if ((bVar4 < 0xc0) && (0x3f < bVar4)) {
LAB_010397ec:
          *(byte *)((int)param_1 + 1) = bVar4;
          *(undefined1 *)param_1 = 4;
          return;
        }
      } while (uVar12 - uVar13 < param_5);
    }
    param_1[1] = uVar5;
    param_1[2] = param_5;
    *(undefined1 *)param_1 = 6;
    return;
  }
  pbVar11 = (byte *)param_2[2];
  piVar6 = param_2;
  pbVar10 = param_3;
  do {
    iVar7 = 0;
    while (iVar7 == 0) {
      if (uVar13 == 0) goto LAB_0103978c;
      bVar4 = *pbVar11;
      if (bVar4 == 0) {
        param_3[0x40] = 1;
        iVar7 = 3;
      }
      else {
        iVar7 = 2;
        if ((bVar4 < 0xc0) && (iVar7 = 1, 0x3f < bVar4)) goto LAB_010397ec;
      }
    }
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        if (uVar13 < 2) {
          param_1[1] = 0;
          param_1[2] = 2;
          *(undefined1 *)param_1 = 0;
          return;
        }
        bVar4 = *pbVar11;
        bVar2 = pbVar11[1];
        param_2[2] = (int)(pbVar11 + 2);
        param_2[3] = uVar13 - 2;
        uVar3 = (bVar4 & 0x3f) << 0x18 | (uint)bVar2 << 0x10;
        uVar1 = uVar3 >> 0x10;
        if (uVar5 <= uVar3 >> 0x10) {
          *(short *)((int)param_1 + 2) = (short)(uVar3 >> 0x10);
          param_1[1] = uVar12 - uVar13;
          *(undefined1 *)param_1 = 2;
          return;
        }
        if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar12,uVar12,&DAT_01883528);
        }
        local_40 = *param_2;
        local_34 = uVar12 - uVar1;
        local_38 = local_40 + uVar1;
        local_3c = uVar12;
        FUN_0103947c(&local_30,&local_40,param_3,1,uVar5);
        if ((char)local_30 != '\a') {
          *param_1 = local_30;
          param_1[1] = uStack_2c;
          param_1[2] = uStack_28;
          return;
        }
      }
      else {
        if (uVar13 == 0) {
LAB_0103978c:
          *(undefined1 *)param_1 = 0;
          return;
        }
        param_2[2] = (int)(pbVar11 + 1);
        param_2[3] = uVar13 - 1;
      }
      if (*(short *)(param_3 + 0x24) == 1) {
        uVar5 = *(uint *)(param_3 + 0x30);
      }
      else {
        uVar5 = (uint)*(ushort *)(param_3 + 0x26);
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      if (*(short *)param_3 == 1) {
        uVar12 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar12 = (uint)*(ushort *)(param_3 + 2);
      }
      if (uVar12 + uVar5 < 0xff) {
        *(undefined1 *)param_1 = 7;
        return;
      }
      param_1[1] = uVar12 + uVar5;
      *(undefined1 *)param_1 = 5;
      return;
    }
    if (uVar13 == 0) {
LAB_010397d0:
      param_1[1] = pbVar10;
      param_1[2] = piVar6;
      *(undefined1 *)param_1 = 0;
      return;
    }
    piVar8 = (int *)(uVar13 - 1);
    pbVar9 = pbVar11 + 1;
    piVar14 = (int *)(uint)*pbVar11;
    param_2[2] = (int)pbVar9;
    param_2[3] = (int)piVar8;
    if (piVar8 < piVar14) goto LAB_010397d0;
    pbVar11 = pbVar9 + (int)piVar14;
    uVar13 = (int)piVar8 - (int)piVar14;
    param_2[2] = (int)pbVar11;
    param_2[3] = uVar13;
    if (&DAT_0000003f < piVar14) {
      param_1[1] = piVar14;
      *(undefined1 *)param_1 = 3;
      return;
    }
    iVar7 = FUN_010398ac(param_3,pbVar9,piVar14);
    piVar6 = piVar14;
    pbVar10 = pbVar9;
    if (iVar7 != 0) {
      FUN_01036ca0();
      thunk_FUN_016d3fb4(iVar7);
      param_1[1] = piVar14;
      *(undefined1 *)param_1 = 5;
      return;
    }
  } while( true );
}

