// FUN_01be0df8 @ 01be0df8 size=898 calls_out=8 calls_in=1
// strings: libunwind: _Unwind_VRS_Pop(context=%p; regclass=%d; discriminator=%d; representation=%d)  | libunwind: _Unwind_VRS_Pop(context=%p; regclass=%d; discriminator=%d; representation=%d) 

void FUN_01be0df8(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint uVar5;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint extraout_r1_08;
  uint extraout_r1_09;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int *local_34;
  int local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 < param_4) {
    bVar2 = false;
    uVar4 = param_2;
LAB_01be0e32:
    do {
      uVar8 = param_3 + 1;
      uVar9 = (uint)*(byte *)(param_2 + (param_3 ^ 3));
      if (-1 < *(char *)(param_2 + (param_3 ^ 3))) {
        FUN_01be0690(param_1,0,0xd,0,&local_30);
        if ((int)(uVar9 << 0x19) < 0) {
          local_30 = (local_30 + -4) - (uVar9 * 4 & 0xff);
        }
        else {
          local_30 = local_30 + 4 + uVar9 * 4;
        }
LAB_01be0f44:
        FUN_01be0534(param_1,0,0xd,0,&local_30);
        param_3 = uVar8;
        uVar4 = extraout_r1_03;
        goto joined_r0x01be0f0e;
      }
      uVar6 = uVar9 & 0xf0;
      if (uVar6 == 0xb0) {
        switch(uVar9) {
        case 0xb0:
          goto switchD_01be0fb0_caseD_b0;
        case 0xb1:
          if ((param_4 <= uVar8) ||
             (bVar1 = *(byte *)(param_2 + (uVar8 ^ 3)), uVar4 = (uint)bVar1,
             uVar4 == 0 || (bVar1 & 0xf0) != 0)) goto switchD_01be0fb0_caseD_b5;
          FUN_01be0acc(param_1);
          uVar4 = extraout_r1_05;
joined_r0x01be1052:
          param_3 = param_3 + 2;
          break;
        case 0xb2:
          if (param_4 <= uVar8) goto switchD_01be0fb0_caseD_b5;
          uVar9 = 0;
          uVar6 = 0;
          while( true ) {
            uVar4 = uVar8 ^ 3;
            uVar8 = uVar8 + 1;
            uVar5 = (uint)*(byte *)(param_2 + uVar4);
            uVar4 = uVar5 << 0x18;
            uVar6 = uVar6 | (uVar5 & 0x7f) << (uVar9 & 0xff);
            if (-1 < (int)uVar4) break;
            uVar9 = uVar9 + 7;
            if (param_4 <= uVar8) goto switchD_01be0fb0_caseD_b5;
          }
          FUN_01be0690(param_1,0,0xd,0,&local_30);
          local_30 = local_30 + 0x204 + uVar6 * 4;
          FUN_01be0534(param_1,0,0xd,0,&local_30);
          param_3 = uVar8;
          uVar4 = extraout_r1_06;
          break;
        case 0xb3:
          bVar1 = *(byte *)(param_2 + (uVar8 ^ 3));
          FUN_01be0bd8(param_1,1,(bVar1 & 0xf) + 1 | (uint)(bVar1 >> 4) << 0x10);
          param_3 = param_3 + 2;
          uVar4 = extraout_r1_07;
          break;
        case 0xb4:
          iVar7 = FUN_01be2734();
          if (iVar7 != 0) {
            FUN_01beb3de(&DAT_01d50fd8,
                         "libunwind: _Unwind_VRS_Pop(context=%p, regclass=%d, discriminator=%d, representation=%d)\n"
                         ,param_1,5,0,0);
            FUN_01beb1cc(&DAT_01d50fd8);
          }
          uVar10 = FUN_01be0690(param_1,0,0xd,0,&local_34);
          uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
          param_3 = uVar8;
          if ((int)uVar10 == 0) {
            local_30 = *local_34;
            local_34 = local_34 + 1;
            FUN_01be0534(param_1,0,0xd,0,&local_34);
            FUN_01be0534(param_1,5,0,0,&local_30);
            uVar4 = extraout_r1_08;
          }
          break;
        case 0xb5:
        case 0xb6:
        case 0xb7:
switchD_01be0fb0_caseD_b5:
          uVar3 = 9;
          goto LAB_01be0f62;
        default:
          FUN_01be0bd8(param_1,1,(uVar9 & 7) + 1 | 0x80000);
          param_3 = uVar8;
          uVar4 = extraout_r1_09;
        }
        if (param_4 <= param_3) {
          uVar3 = 8;
          if (!bVar2) goto LAB_01be0e8e;
          goto LAB_01be0f62;
        }
        goto LAB_01be0e32;
      }
      if (0xb0 < uVar6) {
        if (uVar6 == 0xc0) {
          if (uVar9 - 200 < 2) {
            bVar1 = *(byte *)(param_2 + (uVar8 ^ 3));
            uVar8 = bVar1 & 0xf;
            iVar7 = (uint)(bVar1 >> 4) + (uint)(uVar9 == 200) * 0x10;
            uVar4 = iVar7 + uVar8;
            if (uVar4 < 0x20) {
              FUN_01be0bd8(param_1,1,uVar8 + 1 | iVar7 * 0x10000,5);
              uVar4 = extraout_r1_04;
              goto joined_r0x01be1052;
            }
          }
        }
        else if ((uVar6 == 0xd0) && (-1 < (int)(uVar9 << 0x1c))) {
          FUN_01be0bd8(param_1,1,(uVar9 & 7) + 1 | 0x80000,5);
          param_3 = uVar8;
          uVar4 = extraout_r1_02;
          goto joined_r0x01be0f0e;
        }
        goto switchD_01be0fb0_caseD_b5;
      }
      if (uVar6 == 0x90) {
        if ((uVar9 & 0xd) != 0xd) {
          FUN_01be0690(param_1,0,uVar9 & 0xf,0,&local_30);
          goto LAB_01be0f44;
        }
        goto switchD_01be0fb0_caseD_b5;
      }
      if (uVar6 != 0xa0) {
        if ((uVar6 == 0x80) && (uVar8 < param_4)) {
          uVar4 = 0;
          if ((uVar9 << 0xc & 0xffff) != 0 || *(char *)(param_2 + (uVar8 ^ 3)) != '\0') {
            if ((uVar9 << 0xc & 0x8000) != 0) {
              bVar2 = true;
            }
            FUN_01be0acc(param_1);
            param_3 = param_3 + 2;
            uVar4 = extraout_r1_01;
            goto joined_r0x01be0f0e;
          }
        }
        goto switchD_01be0fb0_caseD_b5;
      }
      uVar4 = ((1 << (uVar9 & 7) + 1) + -1) * 0x10;
      if ((int)(uVar9 << 0x1c) < 0) {
        uVar4 = uVar4 | 0x4000;
      }
      FUN_01be0acc(param_1,uVar4);
      param_3 = uVar8;
      uVar4 = extraout_r1;
joined_r0x01be0f0e:
    } while (param_3 < param_4);
switchD_01be0fb0_caseD_b0:
    uVar3 = 8;
    if (bVar2) goto LAB_01be0f62;
  }
LAB_01be0e8e:
  FUN_01be0690(param_1,0,0xe,0,&local_30);
  FUN_01be0534(param_1,0,0xf,0,&local_30);
  uVar3 = 8;
  uVar4 = extraout_r1_00;
LAB_01be0f62:
  if ((DAT_01d53560 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar4,DAT_01d53560 ^ local_2c,0);
  }
  return;
}

