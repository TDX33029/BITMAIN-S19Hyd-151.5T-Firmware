// FUN_01155758 @ 01155758 size=1232 calls_out=2 calls_in=1
// strings: 

ulonglong FUN_01155758(int *param_1,undefined2 *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint unaff_lr;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char local_29;
  ushort local_28;
  undefined1 local_26;
  undefined1 local_25;
  
  uVar5 = 0;
  uVar4 = param_3;
  uVar11 = param_1[2];
  puVar12 = param_2;
  do {
    if (uVar5 < param_3 - 1) {
      if (uVar5 == 0) {
        unaff_lr = 0x11557e4;
        FUN_01155c64(&local_29,param_1);
        uVar4 = extraout_r2_00;
        if (local_29 != '\0') {
          uVar5 = 0;
LAB_01155b5c:
          param_2[uVar5] = local_28 << 8 | local_28 >> 8;
          if (uVar5 == 7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(8,8,&DAT_01888cfc);
          }
          (param_2 + uVar5)[1] = CONCAT11(local_26,local_25);
          return CONCAT44(1,uVar5 + 2);
        }
      }
      else {
        uVar3 = param_1[1];
        if (uVar11 != uVar3) {
          if (uVar3 <= uVar11) goto LAB_01155bb0;
          if (*(char *)(*param_1 + uVar11) == ':') {
            param_1[2] = uVar11 + 1;
            unaff_lr = 0x11557c8;
            FUN_01155c64(&local_29,param_1);
            uVar4 = extraout_r2;
            if (local_29 != '\0') {
              if (7 < uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar5,8,&DAT_01888cec);
              }
              goto LAB_01155b5c;
            }
          }
        }
      }
      param_1[2] = uVar11;
    }
    if (uVar5 == 0) {
      iVar9 = *param_1;
      uVar3 = param_1[1];
      bVar14 = false;
      bVar13 = uVar3 <= uVar11;
      uVar6 = uVar11;
      uVar2 = uVar11;
      if (uVar11 == uVar3) goto LAB_011558a0;
LAB_0115584c:
      if (bVar13) goto LAB_01155bc4;
      uVar8 = (uint)*(byte *)(iVar9 + uVar6);
      uVar10 = uVar6 + 1;
      param_1[2] = uVar10;
      uVar4 = uVar8 - 0x30;
      uVar2 = uVar6;
      if ((uVar4 & 0xff) < 10) {
LAB_01155880:
        bVar14 = true;
        uVar6 = uVar10;
      }
      else {
        if ((uVar8 - 0x61 & 0xff) < 6) {
          uVar4 = uVar8 - 0x57;
          goto LAB_01155880;
        }
        bVar14 = (uVar8 - 0x41 & 0xff) < 6;
        uVar4 = uVar8 - 0x37;
        uVar6 = uVar10;
        if (!bVar14) goto LAB_011558a0;
      }
    }
    else {
      uVar3 = param_1[1];
      if (uVar11 == uVar3) goto LAB_01155b24;
      if (uVar3 <= uVar11) {
LAB_01155bb0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,uVar3,&DAT_01888c94);
      }
      iVar9 = *param_1;
      if (*(char *)(iVar9 + uVar11) != ':') goto LAB_01155b24;
      uVar2 = uVar11 + 1;
      param_1[2] = uVar2;
      bVar14 = false;
      bVar13 = uVar3 <= uVar2;
      uVar6 = uVar2;
      if (uVar2 != uVar3) goto LAB_0115584c;
LAB_011558a0:
      param_1[2] = uVar2;
      uVar6 = uVar2;
    }
    bVar13 = false;
    if (!bVar14) {
LAB_01155988:
      param_1[2] = uVar2;
LAB_01155b24:
      param_1[2] = uVar11;
      return (ulonglong)uVar5;
    }
    if (uVar6 == uVar3) {
LAB_011558bc:
      param_1[2] = uVar6;
      uVar8 = uVar6;
    }
    else {
      if (uVar3 <= uVar6) {
LAB_01155bc4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar3,&DAT_01888c94);
      }
      uVar10 = (uint)*(byte *)(iVar9 + uVar6);
      uVar8 = uVar6 + 1;
      param_1[2] = uVar8;
      unaff_lr = uVar10 - 0x30;
      if (9 < (unaff_lr & 0xff)) {
        if (5 < (uVar10 - 0x61 & 0xff)) {
          unaff_lr = uVar10 - 0x37;
          bVar15 = 5 < (uVar10 - 0x41 & 0xff);
          bVar13 = !bVar15;
          if (bVar15) goto LAB_011558bc;
          goto LAB_01155900;
        }
        unaff_lr = uVar10 - 0x57;
      }
      bVar13 = true;
    }
LAB_01155900:
    uVar4 = uVar4 & 0xff;
    uVar10 = uVar8;
    if (bVar13) {
      bVar13 = false;
      if (uVar8 == uVar3) {
LAB_01155918:
        param_1[2] = uVar8;
        uVar10 = uVar8;
      }
      else {
        if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,uVar3,&DAT_01888c94);
        }
        uVar7 = (uint)*(byte *)(iVar9 + uVar8);
        uVar10 = uVar8 + 1;
        param_1[2] = uVar10;
        uVar6 = uVar7 - 0x30;
        if (9 < (uVar6 & 0xff)) {
          if (5 < (uVar7 - 0x61 & 0xff)) {
            uVar6 = uVar7 - 0x37;
            bVar15 = 5 < (uVar7 - 0x41 & 0xff);
            bVar13 = !bVar15;
            if (bVar15) goto LAB_01155918;
            goto LAB_01155964;
          }
          uVar6 = uVar7 - 0x57;
        }
        bVar13 = true;
      }
LAB_01155964:
      uVar4 = uVar4 * 0x10 + (unaff_lr & 0xff);
      if (bVar13) {
        uVar4 = uVar4 * 0x10 + (uVar6 & 0xff);
        bVar13 = false;
        if (uVar4 >> 0x10 != 0) goto LAB_01155988;
        if (uVar10 == uVar3) {
LAB_011559d8:
          param_1[2] = uVar10;
          unaff_lr = uVar10;
        }
        else {
          if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,uVar3,&DAT_01888c94);
          }
          uVar8 = (uint)*(byte *)(iVar9 + uVar10);
          unaff_lr = uVar10 + 1;
          param_1[2] = unaff_lr;
          uVar6 = uVar8 - 0x30;
          if (9 < (uVar6 & 0xff)) {
            if (5 < (uVar8 - 0x61 & 0xff)) {
              uVar6 = uVar8 - 0x37;
              bVar15 = 5 < (uVar8 - 0x41 & 0xff);
              bVar13 = !bVar15;
              if (bVar15) goto LAB_011559d8;
              goto LAB_01155a44;
            }
            uVar6 = uVar8 - 0x57;
          }
          bVar13 = true;
        }
LAB_01155a44:
        if (bVar13) {
          uVar4 = uVar4 * 0x10 + (uVar6 & 0xff);
          if (uVar4 >> 0x10 != 0) goto LAB_01155988;
          bVar13 = false;
          if (unaff_lr == uVar3) {
LAB_01155a6c:
            param_1[2] = unaff_lr;
            uVar10 = unaff_lr;
          }
          else {
            if (uVar3 <= unaff_lr) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(unaff_lr,uVar3,&DAT_01888c94);
            }
            cVar1 = *(char *)(iVar9 + unaff_lr);
            uVar10 = unaff_lr + 1;
            param_1[2] = uVar10;
            if (((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0x9fU) < 6)) {
              bVar13 = true;
            }
            else {
              bVar15 = 5 < (byte)(cVar1 + 0xbfU);
              bVar13 = !bVar15;
              if (bVar15) goto LAB_01155a6c;
            }
          }
          if (bVar13) goto LAB_01155988;
        }
        else {
          uVar10 = unaff_lr;
        }
      }
    }
    if (!bVar14) goto LAB_01155b24;
    if (uVar5 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(8,8,&DAT_01888d0c);
    }
    *puVar12 = (short)uVar4;
    uVar5 = uVar5 + 1;
    uVar11 = uVar10;
    puVar12 = puVar12 + 1;
    if (param_3 == uVar5) {
      return (ulonglong)param_3;
    }
  } while( true );
}

