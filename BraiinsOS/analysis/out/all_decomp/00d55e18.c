// FUN_00d55e18 @ 00d55e18 size=592 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d55e18(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int *piVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = param_2[0x25];
  uVar1 = *(undefined1 *)(param_2 + 0x27);
  uVar24 = *param_2;
  uVar25 = param_2[1];
  uVar22 = param_2[2];
  FUN_00cce358(&uStack_50,param_2[0x1b],param_2[0x1c]);
  uVar5 = param_2[0xb];
  uVar28 = *(undefined8 *)(param_2 + 0x18);
  FUN_00ce0b48(&local_30,param_2[9],param_2[10]);
  uVar27 = param_2[0x11];
  uVar6 = param_2[4];
  uVar23 = param_2[5];
  uVar7 = param_2[6];
  piVar16 = (int *)param_2[0x22];
  uVar8 = param_2[0xd];
  uVar10 = param_2[0xc];
  uVar9 = param_2[0x26];
  do {
    iVar11 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = iVar11 + 1;
  if (-1 < iVar11) {
    piVar26 = (int *)param_2[0x23];
    do {
      iVar11 = *piVar26;
      bVar3 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar3);
    *piVar26 = iVar11 + 1;
    if (-1 < iVar11) {
      uVar12 = param_2[0x12];
      uVar13 = param_2[0x14];
      uVar14 = param_2[0x16];
      piVar15 = (int *)param_2[0x24];
      uVar17 = param_2[0x13];
      uVar2 = *(undefined1 *)(param_2 + 0x17);
      do {
        iVar11 = *piVar15;
        bVar3 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar3);
      *piVar15 = iVar11 + 1;
      if (-1 < iVar11) {
        uVar18 = param_2[0x1e];
        uVar19 = param_2[0x1f];
        uVar20 = param_2[0x20];
        uVar21 = param_2[0x21];
        param_1[1] = uVar25;
        param_1[2] = uVar22;
        *(undefined1 *)(param_1 + 0x27) = uVar1;
        param_1[0x25] = uVar4;
        *param_1 = uVar24;
        local_58 = (undefined4)uVar28;
        uStack_54 = (undefined4)((ulonglong)uVar28 >> 0x20);
        param_1[0x18] = local_58;
        param_1[0x19] = uStack_54;
        param_1[0x1a] = uStack_50;
        param_1[0x1b] = uStack_4c;
        param_1[0x1c] = uStack_48;
        param_1[0x1d] = uStack_44;
        param_1[4] = uVar6;
        param_1[5] = uVar23;
        param_1[6] = uVar7;
        param_1[7] = local_40;
        param_1[8] = local_30;
        param_1[0xb] = uVar5;
        param_1[0xc] = uVar10;
        param_1[0xd] = uVar8;
        uVar4 = param_2[0xe];
        uVar5 = param_2[0xf];
        uVar6 = param_2[0x10];
        param_1[10] = uStack_28;
        param_1[0xe] = uVar4;
        param_1[0xf] = uVar5;
        param_1[0x10] = uVar6;
        param_1[0x11] = uVar27;
        param_1[0x12] = uVar12;
        param_1[0x14] = uVar13;
        param_1[0x16] = uVar14;
        *(undefined1 *)(param_1 + 0x17) = uVar2;
        param_1[0x1e] = uVar18;
        param_1[0x1f] = uVar19;
        param_1[9] = uStack_2c;
        param_1[0x22] = piVar16;
        param_1[0x20] = uVar20;
        param_1[0x26] = uVar9;
        param_1[0x23] = piVar26;
        param_1[0x13] = uVar17;
        param_1[0x24] = piVar15;
        param_1[0x21] = uVar21;
        return;
      }
    }
  }
  software_udf(0xfdee,0xd56064);
  return;
}

