// FUN_018b6860 @ 018b6860 size=1816 calls_out=27 calls_in=0
// strings: res master | resumption

void FUN_018b6860(uint *param_1,int *param_2,int *param_3,uint *param_4)

{
  undefined4 *******pppppppuVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char cVar11;
  uint *puVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 unaff_r9;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 local_1a0;
  undefined1 *local_19c;
  undefined1 auStack_180 [14];
  undefined2 local_172;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_12c;
  uint local_128;
  uint uStack_124;
  undefined4 *******local_120;
  undefined1 *local_11c;
  undefined4 *******pppppppuStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *******local_108;
  undefined1 *local_104;
  undefined *local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *******local_f0;
  undefined1 *local_ec;
  undefined4 *******local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined2 local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  undefined4 *******local_38;
  undefined1 *local_34;
  undefined *local_30;
  
  uVar8 = 1;
  if ((int)*param_4 < 0) {
    uVar8 = *param_4 ^ 0x80000000;
  }
  uVar4 = 1;
  if (uVar8 == 1) {
    if ((int)param_4[3] < 0) {
      uVar4 = param_4[3] ^ 0x80000000;
    }
    if (uVar4 == 0xe) {
      uVar17 = thunk_FUN_01bee35a(0xe,0x2c0);
      puVar12 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
      piVar15 = (int *)param_4[0xb];
      uVar8 = param_4[0xc];
      if ((char)puVar12[4] == '\0') {
        FUN_019ae6ac(&local_170);
        *puVar12 = local_170;
        puVar12[1] = uStack_16c;
        puVar12[2] = uStack_168;
        puVar12[3] = uStack_164;
        *(undefined1 *)(puVar12 + 4) = 1;
      }
      local_100 = (undefined *)*puVar12;
      local_fc = puVar12[1];
      local_f8 = puVar12[2];
      local_f4 = puVar12[3];
      *puVar12 = (uint)(local_100 + 1);
      puVar12[1] = local_fc + ((undefined *)0xfffffffe < local_100);
      local_110 = (undefined4 *******)&DAT_0056d238;
      local_10c = (undefined1 *)0x0;
      local_108 = (undefined4 *******)0x0;
      local_104 = (undefined1 *)0x0;
      for (iVar14 = uVar8 << 4; iVar14 != 0; iVar14 = iVar14 + -0x10) {
        uVar3 = (undefined2)piVar15[3];
        if (*piVar15 == -0x80000000) {
          uVar3 = 0x16;
        }
        uVar5 = FUN_018bd358(uVar3,*(undefined2 *)((int)piVar15 + 0xe));
        iVar6 = FUN_018ca3a0(&local_110,uVar5);
        if (iVar6 != 0) break;
        piVar15 = piVar15 + 4;
        FUN_018ca480(&local_110,uVar5);
      }
      if ((local_10c != (undefined1 *)0x0) &&
         (uVar8 = (int)local_10c * 2 + 5U & 0xfffffffc,
         local_10c + uVar8 != (undefined1 *)0xfffffffb)) {
        thunk_FUN_01be4678((int)local_110 - uVar8);
      }
      if (iVar14 == 0) {
        local_50 = param_2[0xd4];
        local_4c = param_2[0xd5];
        local_48 = param_2[0xd6];
        local_90 = param_2[0xc4];
        iStack_8c = param_2[0xc5];
        iStack_88 = param_2[0xc6];
        iStack_84 = param_2[199];
        iStack_80 = param_2[200];
        local_7c = param_2[0xc9];
        iStack_78 = param_2[0xca];
        iStack_74 = param_2[0xcb];
        iStack_70 = param_2[0xcc];
        iStack_6c = param_2[0xcd];
        local_68 = param_2[0xce];
        iStack_64 = param_2[0xcf];
        iStack_60 = param_2[0xd0];
        iStack_5c = param_2[0xd1];
        iStack_58 = param_2[0xd2];
        iStack_54 = param_2[0xd3];
        iVar14 = param_2[0xd8];
        FUN_01bed4e2(&local_110,param_2 + 0xa4,0x80);
        local_40 = iVar14;
        FUN_0189039c(&local_170,&local_110);
        uVar8 = *(uint *)(local_170 + 0x48);
        if (0x40 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar8,0x40,&DAT_01d2571c);
        }
        iVar14 = param_2[0x2a];
        uVar16 = param_4[5];
        uVar4 = param_4[6];
        FUN_018cae5c(&local_110,param_2 + 2,*(undefined4 *)(iVar14 + 0xc),"res master",10,
                     &uStack_16c,uVar8);
        FUN_018cb710(&local_12c,&local_110,*(undefined4 *)(*(int *)(iVar14 + 0xc) + 0x48),
                     "resumption",10,uVar16,uVar4);
        FUN_019ac130(&local_110,0);
        local_34 = (undefined1 *)0x0;
        local_38 = (undefined4 *******)0x0;
        local_120 = local_110;
        local_11c = local_10c;
        pppppppuStack_118 = local_108;
        local_30 = (undefined *)0x0;
        FUN_019ac248(&local_110,&local_120,&local_38);
        puVar2 = local_104;
        pppppppuVar1 = local_108;
        if (((uint)local_110 & 1) == 0) {
          iVar14 = param_2[0xde];
          FUN_015e8ad4(&local_38,param_4[8],param_4[9]);
          iVar6 = *param_3;
          local_19c = (undefined1 *)0x4;
          local_1a0 = 0;
          if (*(int *)(iVar6 + 0x8c) == -0x80000000) {
            local_e8 = (undefined4 *******)0x0;
            local_f0 = (undefined4 *******)0x0;
          }
          else {
            FUN_018a8174(&local_110,*(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94));
            local_e8 = (undefined4 *******)0x0;
            local_f0 = (undefined4 *******)0x0;
            if (local_110 != (undefined4 *******)&DAT_80000000) {
              local_19c = local_10c;
              local_e8 = local_108;
              local_f0 = local_110;
            }
          }
          local_dc = param_4[0xe];
          if (param_4[0xc] != 0) {
            puVar10 = (undefined4 *)param_4[0xb];
            puVar9 = puVar10 + param_4[0xc] * 4;
            puVar7 = puVar10 + 1;
            do {
              iVar6 = puVar7[-1];
              if (iVar6 != -0x80000000) {
                puVar10 = (undefined4 *)(uint)*(ushort *)(puVar7 + 2);
              }
              if (iVar6 == -0x80000000 || puVar10 == (undefined4 *)&DAT_00000016) {
                if (iVar6 == -0x80000000) {
                  local_1a0 = *puVar7;
                }
                break;
              }
              puVar10 = puVar7 + 3;
              puVar7 = puVar7 + 4;
            } while (puVar10 != puVar9);
          }
          local_ec = local_19c;
          local_108 = local_38;
          local_104 = local_34;
          local_100 = local_30;
          local_d8 = local_1a0;
          local_e4 = 0x93a80;
          if (param_4[0xd] < 0x93a80) {
            local_e4 = param_4[0xd];
          }
          local_f4 = uStack_124;
          local_f8 = local_128;
          local_fc = local_12c;
          local_10c = puVar2;
          local_110 = pppppppuVar1;
          local_e0 = iVar14;
          (**(code **)(param_2[1] + 0x20))
                    (*param_2 + (*(int *)(param_2[1] + 8) - 1U & 0xfffffff8) + 8,param_2 + 0xdf,
                     &local_110);
        }
        else {
          local_38 = local_108;
          local_30 = local_100;
          local_34 = local_104;
          if (3 < DAT_01d51b00) {
            local_11c = &LAB_019bb254;
            local_100 = &DAT_01d22698;
            local_104 = (undefined1 *)0x15;
            local_108 = (undefined4 *******)&DAT_0051dc34;
            local_10c = (undefined1 *)0x15;
            local_110 = (undefined4 *******)&DAT_0051dc34;
            local_120 = &local_38;
            FUN_0193b350(&DAT_005b258c,&local_120,4,&local_110);
          }
          FUN_0134bd64(local_12c,local_128);
        }
        goto LAB_018b68bc;
      }
      iVar14 = *param_3;
      local_94 = 4;
      local_10c = (undefined1 *)0xd0001;
      local_110 = (undefined4 *******)&DAT_80000000;
      FUN_018e077c(iVar14,&local_110,*(char *)(iVar14 + 0x28) == '\x02');
      *(undefined1 *)(iVar14 + 0xb1) = 1;
      *(undefined2 *)param_1 = 0x608;
    }
    else {
      if (uVar4 != 0x10) goto LAB_018b6998;
      iVar14 = *param_3;
      FUN_018e1a6c(&local_110,iVar14);
      cVar11 = (char)local_110;
      if ((char)local_110 == '\x14') {
        if ((char)param_4[4] != '\0') {
          if ((char)param_4[4] != '\x01') {
            local_94 = 4;
            local_110 = (undefined4 *******)&DAT_80000000;
            local_10c = (undefined1 *)0xd0001;
            FUN_018e077c(iVar14,&local_110,*(char *)(iVar14 + 0x28) == '\x02');
            cVar11 = '\x02';
            *(undefined1 *)(iVar14 + 0xb1) = 1;
            uVar13 = 7;
            goto LAB_018b6dc8;
          }
          if (*(int *)(iVar14 + 0x98) == -0x80000000) {
            FUN_018caf4c(param_2 + 2,iVar14);
          }
        }
        FUN_018cb058(&local_110,param_2 + 2,~*(byte *)(iVar14 + 0xac) & 1);
        uVar5 = FUN_018cb154(*(undefined4 *)(param_2[0x2a] + 4),&local_110);
        FUN_018bf8c4(iVar14,uVar5);
LAB_018b68bc:
        uVar8 = *param_4;
        param_1[1] = (uint)param_2;
        *(undefined1 *)param_1 = 0x14;
        param_1[2] = (uint)&DAT_01d225b4;
        if (uVar8 == 0x80000003) {
          return;
        }
        FUN_018b7074(param_4);
        return;
      }
      local_172 = local_110._2_2_;
      unaff_r9 = local_110._1_1_;
      uVar13 = (undefined1)local_10c;
      FUN_01bed4e2(auStack_180,(int)&local_10c + 1,0xb);
LAB_018b6dc8:
      *(undefined2 *)((int)param_1 + 2) = local_172;
      *(undefined1 *)((int)param_1 + 1) = unaff_r9;
      *(char *)param_1 = cVar11;
      *(undefined1 *)(param_1 + 1) = uVar13;
      FUN_01bed4e2((undefined1 *)((int)param_1 + 5),auStack_180,0xb);
    }
    if (*param_4 != 0x80000003) {
      FUN_018b7074(param_4);
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_018dff10(*param_3 + 0x30);
      goto LAB_018b68bc;
    }
LAB_018b6998:
    FUN_01bed4e2(&local_110,param_4,0x7c);
    FUN_018c5504(&local_170,&local_110,&DAT_0056d3c0,2,&DAT_0056d1a0,2);
    *param_1 = local_170;
    param_1[1] = uStack_16c;
    param_1[2] = uStack_168;
    param_1[3] = uStack_164;
    FUN_018b7074(&local_110);
  }
  FUN_018b7048(param_2);
  return;
}

