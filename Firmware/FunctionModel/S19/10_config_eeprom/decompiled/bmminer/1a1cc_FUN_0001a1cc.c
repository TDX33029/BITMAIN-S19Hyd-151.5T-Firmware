// FUN_0001a1cc @ 0001a1cc  size=2776  callers=1
// program: bmminer


int FUN_0001a1cc(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  size_t __n;
  byte *pbVar9;
  uint __n_00;
  size_t __n_01;
  uint in_fpscr;
  double dVar10;
  int local_b78;
  int local_b70;
  int local_b6c;
  int local_b68;
  int local_b64;
  int local_b60;
  int local_b5c;
  int local_b58;
  int local_b54;
  int local_b50;
  int local_b4c;
  int local_b48;
  int local_b44;
  int local_b40;
  int local_b3c;
  int local_b38;
  int local_b34;
  char *local_b30;
  undefined2 local_b28;
  undefined1 auStack_b26 [254];
  undefined2 local_a28;
  byte local_a26;
  undefined4 local_a25;
  undefined4 local_a21;
  undefined4 local_a1d;
  undefined4 local_a19;
  undefined1 local_a15;
  undefined2 local_a14;
  undefined4 local_a12;
  undefined4 local_a0e;
  undefined4 local_a0a;
  undefined1 local_a06;
  byte local_a05;
  undefined1 auStack_a04 [4];
  byte abStack_a00 [216];
  uint local_928 [64];
  char local_828 [12];
  undefined4 uStack_81c;
  char local_818 [4];
  uint local_814;
  uint local_810;
  char acStack_80c [2024];
  
  memset(&local_b28,0,0x100);
  memset(&local_a28,0,0x100);
  pbVar9 = *(byte **)(param_2 + param_1 * 4);
  iVar8 = 3;
  do {
    iVar3 = FUN_00049c10(param_1,0,&local_b28,0x100);
    if (iVar3 != 0) {
      if (DAT_00087bbc < 4) {
        return iVar3;
      }
      snprintf(local_828,0x800,"Read configuration fail for chain %d.\n",param_1);
      FUN_00032218(3,local_828,0);
      return iVar3;
    }
    memset(local_928,0,0x100);
    uVar7 = local_b28._1_1_ - 2;
    __n_00 = local_b28._1_1_ + 5 & 0xfffffff8;
    if ((uVar7 & 0xff) < 0xfe && __n_00 < 0xff) {
      if ((byte)local_b28 >> 4 == 1 && ((byte)local_b28 & 0xf) == 1) {
        memcpy(local_928,auStack_b26,__n_00);
        FUN_0001c4f4(local_928,__n_00,0);
        local_a28 = local_b28;
        memcpy(&local_a26,local_928,uVar7);
        bVar1 = (byte)local_b28 & 0xf0;
        *pbVar9 = *pbVar9 & 0xf | bVar1;
        *pbVar9 = bVar1 | (byte)local_a28 & 0xf;
        pbVar9[1] = local_a28._1_1_;
        uVar7 = (uint)local_a26;
        pbVar9[2] = local_a26;
        if (uVar7 - 1 < 2) {
          local_b48 = 0x3e;
          local_b44 = 0x3f;
          local_b50 = 0x3c;
          local_b4c = 0x3d;
          __n = 4;
          local_b58 = 0x39;
          local_b54 = 0x3b;
          local_b78 = 0x41;
          local_b60 = 0x35;
          local_b5c = 0x37;
          local_b70 = 0x32;
          local_b6c = 0x31;
          __n_01 = 4;
          iVar8 = 0x28;
          local_b40 = 0x2f;
          local_b3c = 0x2e;
          local_b64 = 0x33;
          local_b38 = 0x2d;
          local_b34 = 0x29;
          local_b68 = 0x30;
LAB_0001a594:
          bVar2 = true;
          puVar4 = calloc(0x12,1);
          *(undefined4 **)(pbVar9 + 3) = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            if (DAT_00087bbc < 4) {
              bVar2 = false;
            }
            else {
              bVar2 = false;
              builtin_strncpy(local_828,"Decode SN OO",0xc);
              uStack_81c._0_1_ = 'M';
              uStack_81c._1_1_ = '\n';
              uStack_81c._2_1_ = '\0';
              FUN_00032218(3,local_828,0);
              puVar4 = *(undefined4 **)(pbVar9 + 3);
            }
          }
          *puVar4 = local_a25;
          puVar4[1] = local_a21;
          puVar4[3] = local_a19;
          puVar4[2] = local_a1d;
          *(undefined1 *)(puVar4 + 4) = local_a15;
          puVar5 = calloc(3,1);
          *(undefined2 **)(pbVar9 + 7) = puVar5;
          if (puVar5 == (undefined2 *)0x0) {
            if (DAT_00087bbc < 4) {
              bVar2 = false;
            }
            else {
              bVar2 = false;
              builtin_strncpy(local_828,"Decode Chip ",0xc);
              uStack_81c._0_1_ = 'D';
              uStack_81c._1_1_ = 'i';
              uStack_81c._2_1_ = 'e';
              uStack_81c._3_1_ = ' ';
              builtin_strncpy(local_818,"OOM\n",4);
              local_814 = local_814 & 0xffffff00;
              FUN_00032218(3,local_828,0);
              puVar5 = *(undefined2 **)(pbVar9 + 7);
            }
          }
          *puVar5 = local_a14;
          puVar4 = calloc(0xe,1);
          *(undefined4 **)(pbVar9 + 0xb) = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            if (DAT_00087bbc < 4) {
              bVar2 = false;
            }
            else {
              bVar2 = false;
              builtin_strncpy(local_828,"Decode Chip ",0xc);
              uStack_81c._0_1_ = 'M';
              uStack_81c._1_1_ = 'a';
              uStack_81c._2_1_ = 'r';
              uStack_81c._3_1_ = 'k';
              builtin_strncpy(local_818,"ing ",4);
              local_814._0_1_ = 'O';
              local_814._1_1_ = 'O';
              local_814._2_1_ = 'M';
              local_814._3_1_ = '\n';
              local_810 = local_810 & 0xffffff00;
              FUN_00032218(3,local_828,0);
              puVar4 = *(undefined4 **)(pbVar9 + 0xb);
            }
          }
          *puVar4 = local_a12;
          puVar4[2] = local_a0a;
          puVar4[1] = local_a0e;
          *(undefined1 *)(puVar4 + 3) = local_a06;
          pbVar9[0xf] = local_a05;
          if (pbVar9[2] - 1 < 2) {
            local_928[0] = 0;
            local_928[1] = 0;
            local_928[2] = 0;
            local_928[3] = 0;
            local_b30 = calloc(__n_01 + 6,1);
            *(char **)(pbVar9 + 0x10) = local_b30;
            if (local_b30 == (char *)0x0) {
              if (DAT_00087bbc < 4) {
                bVar2 = false;
              }
              else {
                bVar2 = false;
                builtin_strncpy(local_828,"Decode Chip ",0xc);
                uStack_81c._0_1_ = 'F';
                uStack_81c._1_1_ = 'T';
                uStack_81c._2_1_ = ' ';
                uStack_81c._3_1_ = 'P';
                builtin_strncpy(local_818,"rogr",4);
                local_814._0_1_ = 'a';
                local_814._1_1_ = 'm';
                local_814._2_1_ = ' ';
                local_814._3_1_ = 'V';
                local_810._0_1_ = 'e';
                local_810._1_1_ = 'r';
                local_810._2_1_ = 's';
                local_810._3_1_ = 'i';
                builtin_strncpy(acStack_80c,"on OOM\n",8);
                FUN_00032218(3,local_828,0);
                local_b30 = *(char **)(pbVar9 + 0x10);
              }
            }
            memcpy(local_928,auStack_a04,__n_01);
            snprintf(local_b30,__n_01 + 6,"F%dV%02dB%dC%d",local_928[0] & 0xff,
                     local_928[0] >> 8 & 0xff,local_928[0] >> 0x10 & 0xff,local_928[0] >> 0x18);
          }
          else {
            pvVar6 = calloc(__n_01 + 1,1);
            *(void **)(pbVar9 + 0x10) = pvVar6;
            if (pvVar6 == (void *)0x0) {
              if (DAT_00087bbc < 4) {
                bVar2 = false;
              }
              else {
                bVar2 = false;
                builtin_strncpy(local_828,"Decode Chip ",0xc);
                uStack_81c._0_1_ = 'F';
                uStack_81c._1_1_ = 'T';
                uStack_81c._2_1_ = ' ';
                uStack_81c._3_1_ = 'P';
                builtin_strncpy(local_818,"rogr",4);
                local_814._0_1_ = 'a';
                local_814._1_1_ = 'm';
                local_814._2_1_ = ' ';
                local_814._3_1_ = 'V';
                local_810._0_1_ = 'e';
                local_810._1_1_ = 'r';
                local_810._2_1_ = 's';
                local_810._3_1_ = 'i';
                builtin_strncpy(acStack_80c,"on OOM\n",8);
                FUN_00032218(3,local_828,0);
                pvVar6 = *(void **)(pbVar9 + 0x10);
              }
            }
            memcpy(pvVar6,auStack_a04,__n_01);
          }
          pbVar9[0x14] = pbVar9[0x14] & 0x80 | auStack_b26[iVar8 + 0xfe] & 0x7f;
          pbVar9[0x14] = pbVar9[0x14] & 0x7f | auStack_b26[iVar8 + 0xfe] & 0x80;
          pvVar6 = calloc(__n + 1,1);
          *(void **)(pbVar9 + 0x15) = pvVar6;
          if (pvVar6 == (void *)0x0) {
            if (DAT_00087bbc < 4) {
              bVar2 = false;
            }
            else {
              bVar2 = false;
              builtin_strncpy(local_828,"Decode Chip ",0xc);
              uStack_81c._0_1_ = 'F';
              uStack_81c._1_1_ = 'T';
              uStack_81c._2_1_ = ' ';
              uStack_81c._3_1_ = 'P';
              builtin_strncpy(local_818,"rogr",4);
              local_814._0_1_ = 'a';
              local_814._1_1_ = 'm';
              local_814._2_1_ = ' ';
              local_814._3_1_ = 'V';
              local_810._0_1_ = 'e';
              local_810._1_1_ = 'r';
              local_810._2_1_ = 's';
              local_810._3_1_ = 'i';
              builtin_strncpy(acStack_80c,"on OOM\n",8);
              FUN_00032218(3,local_828,0);
              pvVar6 = *(void **)(pbVar9 + 0x15);
            }
          }
          memcpy(pvVar6,auStack_b26 + local_b34 + 0xfe,__n);
          pbVar9[0x19] = pbVar9[0x19] & 0x80 | auStack_b26[local_b38 + 0xfe] & 0x7f;
          pbVar9[0x19] = pbVar9[0x19] & 0x7f | auStack_b26[local_b38 + 0xfe] & 0x80;
          pbVar9[0x1a] = auStack_b26[local_b3c + 0xfe];
          pbVar9[0x1b] = auStack_b26[local_b40 + 0xfe];
          pbVar9[0x1c] = auStack_b26[local_b68 + 0xfe];
          pbVar9[0x1d] = auStack_b26[local_b6c + 0xfe];
          pbVar9[0x1e] = auStack_b26[local_b70 + 0xfe];
          puVar5 = calloc(3,1);
          *(undefined2 **)(pbVar9 + 0x1f) = puVar5;
          if (puVar5 == (undefined2 *)0x0) {
            if (DAT_00087bbc < 4) {
              bVar2 = false;
            }
            else {
              bVar2 = false;
              builtin_strncpy(local_828,"Decode Chip ",0xc);
              uStack_81c._0_1_ = 'T';
              uStack_81c._1_1_ = 'e';
              uStack_81c._2_1_ = 'c';
              uStack_81c._3_1_ = 'h';
              builtin_strncpy(local_818,"nolo",4);
              local_814._0_1_ = 'g';
              local_814._1_1_ = 'y';
              local_814._2_1_ = ' ';
              local_814._3_1_ = 'O';
              local_810._0_1_ = 'O';
              local_810._1_1_ = 'M';
              local_810._2_1_ = '\n';
              local_810._3_1_ = '\0';
              FUN_00032218(3,local_828,0);
              puVar5 = *(undefined2 **)(pbVar9 + 0x1f);
            }
          }
          *puVar5 = *(undefined2 *)(auStack_b26 + local_b64 + 0xfe);
          *(ushort *)(pbVar9 + 0x23) =
               *(ushort *)(auStack_b26 + local_b60 + 0xfe) << 8 |
               *(ushort *)(auStack_b26 + local_b60 + 0xfe) >> 8;
          *(ushort *)(pbVar9 + 0x25) =
               *(ushort *)(auStack_b26 + local_b5c + 0xfe) << 8 |
               *(ushort *)(auStack_b26 + local_b5c + 0xfe) >> 8;
          dVar10 = (double)VectorSignedToFloat((*(ushort *)(auStack_b26 + local_b58 + 0xfe) & 0xff)
                                               << 8 | (uint)(*(ushort *)
                                                              (auStack_b26 + local_b58 + 0xfe) >> 8)
                                               ,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(pbVar9 + 0x27) = (float)(dVar10 / 100.0);
          pbVar9[0x2b] = auStack_b26[local_b54 + 0xfe];
          pbVar9[0x2c] = auStack_b26[local_b50 + 0xfe];
          pbVar9[0x2d] = auStack_b26[local_b4c + 0xfe];
          pbVar9[0x2e] = auStack_b26[local_b48 + 0xfe];
          pbVar9[0x2f] = auStack_b26[local_b44 + 0xfe];
          pbVar9[0x34] = auStack_b26[local_b78 + 0xfe];
          if (bVar2) {
            uVar7 = FUN_00035b74(&local_a28,(pbVar9[1] - 1) * 8);
            if (uVar7 == pbVar9[0x34]) {
              *(undefined1 *)(param_2 + param_1 + 0x10) = 1;
              return 0;
            }
            if (DAT_00087bbc < 4) {
              return -1;
            }
            snprintf(local_828,0x800,
                     "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
                     (uint)pbVar9[0x34],(uint)pbVar9[1],uVar7);
            FUN_00032218(3,local_828,0);
          }
        }
        else {
          if (uVar7 == 3) {
            local_b48 = 0x43;
            local_b44 = 0x44;
            local_b50 = 0x41;
            local_b4c = 0x42;
            local_b64 = 0x38;
            local_b58 = 0x3e;
            local_b54 = 0x40;
            local_b60 = 0x3a;
            local_b5c = 0x3c;
            local_b68 = 0x35;
            local_b70 = 0x37;
            local_b6c = 0x36;
            local_b40 = 0x34;
            local_b3c = 0x33;
            bVar2 = true;
            local_b38 = 0x32;
          }
          else if (uVar7 == 4) {
            local_b48 = 0x45;
            local_b44 = 0x46;
            local_b50 = 0x43;
            local_b4c = 0x44;
            local_b64 = 0x3a;
            local_b58 = 0x40;
            local_b54 = 0x42;
            local_b60 = 0x3c;
            local_b5c = 0x3e;
            bVar2 = true;
            local_b70 = 0x39;
            local_b6c = 0x38;
            local_b68 = 0x37;
            local_b40 = 0x36;
            local_b3c = 0x35;
            local_b38 = 0x34;
          }
          else {
            bVar2 = false;
          }
          if (uVar7 - 3 < 2) {
            if (uVar7 == 4) {
              __n = 6;
            }
            else {
              __n = 4;
            }
            local_b78 = 0x49;
            __n_01 = 9;
            local_b34 = 0x2e;
            iVar8 = 0x2d;
            if (bVar2) goto LAB_0001a594;
          }
          if (DAT_00087bbc < 4) {
            return -1;
          }
          builtin_strncpy(local_828,"This FMT is ",0xc);
          uStack_81c._0_1_ = 'n';
          uStack_81c._1_1_ = 'o';
          uStack_81c._2_1_ = 't';
          uStack_81c._3_1_ = ' ';
          builtin_strncpy(local_818,"supp",4);
          local_814._0_1_ = 'o';
          local_814._1_1_ = 'r';
          local_814._2_1_ = 't';
          local_814._3_1_ = 'e';
          local_810 = CONCAT13(local_810._3_1_,0xa64);
          FUN_00032218(3,local_828,0);
        }
        break;
      }
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_828,"EEPROM info ",0xc);
        uStack_81c._0_1_ = 'e';
        uStack_81c._1_1_ = 'r';
        uStack_81c._2_1_ = 'r';
        uStack_81c._3_1_ = 'o';
        builtin_strncpy(local_818,"r!, ",4);
        local_814 = CONCAT13(local_814._3_1_,0x322d);
        FUN_00032218(3,local_828,0);
        goto LAB_0001a360;
      }
    }
    else if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"EEPROM info ",0xc);
      uStack_81c._0_1_ = 'e';
      uStack_81c._1_1_ = 'r';
      uStack_81c._2_1_ = 'r';
      uStack_81c._3_1_ = 'o';
      builtin_strncpy(local_818,"r!, ",4);
      local_814 = CONCAT13(local_814._3_1_,0x312d);
      FUN_00032218(3,local_828,0);
LAB_0001a360:
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"Data decode fail for chain %d.\n",param_1);
        FUN_00032218(3,local_828,0);
      }
    }
    usleep(500000);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (DAT_00087bbc < 4) {
    return -1;
  }
  snprintf(local_828,0x800,"Data load fail for chain %d.\n",param_1);
  FUN_00032218(3,local_828,0);
  return -1;
}

