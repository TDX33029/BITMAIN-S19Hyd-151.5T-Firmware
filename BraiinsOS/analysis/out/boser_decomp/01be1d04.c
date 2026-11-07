// FUN_01be1d04 @ 01be1d04 size=720 calls_out=7 calls_in=2
// strings: LIBUNWIND_PRINT_APIS | libunwind: __unw_get_reg(cursor=%p; regNum=%d; &value=%p)  | libunwind: __unw_set_reg(cursor=%p; regNum=%d; value=0x%x)  | LIBUNWIND_PRINT_APIS

/* WARNING: Instruction at (ram,0x01be1f28) overlaps instruction at (ram,0x01be1f26)
    */

uint FUN_01be1d04(int *param_1,uint param_2,undefined **param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  code *extraout_r1;
  code *extraout_r1_00;
  code *extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  code *extraout_r2;
  uint extraout_r2_00;
  uint *extraout_r2_01;
  int iVar6;
  undefined4 *extraout_r3;
  undefined4 *puVar7;
  int iVar8;
  uint extraout_r3_00;
  uint uVar9;
  uint *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined4 unaff_r9;
  undefined ***pppuVar15;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar16;
  longlong lVar17;
  undefined1 local_58 [56];
  undefined **local_20 [2];
  
  pppuVar15 = local_20;
  puVar14 = &DAT_01d53488;
  if (DAT_01d53488 == '\0') {
    iVar6 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar6 != 0;
    DAT_01d53488 = '\x01';
    if ((bool)DAT_01d53487) goto LAB_01be1da0;
  }
  else if (DAT_01d53487 != '\0') {
LAB_01be1da0:
    puVar14 = &DAT_01d50fd8;
    local_20[0] = param_3;
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_get_reg(cursor=%p, regNum=%d, &value=%p)\n",param_1
                 ,param_2);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  iVar6 = *param_1;
  if (*(code **)(iVar6 + 8) == (code *)&LAB_01be1330_1) {
    if ((1 < param_2 + 2) && (0xf < param_2)) {
      return 0xffffe672;
    }
  }
  else {
    iVar6 = (**(code **)(iVar6 + 8))(param_1,param_2);
    if (iVar6 == 0) {
      return 0xffffe672;
    }
    iVar6 = *param_1;
  }
  if (*(code **)(iVar6 + 0xc) != (code *)&DAT_01be1621) {
    puVar14 = (undefined *)(**(code **)(iVar6 + 0xc))(param_1,param_2);
    goto LAB_01be1dc6;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    puVar14 = (undefined *)param_1[param_2 + 2];
    break;
  case 0xe:
    puVar14 = (undefined *)param_1[0x10];
    break;
  case 0xfffffffe:
  case 0xd:
    puVar14 = (undefined *)param_1[0xf];
    break;
  case 0xffffffff:
  case 0xf:
    puVar14 = (undefined *)param_1[0x11];
    break;
  default:
    uVar2 = FUN_01be13dc();
    UNRECOVERED_JUMPTABLE = (code *)((int)param_3 >> 0x1d);
    uVar9 = (int)UNRECOVERED_JUMPTABLE << 6;
    puVar7 = extraout_r3;
    pcVar12 = UNRECOVERED_JUMPTABLE;
    if (uVar2 != 0) {
      coprocessor_movefromRt(6,4,7,in_cr13,in_cr5);
      puVar10 = (uint *)((int)UNRECOVERED_JUMPTABLE * 0x2000);
      uVar9 = *puVar10;
      puVar14 = (undefined *)puVar10[1];
      coprocessor_function2(9,9,1,in_cr14,in_cr13,in_cr13);
      UNRECOVERED_JUMPTABLE =
           (code *)(uVar2 >> (puVar10[5] & 0x1f) | uVar2 << 0x20 - (puVar10[5] & 0x1f));
      pppuVar15 = (undefined ***)local_58;
      pcVar12 = (code *)&DAT_01d53488;
      puVar7 = &DAT_01d53560;
      param_3 = &PTR_01d3b2b0;
    }
    pppuVar15[0xd] = (undefined **)*puVar7;
    cVar1 = DAT_01d53487;
    if (*pcVar12 == (code)0x0) {
      iVar6 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
      DAT_01d53487 = iVar6 != 0;
      *pcVar12 = (code)0x1;
      cVar1 = iVar6 != 0;
    }
    uVar4 = 0;
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)param_3[0x79];
      *pppuVar15 = (undefined **)puVar14;
      uVar4 = *puVar7;
      FUN_01beb3de(uVar4,"libunwind: __unw_set_reg(cursor=%p, regNum=%d, value=0x%x)\n",
                   UNRECOVERED_JUMPTABLE,uVar9);
      uVar4 = FUN_01beb1cc(uVar4);
    }
    iVar6 = *(int *)UNRECOVERED_JUMPTABLE;
    pcVar12 = (code *)param_3[0x5f];
    if (*(code **)(iVar6 + 8) == pcVar12) {
      uVar16 = CONCAT44(pcVar12,uVar4);
      if ((uVar9 + 2 < 2) || (uVar16 = CONCAT44(pcVar12,uVar4), uVar9 < 0x10)) {
LAB_01be1e70:
        pcVar12 = (code *)((ulonglong)uVar16 >> 0x20);
        pcVar13 = (code *)param_3[0x67];
        if (*(code **)(iVar6 + 0x10) == pcVar13) {
          if ((int)uVar9 < 0x10) {
            if (-3 < (int)uVar9) {
              switch(uVar9) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xb:
              case 0xc:
                *(undefined **)(UNRECOVERED_JUMPTABLE + uVar9 * 4 + 8) = puVar14;
                break;
              default:
                *(undefined **)(UNRECOVERED_JUMPTABLE + 0x3c) = puVar14;
                break;
              case 0xe:
                uVar2 = 0;
                *(undefined **)(UNRECOVERED_JUMPTABLE + 0x40) = puVar14;
                goto LAB_01be1eb0;
              case 0xffffffff:
              case 0xf:
                *(undefined **)(UNRECOVERED_JUMPTABLE + 0x44) = puVar14;
              }
              goto LAB_01be1f0c;
            }
          }
          else if (uVar9 == 0x8f) {
            *(undefined **)(UNRECOVERED_JUMPTABLE + 0x48) = puVar14;
            uVar2 = 0;
            goto LAB_01be1eb0;
          }
          FUN_01be141c((int)uVar16);
          pppuVar15[0x90] = (undefined **)uVar9;
          pppuVar15[0x82] = (undefined **)((int)param_3 << 6);
          pppuVar15[0xf8] = (undefined **)extraout_r3_00;
          UNRECOVERED_JUMPTABLE = extraout_r2;
          pcVar13 = extraout_r2;
          if ((extraout_r3_00 & 0x80000) == 0) {
            coprocessor_function2(0xe,9,5,in_cr12,in_cr13,in_cr12);
            coprocessor_function2(5,9,4,in_cr1,in_cr13,in_cr13);
            piVar3 = (int *)(extraout_r1_02 * 0x40);
            pppuVar15[-1] = (undefined **)0x1be1fc1;
            pppuVar15[-2] = (undefined **)puVar14;
            pppuVar15[-3] = (undefined **)extraout_r2;
            pppuVar15[-4] = param_3;
            pppuVar15[-5] = (undefined **)extraout_r2;
            pppuVar15[-6] = (undefined **)((int)extraout_r2 << 6);
            puVar14 = &DAT_01d53488;
            if (DAT_01d53488 == '\0') {
              iVar6 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
              DAT_01d53487 = iVar6 != 0;
              DAT_01d53488 = '\x01';
            }
            if (DAT_01d53487 != '\0') {
              pppuVar15[-8] = (undefined **)extraout_r2;
              puVar14 = &DAT_01d50fd8;
              FUN_01beb3de(&DAT_01d50fd8,
                           "libunwind: __unw_get_fpreg(cursor=%p, regNum=%d, &value=%p)\n",piVar3,
                           extraout_r1_02);
              FUN_01beb1cc(&DAT_01d50fd8);
            }
            pcVar12 = *(code **)(*piVar3 + 0x14);
            if (pcVar12 == (code *)&LAB_01be1344_1) {
              if (0x1f < extraout_r1_02 - 0x100) {
                return 0xffffe672;
              }
              pcVar12 = *(code **)(*piVar3 + 0x18);
              if (pcVar12 == (code *)&DAT_01be16a1) goto LAB_01be203c;
LAB_01be20e0:
              uVar2 = extraout_r1_02;
LAB_01be20e4:
              uVar16 = (*pcVar12)(extraout_r1_02 * 0x40,uVar2);
LAB_01be205e:
              *(undefined8 *)UNRECOVERED_JUMPTABLE = uVar16;
              return 0;
            }
            iVar6 = (*pcVar12)(piVar3,extraout_r1_02);
            if (iVar6 == 0) {
              return 0xffffe672;
            }
            pcVar12 = *(code **)(*piVar3 + 0x18);
            if (pcVar12 != (code *)&DAT_01be16a1) goto LAB_01be20e0;
LAB_01be203c:
            if (extraout_r1_02 - 0x100 < 0x10) {
              if (*(char *)((int)piVar3 + 0x4d) == '\0') {
                *(undefined1 *)((int)piVar3 + 0x4d) = 1;
                if ((char)piVar3[0x13] == '\0') {
                  FUN_01bdfb8c(piVar3 + 0x14);
                }
                else {
                  FUN_01bdfb94();
                }
              }
              uVar16 = *(undefined8 *)(extraout_r1_02 * 0x48 + -0x7b0);
              goto LAB_01be205e;
            }
            if (extraout_r1_02 - 0x110 < 0x10) {
              if (*(char *)((int)piVar3 + 0x4e) == '\0') {
                *(undefined1 *)((int)piVar3 + 0x4e) = 1;
                FUN_01bdfb9c(piVar3 + 0x36);
              }
              uVar16 = *(undefined8 *)(extraout_r1_02 * 0x48 + -0x7a8);
              goto LAB_01be205e;
            }
            FUN_01be145c();
            UNRECOVERED_JUMPTABLE = (code *)&DAT_000000e9;
            pppuVar15[0x9a] = (undefined **)extraout_r2_00;
            pcVar12 = (code *)((int)extraout_r2_00 >> 0x11);
            piVar3 = (int *)(extraout_r1_02 * 0x40);
            uVar2 = extraout_r1_03;
            if ((extraout_r1_02 & 0x2000000) == 0 || piVar3 == (int *)0x0) goto LAB_01be20e4;
            coprocessor_function2(0xd,9,0,in_cr12,in_cr13,in_cr12);
            coprocessor_function2(3,9,7,in_cr1,in_cr13,in_cr13);
            pppuVar15[-9] = (undefined **)0x1be210f;
            pppuVar15[-10] = (undefined **)unaff_r9;
            pppuVar15[-0xb] = (undefined **)puVar14;
            pppuVar15[-0xc] = (undefined **)extraout_r2_00;
            pppuVar15[-0xd] = (undefined **)0xe9;
            pppuVar15[-0xe] = (undefined **)extraout_r2_00;
            pppuVar15[-0xf] = (undefined **)(extraout_r1_02 << 7);
            if (DAT_01d53488 == '\0') {
              iVar6 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
              DAT_01d53487 = iVar6 != 0;
              DAT_01d53488 = '\x01';
            }
            if (DAT_01d53487 != '\0') {
              pppuVar15[-0x12] = (undefined **)extraout_r2_00;
              pppuVar15[-0x11] = (undefined **)pcVar12;
              FUN_01beb3de(&DAT_01d50fd8,
                           "libunwind: __unw_set_fpreg(cursor=%p, regNum=%d, value=%llX)\n",piVar3,
                           extraout_r1_03);
              FUN_01beb1cc(&DAT_01d50fd8);
            }
            UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x14);
            if (UNRECOVERED_JUMPTABLE == (code *)&LAB_01be1344_1) {
              if (0x1f < extraout_r1_03 - 0x100) {
                return 0xffffe672;
              }
              UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x1c);
            }
            else {
              iVar6 = (*UNRECOVERED_JUMPTABLE)(piVar3,extraout_r1_03);
              if (iVar6 == 0) {
                return 0xffffe672;
              }
              UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x1c);
            }
            if (UNRECOVERED_JUMPTABLE != FUN_01be1710 + 1) {
              (*UNRECOVERED_JUMPTABLE)(piVar3,extraout_r1_03,extraout_r2_00,pcVar12);
              return 0;
            }
            if (extraout_r1_03 - 0x100 < 0x10) {
              if (*(char *)((int)piVar3 + 0x4d) == '\0') {
                *(undefined1 *)((int)piVar3 + 0x4d) = 1;
                if ((char)piVar3[0x13] == '\0') {
                  FUN_01bdfb8c(piVar3 + 0x14);
                }
                else {
                  FUN_01bdfb94();
                }
              }
              piVar3[(extraout_r1_03 - 0xf7) * 2 + 2] = extraout_r2_00;
              piVar3[(extraout_r1_03 - 0xf7) * 2 + 3] = (int)pcVar12;
              return 0;
            }
            if (extraout_r1_03 - 0x110 < 0x10) {
              if (*(char *)((int)piVar3 + 0x4e) == '\0') {
                *(undefined1 *)((int)piVar3 + 0x4e) = 1;
                FUN_01bdfb9c(piVar3 + 0x36);
              }
              piVar3[(extraout_r1_03 - 0xf6) * 2 + 2] = extraout_r2_00;
              piVar3[(extraout_r1_03 - 0xf6) * 2 + 3] = (int)pcVar12;
              return 0;
            }
            uVar16 = FUN_01be149c();
            uVar2 = (uint)((ulonglong)uVar16 >> 0x20);
            pppuVar15[0x52] = (undefined **)uVar2;
            piVar3 = (int *)(((int)uVar16 >> 0xd) * 0x40);
            *extraout_r2_01 = uVar2;
            extraout_r2_01[1] = (uint)extraout_r2_01;
            extraout_r2_01[2] = (int)extraout_r2_01 >> 0xc;
            extraout_r2_01[3] = (uint)extraout_r2_01;
            extraout_r2_01[4] = extraout_r2_00;
            extraout_r2_01[5] = (uint)extraout_r2_01;
            coprocessor_function2(0xb,9,6,in_cr12,in_cr13,in_cr6);
            coprocessor_function2(2,9,5,in_cr1,in_cr13,in_cr7);
            pppuVar15[-0x13] = (undefined **)0x1be2267;
            pppuVar15[-0x14] = (undefined **)extraout_r2_00;
            pppuVar15[-0x15] = (undefined **)extraout_r2_01;
            pppuVar15[-0x16] = (undefined **)(extraout_r1_03 << 0xd);
            pppuVar15[-0x17] = (undefined **)DAT_01d53560;
            if (DAT_01d53488 == '\0') {
              uVar16 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
              uVar2 = (uint)((ulonglong)uVar16 >> 0x20);
              DAT_01d53487 = (int)uVar16 != 0;
              DAT_01d53488 = '\x01';
            }
            lVar17 = (ulonglong)uVar2 << 0x20;
            if (DAT_01d53487 != '\0') {
              FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_step(cursor=%p)\n",piVar3);
              lVar17 = FUN_01beb1cc(&DAT_01d50fd8);
            }
            uVar2 = (uint)((ulonglong)lVar17 >> 0x20);
            uVar9 = (uint)lVar17;
            UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x20);
            if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01be14dc_1) {
              uVar2 = DAT_01d53560 ^ (uint)pppuVar15[-0x17];
              if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01be236a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar3,0,UNRECOVERED_JUMPTABLE,0);
                return uVar2;
              }
              goto LAB_01be236c;
            }
            if ((char)piVar3[0x60] == '\0') {
              iVar6 = piVar3[0x5e];
              pppuVar15[-0x19] = (undefined **)0x0;
              pppuVar15[-0x18] = (undefined **)0x0;
              uVar4 = FUN_01be0148(iVar6,pppuVar15 + -0x18,pppuVar15 + -0x19);
              uVar16 = FUN_01be0df8(piVar3,uVar4,pppuVar15[-0x18],pppuVar15[-0x19]);
              uVar2 = (uint)((ulonglong)uVar16 >> 0x20);
              if ((int)uVar16 != 8) goto LAB_01be22ca;
              (**(code **)(*piVar3 + 0x34))(piVar3,1);
              uVar9 = *(byte *)(piVar3 + 0x60) ^ 1;
              uVar2 = extraout_r1_04;
            }
            else {
LAB_01be22ca:
              uVar9 = 0;
            }
            UNRECOVERED_JUMPTABLE = (code *)(DAT_01d53560 ^ (uint)pppuVar15[-0x17]);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              return uVar9;
            }
LAB_01be236c:
                    /* WARNING: Subroutine does not return */
            FUN_01be31f4(uVar9,uVar2,UNRECOVERED_JUMPTABLE,0);
          }
code_r0x01be1f26:
          iVar6 = *(int *)(UNRECOVERED_JUMPTABLE + 0x15c);
          iVar5 = *(int *)(UNRECOVERED_JUMPTABLE + 0x160);
          iVar8 = *(int *)(UNRECOVERED_JUMPTABLE + 0x164);
          pppuVar15[3] = (undefined **)*(int *)(UNRECOVERED_JUMPTABLE + 0x158);
          pppuVar15[4] = (undefined **)iVar6;
          pppuVar15[5] = (undefined **)iVar5;
          pppuVar15[6] = (undefined **)iVar8;
          iVar6 = *(int *)(UNRECOVERED_JUMPTABLE + 0x16c);
          iVar5 = *(int *)(UNRECOVERED_JUMPTABLE + 0x170);
          iVar8 = *(int *)(UNRECOVERED_JUMPTABLE + 0x174);
          pppuVar15[7] = (undefined **)*(int *)(UNRECOVERED_JUMPTABLE + 0x168);
          pppuVar15[8] = (undefined **)iVar6;
          pppuVar15[9] = (undefined **)iVar5;
          pppuVar15[10] = (undefined **)iVar8;
          iVar6 = *(int *)(UNRECOVERED_JUMPTABLE + 0x17c);
          pppuVar15[0xb] = (undefined **)*(int *)(UNRECOVERED_JUMPTABLE + 0x178);
          pppuVar15[0xc] = (undefined **)iVar6;
LAB_01be1f40:
          (**(code **)(puVar14 + 0x34))(UNRECOVERED_JUMPTABLE,0);
          iVar6 = (int)pppuVar15[7];
          pcVar12 = extraout_r1;
          if (iVar6 != 0) {
            pcVar12 = *(code **)(*(int *)UNRECOVERED_JUMPTABLE + 0xc);
            pcVar11 = *(code **)(*(int *)UNRECOVERED_JUMPTABLE + 0x10);
            if (pcVar12 == (code *)param_3[0x65]) {
              uVar16 = CONCAT44(param_3[0x65],*(int *)(UNRECOVERED_JUMPTABLE + 0x3c));
            }
            else {
              uVar16 = (*pcVar12)(UNRECOVERED_JUMPTABLE,0xfffffffe);
              iVar6 = (int)pppuVar15[7];
            }
            pcVar12 = (code *)((ulonglong)uVar16 >> 0x20);
            if (pcVar11 == pcVar13) {
              *(int *)(UNRECOVERED_JUMPTABLE + 0x3c) = (int)uVar16 + iVar6;
            }
            else {
              (*pcVar11)(UNRECOVERED_JUMPTABLE,0xfffffffe);
              pcVar12 = extraout_r1_01;
            }
          }
        }
        else {
          (**(code **)(iVar6 + 0x10))(UNRECOVERED_JUMPTABLE,uVar9,puVar14);
          pcVar12 = extraout_r1_00;
LAB_01be1f0c:
          if (uVar9 == 0xffffffff) {
            puVar14 = *(undefined **)UNRECOVERED_JUMPTABLE;
            if (*(code **)(puVar14 + 0x24) == (code *)param_3[0x62]) {
              if (UNRECOVERED_JUMPTABLE[0x180] == (code)0x0) goto code_r0x01be1f26;
              FUN_01bed93e(pppuVar15 + 3,0,0x28);
            }
            else {
              (**(code **)(puVar14 + 0x24))(UNRECOVERED_JUMPTABLE,pppuVar15 + 3);
              puVar14 = *(undefined **)UNRECOVERED_JUMPTABLE;
            }
            goto LAB_01be1f40;
          }
        }
        uVar2 = 0;
        goto LAB_01be1eb0;
      }
    }
    else {
      uVar16 = (**(code **)(iVar6 + 8))(UNRECOVERED_JUMPTABLE,uVar9);
      pcVar12 = (code *)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar16 != 0) {
        iVar6 = *(int *)UNRECOVERED_JUMPTABLE;
        goto LAB_01be1e70;
      }
    }
    uVar2 = 0xffffe672;
LAB_01be1eb0:
    if ((DAT_01d53560 ^ (uint)pppuVar15[0xd]) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4(uVar2,pcVar12,DAT_01d53560 ^ (uint)pppuVar15[0xd],0);
    }
    return uVar2;
  }
LAB_01be1dc6:
  *param_3 = puVar14;
  return 0;
}

