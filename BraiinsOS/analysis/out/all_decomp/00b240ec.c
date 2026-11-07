// FUN_00b240ec @ 00b240ec size=1276 calls_out=18 calls_in=1
// strings: 

undefined8 FUN_00b240ec(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  uint unaff_r7;
  uint uVar12;
  bool bVar13;
  uint local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x19]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f520);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f520);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x15]) {
    case '\0':
      iVar3 = param_1[0x12];
      iVar7 = param_1[0x13];
      goto LAB_00b24340;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871550);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871550);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xd]) {
    case '\0':
      iVar3 = param_1[10];
      goto LAB_00b243b8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018716f0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018716f0);
    case '\x03':
      goto switchD_00b241b4_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      iVar3 = param_1[0xe];
      goto LAB_00b24430;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018717b0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018717b0);
    case '\x03':
      goto switchD_00b241f0_caseD_3;
    }
  }
  iVar7 = param_1[0x16];
  param_1[0x17] = iVar7;
  param_1[0x18] = 0;
  iVar3 = *(int *)(iVar7 + 0x2e4);
  iVar7 = iVar3 + *(int *)(iVar7 + 0x2e8) * 0x50;
  *param_1 = iVar3;
  param_1[1] = iVar7;
  if (iVar3 != iVar7) {
    do {
      *param_1 = iVar3 + 0x50;
      iVar7 = *(int *)(iVar3 + 0x44);
      iVar3 = *(int *)(param_1[0x17] + 0x2ec);
      *(undefined1 *)(param_1 + 0x15) = 0;
      iVar3 = iVar3 + 8;
      param_1[0x12] = iVar3;
      param_1[0x13] = iVar7;
LAB_00b24340:
      piVar5 = (int *)(*(int *)(iVar3 + 0x3bc) + -4);
      iVar3 = *(int *)(iVar3 + 0x3c0) << 2;
      do {
        if (iVar3 == 0) {
          param_1[2] = 6;
          param_1[3] = iVar7;
          local_58 = param_1[2];
          iStack_54 = param_1[3];
          iStack_50 = param_1[4];
          iStack_4c = param_1[5];
          local_48 = param_1[6];
          iStack_44 = param_1[7];
          iStack_40 = param_1[8];
          unaff_r7 = param_1[9];
          uStack_3c = unaff_r7;
          uVar4 = FUN_00c78ae8();
          uVar12 = 0x80000000;
          goto LAB_00b245b0;
        }
        piVar5 = piVar5 + 1;
        piVar9 = (int *)*piVar5;
        iVar3 = iVar3 + -4;
      } while (piVar9[0xe3] != iVar7);
      do {
        iVar3 = *piVar9;
        bVar13 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar13);
      *piVar9 = iVar3 + 1;
      if (iVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb24688);
        (*pcVar1)();
      }
      iVar7 = *piVar5;
      iVar3 = iVar7 + 0x10;
      param_1[10] = iVar3;
      param_1[2] = 7;
      param_1[0x14] = iVar7;
      param_1[3] = iVar7;
      *(undefined1 *)(param_1 + 0xd) = 0;
      unaff_r7 = 0;
LAB_00b243b8:
      param_1[0xe] = iVar3 + 900;
      param_1[0xf] = -1;
      param_1[0xb] = iVar3;
switchD_00b241b4_caseD_3:
      piVar5 = param_1 + 0xe;
      iVar3 = FUN_00c8101c(piVar5,param_2);
      if (iVar3 == 0) {
        uVar2 = 3;
LAB_00b2464c:
        *(undefined1 *)(param_1 + 0x19) = 3;
        *(undefined1 *)(param_1 + 0x15) = 3;
        *(undefined1 *)(param_1 + 0xd) = uVar2;
        return CONCAT44(piVar5,2);
      }
      param_1[0xc] = iVar3;
      if (param_1[0xe] != 0) {
        FUN_00c8204c(param_1[0xe],param_1[0xf],1);
        iVar3 = param_1[0xc];
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 == 0) {
        local_28 = &DAT_00f5c97c;
        local_2c = param_1[0xb] + 0x37c;
        FUN_00600d2c(&local_58,&DAT_00595128,&local_2c);
        local_38 = local_58;
        iStack_34 = iStack_54;
        iStack_30 = iStack_50;
        uVar4 = FUN_00c6b484(&local_38);
        uVar12 = 0x80000000;
      }
      else {
        *(undefined1 *)(param_1 + 0x11) = 0;
        iVar3 = iVar3 + 8;
        param_1[0xe] = iVar3;
LAB_00b24430:
        param_1[0xf] = iVar3 + 0x1a0;
        param_1[0x10] = -1;
switchD_00b241f0_caseD_3:
        iVar3 = FUN_00c8101c(param_1 + 0xf,param_2);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x11) = 3;
          uVar2 = 4;
          piVar5 = (int *)0x0;
          goto LAB_00b2464c;
        }
        iVar7 = param_1[0xf];
        if (iVar7 != 0) {
          FUN_00c8204c(iVar7,param_1[0x10],1);
        }
        unaff_r7 = *(uint *)(iVar3 + 0x28);
        uVar11 = 0;
        if (0x3fffffff < unaff_r7) {
LAB_00b24630:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar11,local_5c);
        }
        uVar6 = unaff_r7 * 4;
        if (0x7ffffffc < uVar6) goto LAB_00b24630;
        uVar11 = *(undefined4 *)(iVar3 + 0x24);
        uVar4 = 4;
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar4 = thunk_FUN_016d4a50(uVar6,local_5c);
          if (uVar4 == 0) {
            uVar11 = 4;
            local_5c = uVar6;
            goto LAB_00b24630;
          }
          uVar12 = unaff_r7;
        }
        FUN_016dd1aa(uVar4,uVar11,uVar6);
        FUN_00c822ec(iVar3);
        *(undefined1 *)(param_1 + 0x11) = 1;
        local_5c = uVar4;
      }
      FUN_00c822ec(param_1[0xc]);
      piVar5 = (int *)param_1[0x14];
      *(undefined1 *)(param_1 + 0xd) = 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar13 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar13);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(param_1[0x14]);
      }
LAB_00b245b0:
      uVar11 = 1;
      *(undefined1 *)(param_1 + 0x15) = 1;
      FUN_00ad235c(param_1 + 2);
      if (uVar12 == 0x80000000) goto LAB_00b242fc;
      if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
      }
      uVar8 = 0;
      uVar6 = 0;
      iVar3 = 0;
      do {
        uVar10 = *(uint *)(uVar4 + uVar8 * 4);
        uVar8 = uVar8 + 1;
        bVar13 = CARRY4(uVar6,uVar10);
        uVar6 = uVar6 + uVar10;
        iVar3 = iVar3 + (uint)bVar13;
      } while (unaff_r7 != uVar8);
      iVar3 = FUN_01846088(uVar6,iVar3,unaff_r7,0);
      param_1[0x18] = param_1[0x18] + iVar3;
      if (uVar12 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      iVar3 = *param_1;
    } while (iVar3 != param_1[1]);
  }
  if (*(int *)(param_1[0x17] + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_0186f530);
  }
  uVar4 = FUN_018462e8(param_1[0x18]);
  uVar11 = 0;
LAB_00b242fc:
  *(undefined1 *)(param_1 + 0x19) = 1;
  return CONCAT44(uVar4,uVar11);
}

