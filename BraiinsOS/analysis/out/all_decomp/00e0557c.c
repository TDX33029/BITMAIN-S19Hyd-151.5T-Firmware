// FUN_00e0557c @ 00e0557c size=9024 calls_out=64 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | license-keepalive | license-keepalive | license-keepalive | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */

int FUN_00e0557c(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint ******ppppppuVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  uint *******pppppppuVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  uint ******ppppppuVar14;
  uint *******pppppppuVar15;
  undefined1 uVar16;
  byte bVar17;
  code *pcVar18;
  uint ******ppppppuVar19;
  uint uVar20;
  int extraout_r2;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  uint *******pppppppuVar26;
  undefined4 uVar27;
  uint ******ppppppuVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  undefined4 *puVar32;
  uint *puVar33;
  uint *******pppppppuVar34;
  uint uVar35;
  uint uVar36;
  uint *******pppppppuVar37;
  uint ******ppppppuVar38;
  undefined1 *puVar39;
  uint *******pppppppuVar40;
  undefined *puVar41;
  uint uVar42;
  undefined4 *unaff_r8;
  undefined4 uVar43;
  char *pcVar44;
  byte *pbVar45;
  int iVar46;
  int *piVar47;
  int *piVar48;
  undefined4 uVar49;
  uint *******pppppppuVar50;
  bool bVar51;
  bool bVar52;
  undefined8 uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  undefined1 *local_27c;
  undefined4 local_26c;
  undefined4 *local_264;
  uint *******local_260;
  uint ******local_25c;
  int local_258;
  uint ******local_254;
  undefined1 *local_250;
  uint *******local_24c;
  int local_248;
  uint *******local_240;
  int local_230;
  uint *******local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 *local_218;
  int local_210;
  undefined4 local_1f4;
  uint *****local_1ec;
  uint *******local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined4 *local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  uint ******local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  int local_bc;
  uint *******local_b8;
  uint *******local_b0;
  uint *******local_ac;
  uint *******local_a8;
  uint ******local_a0;
  uint *******local_9c;
  undefined4 local_98;
  int *local_94;
  uint *******local_90;
  uint *******local_8c;
  uint *******local_88;
  uint *******local_84;
  uint ******local_80;
  undefined *local_7c;
  uint *******local_78;
  undefined4 local_74;
  uint *******local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint ******local_64;
  undefined4 local_60;
  uint *******local_5c;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  undefined4 local_4c;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  undefined *local_34;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar53 = thunk_FUN_016de0ee(param_1,0x40,&local_48);
  iVar46 = (int)uVar53 + (int)((ulonglong)uVar53 >> 0x20);
  uVar27 = *(undefined4 *)(param_1 + 8);
  uVar29 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar46 + 0x38) == '\x01') {
LAB_00e0560c:
    local_224 = *(undefined4 *)(iVar46 + 0x18);
    local_228 = *(undefined4 *)(iVar46 + 0x1c);
    cVar5 = '\x01';
    *(undefined4 *)(iVar46 + 0x18) = uVar27;
    *(undefined4 *)(iVar46 + 0x1c) = uVar29;
  }
  else {
    if (*(char *)(iVar46 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar46,FUN_01655ec4);
      *(undefined1 *)(iVar46 + 0x38) = 1;
      goto LAB_00e0560c;
    }
    local_224 = 0;
    local_228 = 0;
    cVar5 = '\x02';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x11c)) {
  case 0:
    uVar21 = *(undefined4 *)(param_1 + 0x18);
    uVar29 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x28) = uVar21;
    *(undefined1 *)(param_1 + 0x78) = 0;
    uVar27 = *(undefined4 *)(param_1 + 0x20);
    uVar49 = *(undefined4 *)(param_1 + 0x114);
    iVar30 = *(int *)(param_1 + 0x110) + 8;
    uVar43 = *(undefined4 *)(param_1 + 0x118);
    *(undefined2 *)(param_1 + 0x11d) = 0;
    *(undefined4 *)(param_1 + 0x30) = uVar27;
    *(undefined4 *)(param_1 + 0x2c) = uVar29;
    *(int *)(param_1 + 0x60) = iVar30;
    *(undefined4 *)(param_1 + 100) = uVar49;
    *(undefined4 *)(param_1 + 0x68) = uVar43;
LAB_00e056b4:
    *(int *)(param_1 + 0x6c) = iVar30;
    iVar30 = param_1 + 0x48;
    *(undefined4 *)(param_1 + 0x38) = uVar21;
    *(undefined4 *)(param_1 + 0x70) = uVar49;
    *(undefined4 *)(param_1 + 0x74) = uVar43;
    *(undefined4 *)(param_1 + 0x40) = uVar27;
    *(undefined4 *)(param_1 + 0x3c) = uVar29;
    FUN_01651a54(iVar30,uVar29,uVar21,uVar29,uVar27,&DAT_01878dd8);
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x84) = iVar30;
    *(int *)(param_1 + 0x80) = iVar30;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878dc8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878dc8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x78)) {
    case 0:
      uVar27 = *(undefined4 *)(param_1 + 0x30);
      uVar21 = *(undefined4 *)(param_1 + 0x28);
      iVar30 = *(int *)(param_1 + 0x60);
      uVar49 = *(undefined4 *)(param_1 + 100);
      uVar43 = *(undefined4 *)(param_1 + 0x68);
      uVar29 = *(undefined4 *)(param_1 + 0x2c);
      goto LAB_00e056b4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01878de8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01878de8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x88)) {
      case 0:
        iVar30 = *(int *)(param_1 + 0x80);
        *(int *)(param_1 + 0x84) = iVar30;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01879154);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01879154);
      case 3:
        iVar30 = *(int *)(param_1 + 0x84);
      }
      break;
    case 4:
      pbVar45 = *(byte **)(param_1 + 0x80);
      piVar48 = *(int **)(param_1 + 0x84);
      goto LAB_00e05c48;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x8c)) {
      case 0:
        iVar30 = *(int *)(param_1 + 0x80);
        goto LAB_00e05e94;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01878d88);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01878d88);
      case 3:
        goto switchD_00e05850_caseD_3;
      }
    case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x108)) {
      case 0:
        local_254 = *(uint *******)(param_1 + 0x88);
        uVar54 = *(ulonglong *)(param_1 + 0x8c);
        piVar48 = *(int **)(param_1 + 0x100);
        piVar47 = *(int **)(param_1 + 0x104);
        goto LAB_00e06084;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01878cc8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01878cc8);
      }
      pppppppuVar34 = (uint *******)(param_1 + 0xa8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0xfc)) {
      case 0:
        piVar48 = *(int **)(param_1 + 0xb8);
        pcVar44 = *(char **)(param_1 + 0xbc);
        uVar27 = *(undefined4 *)(param_1 + 0xc0);
        goto LAB_00e063a0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01878c18);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01878c18);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0xfb)) {
        case 0:
          uVar53 = *(undefined8 *)(param_1 + 0xdc);
          uVar54 = *(ulonglong *)(param_1 + 0xe4);
          uVar55 = *(ulonglong *)(param_1 + 0xec);
          piVar48 = *(int **)(param_1 + 0xf4);
          goto LAB_00e06514;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01878d18);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01878d18);
        case 3:
          uVar27 = *(undefined4 *)(param_1 + 0xd4);
          goto LAB_00e07274;
        }
      }
    }
  }
  FUN_016510c8(&local_1e8,iVar30,*param_2);
  uVar16 = 1;
  if (local_1e4._4_4_ == (uint *******)&DAT_3b9aca00) {
    uVar16 = 3;
  }
  *(undefined1 *)(param_1 + 0x88) = uVar16;
  uVar16 = 3;
  if (local_1e4._4_4_ != (uint *******)&DAT_3b9aca00) {
LAB_00e0761c:
    iVar30 = *(int *)(param_1 + 0x74);
    pbVar45 = (byte *)(param_1 + 0x79);
    *pbVar45 = 0;
    uVar42 = *(uint *)(iVar30 + 8);
    DataMemoryBarrier(0xb);
    cVar5 = *(char *)(iVar46 + 0x38);
    piVar48 = (int *)(param_1 + 0x88);
    *piVar48 = param_1 + 0x48;
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int **)(param_1 + 0x94) = (int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x98) = iVar30 + 8;
    *(uint *)(param_1 + 0x9c) = uVar42 >> 2;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(byte **)(param_1 + 0x80) = pbVar45;
    *(int **)(param_1 + 0x84) = piVar48;
LAB_00e05c48:
    puVar32 = (undefined4 *)*param_2;
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar46,FUN_005bc49c);
      *(undefined1 *)(iVar46 + 0x38) = 1;
    }
    cVar5 = *(char *)(iVar46 + 0x30);
    bVar51 = cVar5 == '\x01';
    if (bVar51) {
      cVar5 = *(char *)(iVar46 + 0x31);
    }
    if (!bVar51 || cVar5 != '\0') {
      if ((*(uint *)(iVar46 + 0x24) & 1) == 0) {
        uVar53 = FUN_0164e918();
        if ((uint)uVar53 < 2) {
          uVar53 = CONCAT44((int)((ulonglong)uVar53 >> 0x20),1);
        }
      }
      else {
        uVar53 = CONCAT44(*(undefined4 *)(iVar46 + 0x28),*(undefined4 *)(iVar46 + 0x2c));
      }
      uVar42 = (uint)((ulonglong)uVar53 >> 0x20);
      uVar20 = (uint)uVar53;
      uVar42 = uVar42 ^ uVar42 << 0x11;
      *(uint *)(iVar46 + 0x28) = uVar20;
      *(undefined4 *)(iVar46 + 0x24) = 1;
      uVar42 = uVar20 >> 0x10 ^ uVar42 >> 7 ^ uVar20 ^ uVar42;
      *(uint *)(iVar46 + 0x2c) = uVar42;
      bVar17 = *pbVar45;
      uVar6 = (uint)bVar17;
      puVar39 = &DAT_3b9aca00;
      if ((int)(uVar42 + uVar20) < 0) {
        uVar42 = (uVar6 & 2) >> 1;
        if ((bVar17 & 2) != 0) {
LAB_00e05d34:
          if ((uVar6 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar48[2]) {
            case '\0':
              iVar30 = *piVar48;
              piVar48[1] = iVar30;
              break;
            case '\x01':
switchD_00e05d48_caseD_1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_01879154);
            case '\x02':
switchD_00e05d48_caseD_2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_01879154);
            case '\x03':
              iVar30 = piVar48[1];
            }
            FUN_016510c8(&local_1e8,iVar30,puVar32);
            uVar16 = 1;
            if (local_1e4._4_4_ == (uint *******)&DAT_3b9aca00) {
              uVar16 = 3;
            }
            *(undefined1 *)(piVar48 + 2) = uVar16;
            uVar54 = local_1e4;
            if (local_1e4._4_4_ != (uint *******)&DAT_3b9aca00) goto LAB_00e05e2c;
            goto LAB_00e077ec;
          }
          goto LAB_00e05df4;
        }
        iVar30 = FUN_016638c8(piVar48 + 3,puVar32);
        bVar17 = 2;
        if (iVar30 != 0) {
          uVar6 = (uint)*pbVar45;
          goto LAB_00e05d34;
        }
LAB_00e05e30:
        *pbVar45 = *pbVar45 | bVar17;
LAB_00e05e3c:
        FUN_0163bdc0(param_1 + 0x98);
        if (*(int *)(param_1 + 0xa8) != 0) {
          (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
        }
        puVar7 = puVar39 + -999999999;
        if (puVar39 < (undefined1 *)0x3b9ac9ff) {
          puVar7 = (undefined1 *)0x0;
        }
        if (puVar7 != (undefined1 *)0x0) {
          if (puVar7 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878e08)
            ;
          }
LAB_00e076fc:
          local_218 = (undefined1 *)(param_1 + 0x78);
          local_230 = param_1 + 0x28;
          uVar27 = *(undefined4 *)(param_1 + 0x58);
          FUN_00a07b4c(uVar27);
          thunk_FUN_016d3fb4(uVar27);
          puVar32 = (undefined4 *)(param_1 + 0x74);
          FUN_01663cc4(*puVar32);
          piVar48 = (int *)*puVar32;
          DataMemoryBarrier(0xb);
          do {
            iVar30 = *piVar48;
            bVar51 = (bool)hasExclusiveAccess(piVar48);
          } while (!bVar51);
          *piVar48 = iVar30 + -1;
          if (iVar30 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01665328(puVar32);
          }
          piVar48 = *(int **)(param_1 + 0x70);
          DataMemoryBarrier(0xb);
          do {
            iVar30 = *piVar48;
            bVar51 = (bool)hasExclusiveAccess(piVar48);
          } while (!bVar51);
          *piVar48 = iVar30 + -1;
          if (iVar30 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aaaeec(*(undefined4 *)(param_1 + 0x70));
          }
          *local_218 = 1;
          FUN_00de24b0(local_230);
          piVar48 = *(int **)(param_1 + 0x110);
          DataMemoryBarrier(0xb);
          do {
            iVar30 = *piVar48;
            bVar51 = (bool)hasExclusiveAccess(piVar48);
          } while (!bVar51);
          *piVar48 = iVar30 + -1;
          uVar16 = 1;
          iVar31 = 0;
          if (iVar30 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00e45d08(*(undefined4 *)(param_1 + 0x110));
          }
          goto LAB_00e05750;
        }
        *(undefined1 *)(param_1 + 0x8c) = 0;
        iVar30 = *(int *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x80) = iVar30;
LAB_00e05e94:
        *(int *)(param_1 + 0x84) = iVar30 + 0x230;
        *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
switchD_00e05850_caseD_3:
        uVar54 = CONCAT44(&DAT_3b9aca00,local_258);
        iVar30 = FUN_00e43b0c((int *)(param_1 + 0x84),param_2);
        if (iVar30 != 0) {
          iVar31 = *(int *)(param_1 + 0x84);
          if (iVar31 != 0) {
            FUN_00e43e74(iVar31,*(undefined4 *)(param_1 + 0x88),1);
          }
          if (*(int *)(iVar30 + 0x20) == 2 && *(int *)(iVar30 + 0x24) == 0) {
            puVar32 = (undefined4 *)FUN_00f155bc("Missing tunnel handler",0x16);
            FUN_00e44114(iVar30);
            *(undefined1 *)(param_1 + 0x8c) = 1;
            (**(code **)*puVar32)(puVar32);
            goto LAB_00e076fc;
          }
          *(int *)(param_1 + 0x80) = iVar30;
          *(undefined1 *)(param_1 + 0x8c) = 1;
          iVar30 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x498) + 8);
          puVar33 = (uint *)(iVar30 + 0x98);
          uVar42 = *(uint *)(iVar30 + 0x98);
          if ((uVar42 < 0xfffffff0) && ((uVar42 & 8) == 0)) {
            if (*puVar33 != uVar42) {
              ClearExclusiveLocal();
              goto LAB_00e05f48;
            }
            bVar51 = (bool)hasExclusiveAccess(puVar33);
            if (!bVar51) goto LAB_00e05f48;
            *puVar33 = uVar42 + 0x10;
            DataMemoryBarrier(0xb);
          }
          else {
LAB_00e05f48:
            FUN_0127d66c(puVar33);
          }
          FUN_0128236c(puVar33);
          FUN_0128236c((uint)puVar33 | 1);
          if (*(int *)(iVar30 + 0xa0) != 3) {
            FUN_00ec0518(&local_90,(int *)(iVar30 + 0xa0));
            FUN_00f6f318(&local_48);
            FUN_00f6ba94(&local_1e8,&local_90,&local_48);
            uVar55 = CONCAT44(&DAT_3b9aca00,local_26c);
            if (-1 < (int)(uint *******)local_1e4) {
              local_25c = (uint ******)local_1e8;
              uVar55 = local_1e4;
              if (0x3b9ac9ffffffffff < local_1e4) {
                uVar6 = (uint)((ulonglong)((uint)local_1e4._4_4_ >> 9) * 0x44b83 >> 0x20);
                uVar42 = uVar6 >> 7;
                local_25c = (uint ******)((int)local_1e8 + uVar42);
                uVar55 = CONCAT44((int)local_1e4._4_4_ + (uVar6 >> 7) * -1000000000,
                                  (int)(uint *******)local_1e4 +
                                  (uint)CARRY4((uint)local_1e8,uVar42));
              }
            }
            local_26c = (undefined4)uVar55;
            local_254 = (uint ******)0x0;
            uVar54 = 0;
            if ((undefined1 *)(uVar55 >> 0x20) != &DAT_3b9aca00) {
              local_254 = local_25c;
              uVar54 = uVar55;
            }
          }
          local_258 = (int)uVar54;
          FUN_01282570(puVar33);
          FUN_01282570((uint)puVar33 | 1);
          DataMemoryBarrier(0xb);
          do {
            uVar42 = *puVar33;
            bVar51 = (bool)hasExclusiveAccess(puVar33);
          } while (!bVar51);
          *puVar33 = uVar42 - 0x10;
          if ((uVar42 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar33);
          }
          piVar48 = (int *)(*(int *)(param_1 + 0x80) + 0x20);
          if (*piVar48 == 2 && *(int *)(*(int *)(param_1 + 0x80) + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("BUG: Missing tunnel handler",0x1b,&DAT_0186c948);
          }
          *(uint *******)(param_1 + 0x88) = local_254;
          *(int *)(param_1 + 0x8c) = local_258;
          *(undefined1 *)(param_1 + 0x108) = 0;
          piVar47 = (int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x90) = (int)(uVar54 >> 0x20);
          *(int **)(param_1 + 0x100) = piVar48;
          *(int **)(param_1 + 0x104) = piVar47;
LAB_00e06084:
          puVar39 = (undefined1 *)(uVar54 >> 0x20);
          local_258 = (int)uVar54;
          *(undefined1 *)(param_1 + 0x109) = 0;
          iVar30 = *piVar47;
          if (*(int *)(iVar30 + 8) != 0 || *(int *)(iVar30 + 0xc) != 0) {
LAB_00e060b8:
            iVar31 = *(int *)(piVar48[0x88] + 8);
            puVar33 = (uint *)(iVar31 + 0x98);
            uVar42 = *(uint *)(iVar31 + 0x98);
            if ((uVar42 < 0xfffffff0) && ((uVar42 & 8) == 0)) {
              if (*puVar33 != uVar42) {
                ClearExclusiveLocal();
                goto LAB_00e06100;
              }
              bVar51 = (bool)hasExclusiveAccess(puVar33);
              if (!bVar51) goto LAB_00e06100;
              *puVar33 = uVar42 + 0x10;
              DataMemoryBarrier(0xb);
            }
            else {
LAB_00e06100:
              FUN_0127d66c(puVar33);
            }
            FUN_0128236c(puVar33);
            FUN_0128236c((uint)puVar33 | 1);
            if (*(int *)(iVar31 + 0x9c) != iVar30) {
              uVar27 = 10;
              pcVar44 = "Old stream";
              FUN_00a15ee8(puVar33);
              goto LAB_00e07894;
            }
            FUN_01282570(puVar33);
            FUN_01282570((uint)puVar33 | 1);
            DataMemoryBarrier(0xb);
            do {
              uVar42 = *puVar33;
              bVar51 = (bool)hasExclusiveAccess(puVar33);
            } while (!bVar51);
            *puVar33 = uVar42 - 0x10;
            if ((uVar42 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar33);
            }
            if (puVar39 == &DAT_3b9aca00) {
              pppppppuVar34 = (uint *******)0x1;
              puVar32 = (undefined4 *)0x0;
              local_1dc._0_4_ = (code *)&DAT_00000001;
              local_1e4._4_4_ = (uint *******)0x0;
              local_1e4._0_4_ = (uint *******)0x0;
              local_1e8 = (uint *******)0x1;
              unaff_r8 = (undefined4 *)0x1;
              puVar11 = (undefined4 *)0x0;
            }
            else {
              lVar1 = ZEXT48(local_254) * 1000 + CONCAT44(local_258 * 1000,(uint)puVar39 / 1000000);
              uVar6 = (uint)lVar1;
              iVar30 = (int)((ulonglong)lVar1 >> 0x20);
              local_1dc._0_4_ = (code *)&DAT_00000001;
              local_1e8 = (uint *******)0x1;
              local_1e4._4_4_ = (uint *******)0x0;
              local_1e4._0_4_ = (uint *******)0x0;
              uVar42 = LZCOUNT(uVar6 | 1) | 0x20;
              if (iVar30 != 0) {
                uVar42 = LZCOUNT(iVar30);
              }
              FUN_00f5f538(&local_1e8,1);
              *(undefined1 *)((int)local_1e8 + (int)(uint *******)local_1e4) = 10;
              if (local_1e4._4_4_ == (uint *******)local_1e4) goto LAB_00e062d8;
              pppppppuVar34 = (uint *******)((int)(uint *******)local_1e4 + 1);
              cVar5 = (char)((uVar42 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
              if (local_1e4._4_4_ == pppppppuVar34) {
                local_1e4._0_4_ = pppppppuVar34;
                FUN_00f5f538(&local_1e8,1);
                *(char *)((int)local_1e8 + (int)(uint *******)local_1e4) = cVar5;
                if (local_1e4._4_4_ == (uint *******)local_1e4) goto LAB_00e062d8;
                local_1e4._0_4_ = (uint *******)((int)(uint *******)local_1e4 + 1);
                if (local_1e4._4_4_ == (uint *******)local_1e4) goto LAB_00e062b4;
LAB_00e0661c:
                *(undefined1 *)((int)local_1e8 + (int)(uint *******)local_1e4) = 8;
              }
              else {
                *(char *)((int)local_1e8 + (int)pppppppuVar34) = cVar5;
                local_1e4._0_4_ = (uint *******)((int)(uint *******)local_1e4 + 2);
                if (local_1e4._4_4_ != (uint *******)local_1e4) goto LAB_00e0661c;
LAB_00e062b4:
                FUN_00f5f538(&local_1e8,1);
                *(undefined1 *)((int)local_1e8 + (int)(uint *******)local_1e4) = 8;
                if (local_1e4._4_4_ == (uint *******)local_1e4) {
LAB_00e062d8:
                  local_48 = (uint *******)0x1;
                  local_44 = (uint *******)0x0;
                    /* WARNING: Subroutine does not return */
                  FUN_00f600c0();
                }
              }
              local_1e4._0_4_ = (uint *******)((int)(uint *******)local_1e4 + 1);
              FUN_010e4ad0(uVar6,iVar30,&local_1e8);
              puVar32 = (uint *******)local_1e4;
              pppppppuVar34 = local_1e8;
              puVar11 = (undefined4 *)0x0;
              if ((int)(uint *******)local_1e4 < 0) {
LAB_00e06650:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(puVar11,local_264);
              }
              if ((uint *******)local_1e4 == (uint *******)0x0) {
                unaff_r8 = (undefined4 *)0x1;
              }
              else {
                unaff_r8 = (undefined4 *)thunk_FUN_016d4a50((uint *******)local_1e4);
                if (unaff_r8 == (undefined4 *)0x0) {
                  puVar11 = (undefined4 *)0x1;
                  local_264 = puVar32;
                  goto LAB_00e06650;
                }
                puVar11 = puVar32;
              }
            }
            *(undefined4 *)(param_1 + 0x98) = puVar11;
            *(undefined4 **)(param_1 + 0x9c) = unaff_r8;
            FUN_016dd1aa(unaff_r8,pppppppuVar34,puVar32);
            pcVar8 = (code *)local_1dc;
            *(undefined4 **)(param_1 + 0xa0) = puVar32;
            if (((uint)(code *)local_1dc & 1) == 0) {
              pcVar18 = (code *)local_1dc + 0x10;
              DataMemoryBarrier(0xb);
              do {
                iVar30 = *(int *)pcVar18;
                bVar51 = (bool)hasExclusiveAccess(pcVar18);
              } while (!bVar51);
              *(int *)pcVar18 = iVar30 + -1;
              if (iVar30 == 1) {
                DataMemoryBarrier(0xb);
                if (*(int *)(code *)local_1dc != 0) {
                  thunk_FUN_016d3fb4(*(int *)((code *)local_1dc + 4));
                }
                goto LAB_00e06340;
              }
            }
            else if ((undefined1 *)((int)local_1e4._4_4_ + ((uint)(code *)local_1dc >> 5)) !=
                     (undefined1 *)0x0) {
              pcVar8 = (code *)((int)pppppppuVar34 - ((uint)(code *)local_1dc >> 5));
LAB_00e06340:
              thunk_FUN_016d3fb4(pcVar8);
            }
            pcVar44 = "license-keepalive";
            *(undefined1 *)(param_1 + 0x109) = 1;
            *(undefined4 *)(param_1 + 0xa4) = 0x20003;
            *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x98);
            uVar27 = 0x11;
            *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x9c);
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa0);
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
            *(int **)(param_1 + 0xb8) = piVar48;
            *(undefined1 *)(param_1 + 0xfc) = 0;
            *(undefined1 *)(param_1 + 0x109) = 0;
            *(char **)(param_1 + 0xbc) = "license-keepalive";
            *(undefined4 *)(param_1 + 0xc0) = 0x11;
LAB_00e063a0:
            *(char **)(param_1 + 0xc4) = pcVar44;
            *(undefined4 *)(param_1 + 200) = uVar27;
            local_d8 = *(uint *******)(param_1 + 0xa8);
            local_d4 = *(undefined4 *)(param_1 + 0xac);
            uStack_d0 = *(undefined4 *)(param_1 + 0xb0);
            *(undefined1 *)(param_1 + 0xfd) = 0;
            local_cc = *(undefined4 *)(param_1 + 0xb4);
            FUN_010e5f34(&local_48,&local_d8);
            pppppppuVar15 = local_40;
            pppppppuVar34 = local_44;
            if (local_48 != (uint *******)0x80000001) {
              local_1e8 = local_48;
              local_1e4._0_4_ = local_44;
              local_1e4._4_4_ = local_40;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("BUG: Failed to pack serialized telemetry data to stratum structure",0x42
                           ,&local_1e8,&DAT_018790e4,&DAT_01878c08);
            }
            local_240 = local_40;
            *(undefined1 *)(param_1 + 0xfd) = 1;
            uVar53 = FUN_00ed5b54(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
            puVar33 = (uint *)thunk_FUN_016d4a50(4);
            if (puVar33 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,4);
            }
            uVar42 = *(uint *)(piVar48[0x86] + 8);
            ClearExclusiveLocal();
            local_264 = unaff_r8;
            if ((uVar42 & *(uint *)(piVar48[0x86] + 0xc)) != 0xffffffff) {
              *puVar33 = uVar42;
              *(undefined4 *)(param_1 + 0xcc) = 0;
              *(uint *)(param_1 + 0xd0) = uVar42;
              local_40 = (uint *******)0x1;
              local_48 = (uint *******)0x1;
              local_44 = (uint *******)puVar33;
              uVar54 = FUN_0136045c(&local_48);
              if (0xffffffffffff < uVar54) {
                thunk_FUN_016d3fb4((int)uVar54);
                local_1e4._4_4_ = (uint *******)0xffff;
                local_1e4._0_4_ = (uint *******)0x0;
                local_1e8 = (uint *******)(uint ******)(uVar54 >> 0x20);
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,
                             &local_1e8,&DAT_0187c0f4,&DAT_0187e6a0);
              }
              pppppppuVar9 = (uint *******)thunk_FUN_016d4a50(8);
              if (pppppppuVar9 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,8);
              }
              *pppppppuVar9 = (uint ******)pppppppuVar34;
              pppppppuVar9[1] = (uint ******)pppppppuVar15;
              *(undefined1 *)(param_1 + 0xfd) = 0;
              local_40 = (uint *******)&DAT_00000001;
              local_48 = (uint *******)&DAT_00000001;
              local_44 = pppppppuVar9;
              uVar55 = FUN_00f1f544(&local_48);
              ppppppuVar28 = (uint ******)(uVar55 >> 0x20);
              if (0xffffffffffff < uVar55) {
                ppppppuVar14 = (uint ******)0x0;
                do {
                  puVar32 = (undefined4 *)((int)uVar55 + (int)ppppppuVar14 * 8);
                  if (puVar32[1] != 0) {
                    thunk_FUN_016d3fb4(*puVar32);
                  }
                  ppppppuVar14 = (uint ******)((int)ppppppuVar14 + 1);
                } while (ppppppuVar28 != ppppppuVar14);
                thunk_FUN_016d3fb4((int)uVar55);
                local_1e4._4_4_ = (uint *******)0xffff;
                local_1e4._0_4_ = (uint *******)0x0;
                local_1e8 = (uint *******)ppppppuVar28;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,
                             &local_1e8,&DAT_0187c0f4,&DAT_0187e6a0);
              }
              piVar48 = piVar48 + 0x70;
              *(undefined1 *)(param_1 + 0xfb) = 0;
              *(undefined8 *)(param_1 + 0xdc) = uVar53;
              *(ulonglong *)(param_1 + 0xe4) = uVar54;
              *(ulonglong *)(param_1 + 0xec) = uVar55;
              *(int **)(param_1 + 0xf4) = piVar48;
LAB_00e06514:
              pppppppuVar15 = (uint *******)(uVar55 >> 0x20);
              iVar31 = (int)uVar55;
              local_22c = (uint *******)(uVar54 >> 0x20);
              local_24c = (uint *******)uVar54;
              local_1ec = (uint *****)((ulonglong)uVar53 >> 0x20);
              local_1f4 = (undefined4)uVar53;
              *(undefined1 *)(param_1 + 0xfa) = 1;
              *(undefined2 *)(param_1 + 0xf8) = 0x101;
              iVar30 = piVar48[9];
              *(undefined1 *)(param_1 + 0xfa) = 0;
              *(undefined2 *)(param_1 + 0xf8) = 0;
              pcVar44 = (char *)(iVar30 + 0x10);
              if (*pcVar44 == '\0') {
                bVar51 = (bool)hasExclusiveAccess(pcVar44);
                if (!bVar51) goto LAB_00e0655c;
                *pcVar44 = '\x01';
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_00e0655c:
                FUN_01280da8(pcVar44);
              }
              pppppppuVar9 = (uint *******)0xe0656c;
              FUN_0128236c(pcVar44);
              local_c8 = local_22c;
              local_c4 = pppppppuVar15;
              if (local_22c != pppppppuVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb3aac(0,&local_c8,&local_c4,
                             "BUG: device_ids and payloads need to be the same length",0x6f,
                             &DAT_0187c09c);
              }
              uVar42 = (int)pppppppuVar15 * 4;
              bVar52 = (uint *******)0x3ffffffe < pppppppuVar15;
              bVar51 = pppppppuVar15 == (uint *******)0x3fffffff;
              uVar27 = 0;
              if (uVar55 < 0x4000000000000000) {
                bVar52 = 0x7ffffffb < uVar42;
                bVar51 = uVar42 == 0x7ffffffc;
              }
              if (bVar52 && !bVar51) {
LAB_00e06594:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar27,uVar42);
              }
              iVar10 = 4;
              pppppppuVar40 = (uint *******)0x0;
              pppppppuVar37 = (uint *******)0x0;
              if (uVar42 != 0) {
                pppppppuVar9 = (uint *******)0xe065d0;
                iVar10 = thunk_FUN_016d4a50(uVar42);
                if (iVar10 == 0) {
                  uVar27 = 4;
                  goto LAB_00e06594;
                }
                pppppppuVar37 = pppppppuVar15;
              }
              uVar42 = (int)pppppppuVar15 * 8;
              bVar52 = (uint *******)0x1ffffffe < pppppppuVar15;
              bVar51 = pppppppuVar15 == (uint *******)0x1fffffff;
              if (uVar55 < 0x2000000000000000) {
                bVar52 = 0x7ffffffb < uVar42;
                bVar51 = uVar42 == 0x7ffffffc;
              }
              local_b8 = (uint *******)0x0;
              local_c0 = pppppppuVar37;
              local_bc = iVar10;
              if (bVar52 && !bVar51) {
LAB_00e065f8:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(pppppppuVar40,uVar42);
              }
              pppppppuVar12 = (uint *******)&DAT_00000004;
              pppppppuVar37 = (uint *******)0x0;
              if (uVar42 != 0) {
                pppppppuVar9 = (uint *******)0xe0668c;
                pppppppuVar12 = (uint *******)thunk_FUN_016d4a50(uVar42);
                if (pppppppuVar12 == (uint *******)0x0) {
                  pppppppuVar40 = (uint *******)&DAT_00000004;
                  goto LAB_00e065f8;
                }
                pppppppuVar37 = pppppppuVar15;
              }
              puVar32 = (undefined4 *)(iVar31 + (int)pppppppuVar15 * 8);
              local_a8 = (uint *******)0x0;
              local_1c4 = 0;
              local_1c8 = 0;
              pppppppuVar13 = local_24c + (int)pppppppuVar15;
              local_1e4._0_4_ = local_24c;
              local_1e8 = local_24c;
              local_1dc._0_4_ = (code *)pppppppuVar13;
              local_1dc._4_4_ = (uint *******)iVar31;
              local_1cc = puVar32;
              local_b0 = pppppppuVar37;
              local_ac = pppppppuVar12;
              uVar54 = uVar55;
              if (pppppppuVar15 != (uint *******)0x0) {
                pppppppuVar37 = local_24c;
LAB_00e0674c:
                local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
                local_1d4._4_4_ = (undefined4)(uVar55 >> 0x20);
                puVar11 = (undefined4 *)uVar55;
                pppppppuVar12 = pppppppuVar37 + 1;
                ppppppuVar28 = *pppppppuVar37;
                local_1e4._0_4_ = pppppppuVar12;
                uVar3 = uVar55;
                if (puVar11 != puVar32) {
                  ppppppuVar14 = (uint ******)*puVar11;
                  ppppppuVar19 = (uint ******)puVar11[1];
                  puVar11 = puVar11 + 2;
                  pppppppuVar37 = pppppppuVar12;
                  local_1d4._0_4_ = puVar11;
                  local_a0 = ppppppuVar28;
                  if (*(int *)(iVar30 + 0x28) != 0) {
                    puVar33 = (uint *)FUN_011e4df8();
                    ppppppuVar38 = local_a0;
                    uVar20 = *puVar33;
                    uVar22 = puVar33[1];
                    uVar25 = puVar33[2] ^ (uint)ppppppuVar28;
                    uVar42 = puVar33[3];
                    uVar6 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 |
                            (uVar42 >> 0x10 & 0xff) << 8 | uVar42 >> 0x18;
                    lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
                    uVar35 = (uint)lVar1;
                    uVar6 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                             (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) * -0x4c957f2e +
                            uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
                    uVar23 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                             (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18;
                    uVar42 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                              (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) ^
                             uVar42 * 0x2df45158 +
                             uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20);
                    uVar25 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) ^
                             (uint)((ulonglong)uVar25 * 0x2df45158);
                    lVar1 = (ulonglong)uVar23 * (ulonglong)uVar25;
                    uVar6 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 |
                            (uVar42 >> 0x10 & 0xff) << 8 | uVar42 >> 0x18;
                    lVar2 = (ulonglong)~uVar20 * (ulonglong)uVar6;
                    uVar35 = (uint)lVar2;
                    uVar6 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                             (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) * ~uVar20 +
                            uVar6 * ~uVar22 + (int)((ulonglong)lVar2 >> 0x20);
                    pppppppuVar9 = (uint *******)0x0;
                    uVar20 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                              (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) ^
                             uVar42 * uVar23 +
                             uVar25 * (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                       (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) +
                             (int)((ulonglong)lVar1 >> 0x20);
                    uVar42 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) ^ (uint)lVar1;
                    uVar6 = uVar20;
                    if ((uVar25 & 0x20) != 0) {
                      uVar6 = uVar42;
                      uVar42 = uVar20;
                    }
                    puVar39 = (undefined1 *)
                              (uVar42 << (uVar25 & 0x1f) | (uVar6 >> 1) >> (~uVar25 & 0x1f));
                    uVar42 = (uint)puVar39 >> 0x19;
                    while( true ) {
                      pppppppuVar40 = (uint *******)(*(uint *)(iVar30 + 0x20) & (uint)puVar39);
                      uVar20 = *(uint *)(*(int *)(iVar30 + 0x1c) + (int)pppppppuVar40);
                      pppppppuVar37 = (uint *******)0x80808080;
                      uVar6 = uVar20 ^ uVar42 * 0x1010101;
                      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
                      while (uVar6 != 0) {
                        uVar22 = uVar6 >> 8;
                        uVar23 = uVar6 >> 0x10;
                        uVar25 = uVar6 >> 0x18;
                        uVar35 = uVar6 << 0x18;
                        pppppppuVar37 = (uint *******)(uVar6 - 1);
                        uVar6 = (uint)pppppppuVar37 & uVar6;
                        if (ppppppuVar28 ==
                            *(uint *******)
                             (*(int *)(iVar30 + 0x1c) + -8 +
                             ((uint)((int)pppppppuVar40 +
                                    ((uint)LZCOUNT(uVar35 | (uVar22 & 0xff) << 0x10 |
                                                   (uVar23 & 0xff) << 8 | uVar25) >> 3)) &
                             *(uint *)(iVar30 + 0x20)) * -8)) {
                          if (*(int *)(iVar30 + 0x48) == 0) goto LAB_00e06ecc;
                          puVar33 = (uint *)FUN_011e4df8();
                          uVar22 = *puVar33;
                          uVar23 = puVar33[1];
                          uVar20 = puVar33[2] ^ (uint)ppppppuVar38;
                          uVar42 = puVar33[3];
                          uVar6 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 |
                                  (uVar42 >> 0x10 & 0xff) << 8 | uVar42 >> 0x18;
                          lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
                          uVar25 = (uint)lVar1;
                          uVar6 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) * -0x4c957f2e +
                                  uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
                          uVar25 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                    (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) ^
                                   uVar42 * 0x2df45158 +
                                   uVar20 * 0x2d7f954c +
                                   (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
                          uVar42 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                   (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18;
                          uVar20 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) ^
                                   (uint)((ulonglong)uVar20 * 0x2df45158);
                          lVar1 = (ulonglong)uVar42 * (ulonglong)uVar20;
                          uVar6 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                  (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18;
                          lVar2 = (ulonglong)~uVar22 * (ulonglong)uVar6;
                          uVar35 = (uint)lVar2;
                          uVar6 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) * ~uVar22 +
                                  uVar6 * ~uVar23 + (int)((ulonglong)lVar2 >> 0x20);
                          pppppppuVar9 = *(uint ********)(iVar30 + 0x3c);
                          iVar10 = 0;
                          uVar22 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                    (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) ^
                                   uVar25 * uVar42 +
                                   uVar20 * (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                             (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) +
                                   (int)((ulonglong)lVar1 >> 0x20);
                          uVar42 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) ^ (uint)lVar1;
                          uVar6 = uVar22;
                          if ((uVar20 & 0x20) != 0) {
                            uVar6 = uVar42;
                            uVar42 = uVar22;
                          }
                          puVar39 = (undefined1 *)
                                    (uVar42 << (uVar20 & 0x1f) | (uVar6 >> 1) >> (~uVar20 & 0x1f));
                          uVar42 = (uint)puVar39 >> 0x19;
                          goto LAB_00e06a3c;
                        }
                      }
                      if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
                      pppppppuVar9 = pppppppuVar9 + 1;
                      puVar39 = (undefined1 *)((int)pppppppuVar9 + (int)pppppppuVar40);
                    }
                  }
                  if (DAT_018d9130 < 4) {
                    uVar42 = (uint)DAT_018da5d4;
                    if (uVar42 - 1 < 2) {
LAB_00e06af4:
                      if (uVar42 != 2) {
                        DataMemoryBarrier(0xb);
                        pppppppuVar40 = (uint *******)&DAT_018daa64;
                        puVar41 = DAT_018daa78;
                        if (DAT_018dd984 != 2) {
                          puVar41 = &DAT_018ae394;
                        }
                        pcVar24 = s_SetGloba_00414c05;
                        if ((DAT_018dd984 == 2) && (pcVar24 = DAT_018daa74, DAT_018daa70 != 0)) {
                          pcVar24 = DAT_018daa74 + (*(int *)(puVar41 + 8) - 1U & 0xfffffff8) + 8;
                        }
                        pppppppuVar9 = (uint *******)0xe06b6c;
                        iVar10 = (**(code **)(puVar41 + 0x14))(pcVar24);
                        if (iVar10 == 0) goto LAB_00e070d4;
                      }
                      piVar48 = (int *)(DAT_018da5cc + 0x1c);
                      pppppppuVar26 = *(uint ********)(DAT_018da5cc + 0x20);
                      pppppppuVar50 = pppppppuVar9;
                      if (pppppppuVar26 != (uint *******)0x0) {
                        local_74 = *(undefined4 *)(DAT_018da5cc + 0x20);
                        pppppppuVar40 = *(uint ********)(DAT_018da5cc + 0x24);
                        pppppppuVar50 = (uint *******)0x0;
                        local_78 = (uint *******)*piVar48;
                        local_70 = *(uint ********)(DAT_018da5cc + 0x24);
                        local_6c = *(undefined4 *)(DAT_018da5cc + 0x28);
                        pppppppuVar37 = *(uint ********)(DAT_018da5cc + 0x28);
                        local_68 = 0;
                        local_60 = 0x41;
                        local_64 = (uint ******)&DAT_00566a70;
                      }
                      if (pppppppuVar26 < &SUB_00000002) {
                        puVar41 = &DAT_0187c0bc;
                        goto LAB_00e07968;
                      }
                      local_80 = (uint ******)&local_a0;
                      local_84 = (uint *******)&local_5c;
                      local_8c = &local_64;
                      local_90 = (uint *******)&local_78;
                      local_9c = (uint *******)&local_90;
                      local_4c = 1;
                      local_98 = 2;
                      local_7c = &DAT_018a4904;
                      local_88 = (uint *******)&DAT_018abb78;
                      local_38 = (uint *******)&local_9c;
                      local_48 = (uint *******)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      pcVar24 = s_SetGloba_00414c05;
                      puVar41 = &DAT_018ae394;
                      if (DAT_018dd984 == 2) {
                        pcVar24 = DAT_018daa74;
                        puVar41 = DAT_018daa78;
                        if (DAT_018daa70 != 0) {
                          pcVar24 = DAT_018daa74 +
                                    (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                        }
                      }
                      pppppppuVar9 = (uint *******)0xe06cb4;
                      local_94 = piVar48;
                      local_5c = (uint *******)*piVar48;
                      local_58 = pppppppuVar26;
                      local_54 = pppppppuVar40;
                      local_50 = pppppppuVar37;
                      local_44 = pppppppuVar50;
                      local_34 = DAT_018da5cc;
                      iVar10 = (**(code **)(puVar41 + 0x28))(pcVar24,&local_48);
                      if (iVar10 != 0) {
                        pppppppuVar9 = (uint *******)0xe06ccc;
                        (**(code **)(puVar41 + 0x2c))(pcVar24,&local_48);
                      }
                    }
                    else if (uVar42 != 0) {
                      pppppppuVar9 = (uint *******)0xe07130;
                      uVar42 = FUN_0169ac90(&DAT_018da5cc);
                      uVar42 = uVar42 & 0xff;
                      if (uVar42 != 0) goto LAB_00e06af4;
                    }
                  }
                  goto LAB_00e070d4;
                }
                goto LAB_00e07140;
              }
              goto LAB_00e07148;
            }
            pppppppuVar15 = (uint *******)FUN_00ac0588(&DAT_0034df3c,0x19);
            *(undefined4 *)(param_1 + 0xcc) = 1;
            *(uint ********)(param_1 + 0xd0) = pppppppuVar15;
            thunk_FUN_016d3fb4(puVar33);
            if ((int)((ulonglong)uVar53 >> 0x20) != 0) {
              thunk_FUN_016d3fb4((int)uVar53);
            }
            goto LAB_00e07380;
          }
          uVar27 = 0xf;
          pcVar44 = "Disabled stream";
          if (*(int *)(iVar30 + 0x10) != 0) goto LAB_00e060b8;
LAB_00e07894:
          local_40 = (uint *******)FUN_00f155bc(pcVar44,uVar27);
          local_1e8 = (uint *******)0x3;
          local_44 = (uint *******)&DAT_00000017;
          local_48 = (uint *******)0x358164;
          pppppppuVar15 = (uint *******)FUN_00f1f71c(&local_48,&local_1e8);
          goto LAB_00e073b4;
        }
        *(undefined1 *)(param_1 + 0x8c) = 3;
        uVar16 = 5;
      }
      else {
        uVar42 = uVar6 & 1;
        if ((bVar17 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar48[2]) {
          case '\0':
            iVar30 = *piVar48;
            piVar48[1] = iVar30;
            break;
          case '\x01':
            goto switchD_00e05d48_caseD_1;
          case '\x02':
            goto switchD_00e05d48_caseD_2;
          case '\x03':
            iVar30 = piVar48[1];
          }
          FUN_016510c8(&local_1e8,iVar30,puVar32);
          uVar16 = 1;
          if (local_1e4._4_4_ == (uint *******)&DAT_3b9aca00) {
            uVar16 = 3;
          }
          *(undefined1 *)(piVar48 + 2) = uVar16;
          uVar54 = local_1e4;
          if (local_1e4._4_4_ != (uint *******)&DAT_3b9aca00) {
LAB_00e05e2c:
            local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
            bVar17 = 1;
            puVar39 = (undefined1 *)local_1e4._4_4_;
            local_1e4 = uVar54;
            goto LAB_00e05e30;
          }
          uVar6 = (uint)*pbVar45;
        }
        if ((uVar6 & 2) == 0) {
          iVar30 = FUN_016638c8(piVar48 + 3,puVar32);
          bVar17 = 2;
          if (iVar30 == 0) goto LAB_00e05e30;
        }
        else {
LAB_00e05df4:
          puVar39 = (undefined1 *)0x3b9aca01;
          if (uVar42 == 1) goto LAB_00e05e3c;
        }
LAB_00e077ec:
        uVar16 = 4;
      }
    }
    else {
      uVar16 = 4;
      FUN_016455a4(*puVar32,puVar32[1]);
    }
  }
LAB_00e05740:
  local_218 = (undefined1 *)(param_1 + 0x78);
  iVar31 = 1;
  *local_218 = uVar16;
  uVar16 = 3;
LAB_00e05750:
  cVar5 = *(char *)(iVar46 + 0x38);
  *(undefined1 *)(param_1 + 0x11c) = uVar16;
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') goto joined_r0x00e05770;
    FUN_015e8e6c(iVar46,FUN_01655ec4);
    *(undefined1 *)(iVar46 + 0x38) = 1;
  }
  *(undefined4 *)(iVar46 + 0x18) = local_224;
  *(undefined4 *)(iVar46 + 0x1c) = local_228;
joined_r0x00e05770:
  if (iVar31 == 0) {
    local_1e8 = (uint *******)0x2;
    FUN_00e08480(param_1,&local_1e8);
    return 0;
  }
  return iVar31;
LAB_00e06a3c:
  pppppppuVar40 = (uint *******)(*(uint *)(iVar30 + 0x40) & (uint)puVar39);
  uVar20 = *(uint *)((int)pppppppuVar9 + (int)pppppppuVar40);
  uVar6 = uVar20 ^ uVar42 * 0x1010101;
  uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
  while (uVar6 != 0) {
    uVar22 = uVar6 >> 8;
    uVar23 = uVar6 >> 0x10;
    uVar25 = uVar6 >> 0x18;
    uVar35 = uVar6 << 0x18;
    uVar6 = uVar6 - 1 & uVar6;
    uVar22 = (uint)((int)pppppppuVar40 +
                   ((uint)LZCOUNT(uVar35 | (uVar22 & 0xff) << 0x10 | (uVar23 & 0xff) << 8 | uVar25)
                   >> 3)) & *(uint *)(iVar30 + 0x40);
    if (ppppppuVar38 == pppppppuVar9[uVar22 * -5 + -5]) {
      if (pppppppuVar9[uVar22 * -5 + -1] == (uint ******)0x0) goto LAB_00e06ecc;
      puVar33 = (uint *)FUN_011e4df8();
      uVar25 = *puVar33;
      uVar20 = puVar33[1];
      uVar42 = puVar33[2];
      local_44 = (uint *******)puVar33[5];
      uVar6 = puVar33[6];
      *(uint *)(extraout_r2 + 0x14) = puVar33[3];
      local_48 = (uint *******)puVar33[4];
      uVar23 = puVar33[7];
      *(uint *)(extraout_r2 + 0x10) = uVar42;
      *(uint *)(extraout_r2 + 8) = uVar6;
      *(uint *)(extraout_r2 + 0xc) = uVar23;
      *(uint *)(extraout_r2 + 0x18) = uVar25;
      *(uint *)(extraout_r2 + 0x1c) = uVar20;
      FUN_01352290(&local_48,local_1f4,local_1ec);
      uVar6 = *(uint *)(extraout_r2 + 0x18);
      uVar42 = *(uint *)(extraout_r2 + 0x1c);
      uVar23 = *(uint *)(extraout_r2 + 0x10);
      uVar25 = *(uint *)(extraout_r2 + 0x14);
      uVar20 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
               uVar42 >> 0x18;
      lVar1 = (ulonglong)uVar23 * (ulonglong)uVar20;
      uVar35 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
               uVar25 >> 0x18;
      lVar2 = (ulonglong)~uVar6 * (ulonglong)uVar35;
      uVar36 = (uint)lVar2;
      uVar42 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) * ~uVar6 + uVar35 * ~uVar42 + (int)((ulonglong)lVar2 >> 0x20);
      uVar42 = (uint)lVar1 ^
               (uVar42 * 0x1000000 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
               uVar42 >> 0x18);
      ppppppuVar38 = pppppppuVar9[uVar22 * -5 + -4];
      ppppppuVar28 = pppppppuVar9[uVar22 * -5 + -3];
      uVar20 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18) * uVar23 + uVar20 * uVar25 + (int)((ulonglong)lVar1 >> 0x20) ^
               (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18);
      uVar6 = uVar20;
      if ((uVar23 & 0x20) != 0) {
        uVar6 = uVar42;
        uVar42 = uVar20;
      }
      uVar6 = uVar42 << (uVar23 & 0x1f) | (uVar6 >> 1) >> (~uVar23 & 0x1f);
      uVar42 = uVar6 >> 0x19;
      local_210 = 0;
      pppppppuVar9 = (uint *******)0xe06d40;
      goto LAB_00e06ddc;
    }
  }
  if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) goto LAB_00e06ecc;
  iVar10 = iVar10 + 4;
  puVar39 = (undefined1 *)(iVar10 + (int)pppppppuVar40);
  goto LAB_00e06a3c;
LAB_00e06ddc:
  uVar6 = (uint)ppppppuVar28 & uVar6;
  pppppppuVar40 = *(uint ********)((int)ppppppuVar38 + uVar6);
  uVar20 = (uint)pppppppuVar40 ^ uVar42 * 0x1010101;
  for (uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff; uVar20 != 0;
      uVar20 = uVar20 - 1 & uVar20) {
    uVar22 = uVar6 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                    (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
             (uint)ppppppuVar28;
    if (local_1ec == ppppppuVar38[uVar22 * -3 + -1]) {
      pppppppuVar9 = (uint *******)0xe06e7c;
      iVar10 = thunk_FUN_016dd50a(local_1f4,ppppppuVar38[uVar22 * -3 + -2],local_1ec);
      ppppppuVar4 = local_a0;
      pppppppuVar37 = local_b8;
      if (iVar10 == 0) {
        if (local_b8 == local_c0) {
          pppppppuVar9 = (uint *******)0xe06ea0;
          FUN_005fd37c(&local_c0);
        }
        pppppppuVar50 = local_a8;
        *(uint *******)(local_bc + (int)pppppppuVar37 * 4) = ppppppuVar4;
        local_b8 = (uint *******)((int)pppppppuVar37 + 1);
        if (local_a8 == local_b0) {
          pppppppuVar9 = (uint *******)0xe06ec8;
          FUN_010e549c(&local_b0);
        }
        local_ac[(int)pppppppuVar50 * 2] = ppppppuVar14;
        (local_ac + (int)pppppppuVar50 * 2)[1] = ppppppuVar19;
        local_a8 = (uint *******)((int)pppppppuVar50 + 1);
        goto LAB_00e06740;
      }
    }
  }
  if (((uint)pppppppuVar40 & 0x80808080 & (int)pppppppuVar40 << 1) != 0) goto LAB_00e06ecc;
  local_210 = local_210 + 4;
  uVar6 = local_210 + uVar6;
  goto LAB_00e06ddc;
LAB_00e06ecc:
  if (3 < DAT_018d9130) goto LAB_00e070d4;
  uVar42 = (uint)DAT_018da5c8;
  if (1 < uVar42 - 1) {
    if (uVar42 == 0) goto LAB_00e070d4;
    pppppppuVar9 = (uint *******)0xe07108;
    uVar42 = FUN_0169ac90(&DAT_018da5c0);
    uVar42 = uVar42 & 0xff;
    if (uVar42 == 0) goto LAB_00e070d4;
  }
  if (uVar42 != 2) {
    DataMemoryBarrier(0xb);
    pppppppuVar40 = (uint *******)&DAT_018daa64;
    puVar41 = DAT_018daa78;
    if (DAT_018dd984 != 2) {
      puVar41 = &DAT_018ae394;
    }
    pcVar24 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar24 = DAT_018daa74, DAT_018daa70 != 0)) {
      pcVar24 = DAT_018daa74 + (*(int *)(puVar41 + 8) - 1U & 0xfffffff8) + 8;
    }
    pppppppuVar9 = (uint *******)0xe06f78;
    iVar10 = (**(code **)(puVar41 + 0x14))(pcVar24);
    if (iVar10 == 0) goto LAB_00e070d4;
  }
  if (*(int *)(DAT_018da5c0 + 0x20) == 0) {
    puVar41 = &DAT_0187c0ac;
LAB_00e07968:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,puVar41);
  }
  pppppppuVar40 = (uint *******)(DAT_018da5c0 + 0x1c);
  local_90 = (uint *******)*pppppppuVar40;
  local_58 = (uint *******)&local_9c;
  local_8c = *(uint ********)(DAT_018da5c0 + 0x20);
  local_88 = *(uint ********)(DAT_018da5c0 + 0x24);
  local_84 = *(uint ********)(DAT_018da5c0 + 0x28);
  local_78 = (uint *******)&local_5c;
  local_5c = (uint *******)&local_90;
  local_80 = (uint ******)0x0;
  local_74 = 1;
  local_54 = (uint *******)&DAT_018abb78;
  local_98 = 0x5d;
  local_44 = (uint *******)0x0;
  local_9c = (uint *******)0x35aad9;
  local_38 = (uint *******)&local_78;
  local_48 = (uint *******)&DAT_00000001;
  DataMemoryBarrier(0xb);
  pcVar24 = s_SetGloba_00414c05;
  puVar41 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar24 = DAT_018daa74;
    puVar41 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar24 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  pppppppuVar9 = (uint *******)0xe07088;
  local_70 = pppppppuVar40;
  local_34 = DAT_018da5c0;
  iVar10 = (**(code **)(puVar41 + 0x28))(pcVar24,&local_48);
  if (iVar10 != 0) {
    pppppppuVar9 = (uint *******)0xe070a0;
    (**(code **)(puVar41 + 0x2c))(pcVar24,&local_48);
  }
LAB_00e070d4:
  if (ppppppuVar19 != (uint ******)0x0) {
    pppppppuVar9 = (uint *******)0xe070f4;
    thunk_FUN_016d3fb4(ppppppuVar14);
  }
LAB_00e06740:
  uVar54 = CONCAT44(local_1e4._4_4_,(undefined4 *)local_1d4);
  uVar3 = CONCAT44(local_1d4._4_4_,puVar11);
  uVar55 = CONCAT44(local_1d4._4_4_,puVar11);
  pppppppuVar37 = pppppppuVar12;
  if (pppppppuVar12 == pppppppuVar13) goto LAB_00e07140;
  goto LAB_00e0674c;
LAB_00e07140:
  local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
  local_1d4._0_4_ = (undefined4 *)uVar54;
  local_1d4._4_4_ = (undefined4)(uVar3 >> 0x20);
  thunk_FUN_016d3fb4(local_24c);
  uVar54 = CONCAT44(local_1e4._4_4_,(undefined4 *)local_1d4);
  uVar55 = CONCAT44(local_1d4._4_4_,(int)uVar3);
LAB_00e07148:
  local_1d4._4_4_ = (undefined4)(uVar55 >> 0x20);
  uVar42 = (int)puVar32 - (int)uVar55;
  if (uVar42 != 0) {
    piVar48 = (int *)((int)uVar55 + 4);
    uVar42 = uVar42 >> 3;
    do {
      local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
      local_1d4._0_4_ = (undefined4 *)uVar54;
      if (*piVar48 != 0) {
        thunk_FUN_016d3fb4(piVar48[-1]);
        uVar54 = CONCAT44(local_1e4._4_4_,(undefined4 *)local_1d4);
      }
      piVar48 = piVar48 + 2;
      uVar42 = uVar42 - 1;
    } while (uVar42 != 0);
  }
  local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
  local_1d4._0_4_ = (undefined4 *)uVar54;
  if (pppppppuVar15 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(iVar31);
    uVar54 = CONCAT44(local_1e4._4_4_,(undefined4 *)local_1d4);
  }
  local_1e4._4_4_ = (uint *******)(uVar54 >> 0x20);
  local_1d4._0_4_ = (undefined4 *)uVar54;
  local_48 = local_c0;
  local_44 = (uint *******)local_bc;
  local_40 = local_b8;
  uVar54 = FUN_0136045c(&local_48);
  if (0xffffffffffff < uVar54) {
    thunk_FUN_016d3fb4((int)uVar54);
    local_1e4._4_4_ = (uint *******)0xffff;
    local_1e4._0_4_ = (uint *******)0x0;
    local_1e8 = (uint *******)(uint ******)(uVar54 >> 0x20);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,&local_1e8,
                 &DAT_0187c0f4,&DAT_0187e6a0);
  }
  local_48 = local_b0;
  local_44 = local_ac;
  local_40 = local_a8;
  uVar55 = FUN_00f1f544(&local_48);
  ppppppuVar28 = (uint ******)(uVar55 >> 0x20);
  if (0xffffffffffff < uVar55) {
    ppppppuVar14 = (uint ******)0x0;
    do {
      puVar32 = (undefined4 *)((int)uVar55 + (int)ppppppuVar14 * 8);
      if (puVar32[1] != 0) {
        thunk_FUN_016d3fb4(*puVar32);
      }
      ppppppuVar14 = (uint ******)((int)ppppppuVar14 + 1);
    } while (ppppppuVar28 != ppppppuVar14);
    thunk_FUN_016d3fb4((int)uVar55);
    local_1e4._4_4_ = (uint *******)0xffff;
    local_1e4._0_4_ = (uint *******)0x0;
    local_1e8 = (uint *******)ppppppuVar28;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,&local_1e8,
                 &DAT_0187c0f4,&DAT_0187e6a0);
  }
  FUN_01282570(pcVar44);
  if (*pcVar44 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar51 = (bool)hasExclusiveAccess(pcVar44);
      if (bVar51) {
        *pcVar44 = '\0';
        goto LAB_00e07228;
      }
    } while (*pcVar44 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar44);
LAB_00e07228:
  local_1e8 = (uint *******)0x9;
  local_1dc = uVar53;
  local_1e4 = uVar54;
  local_1d4 = uVar55;
  uVar27 = FUN_00aa4d1c(*(undefined4 *)(iVar30 + 8),&local_1e8);
  *(undefined4 *)(param_1 + 0xd4) = uVar27;
  *(undefined **)(param_1 + 0xd8) = &DAT_0186df74;
  local_260 = pppppppuVar34;
LAB_00e07274:
  local_248 = param_1 + 0xd4;
  local_250 = (undefined1 *)(param_1 + 0x108);
  local_27c = (undefined1 *)(param_1 + 0xfc);
  uVar54 = (**(code **)(*(int *)(param_1 + 0xd8) + 0xc))(uVar27,param_2);
  pppppppuVar34 = (uint *******)(uVar54 >> 0x20);
  uVar42 = (uint)uVar54;
  if ((uVar54 & 1) == 0) {
    uVar27 = *(undefined4 *)(param_1 + 0xd4);
    puVar32 = *(undefined4 **)(param_1 + 0xd8);
    pcVar8 = (code *)*puVar32;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar27);
    }
    if (puVar32[1] != 0) {
      thunk_FUN_016d3fb4(uVar27);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0x1000000;
  }
  else {
    uVar42 = 1;
    *(undefined1 *)(param_1 + 0xfb) = 3;
  }
  if ((uVar42 & 1) != 0) goto LAB_00e0768c;
  FUN_00de27ac(local_248);
  if (pppppppuVar34 == (uint *******)0x0) {
    *(undefined2 *)(param_1 + 0xfc) = 1;
    *(undefined2 *)(param_1 + 0x108) = 1;
    goto LAB_00e07614;
  }
  local_1e4._0_4_ = (uint *******)&DAT_0157d360;
  local_1dc._0_4_ = FUN_00604528;
  local_1e4._4_4_ = (uint *******)&local_5c;
  local_1e8 = (uint *******)(param_1 + 0xc4);
  local_5c = pppppppuVar34;
  FUN_00600d2c(&local_48,&DAT_00585a7e,&local_1e8);
  local_90 = local_48;
  local_8c = local_44;
  local_88 = local_40;
  pppppppuVar15 = (uint *******)FUN_00f2213c(&local_90);
  (*(code *)**local_5c)();
  pppppppuVar34 = local_260;
LAB_00e07380:
  bVar17 = 0;
  if (local_240 != (uint *******)0x0) {
    bVar17 = *(byte *)(param_1 + 0xfd);
  }
  if (local_240 != (uint *******)0x0 && (bVar17 & 1) != 0) {
    thunk_FUN_016d3fb4(pppppppuVar34);
  }
  *(undefined2 *)(param_1 + 0xfc) = 1;
  *(undefined1 *)(param_1 + 0x109) = 0;
LAB_00e073b4:
  local_250 = (undefined1 *)(param_1 + 0x108);
  *local_250 = 1;
  local_b0 = pppppppuVar15;
  if (DAT_018d9130 < 4) {
    uVar42 = (uint)DAT_018da208;
    if (uVar42 - 1 < 2) {
LAB_00e073f8:
      uVar54 = local_1d4;
      uVar55 = local_1e4;
      if (uVar42 != 2) {
        puVar41 = &DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar44 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar44 = DAT_018daa74;
          puVar41 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar44 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar30 = (**(code **)(puVar41 + 0x14))(pcVar44);
        uVar54 = local_1d4;
        uVar55 = local_1e4;
        if (iVar30 == 0) goto LAB_00e07600;
      }
      local_1e4._4_4_ = (uint *******)(uVar55 >> 0x20);
      local_1d4._4_4_ = (undefined4)(uVar54 >> 0x20);
      pppppppuVar34 = *(uint ********)(DAT_018da200 + 0x1c);
      pppppppuVar15 = *(uint ********)(DAT_018da200 + 0x20);
      local_1e4 = uVar55;
      local_1d4 = uVar54;
      if (pppppppuVar15 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878df8);
      }
      local_54 = *(uint ********)(DAT_018da200 + 0x24);
      local_50 = *(uint ********)(DAT_018da200 + 0x28);
      local_4c = 0;
      local_d4 = 0x3d;
      local_d8 = (uint ******)0x3582a3;
      local_5c = pppppppuVar34;
      local_58 = pppppppuVar15;
      if (pppppppuVar15 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878df8);
      }
      local_38 = (uint *******)&local_9c;
      local_3c = (uint *******)&local_90;
      local_44 = &local_d8;
      local_48 = (uint *******)&local_5c;
      local_78 = (uint *******)&local_48;
      local_74 = 2;
      local_9c = (uint *******)&local_b0;
      local_1dc._4_4_ = (uint *******)&local_78;
      local_80 = (uint ******)&DAT_00000001;
      puVar41 = &DAT_018ae394;
      local_34 = &DAT_01878ca8;
      local_40 = (uint *******)&DAT_018abb78;
      local_1e4._0_4_ = (uint *******)0x0;
      local_1e8 = (uint *******)0x1;
      DataMemoryBarrier(0xb);
      pcVar44 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar44 = DAT_018daa74;
        puVar41 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar44 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_1d4._0_4_ = (undefined4 *)DAT_018da200;
      local_90 = pppppppuVar34;
      local_8c = pppppppuVar15;
      local_88 = local_54;
      local_84 = local_50;
      local_70 = (uint *******)(DAT_018da200 + 0x1c);
      iVar30 = (**(code **)(puVar41 + 0x28))(pcVar44,&local_1e8);
      if (iVar30 != 0) {
        (**(code **)(puVar41 + 0x2c))(pcVar44,&local_1e8);
      }
    }
    else if (uVar42 != 0) {
      uVar42 = FUN_0169ac90(&DAT_018da200);
      uVar42 = uVar42 & 0xff;
      if (uVar42 != 0) goto LAB_00e073f8;
    }
  }
LAB_00e07600:
  (*(code *)**local_b0)();
LAB_00e07614:
  FUN_00e44114(*(undefined4 *)(param_1 + 0x80));
  goto LAB_00e0761c;
LAB_00e0768c:
  uVar16 = 6;
  *local_27c = 3;
  *local_250 = 3;
  goto LAB_00e05740;
}

