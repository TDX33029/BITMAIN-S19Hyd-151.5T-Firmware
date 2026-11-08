// FUN_006a9270 @ 006a9270 size=1740 calls_out=19 calls_in=0
// strings: Current time is before the Unix epoch. | can not send messages after stream is shutdown

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006a9270(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 *local_438;
  uint local_3f8 [48];
  undefined4 local_338;
  undefined4 local_334;
  undefined1 auStack_330 [60];
  int local_2f4;
  ushort local_2e4;
  undefined2 local_2da;
  short local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  short local_2a4;
  int local_2a0;
  undefined4 local_29c;
  uint local_270;
  char *pcStack_26c;
  undefined4 *puStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint local_240;
  char *local_23c;
  undefined4 *local_238;
  uint local_234;
  uint local_230;
  undefined *local_22c;
  uint uStack_228;
  uint local_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  undefined1 auStack_214 [68];
  undefined1 local_1d0;
  uint local_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  int *local_114;
  int *local_110;
  char *local_10c;
  undefined4 *local_108;
  uint local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fc;
  undefined4 local_38;
  char *local_34;
  undefined *local_30;
  undefined1 local_2c;
  
  if ((char)param_1[0x18] == '\0') {
    uVar17 = thunk_FUN_016de0ee(0,0x228);
    puVar16 = (undefined4 *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    while( true ) {
      uVar11 = param_1[0x1a];
      param_1[0x1a] = 0x80000000;
      if (uVar11 == 0x80000000) break;
      local_3f8[0] = uVar11;
      FUN_016dd1aa((uint)local_3f8 | 4,param_1 + 0x1b,0xc0);
      if (uVar11 == 0x80000000) goto LAB_006a98c4;
LAB_006a938c:
      if (uVar11 == 0x80000001) {
        return 1;
      }
      FUN_016dd1aa(auStack_330,local_3f8,0xc0);
      uVar3 = local_338;
      local_334 = local_338;
      if ((char)param_1[0x18] != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("can not send messages after stream is shutdown",0x5d,&DAT_0185d3f4);
      }
      puVar9 = puVar16;
      if ((*(char *)(puVar16 + 1) != '\x01') &&
         (puVar9 = (undefined4 *)FUN_0133ef14(puVar16), puVar9 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      puVar13 = (uint *)*puVar9;
      uVar11 = *puVar13;
      *puVar13 = uVar11 + 1;
      if (0xfffffffe < uVar11) goto LAB_006a9948;
      uVar11 = puVar13[0x52];
      puVar5 = puVar13 + 2;
      if (0x3f < uVar11) {
        uVar11 = puVar13[0x50];
        if ((int)puVar13[0x51] < (int)(uint)(uVar11 == 0)) {
          uVar11 = 0;
          FUN_0103e078(puVar13 + 0x42,puVar5);
        }
        else {
          puVar13[0x50] = uVar11 - 0x100;
          puVar13[0x51] = puVar13[0x51] - (uint)(uVar11 < 0x100);
          FUN_0103d438(puVar13 + 0x42,puVar5);
          uVar11 = 0;
        }
      }
      uVar14 = puVar5[uVar11];
      puVar4 = (uint *)(*puVar13 - 1);
      *puVar13 = (uint)puVar4;
      puVar5 = puVar4;
      if (puVar4 == (uint *)0x0) {
        puVar5 = puVar13;
      }
      puVar13[0x52] = uVar11 + 1;
      if (puVar4 == (uint *)0x0) {
        FUN_0133db64(puVar5);
      }
      local_2da = (undefined2)uVar14;
      FUN_015f3b0c(&local_240,0);
      local_34 = (char *)0x0;
      local_38 = 0;
      local_270 = local_240;
      pcStack_26c = local_23c;
      puStack_268 = local_238;
      local_30 = (undefined *)0x0;
      FUN_015f3c24(&local_240,&local_270,&local_38);
      puVar9 = local_238;
      if ((local_240 & 1) == 0) {
        if (param_1[0x14] == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          uVar11 = param_1[0x15];
          iVar15 = param_1[0x14] + (*(int *)(uVar11 + 8) - 1U & 0xfffffff8) + 8;
          iVar7 = (**(code **)(uVar11 + 0x10))(iVar15,auStack_330);
          pcVar6 = (char *)0x0;
          if (iVar7 != 0) {
            FUN_01058aac(&local_240,auStack_330,iVar15,uVar11,puVar9);
            if (local_240 != 0) {
              local_34 = local_23c;
              goto LAB_006a94f0;
            }
            local_438 = local_238;
            pcVar6 = local_23c;
          }
        }
        uVar11 = (uint)local_2e4;
        if (uVar11 < 0x201) {
          uVar11 = 0x200;
        }
        if (0xfff < uVar11) {
          uVar11 = 0x1000;
        }
        if (local_2f4 == -0x80000000) {
          uVar11 = 0x200;
        }
        FUN_01057918(&local_240,auStack_330);
        if (local_240 == 0x80000000) {
          local_2c = 0;
          local_34 = local_23c;
          local_38 = 2;
          if (pcVar6 != (char *)0x0) {
            if ((code *)*local_438 != (code *)0x0) {
              (*(code *)*local_438)(pcVar6);
            }
            if (local_438[1] != 0) {
              thunk_FUN_016d3fb4(pcVar6);
            }
          }
          goto LAB_006a94f8;
        }
        local_260 = param_1[4];
        uStack_25c = param_1[5];
        uStack_258 = param_1[6];
        uStack_254 = param_1[7];
        local_250 = param_1[8];
        uStack_24c = param_1[9];
        uStack_248 = param_1[10];
        uStack_244 = param_1[0xb];
        piVar10 = (int *)param_1[0x17];
        do {
          iVar7 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar7 + 1;
        if (iVar7 < 0) {
LAB_006a9948:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x6a9948);
          (*pcVar1)();
        }
        piVar12 = (int *)param_1[0x16];
        do {
          iVar7 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_006a9948;
        uVar14 = *param_1;
        pcVar8 = (char *)param_1[1];
        puVar9 = (undefined4 *)param_1[2];
        local_fe = *(undefined1 *)((int)param_1 + 0x61);
        local_134 = param_1[0xc];
        uStack_130 = param_1[0xd];
        uStack_12c = param_1[0xe];
        uStack_128 = param_1[0xf];
        local_124 = param_1[0x10];
        uStack_120 = param_1[0x11];
        uStack_11c = param_1[0x12];
        uStack_118 = param_1[0x13];
        local_100 = local_2da;
        local_108 = local_438;
        local_230 = uStack_25c;
        local_22c = (undefined *)uStack_258;
        local_114 = piVar12;
        local_110 = piVar10;
        local_10c = pcVar6;
        local_104 = uVar11;
        local_234 = local_260;
        uStack_228 = uStack_254;
        local_224 = local_250;
        uStack_220 = uStack_24c;
        uStack_21c = uStack_248;
        uStack_218 = uStack_244;
        local_154 = local_260;
        uStack_150 = uStack_25c;
        uStack_14c = uStack_258;
        uStack_148 = uStack_254;
        local_144 = local_250;
        uStack_140 = uStack_24c;
        uStack_13c = uStack_248;
        uStack_138 = uStack_244;
        FUN_016dd1aa(auStack_214,auStack_330,0xc0);
        local_fc = 0;
        iVar7 = thunk_FUN_016d4a50(0x204);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x204);
        }
        FUN_016dd1aa(iVar7,&local_240,0x204);
        local_1d0 = 0;
        local_22c = &DAT_0185d3e4;
        local_240 = uVar14;
        local_23c = pcVar8;
        local_238 = puVar9;
        local_230 = iVar7;
        pcVar6 = (char *)thunk_FUN_016d4a50(0x78);
        if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x78);
        }
        FUN_016dd1aa(pcVar6,&local_240,0x78);
        local_2c = 0;
        local_38 = 0;
        local_30 = &DAT_0185bb64;
        local_34 = pcVar6;
      }
      else {
        local_238 = (undefined4 *)&DAT_00000026;
        local_240 = CONCAT22(local_240._2_2_,0x10);
        local_23c = "Current time is before the Unix epoch.";
        pcVar6 = (char *)thunk_FUN_016d4a50(0x44);
        if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        FUN_016dd1aa(pcVar6,&local_240,0x44);
        local_34 = pcVar6;
LAB_006a94f0:
        local_2c = 0;
        local_38 = 2;
LAB_006a94f8:
        FUN_0079f1cc(auStack_330);
        if (local_2c8 != 2) {
          iVar7 = 0;
          if (local_2c8 != 0) {
            iVar7 = local_2c4;
          }
          if (local_2c8 != 0 && iVar7 != 0) {
            thunk_FUN_016d3fb4(local_2c0);
          }
          iVar7 = 0;
          if (local_2a4 != 0) {
            iVar7 = local_2a0;
          }
          if (local_2a4 != 0 && iVar7 != 0) {
            thunk_FUN_016d3fb4(local_29c);
          }
        }
      }
      FUN_0105a448(&local_240,uVar3,&local_38);
      if (local_240 != 4) {
        FUN_006a70b4(&local_240);
      }
    }
    if ((char)param_1[0x4c] == '\0') {
      FUN_006ad780(local_3f8,param_1 + 0x4b,param_2);
      if (local_3f8[0] == 0x80000000) {
        *(undefined1 *)(param_1 + 0x4c) = 1;
      }
      else {
        if (local_3f8[0] == 0x80000001) {
          return 1;
        }
        uVar11 = local_3f8[0];
        if (local_3f8[0] != 0x80000000) goto LAB_006a938c;
      }
    }
LAB_006a98c4:
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return 0;
}

