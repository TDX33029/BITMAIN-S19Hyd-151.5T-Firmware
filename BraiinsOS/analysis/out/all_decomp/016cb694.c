// FUN_016cb694 @ 016cb694 size=780 calls_out=3 calls_in=2
// strings: 

void FUN_016cb694(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  bool bVar18;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar14 = param_2[1];
  uVar13 = param_2[2];
  if (uVar13 < uVar14) {
    iVar12 = *param_2;
    uVar11 = uVar13 + 1;
    param_2[2] = uVar11;
    bVar1 = *(byte *)(iVar12 + uVar13);
    if (((~bVar1 & 0x1f) != 0) && (uVar11 < uVar14)) {
      bVar2 = *(byte *)(iVar12 + uVar11);
      uVar11 = (uint)bVar2;
      uVar15 = uVar13 + 2;
      param_2[2] = uVar15;
      if ((char)bVar2 < '\0') {
        switch(uVar11) {
        case 0x81:
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          bVar2 = *(byte *)(iVar12 + uVar15);
          uVar11 = (uint)bVar2;
          uVar15 = uVar13 + 3;
          param_2[2] = uVar15;
          if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016cb728_default;
          break;
        case 0x82:
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          uVar11 = uVar13 + 3;
          param_2[2] = uVar11;
          if (uVar14 <= uVar11) goto switchD_016cb728_default;
          cVar6 = *(char *)(iVar12 + uVar15);
          uVar15 = uVar13 + 4;
          uVar7 = *(undefined1 *)(iVar12 + uVar11);
          param_2[2] = uVar15;
          if (cVar6 == '\0') goto switchD_016cb728_default;
          uVar11 = (uint)CONCAT11(cVar6,uVar7);
          break;
        case 0x83:
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          bVar2 = *(byte *)(iVar12 + uVar15);
          uVar11 = uVar13 + 3;
          param_2[2] = uVar11;
          if (uVar14 <= uVar11) goto switchD_016cb728_default;
          uVar15 = uVar13 + 4;
          param_2[2] = uVar15;
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          bVar3 = *(byte *)(iVar12 + uVar11);
          bVar4 = *(byte *)(iVar12 + uVar15);
          uVar15 = uVar13 + 5;
          param_2[2] = uVar15;
          if (bVar2 == 0) goto switchD_016cb728_default;
          uVar11 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
          break;
        case 0x84:
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          bVar2 = *(byte *)(iVar12 + uVar15);
          uVar11 = uVar13 + 3;
          param_2[2] = uVar11;
          if (uVar14 <= uVar11) goto switchD_016cb728_default;
          bVar3 = *(byte *)(iVar12 + uVar11);
          uVar11 = uVar13 + 4;
          param_2[2] = uVar11;
          if (uVar14 <= uVar11) goto switchD_016cb728_default;
          uVar15 = uVar13 + 5;
          param_2[2] = uVar15;
          if (uVar14 <= uVar15) goto switchD_016cb728_default;
          bVar4 = *(byte *)(iVar12 + uVar15);
          bVar5 = *(byte *)(iVar12 + uVar11);
          uVar15 = uVar13 + 6;
          param_2[2] = uVar15;
          if (bVar2 == 0) goto switchD_016cb728_default;
          uVar11 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
          break;
        default:
          goto switchD_016cb728_default;
        }
      }
      bVar18 = uVar11 < param_3;
      if (bVar18) {
        param_3 = uVar11 + uVar15;
      }
      if (((bVar18 && !CARRY4(uVar11,uVar15)) && (param_3 <= uVar14)) &&
         (param_2[2] = param_3, bVar1 == 0x30)) {
        if (param_3 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af3a8);
        }
        FUN_016c607c(&local_48,param_2,0x30);
        iVar9 = local_40;
        uVar8 = local_44;
        if (local_48 == -0x7fffffd3) {
          FUN_016c87f0(&local_48,param_2);
          if (local_48 == -0x7fffffd3) {
            uVar16 = 0;
            iVar17 = 0x20;
            param_1[1] = iVar12 + uVar15;
            param_1[2] = uVar11;
            iVar10 = 0x1c;
            param_1[3] = (byte *)(iVar12 + uVar13);
            iVar12 = 0x18;
            param_1[4] = param_3 - uVar13;
            param_1[5] = uVar8;
            local_48 = iVar9;
          }
          else {
            uVar16 = 1;
            iVar17 = 0x10;
            param_1[5] = local_3c;
            param_1[6] = uStack_38;
            param_1[7] = uStack_34;
            param_1[8] = uStack_30;
            param_1[9] = uStack_2c;
            iVar10 = 0xc;
            iVar12 = 8;
          }
        }
        else {
          uVar16 = 1;
          iVar17 = 0x10;
          iVar10 = 0xc;
          param_1[5] = local_3c;
          param_1[6] = uStack_38;
          param_1[7] = uStack_34;
          param_1[8] = uStack_30;
          param_1[9] = uStack_2c;
          iVar12 = 8;
        }
        *(int *)((int)param_1 + iVar12) = local_48;
        *(undefined4 *)((int)param_1 + iVar10) = local_44;
        *(int *)((int)param_1 + iVar17) = local_40;
        *param_1 = uVar16;
        return;
      }
    }
  }
switchD_016cb728_default:
  param_1[2] = 0x80000000;
  *param_1 = 1;
  return;
}

