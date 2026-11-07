// FUN_00ce6618 @ 00ce6618 size=2600 calls_out=16 calls_in=1
// strings: failed to write frame to transport | statechunk_lenextensions_cnttrailers_buftrailers_cnth1_max_headersh1_max_header_size

/* WARNING: Removing unreachable block (ram,0x00ce68d0) */

void FUN_00ce6618(byte *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte local_a0;
  undefined1 uStack_9f;
  char cStack_9e;
  byte bStack_9d;
  byte local_9c;
  ushort uStack_9b;
  undefined1 uStack_99;
  int iStack_98;
  int iStack_94;
  undefined2 local_90;
  undefined1 local_8e;
  byte local_8d;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  int *local_70;
  uint local_6c;
  byte *local_68;
  uint local_64;
  uint local_60;
  uint *local_58;
  undefined4 local_54;
  byte local_50 [2];
  undefined1 auStack_4e [2];
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined1 uStack_25;
  
  iVar14 = *param_2;
  if (*(uint *)(iVar14 + 0x44) <= *(uint *)(iVar14 + 0x38)) {
    do {
      if (*(int *)(iVar14 + 0x38) == 0) goto LAB_00ce6640;
      FUN_00c0b6f8(local_50,iVar14,param_3,iVar14 + 0x34);
      if (local_50[0] == 5) {
        local_a0 = 7;
        goto LAB_00ce68f4;
      }
      if (local_50[0] != 4) {
        local_9c = (byte)uStack_4c;
        uStack_9b = (ushort)((uint)uStack_4c >> 8);
        uStack_99 = (undefined1)((uint)uStack_4c >> 0x18);
        uStack_9f = local_50[1];
        cStack_9e = auStack_4e[0];
        bStack_9d = auStack_4e[1];
        local_a0 = local_50[0];
        if (local_50[0] != 6) goto LAB_00ce68f4;
        goto LAB_00ce6640;
      }
    } while (uStack_4c != 0);
    FUN_015e79d4(&local_a0,0x17,"failed to write frame to transport",0x22);
    if (local_a0 != 6) {
LAB_00ce68f4:
      if (local_a0 != 7) {
        *(uint *)(param_1 + 4) = CONCAT13(uStack_99,CONCAT21(uStack_9b,local_9c));
        *(uint *)(param_1 + 1) =
             CONCAT13(local_9c,CONCAT12(bStack_9d,CONCAT11(cStack_9e,uStack_9f)));
      }
      *param_1 = local_a0;
      return;
    }
  }
LAB_00ce6640:
  local_8d = *(byte *)((int)param_2 + 0x17);
  *(undefined1 *)((int)param_2 + 0x17) = 2;
  if (local_8d == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
  }
  iVar9 = param_2[1];
  iVar12 = param_2[2];
  iStack_98 = param_2[3];
  iStack_94 = param_2[4];
  local_a0 = (byte)iVar9;
  uStack_9f = (undefined1)((uint)iVar9 >> 8);
  cStack_9e = (char)((uint)iVar9 >> 0x10);
  bStack_9d = (byte)((uint)iVar9 >> 0x18);
  local_9c = (byte)iVar12;
  uStack_9b = (ushort)((uint)iVar12 >> 8);
  uStack_99 = (undefined1)((uint)iVar12 >> 0x18);
  local_90 = (undefined2)param_2[5];
  local_8e = *(undefined1 *)((int)param_2 + 0x16);
  local_78 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_78 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  *local_78 = 0x7b;
  local_70 = &local_7c;
  local_7c = 0x80;
  local_74 = 1;
  FUN_00cd2b24(local_50,local_70,&DAT_00354fc1,9);
  piVar6 = local_70;
  if (local_50[0] == 4) {
    iVar9 = local_70[2];
    if (*local_70 == iVar9) {
      FUN_00d653ec(local_70,iVar9,1,1,1);
      iVar9 = piVar6[2];
    }
    piVar7 = local_70;
    cVar5 = cStack_9e;
    *(undefined1 *)(piVar6[1] + iVar9) = 0x3a;
    piVar6[2] = piVar6[2] + 1;
    if (cVar5 == '\x01') {
      local_6c = (uint)&local_a0 | 3;
      FUN_016dd606(local_50,0,0x27);
      local_60 = 0;
      local_54 = &LAB_0098b894;
      local_58 = &local_6c;
      local_64 = 0x27;
      local_68 = local_50;
      iVar9 = FUN_00fa948c(&local_68,&DAT_018713b0,&DAT_00590e71,&local_58);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018725bc,&DAT_0187be68);
      }
      if (local_64 < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_60,local_64,&DAT_018a92dc);
      }
      FUN_00cd2b24(&local_58,piVar7,local_68);
      if ((char)local_58 != '\x04') {
        puVar8 = (undefined1 *)FUN_0157c4a0(local_58,local_54);
        goto LAB_00ce6e78;
      }
    }
    else {
      uVar13 = (uint)bStack_9d;
      uStack_44 = 0x2e2e2e;
      local_48 = 0x2e2e2e2e;
      uStack_4c = 0x2e2e2e2e;
      local_50[1] = 0x2e;
      auStack_4e[0] = 0x2e;
      auStack_4e[1] = 0x2e;
      if (uVar13 < 100) {
        if (uVar13 < 10) {
          local_50[0] = bStack_9d | 0x30;
          uVar15 = (uint)local_50 | 2;
          uVar10 = 2;
        }
        else {
          uVar15 = (uint)local_50 | 3;
          uVar10 = 3;
          local_50[0] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar13 * 2);
          local_50[1] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar13 * 2) >> 8);
        }
      }
      else {
        uVar15 = (uint)local_50 | 4;
        local_50[0] = (byte)((uint)((short)(ushort)bStack_9d * 0x29) >> 0xc) | 0x30;
        uVar10 = 4;
        local_50[1] = (byte)*(undefined2 *)
                             (&DAT_0040f4ca +
                             (uVar13 + ((uint)((short)(ushort)bStack_9d * 0x29) >> 0xc) * -100 &
                             0xff) * 2);
        auStack_4e[0] =
             (undefined1)
             ((ushort)*(undefined2 *)
                       (&DAT_0040f4ca +
                       (uVar13 + ((uint)((short)(ushort)bStack_9d * 0x29) >> 0xc) * -100 & 0xff) * 2
                       ) >> 8);
      }
      uVar4 = CONCAT22(uStack_9b,CONCAT11(local_9c,bStack_9d));
      uVar13 = (uint)uStack_9b;
      if (local_9c < 100) {
        if (local_9c < 10) {
          *(byte *)((uint)local_50 | uVar10) = local_9c | 0x30;
          iVar9 = 1;
        }
        else {
          iVar9 = ((CONCAT11(local_9c,bStack_9d) & 0x7f00) >> 8) * 2;
          *(undefined1 *)((uint)local_50 | uVar10) = (&DAT_0040f4ca)[iVar9];
          *(undefined1 *)(uVar15 + 1) = (&DAT_0040f4cb)[iVar9];
          iVar9 = 2;
        }
      }
      else {
        uVar1 = (short)((ushort)(uVar4 >> 8) & 0xff) * 0x29;
        *(byte *)((uint)local_50 | uVar10) = (byte)(uVar1 >> 0xc) | 0x30;
        *(undefined2 *)(uVar15 + 1) =
             *(undefined2 *)(&DAT_0040f4ca + ((uVar4 >> 8) + (uVar1 >> 0xc) * -100 & 0xff) * 2);
        iVar9 = 3;
      }
      uVar15 = uVar13 & 0xff;
      iVar12 = iVar9 + uVar10 + 1;
      pbVar11 = local_50 + iVar12;
      if (uVar15 < 100) {
        if (uVar15 < 10) {
          *pbVar11 = (byte)uStack_9b | 0x30;
          iVar9 = 1;
        }
        else {
          *(undefined2 *)pbVar11 = *(undefined2 *)(&DAT_0040f4ca + (uVar13 & 0x7f) * 2);
          iVar9 = 2;
        }
      }
      else {
        uVar15 = (short)uVar15 * 0x29;
        *pbVar11 = (byte)(uVar15 >> 0xc) | 0x30;
        *(undefined2 *)(auStack_4e + iVar9 + uVar10) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar13 + (uVar15 >> 0xc) * -100 & 0xff) * 2);
        iVar9 = 3;
      }
      iVar12 = iVar12 + iVar9;
      iVar9 = iVar12 + 1;
      pbVar11 = local_50 + iVar9;
      bVar2 = (byte)(uStack_9b >> 8);
      if (uVar4 < 0x64000000) {
        if (uStack_9b >> 9 < 5) {
          *pbVar11 = bVar2 | 0x30;
          iVar12 = 1;
        }
        else {
          *(undefined2 *)pbVar11 = *(undefined2 *)(&DAT_0040f4ca + (uint)(uStack_9b >> 8) * 2);
          iVar12 = 2;
        }
      }
      else {
        uVar13 = (short)(ushort)bVar2 * 0x29;
        *pbVar11 = (byte)(uVar13 >> 0xc) | 0x30;
        *(undefined2 *)(auStack_4e + iVar12) =
             *(undefined2 *)
              (&DAT_0040f4ca + ((uint)(uStack_9b >> 8) + (uVar13 >> 0xc) * -100 & 0xff) * 2);
        iVar12 = 3;
      }
      FUN_00cd2b24(&local_68,piVar7,local_50,iVar9 + iVar12);
      if ((char)local_68 != '\x04') {
        puVar8 = (undefined1 *)FUN_0157c4a0(local_68,local_64);
LAB_00ce6e78:
        if (puVar8 != (undefined1 *)0x0) goto LAB_00ce6db4;
      }
    }
    piVar6 = local_70;
    uVar3 = CONCAT11(uStack_9f,local_a0);
    uVar13 = (uint)uVar3;
    iVar9 = local_70[2];
    if (*local_70 == iVar9) {
      FUN_00d653ec(local_70,iVar9,1,1,1);
      iVar9 = piVar6[2];
    }
    piVar7 = local_70;
    *(undefined1 *)(piVar6[1] + iVar9) = 0x2c;
    piVar6[2] = piVar6[2] + 1;
    FUN_00cd2b24(local_50,piVar7,&DAT_00354fca,0xb);
    piVar6 = local_70;
    if (local_50[0] == 4) {
      iVar9 = local_70[2];
      if (*local_70 == iVar9) {
        FUN_00d653ec(local_70,iVar9,1,1,1);
        iVar9 = piVar6[2];
      }
      piVar7 = local_70;
      *(undefined1 *)(piVar6[1] + iVar9) = 0x3a;
      piVar6[2] = piVar6[2] + 1;
      if (uVar13 < 10000) {
        iVar9 = 5;
        if (uVar13 < 100) {
          uVar10 = uVar13;
          if (9 < uVar13) goto LAB_00ce6c70;
          goto LAB_00ce6c04;
        }
        uVar10 = (uint)((short)(uVar3 >> 2) * 0x147b) >> 0x11;
        auStack_4e[1] =
             (undefined1)*(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar10 * -100 & 0xffff) * 2);
        uStack_4c._0_1_ =
             (undefined1)
             ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar10 * -100 & 0xffff) * 2) >> 8);
        iVar9 = 3;
        uVar13 = uVar10;
        if (uVar10 < 10) goto LAB_00ce6c04;
LAB_00ce6c70:
        iVar9 = iVar9 + -2;
        *(undefined2 *)(local_50 + iVar9) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
      }
      else {
        uVar10 = (uint)((short)(uVar3 >> 4) * 0x347) >> 0x13;
        uVar13 = uVar13 + uVar10 * -10000;
        uVar15 = (uint)((short)((uVar13 & 0xffff) >> 2) * 0x147b) >> 0x11;
        local_50[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar15 * 2);
        auStack_4e[0] = (undefined1)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar15 * 2) >> 8);
        auStack_4e[1] =
             (undefined1)*(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar15 * -100 & 0xffff) * 2);
        uStack_4c._0_1_ =
             (undefined1)
             ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar15 * -100 & 0xffff) * 2) >> 8);
        iVar9 = 1;
        uVar13 = uVar10;
LAB_00ce6c04:
        iVar9 = iVar9 + -1;
        local_50[iVar9] = (byte)uVar13 | 0x30;
      }
      uVar13 = 5 - iVar9;
      iVar12 = piVar7[2];
      if ((uint)(*piVar7 - iVar12) < uVar13) {
        FUN_00d653ec(piVar7,iVar12,uVar13,1,1);
        iVar12 = piVar7[2];
      }
      FUN_016dd1aa(piVar7[1] + iVar12,local_50 + iVar9,uVar13);
      piVar6 = local_70;
      bVar2 = local_8d;
      piVar7[2] = piVar7[2] + uVar13;
      iVar9 = piVar6[2];
      if (*piVar6 == iVar9) {
        FUN_00d653ec(piVar6,iVar9,1,1,1);
        iVar9 = piVar6[2];
      }
      piVar7 = local_70;
      *(undefined1 *)(piVar6[1] + iVar9) = 0x2c;
      piVar6[2] = piVar6[2] + 1;
      FUN_00cd2b24(local_50,piVar7,
                   "statechunk_lenextensions_cnttrailers_buftrailers_cnth1_max_headersh1_max_header_size"
                   ,5);
      piVar6 = local_70;
      if (local_50[0] == 4) {
        iVar9 = local_70[2];
        if (*local_70 == iVar9) {
          FUN_00d653ec(local_70,iVar9,1,1,1);
          iVar9 = piVar6[2];
        }
        piVar7 = local_70;
        *(undefined1 *)(piVar6[1] + iVar9) = 0x3a;
        piVar6[2] = piVar6[2] + 1;
        if ((bVar2 & 1) == 0) {
          FUN_00cd2b24(local_50,piVar7,&DAT_00354fd5,9);
          if (local_50[0] != 4) {
            puVar8 = (undefined1 *)
                     FUN_0157c4a0(CONCAT13(auStack_4e[1],
                                           CONCAT12(auStack_4e[0],CONCAT11(local_50[1],local_50[0]))
                                          ),uStack_4c);
            goto LAB_00ce6f58;
          }
        }
        else {
          FUN_00cd2b24(local_50,piVar7,&DAT_00408924,0xc);
          if (local_50[0] != 4) {
            puVar8 = (undefined1 *)
                     FUN_0157c4a0(CONCAT13(auStack_4e[1],
                                           CONCAT12(auStack_4e[0],CONCAT11(local_50[1],local_50[0]))
                                          ),uStack_4c);
LAB_00ce6f58:
            if (puVar8 != (undefined1 *)0x0) goto LAB_00ce6db4;
          }
        }
        piVar6 = local_70;
        iVar9 = local_70[2];
        if (*local_70 == iVar9) {
          FUN_00d653ec(local_70,iVar9,1,1,1);
          iVar9 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar9) = 0x7d;
        piVar6[2] = iVar9 + 1;
        puVar8 = local_78;
        if (local_7c != -0x80000000) {
          local_84 = local_78;
          local_80 = local_74;
          local_88 = local_7c;
          FUN_00f5ef18(local_50,&local_88);
          FUN_01665a20(&local_68,iVar14 + 0x10,local_50,iVar14 + 0x34);
          if (((char)local_68 == '\x04') || (((uint)local_68 & 0xff) == 6)) {
            *param_1 = 6;
            return;
          }
          *(byte **)param_1 = local_68;
          *(uint *)(param_1 + 4) = local_64;
          return;
        }
        goto LAB_00ce6dc8;
      }
      puVar8 = (undefined1 *)
               FUN_0157c4a0(CONCAT13(auStack_4e[1],
                                     CONCAT12(auStack_4e[0],CONCAT11(local_50[1],local_50[0]))),
                            uStack_4c);
    }
    else {
      puVar8 = (undefined1 *)
               FUN_0157c4a0(CONCAT13(auStack_4e[1],
                                     CONCAT12(auStack_4e[0],CONCAT11(local_50[1],local_50[0]))),
                            uStack_4c);
    }
  }
  else {
    puVar8 = (undefined1 *)
             FUN_0157c4a0(CONCAT13(auStack_4e[1],
                                   CONCAT12(auStack_4e[0],CONCAT11(local_50[1],local_50[0]))),
                          uStack_4c);
  }
LAB_00ce6db4:
  if (local_7c != 0) {
    thunk_FUN_016d3fb4(local_78);
  }
LAB_00ce6dc8:
  param_1[0] = 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 **)(param_1 + 4) = puVar8;
  return;
}

