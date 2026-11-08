// FUN_00993a28 @ 00993a28 size=2484 calls_out=13 calls_in=1
// strings: failed to write frame to transport | statechunk_lenextensions_cnttrailers_buftrailers_cnth1_max_headersh1_max_header_size | failed to write frame to transport

/* WARNING: Removing unreachable block (ram,0x00993c9c) */
/* WARNING: Removing unreachable block (ram,0x00993cd4) */

void FUN_00993a28(byte *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  int iVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  byte local_98;
  undefined1 uStack_97;
  char cStack_96;
  byte bStack_95;
  byte local_94;
  ushort uStack_93;
  undefined1 uStack_91;
  int iStack_90;
  int iStack_8c;
  undefined2 local_88;
  undefined1 local_86;
  byte local_85;
  int local_80;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  undefined1 *local_70;
  int local_6c;
  uint local_68;
  byte *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  uint *local_58;
  undefined4 local_54;
  byte local_50 [2];
  undefined1 auStack_4e [2];
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined1 uStack_25;
  
  bVar1 = *(byte *)((int)param_2 + 0x17);
  iVar15 = *param_2;
  if (bVar1 != 2) {
    if (*(uint *)(iVar15 + 0x44) <= *(uint *)(iVar15 + 0x38)) {
      do {
        if (*(int *)(iVar15 + 0x38) == 0) goto LAB_00993a64;
        FUN_0098b2b8(local_50,iVar15,param_3,iVar15 + 0x34);
        uVar14 = (uint)local_50[0];
        if (uVar14 == 5) {
          uVar14 = 7;
          uVar7 = extraout_r1;
          uVar11 = extraout_r2;
          goto LAB_00993cc0;
        }
        if (uVar14 != 4) {
          uVar11 = (uint)auStack_4e[1];
          local_94 = (byte)uStack_4c;
          uStack_93 = (ushort)((uint)uStack_4c >> 8);
          uStack_91 = (undefined1)((uint)uStack_4c >> 0x18);
          uVar7 = CONCAT31(CONCAT12(auStack_4e[1],CONCAT11(auStack_4e[0],local_50[1])),local_50[0]);
          local_98 = local_50[0];
          uStack_97 = local_50[1];
          cStack_96 = auStack_4e[0];
          bStack_95 = auStack_4e[1];
          goto joined_r0x00993cbc;
        }
      } while (uStack_4c != 0);
      FUN_015e79d4(&local_98,0x17,"failed to write frame to transport",0x22);
      uVar14 = (uint)local_98;
      uVar11 = extraout_r2_00;
      uVar7 = extraout_r1_00;
joined_r0x00993cbc:
      if (uVar14 == 6) goto LAB_00993a64;
LAB_00993cc0:
      if (uVar14 != 7) {
        uVar7 = CONCAT13(local_94,CONCAT12(bStack_95,CONCAT11(cStack_96,uStack_97)));
        uVar11 = (uint)CONCAT12(uStack_91,uStack_93);
        goto joined_r0x00993cf0;
      }
LAB_00994178:
      local_50[0] = (byte)uVar14;
      if (uVar14 != 7) {
        *(uint *)(param_1 + 1) = uVar7;
        *(short *)(param_1 + 5) = (short)uVar11;
        param_1[7] = (byte)(uVar11 >> 0x10);
      }
      goto LAB_00994190;
    }
LAB_00993a64:
    *(undefined1 *)((int)param_2 + 0x17) = 2;
    iVar8 = param_2[1];
    iVar10 = param_2[2];
    iStack_90 = param_2[3];
    iStack_8c = param_2[4];
    local_98 = (byte)iVar8;
    uStack_97 = (byte)((uint)iVar8 >> 8);
    cStack_96 = (char)((uint)iVar8 >> 0x10);
    bStack_95 = (byte)((uint)iVar8 >> 0x18);
    local_94 = (byte)iVar10;
    uStack_93 = (ushort)((uint)iVar10 >> 8);
    uStack_91 = (undefined1)((uint)iVar10 >> 0x18);
    local_88 = (undefined2)param_2[5];
    local_86 = *(undefined1 *)((int)param_2 + 0x16);
    local_85 = bVar1;
    local_70 = (undefined1 *)thunk_FUN_016d4a50(0x80);
    if (local_70 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x80);
    }
    *local_70 = 0x7b;
    local_6c = 1;
    local_74 = 0x80;
    FUN_0098b5cc(&local_74,&DAT_00354fc1,9);
    if (local_74 == local_6c) {
      FUN_00995818(&local_74,local_6c,1,1,1);
    }
    local_70[local_6c] = 0x3a;
    local_6c = local_6c + 1;
    if (cStack_96 == '\x01') {
      local_68 = (uint)&local_98 | 3;
      FUN_016dd606(local_50,0,0x27);
      local_5c = (undefined1 *)0x0;
      local_54 = &LAB_0098b894;
      local_58 = &local_68;
      local_60 = &DAT_00000027;
      local_64 = local_50;
      iVar8 = FUN_00fa948c(&local_64,&DAT_01868b94,&DAT_00590e71,&local_58);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_01868bc4,&DAT_0187be68);
      }
      if (local_60 < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_5c,local_60,&DAT_018a92dc);
      }
      FUN_0098b5cc(&local_74,local_64);
    }
    else {
      uVar14 = (uint)bStack_95;
      uStack_44 = 0x2e2e2e;
      local_48 = 0x2e2e2e2e;
      uStack_4c = 0x2e2e2e2e;
      local_50[1] = 0x2e;
      auStack_4e[0] = '.';
      auStack_4e[1] = 0x2e;
      if (uVar14 < 100) {
        if (uVar14 < 10) {
          local_50[0] = bStack_95 | 0x30;
          uVar7 = (uint)local_50 | 2;
          uVar11 = 2;
        }
        else {
          uVar7 = (uint)local_50 | 3;
          uVar11 = 3;
          local_50[0] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar14 * 2);
          local_50[1] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar14 * 2) >> 8);
        }
      }
      else {
        uVar7 = (uint)local_50 | 4;
        local_50[0] = (byte)((uint)((short)(ushort)bStack_95 * 0x29) >> 0xc) | 0x30;
        uVar11 = 4;
        local_50[1] = (byte)*(undefined2 *)
                             (&DAT_0040f4ca +
                             (uVar14 + ((uint)((short)(ushort)bStack_95 * 0x29) >> 0xc) * -100 &
                             0xff) * 2);
        auStack_4e[0] =
             (char)((ushort)*(undefined2 *)
                             (&DAT_0040f4ca +
                             (uVar14 + ((uint)((short)(ushort)bStack_95 * 0x29) >> 0xc) * -100 &
                             0xff) * 2) >> 8);
      }
      uVar4 = CONCAT22(uStack_93,CONCAT11(local_94,bStack_95));
      uVar14 = (uint)uStack_93;
      if (local_94 < 100) {
        if (local_94 < 10) {
          *(byte *)((uint)local_50 | uVar11) = local_94 | 0x30;
          iVar8 = 1;
        }
        else {
          iVar8 = ((CONCAT11(local_94,bStack_95) & 0x7f00) >> 8) * 2;
          *(undefined1 *)((uint)local_50 | uVar11) = (&DAT_0040f4ca)[iVar8];
          *(undefined1 *)(uVar7 + 1) = (&DAT_0040f4cb)[iVar8];
          iVar8 = 2;
        }
      }
      else {
        uVar2 = (short)((ushort)(uVar4 >> 8) & 0xff) * 0x29;
        *(byte *)((uint)local_50 | uVar11) = (byte)(uVar2 >> 0xc) | 0x30;
        *(undefined2 *)(uVar7 + 1) =
             *(undefined2 *)(&DAT_0040f4ca + ((uVar4 >> 8) + (uVar2 >> 0xc) * -100 & 0xff) * 2);
        iVar8 = 3;
      }
      uVar7 = uVar14 & 0xff;
      iVar10 = iVar8 + uVar11 + 1;
      pbVar13 = local_50 + iVar10;
      if (uVar7 < 100) {
        if (uVar7 < 10) {
          *pbVar13 = (byte)uStack_93 | 0x30;
          iVar8 = 1;
        }
        else {
          *(undefined2 *)pbVar13 = *(undefined2 *)(&DAT_0040f4ca + (uVar14 & 0x7f) * 2);
          iVar8 = 2;
        }
      }
      else {
        uVar7 = (short)uVar7 * 0x29;
        *pbVar13 = (byte)(uVar7 >> 0xc) | 0x30;
        *(undefined2 *)(auStack_4e + iVar8 + uVar11) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar14 + (uVar7 >> 0xc) * -100 & 0xff) * 2);
        iVar8 = 3;
      }
      iVar10 = iVar10 + iVar8;
      iVar8 = iVar10 + 1;
      pbVar13 = local_50 + iVar8;
      bVar1 = (byte)(uStack_93 >> 8);
      if (uVar4 < 0x64000000) {
        if (uStack_93 >> 9 < 5) {
          *pbVar13 = bVar1 | 0x30;
          iVar10 = 1;
        }
        else {
          *(undefined2 *)pbVar13 = *(undefined2 *)(&DAT_0040f4ca + (uint)(uStack_93 >> 8) * 2);
          iVar10 = 2;
        }
      }
      else {
        uVar14 = (short)(ushort)bVar1 * 0x29;
        *pbVar13 = (byte)(uVar14 >> 0xc) | 0x30;
        *(undefined2 *)(auStack_4e + iVar10) =
             *(undefined2 *)
              (&DAT_0040f4ca + ((uint)(uStack_93 >> 8) + (uVar14 >> 0xc) * -100 & 0xff) * 2);
        iVar10 = 3;
      }
      FUN_0098b5cc(&local_74,local_50,iVar8 + iVar10);
    }
    uVar3 = CONCAT11(uStack_97,local_98);
    uVar14 = (uint)uVar3;
    if (local_74 == local_6c) {
      FUN_00995818(&local_74,local_6c,1,1,1);
    }
    local_70[local_6c] = 0x2c;
    local_6c = local_6c + 1;
    FUN_0098b5cc(&local_74,&DAT_00354fca,0xb);
    if (local_74 == local_6c) {
      FUN_00995818(&local_74,local_6c,1,1,1);
    }
    iVar8 = local_6c + 1;
    local_70[local_6c] = 0x3a;
    if (uVar14 < 10000) {
      iVar10 = 5;
      if (uVar14 < 100) {
        if (9 < uVar14) goto LAB_00993ff4;
        goto LAB_00994020;
      }
      uVar11 = (uint)((short)(uVar3 >> 2) * 0x147b) >> 0x11;
      auStack_4e[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar11 * -100 & 0xffff) * 2);
      uStack_4c._0_1_ =
           (undefined1)
           ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar11 * -100 & 0xffff) * 2) >> 8);
      iVar10 = 3;
      uVar14 = uVar11;
      if (uVar11 < 10) goto LAB_00994020;
LAB_00993ff4:
      iVar10 = iVar10 + -2;
      *(undefined2 *)(local_50 + iVar10) = *(undefined2 *)(&DAT_0040f4ca + uVar14 * 2);
    }
    else {
      uVar11 = (uint)((short)(uVar3 >> 4) * 0x347) >> 0x13;
      uVar14 = uVar14 + uVar11 * -10000;
      uVar7 = (uint)((short)((uVar14 & 0xffff) >> 2) * 0x147b) >> 0x11;
      local_50[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
      auStack_4e[0] = (char)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar7 * 2) >> 8);
      auStack_4e[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar7 * -100 & 0xffff) * 2);
      uStack_4c._0_1_ =
           (undefined1)
           ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar7 * -100 & 0xffff) * 2) >> 8);
      iVar10 = 1;
      uVar14 = uVar11;
LAB_00994020:
      iVar10 = iVar10 + -1;
      local_50[iVar10] = (byte)uVar14 | 0x30;
    }
    uVar14 = 5 - iVar10;
    local_6c = iVar8;
    if ((uint)(local_74 - iVar8) < uVar14) {
      FUN_00995818(&local_74,iVar8,uVar14,1,1);
    }
    iVar5 = local_6c;
    puVar6 = local_70;
    iVar8 = local_74;
    FUN_016dd1aa(local_70 + local_6c,local_50 + iVar10,uVar14);
    bVar1 = local_85;
    local_6c = iVar5 + uVar14;
    if (iVar8 == local_6c) {
      FUN_00995818(&local_74,iVar8,1,1,1);
      puVar6 = local_70;
    }
    puVar6[local_6c] = 0x2c;
    local_6c = local_6c + 1;
    FUN_0098b5cc(&local_74,
                 "statechunk_lenextensions_cnttrailers_buftrailers_cnth1_max_headersh1_max_header_size"
                 ,5);
    if (local_74 == local_6c) {
      FUN_00995818(&local_74,local_6c,1,1,1);
    }
    bVar16 = (bVar1 & 1) != 0;
    local_70[local_6c] = 0x3a;
    local_6c = local_6c + 1;
    puVar12 = &DAT_00354fd5;
    if (bVar16) {
      puVar12 = &DAT_00408924;
    }
    uVar9 = 9;
    if (bVar16) {
      uVar9 = 0xc;
    }
    FUN_0098b5cc(&local_74,puVar12,uVar9);
    if (local_74 == local_6c) {
      FUN_00995818(&local_74,local_6c,1,1,1);
      local_70[local_6c] = 0x7d;
      if (local_74 != -0x80000000) goto LAB_009940f4;
      uVar14 = 0;
      pbVar13 = &DAT_00000004;
      puVar6 = local_70;
LAB_00994160:
      uVar11 = (uint)puVar6 >> 8;
      uVar7 = uVar14 >> 8 | (int)puVar6 << 0x18;
      uVar14 = (uint)pbVar13 & 0xff;
joined_r0x00993cf0:
      if (uVar14 != 6) goto LAB_00994178;
    }
    else {
      local_70[local_6c] = 0x7d;
LAB_009940f4:
      local_78 = local_6c + 1;
      local_80 = local_74;
      local_7c = local_70;
      FUN_00f5ef18(local_50,&local_80);
      FUN_01665a20(&local_64,iVar15 + 0x10,local_50,iVar15 + 0x34);
      if (((char)local_64 != '\x04') && (((uint)local_64 & 0xff) != 6)) {
        uVar14 = (uint)local_64 & 0xffffff00;
        puVar6 = local_60;
        pbVar13 = local_64;
        goto LAB_00994160;
      }
    }
    iVar15 = *param_2;
  }
  do {
    if (*(int *)(iVar15 + 0x38) == 0) goto LAB_00994264;
    FUN_0098b2b8(local_50,iVar15,param_3,iVar15 + 0x34);
    if (local_50[0] == 5) {
      local_50[0] = 7;
      goto LAB_0099421c;
    }
    if (local_50[0] != 4) {
      local_94 = (byte)uStack_4c;
      uStack_93 = (ushort)((uint)uStack_4c >> 8);
      uStack_91 = (undefined1)((uint)uStack_4c >> 0x18);
      uStack_97 = local_50[1];
      cStack_96 = auStack_4e[0];
      bStack_95 = auStack_4e[1];
      goto joined_r0x00994260;
    }
  } while (uStack_4c != 0);
  FUN_015e79d4(&local_98,0x17,"failed to write frame to transport",0x22);
  local_50[0] = local_98;
joined_r0x00994260:
  if (local_50[0] == 6) {
LAB_00994264:
    *param_1 = 6;
    return;
  }
LAB_0099421c:
  if (local_50[0] != 7) {
    *(uint *)(param_1 + 4) = CONCAT13(uStack_91,CONCAT21(uStack_93,local_94));
    *(uint *)(param_1 + 1) = CONCAT13(local_94,CONCAT12(bStack_95,CONCAT11(cStack_96,uStack_97)));
    *param_1 = local_50[0];
    return;
  }
LAB_00994190:
  *param_1 = local_50[0];
  return;
}

