// FUN_015bbb3c @ 015bbb3c size=1868 calls_out=8 calls_in=1
// strings: 

void FUN_015bbb3c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined1 param_9,char *param_10,char *param_11,int *param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 *param_16)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 uVar17;
  int local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  char *local_1dc;
  int local_1d8;
  char *local_1d4;
  int local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 *local_1ac;
  undefined1 local_1a8;
  undefined1 auStack_1a7 [64];
  undefined1 auStack_167 [71];
  int local_120;
  undefined4 local_11c;
  int iStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined1 auStack_100 [168];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  cVar1 = *(char *)(param_7 + 2);
  if ((cVar1 == '\x01') && ((*(byte *)(param_8 + 2) & 1) != 0)) {
    iVar5 = (**(code **)(param_7[1] + 0x10))(*param_7);
    iVar6 = (**(code **)(param_8[1] + 0x10))(*param_8);
    if (iVar5 == iVar6) goto LAB_015bbba4;
  }
  else {
LAB_015bbba4:
    cVar2 = *param_10;
    if (((cVar1 == '\0' || cVar2 == '\0') ||
        (uVar7 = (**(code **)(param_7[1] + 0x10))(*param_7), uVar7 < 0x39)) &&
       ((cVar4 = *param_11, cVar1 == '\0' || cVar4 == '\0' ||
        (uVar7 = (**(code **)(param_7[1] + 0x10))(*param_7), uVar7 < 0x39)))) {
      local_11c._0_2_ = local_11c._1_2_;
      FUN_015b0cec(&local_120,param_12 + 3);
      if (local_120 == -0x80000000) {
        *(undefined1 *)((int)param_1 + 5) = local_11c._1_1_;
        *(undefined1 *)(param_1 + 1) = (undefined1)local_11c;
        *param_1 = 0x80000000;
      }
      else {
        FUN_016dd1aa((uint)&local_1e8 | 6,(int)&local_11c + 2,0x16);
        local_1e4 = CONCAT31(CONCAT21(local_1e4._2_2_,local_11c._1_1_),(undefined1)local_11c);
        local_1e8 = local_120;
        FUN_016dd606(auStack_1a7,0,0x80);
        local_1c8 = *param_4;
        uStack_1c4 = param_4[1];
        uStack_1c0 = param_4[2];
        uStack_1bc = param_4[3];
        uStack_1b8 = param_4[4];
        uStack_1b4 = param_4[5];
        local_1ac = param_6;
        iVar5 = param_12[1];
        uVar13 = param_12[2];
        local_1a8 = 0;
        local_1b0 = param_5;
        uVar7 = (*(code *)param_6[5])();
        if (uVar7 < uVar13) {
          (*(code *)param_6[6])(param_5);
          (*(code *)param_6[7])(param_5,iVar5,uVar13);
          (*(code *)param_6[8])(param_5,auStack_1a7,0x40);
        }
        else {
          if (0x40 < uVar13) {
            puVar9 = &DAT_018aa538;
            goto LAB_015bc0bc;
          }
          FUN_016dd1aa(auStack_1a7,iVar5,uVar13);
        }
        FUN_016dd1aa(auStack_167,auStack_1a7,0x40);
        puVar14 = local_1ac;
        uVar12 = local_1b0;
        local_1a8 = 0;
        uVar13 = (*(code *)local_1ac[5])(local_1b0);
        (*(code *)puVar14[6])(uVar12);
        if (0x40 < uVar13) {
          puVar9 = &DAT_018aa5a8;
LAB_015bc0bc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,0x40,puVar9);
        }
        pcVar8 = (code *)puVar14[7];
        (*pcVar8)(uVar12,auStack_1a7,uVar13);
        (*pcVar8)(uVar12,param_14,param_15);
        (*(code *)local_1ac[8])(local_1b0,auStack_1a7,0x40);
        uVar7 = (**(code **)(param_7[1] + 0x10))(*param_7);
        pcVar15 = local_1dc;
        for (iVar5 = local_1d8 << 1; iVar5 != 0; iVar5 = iVar5 + -2) {
          puVar14 = param_8;
          if (*pcVar15 != '\0') {
            if (*pcVar15 != '\x01') {
              puVar9 = &DAT_018aa698;
              goto LAB_015bc0a0;
            }
            puVar14 = param_7;
          }
          if (*(char *)(puVar14 + 2) != '\x01') goto LAB_015bc0dc;
          uVar17 = (**(code **)(puVar14[1] + 0x20))(*puVar14);
          puVar14 = local_1ac;
          uVar12 = local_1b0;
          uVar13 = (*(code *)local_1ac[5])(local_1b0);
          (*(code *)puVar14[6])(uVar12);
          if (0x40 < uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar13,0x40,&DAT_018aa5a8);
          }
          pcVar8 = (code *)puVar14[7];
          (*pcVar8)(uVar12,auStack_1a7,uVar13);
          (*pcVar8)(uVar12,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          (*(code *)local_1ac[8])(local_1b0,auStack_1a7,0x40);
          pcVar15 = pcVar15 + 2;
        }
        if (uVar7 < 0x39) {
          pcVar15 = local_1d4;
          for (iVar5 = local_1d0 << 1; puVar14 = local_1ac, uVar12 = local_1b0, iVar5 != 0;
              iVar5 = iVar5 + -2) {
            pcVar16 = param_11;
            if (*pcVar15 != '\0') {
              if (*pcVar15 != '\x01') goto LAB_015bc098;
              pcVar16 = param_10;
            }
            if (*pcVar16 != '\x01') goto LAB_015bc0dc;
            uVar13 = (*(code *)local_1ac[5])(local_1b0);
            (*(code *)puVar14[6])(uVar12);
            if (0x40 < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar13,0x40,&DAT_018aa5a8);
            }
            pcVar8 = (code *)puVar14[7];
            (*pcVar8)(uVar12,auStack_1a7,uVar13);
            (*pcVar8)(uVar12,pcVar16 + 1,uVar7);
            (*(code *)local_1ac[8])(local_1b0,auStack_1a7,0x40);
            pcVar15 = pcVar15 + 2;
          }
LAB_015bbfa8:
          FUN_016dd1aa(auStack_100,&local_1c8,0xa8);
          local_120 = *param_12;
          local_11c = param_12[1];
          iStack_118 = param_12[2];
          iStack_114 = param_12[3];
          local_110 = param_12[4];
          iStack_10c = param_12[5];
          iStack_108 = param_12[6];
          iStack_104 = param_12[7];
          param_1[0x40] = local_1e8;
          param_1[0x41] = local_1e4;
          param_1[0x42] = local_1e0;
          local_58 = *param_16;
          uStack_54 = param_16[1];
          uStack_50 = param_16[2];
          uStack_4c = param_16[3];
          uStack_48 = param_16[4];
          uStack_44 = param_16[5];
          local_40 = param_16[6];
          uStack_3c = param_16[7];
          uStack_38 = param_16[8];
          uStack_34 = param_16[9];
          uStack_30 = param_16[10];
          uStack_2c = param_16[0xb];
          uVar12 = param_8[1];
          uVar10 = param_8[2];
          param_1[0x46] = *param_8;
          param_1[0x47] = uVar12;
          param_1[0x48] = uVar10;
          FUN_016dd1aa(param_1 + 0xab,param_11,0x39);
          FUN_016dd1aa(param_1 + 0x4a,param_13,0x14a);
          FUN_016dd1aa(param_1,&local_120,0xf8);
          param_1[0x3e] = param_2;
          uVar12 = *param_7;
          uVar10 = param_7[1];
          uVar11 = param_7[2];
          *(undefined1 *)((int)param_1 + 0x272) = param_9;
          param_1[0x49] = 0;
          param_1[0x43] = uVar12;
          param_1[0x44] = uVar10;
          param_1[0x45] = uVar11;
          param_1[0x3f] = param_3;
          FUN_016dd1aa((int)param_1 + 0x273,param_10,0x39);
          *(undefined2 *)((int)param_1 + 0x2e5) = 0x101;
          return;
        }
        if (local_1d0 == 0) goto LAB_015bbfa8;
        if ((*local_1d4 != '\0') && (cVar4 = cVar2, *local_1d4 != '\x01')) {
LAB_015bc098:
          puVar9 = &DAT_018aa6b8;
LAB_015bc0a0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,puVar9);
        }
        if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar7,0x38,&DAT_018aa6a8);
        }
LAB_015bc0dc:
        *param_1 = 0x80000000;
        *(undefined2 *)(param_1 + 1) = 3;
        FUN_007b1d04(&local_1c8);
        iVar5 = local_1e4;
        puVar14 = (undefined4 *)(local_1e4 + 4);
        for (; local_1e0 != 0; local_1e0 = local_1e0 + -1) {
          if (puVar14[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar14);
          }
          puVar14 = puVar14 + 3;
        }
        if (local_120 != 0) {
          thunk_FUN_016d3fb4(iVar5);
        }
      }
      bVar3 = local_120 == -0x80000000;
      goto LAB_015bc158;
    }
  }
  bVar3 = true;
  *param_1 = 0x80000000;
  *(undefined2 *)(param_1 + 1) = 1;
LAB_015bc158:
  FUN_0110db34(param_16);
  if (*param_12 != 0) {
    thunk_FUN_016d3fb4(param_12[1]);
  }
  if (param_12[3] != 0) {
    thunk_FUN_016d3fb4(param_12[4]);
  }
  uVar12 = *param_8;
  puVar14 = (undefined4 *)param_8[1];
  pcVar8 = (code *)*puVar14;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar12);
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  uVar12 = *param_7;
  puVar14 = (undefined4 *)param_7[1];
  pcVar8 = (code *)*puVar14;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar12);
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if (bVar3) {
    if ((code *)*param_6 != (code *)0x0) {
      (*(code *)*param_6)(param_5);
    }
    if (param_6[1] != 0) {
      thunk_FUN_016d3fb4(param_5);
    }
    uVar12 = *param_4;
    puVar14 = (undefined4 *)param_4[1];
    pcVar8 = (code *)*puVar14;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
  if ((code *)*param_3 != (code *)0x0) {
    (*(code *)*param_3)(param_2);
  }
  if (param_3[1] == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

