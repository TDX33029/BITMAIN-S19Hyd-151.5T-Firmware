// FUN_011458b0 @ 011458b0 size=3804 calls_out=25 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011458b0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint *******extraout_r1;
  uint *******pppppppuVar11;
  uint *******extraout_r2;
  uint uVar12;
  uint *******extraout_r3;
  uint *******extraout_r3_00;
  uint *******pppppppuVar13;
  uint *puVar14;
  uint *******pppppppuVar15;
  int *piVar16;
  uint uVar17;
  uint *******pppppppuVar18;
  uint *******unaff_r11;
  bool bVar19;
  undefined8 uVar20;
  uint *******local_d8;
  char local_d0;
  char cStack_cf;
  undefined2 uStack_ce;
  uint *******local_cc;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  uint *******local_bc;
  char local_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  uint *******pppppppuStack_b5;
  uint *******pppppppuStack_b1;
  uint *******pppppppuStack_ad;
  undefined1 uStack_a9;
  uint *******local_a8;
  uint *******local_a4;
  uint *******local_a0;
  int local_98;
  undefined1 local_94;
  uint *******local_90;
  uint *******pppppppuStack_8c;
  uint *******local_88;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******pppppppuStack_70;
  uint *******pppppppuStack_6c;
  uint *******pppppppuStack_68;
  uint *******local_64;
  uint *******local_60;
  uint *******local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint *******local_3c;
  uint *******local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pppppppuVar15 = *(uint ********)(param_2 + 0x10);
  pppppppuVar10 = *(uint ********)(param_2 + 0x14);
  if (pppppppuVar15 <= pppppppuVar10) {
LAB_01145998:
    local_b8 = '\x05';
    cStack_b7 = 0;
    uStack_b6 = 0;
    pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
    uVar5 = FUN_01143ab8(param_2,&local_b8);
LAB_01146038:
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = '\x06';
    return;
  }
  pppppppuVar18 = (uint *******)(param_2 + 0xc);
  pppppppuVar11 = (uint *******)*pppppppuVar18;
LAB_011458d8:
  uVar12 = (uint)*(byte *)((int)pppppppuVar11 + (int)pppppppuVar10);
  pppppppuVar9 = pppppppuVar15;
  switch(uVar12) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_011458f0_caseD_9;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
switchD_011458f0_caseD_b:
    if (9 < uVar12 - 0x30) {
      local_b8 = '\n';
      cStack_b7 = '\0';
      uStack_b6 = 0;
      pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
      pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_b8);
      goto LAB_011467a4;
    }
    FUN_01113330(&local_80,param_2,1);
    if (!(local_80 != (uint *******)0x3 || local_7c != (uint *******)0x0)) goto LAB_01146010;
    cVar3 = '\x02';
    pppppppuVar11 = local_78;
    if (local_80 == (uint *******)&SUB_00000002) {
      puVar14 = (uint *)((uint)local_74 >> 0x1f);
      uVar20 = CONCAT44(&local_78,local_80);
    }
    else {
      puVar14 = (uint *)0x0;
      uVar20 = CONCAT44(&local_78,local_80);
      if (local_80 != (uint *******)&DAT_00000001) goto LAB_011460dc;
    }
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_2 + 0x14) = (int)pppppppuVar10 + 1;
    FUN_0157e5fc(&local_b8,pppppppuVar18,param_2);
    if (CONCAT13(pppppppuStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
      *(uint *)(param_1 + 4) = CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
      *param_1 = '\x06';
      return;
    }
    pppppppuVar18 = (uint *******)CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_);
    if ((char)pppppppuStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,pppppppuVar18);
    }
    if (pppppppuVar18 == (uint *******)0x0) {
      pppppppuVar9 = (uint *******)0x0;
      puVar14 = (uint *)&DAT_00000001;
    }
    else {
      puVar14 = (uint *)thunk_FUN_016d4a50(pppppppuVar18);
      if ((uint *******)puVar14 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,pppppppuVar18);
      }
      pppppppuVar9 = pppppppuVar18;
    }
    uVar4 = FUN_016dd1aa(puVar14,CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_),
                         pppppppuVar18);
    cVar3 = '\x03';
    pppppppuVar10 = extraout_r1;
    pppppppuVar11 = extraout_r2;
    goto LAB_011461b0;
  case 0x2d:
    pppppppuVar15 = (uint *******)&local_80;
    *(int *)(param_2 + 0x14) = (int)pppppppuVar10 + 1;
    puVar14 = (uint *)0x0;
    FUN_01113330(pppppppuVar15,param_2,0);
    if (!(local_80 != (uint *******)0x3 || local_7c != (uint *******)0x0)) goto LAB_01146010;
    if (local_80 == (uint *******)0x0) {
LAB_011460dc:
      cVar3 = '\0';
      uVar20 = CONCAT44(0x7fefffff,(uint)local_74 & 0x7fffffff);
      if (((uint)local_74 & 0x7fffffff) < 0x7ff00000) {
        local_b8 = '\0';
        uVar20 = FUN_01145300(&local_b8);
        cVar3 = '\x02';
      }
      puVar14 = (uint *)&SUB_00000002;
      pppppppuVar11 = local_78;
      pppppppuVar9 = pppppppuVar15;
    }
    else {
      cVar3 = '\x02';
      pppppppuVar11 = local_78;
      pppppppuVar9 = pppppppuVar15;
      uVar20 = CONCAT44(&local_78,local_80);
      if (local_80 != (uint *******)&DAT_00000001) {
        puVar14 = (uint *)((uint)local_74 >> 0x1f);
        uVar20 = CONCAT44(&local_78,local_80);
      }
    }
    break;
  default:
    puVar14 = &switchD_011459c4::switchdataD_011459c8;
    switch(uVar12) {
    case 0x5b:
      cVar3 = *(char *)(param_2 + 0x1c);
      *(char *)(param_2 + 0x1c) = cVar3 + -1;
      if (cVar3 == '\x01') {
LAB_01146760:
        local_b8 = '\x18';
        cStack_b7 = 0;
        uStack_b6 = 0;
        pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
        uVar5 = FUN_01143ab8(param_2,&local_b8);
        *param_1 = '\x06';
        *(undefined4 *)(param_1 + 4) = uVar5;
        return;
      }
      pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
      pppppppuVar11 = (uint *******)&DAT_00000008;
      *(uint ********)(param_2 + 0x14) = pppppppuVar10;
      local_38 = (uint *******)0x0;
      local_3c = (uint *******)&DAT_00000008;
      local_40 = (uint *******)0x0;
      if (pppppppuVar15 <= pppppppuVar10) goto LAB_01145c08;
      bVar19 = true;
      goto LAB_01145acc;
    default:
      goto switchD_011458f0_caseD_b;
    case 0x66:
      pppppppuVar13 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar13;
      if (pppppppuVar15 < pppppppuVar13) {
        pppppppuVar9 = pppppppuVar13;
      }
      if (pppppppuVar15 <= pppppppuVar13) goto LAB_01146024;
      cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar13);
      pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 2);
      *(uint ********)(param_2 + 0x14) = pppppppuVar15;
      if (cVar3 == 'a') {
        if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
        cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
        pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 3);
        *(uint ********)(param_2 + 0x14) = pppppppuVar15;
        if (cVar3 == 'l') {
          if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
          cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
          pppppppuVar15 = pppppppuVar10 + 1;
          *(uint ********)(param_2 + 0x14) = pppppppuVar15;
          if (cVar3 == 's') {
            if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
            cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
            *(int *)(param_2 + 0x14) = (int)pppppppuVar10 + 5;
            if (cVar3 == 'e') {
              cVar3 = '\x01';
              cStack_b7 = '\0';
              uVar4 = 0x65;
              goto LAB_011462fc;
            }
          }
        }
      }
      break;
    case 0x6e:
      pppppppuVar13 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar13;
      if (pppppppuVar13 >= pppppppuVar15 && pppppppuVar13 != pppppppuVar15) {
        pppppppuVar9 = pppppppuVar13;
      }
      if (pppppppuVar13 < pppppppuVar15) {
        cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar13);
        pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 2);
        *(uint ********)(param_2 + 0x14) = pppppppuVar15;
        if (cVar3 == 'u') {
          if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
          cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
          pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 3);
          *(uint ********)(param_2 + 0x14) = pppppppuVar15;
          if (cVar3 == 'l') {
            if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
            cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
            pppppppuVar10 = pppppppuVar10 + 1;
            *(uint ********)(param_2 + 0x14) = pppppppuVar10;
            if (cVar3 == 'l') {
              cVar3 = '\0';
              uVar4 = 0x6c;
              goto LAB_011461b0;
            }
          }
        }
        break;
      }
LAB_01146024:
      local_b8 = '\x05';
LAB_01146028:
      cStack_b7 = 0;
      uStack_b6 = 0;
      pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
      uVar5 = FUN_00f4c908(param_2,&local_b8);
      goto LAB_01146038;
    case 0x74:
      pppppppuVar13 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar13;
      if (pppppppuVar15 < pppppppuVar13) {
        pppppppuVar9 = pppppppuVar13;
      }
      if (pppppppuVar15 <= pppppppuVar13) goto LAB_01146024;
      cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar13);
      pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 2);
      *(uint ********)(param_2 + 0x14) = pppppppuVar15;
      if (cVar3 == 'r') {
        if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
        cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
        pppppppuVar15 = (uint *******)((int)pppppppuVar10 + 3);
        *(uint ********)(param_2 + 0x14) = pppppppuVar15;
        if (cVar3 != 'u') break;
        if (pppppppuVar15 == pppppppuVar9) goto LAB_01146024;
        cVar3 = *(char *)((int)pppppppuVar11 + (int)pppppppuVar15);
        *(uint ********)(param_2 + 0x14) = pppppppuVar10 + 1;
        if (cVar3 == 'e') {
          cStack_b7 = '\x01';
          cVar3 = '\x01';
          uVar4 = 0x65;
          goto LAB_011462fc;
        }
      }
      break;
    case 0x7b:
      cVar3 = *(char *)(param_2 + 0x1c) + -1;
      *(char *)(param_2 + 0x1c) = cVar3;
      if (cVar3 == '\0') goto LAB_01146760;
      *(int *)(param_2 + 0x14) = (int)pppppppuVar10 + 1;
      local_94 = 1;
      local_98 = param_2;
      FUN_0134da08(&local_b8,&local_98);
      iVar2 = local_98;
      if (local_b8 == '\x01') {
        pppppppuVar10 = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
LAB_01145f30:
        local_d0 = '\x06';
        local_cc = pppppppuVar10;
        goto LAB_011462a0;
      }
      if (cStack_b7 != '\x01') {
LAB_0114628c:
        local_c4 = (uint *******)0x0;
        local_cc = (uint *******)0x0;
        local_d0 = '\x05';
        goto LAB_011462a0;
      }
      piVar16 = (int *)(local_98 + 0xc);
      *(undefined4 *)(local_98 + 8) = 0;
      *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
      FUN_0157e5fc(&local_b8,piVar16,local_98);
      pppppppuVar15 = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
      if (CONCAT13(pppppppuStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
        pppppppuVar10 = pppppppuVar15;
        goto LAB_01145f30;
      }
      pppppppuVar18 = (uint *******)CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_);
      if (pppppppuVar18 == (uint *******)&DAT_0000001e) {
        iVar6 = thunk_FUN_016dd50a(pppppppuVar15,&DAT_003c519d,0x1e);
        if (iVar6 == 0) {
LAB_0114637c:
          local_cc = (uint *******)FUN_0114576c(iVar2);
          if (local_cc != (uint *******)0x0) goto LAB_01146390;
          uVar12 = *(uint *)(iVar2 + 0x14);
          if (*(uint *)(iVar2 + 0x10) <= uVar12) goto LAB_0114646c;
          iVar6 = *piVar16;
          goto LAB_01146444;
        }
        pppppppuVar10 = (uint *******)thunk_FUN_016d4a50(0x1e);
        if (pppppppuVar10 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x1e);
        }
        pppppppuVar11 = (uint *******)&DAT_0000001e;
LAB_011463a4:
        FUN_016dd1aa(pppppppuVar10,pppppppuVar15,pppppppuVar18);
      }
      else {
        if ((char)pppppppuStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,pppppppuVar18);
        }
        if (pppppppuVar18 == (uint *******)0x0) {
          pppppppuVar11 = (uint *******)0x0;
          pppppppuVar10 = (uint *******)&DAT_00000001;
          goto LAB_011463a4;
        }
        pppppppuVar10 = (uint *******)thunk_FUN_016d4a50(pppppppuVar18);
        if (pppppppuVar10 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pppppppuVar18);
        }
        FUN_016dd1aa(pppppppuVar10,pppppppuVar15,pppppppuVar18);
        if (pppppppuVar18 == (uint *******)&DAT_80000000) goto LAB_0114637c;
        if (pppppppuVar18 == (uint *******)0x80000001) goto LAB_0114628c;
        pppppppuVar11 = pppppppuVar18;
        if (pppppppuVar18 == (uint *******)0x80000002) goto LAB_01145f30;
      }
      local_88 = (uint *******)0x0;
      local_90 = (uint *******)0x0;
      local_80 = pppppppuVar11;
      local_7c = pppppppuVar10;
      local_78 = pppppppuVar18;
      pppppppuVar15 = (uint *******)FUN_0114576c(iVar2);
      if (pppppppuVar15 == (uint *******)0x0) {
        FUN_011458b0(&local_d0,iVar2);
        if (local_d0 != '\x06') {
          FUN_01147750(&local_b8,&local_90,&local_80,&local_d0);
          FUN_01154484(&local_b8);
          puVar7 = (undefined4 *)((uint)&local_b8 | 4);
          puVar8 = (undefined4 *)((uint)&local_80 | 4);
          goto LAB_011464c4;
        }
      }
      else {
        local_d0 = '\x06';
        local_cc = pppppppuVar15;
      }
      if (pppppppuVar11 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar10);
      }
      goto LAB_01146414;
    }
    local_b8 = '\t';
    goto LAB_01146028;
  }
  pppppppuVar10 = (uint *******)((ulonglong)uVar20 >> 0x20);
  uVar4 = (undefined2)uVar20;
  pppppppuVar18 = (uint *******)0x0;
  unaff_r11 = local_74;
LAB_011461b0:
  cStack_b7 = (char)pppppppuVar10;
  goto LAB_011462fc;
  while( true ) {
    uVar12 = uVar12 + 1;
    *(uint *)(iVar2 + 0x14) = uVar12;
    if (*(uint *)(iVar2 + 0x10) == uVar12) break;
LAB_01146444:
    uVar17 = *(byte *)(iVar6 + uVar12) - 9;
    if ((0x17 < uVar17) || ((1 << (uVar17 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar6 + uVar12) == 0x22) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(uint *)(iVar2 + 0x14) = uVar12 + 1;
        FUN_0157e5fc(&local_b8,piVar16,iVar2);
        local_cc = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
        if (CONCAT13(pppppppuStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2)
        goto LAB_01146390;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_));
        pppppppuVar15 = local_7c;
        pppppppuVar10 = local_80;
        if (local_80 != (uint *******)0x0) {
          FUN_01143f1c(&local_b8,local_80,local_7c);
          if (local_b8 == '\x06') {
            local_cc = (uint *******)
                       FUN_01151f08(CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_));
            local_d0 = '\x06';
          }
          else {
            uStack_ce = CONCAT11(pppppppuStack_b5._0_1_,uStack_b6);
            local_cc = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
            local_c8 = (uint *******)CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_);
            local_c4 = (uint *******)CONCAT13(uStack_a9,pppppppuStack_ad._1_3_);
            local_d0 = local_b8;
            cStack_cf = cStack_b7;
            local_c0 = local_a8;
            local_bc = local_a4;
          }
          if (pppppppuVar15 != (uint *******)0x0) {
            thunk_FUN_016d3fb4(pppppppuVar10);
          }
          goto LAB_011462a0;
        }
        pppppppuVar10 = local_7c;
      }
      else {
        pppppppuVar10 = (uint *******)FUN_01146a68(iVar2,&local_40,&DAT_01888a8c);
      }
      local_cc = (uint *******)FUN_011257e4(pppppppuVar10,iVar2);
      goto LAB_01146390;
    }
  }
LAB_0114646c:
  local_b8 = '\x05';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5 & 0xffffff00);
  local_cc = (uint *******)FUN_01143ab8(iVar2,&local_b8);
LAB_01146390:
  local_d0 = '\x06';
  goto LAB_011462a0;
LAB_011464c4:
  FUN_0134da08(&local_40,&local_98);
  iVar2 = local_98;
  if ((char)local_40 == '\x01') goto LAB_011467f0;
  if (local_40._1_1_ != '\x01') {
LAB_011467b4:
    local_d0 = '\x05';
    pppppppuStack_ad = local_88;
    pppppppuStack_b1 = pppppppuStack_8c;
    pppppppuStack_b5 = local_90;
    cStack_cf = local_b8;
    uStack_ce = (undefined2)(CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)) >> 8);
    local_cc = local_90;
    local_c8 = pppppppuStack_8c;
    local_c4 = local_88;
    goto LAB_011462a0;
  }
  *(undefined4 *)(local_98 + 8) = 0;
  *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
  FUN_0157e5fc(&local_40,local_98 + 0xc,local_98);
  pppppppuVar15 = local_38;
  pppppppuVar10 = local_3c;
  local_cc = local_3c;
  if (local_40 == (uint *******)&SUB_00000002) goto LAB_0114687c;
  uVar5 = 0;
  if ((int)local_38 < 0) {
LAB_01146948:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,local_d8);
  }
  if (local_38 == (uint *******)0x0) {
    local_d8 = (uint *******)&DAT_00000001;
    FUN_016dd1aa(1,local_3c,0);
    pppppppuVar10 = (uint *******)0x0;
  }
  else {
    local_d8 = (uint *******)thunk_FUN_016d4a50(local_38);
    if (local_d8 == (uint *******)0x0) {
      uVar5 = 1;
      local_d8 = pppppppuVar15;
      goto LAB_01146948;
    }
    FUN_016dd1aa(local_d8,pppppppuVar10,pppppppuVar15);
    if (pppppppuVar15 == (uint *******)0x80000001) {
      local_cc = local_d8;
      goto LAB_0114687c;
    }
    if (pppppppuVar15 == (uint *******)&DAT_80000000) goto LAB_011467b4;
    pppppppuVar10 = pppppppuVar15;
  }
  pppppppuVar18 = (uint *******)FUN_0114576c(iVar2);
  if (pppppppuVar18 != (uint *******)0x0) {
    local_3c = pppppppuVar18;
LAB_0114681c:
    local_cc = local_3c;
    if (pppppppuVar10 != (uint *******)0x0) {
      thunk_FUN_016d3fb4(local_d8);
    }
    goto LAB_0114687c;
  }
  FUN_011458b0(&local_40,iVar2);
  if ((char)local_40 == '\x06') {
    goto LAB_0114681c;
  }
  *puVar7 = local_40;
  puVar7[1] = local_3c;
  puVar7[2] = local_38;
  puVar7[3] = uStack_34;
  puVar7[4] = uStack_30;
  puVar7[5] = uStack_2c;
  local_80 = (uint *******)
             CONCAT13(pppppppuStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)));
  local_7c = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
  local_78 = (uint *******)CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_);
  local_74 = (uint *******)CONCAT13(uStack_a9,pppppppuStack_ad._1_3_);
  pppppppuStack_70 = local_a8;
  pppppppuStack_6c = local_a4;
  pppppppuStack_68 = local_a0;
  if (pppppppuVar10 == (uint *******)&DAT_80000000) goto LAB_011467b4;
  local_cc = local_d8;
  if (pppppppuVar10 == (uint *******)0x80000001) goto LAB_0114687c;
  local_5c = pppppppuVar15;
  local_60 = local_d8;
  local_58 = *puVar8;
  uStack_54 = puVar8[1];
  uStack_50 = puVar8[2];
  uStack_4c = puVar8[3];
  uStack_48 = puVar8[4];
  uStack_44 = puVar8[5];
  local_64 = pppppppuVar10;
  FUN_01147750(&local_b8,&local_90,&local_64);
  switch(local_b8) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x06':
    break;
  case '\x04':
    FUN_01150b1c(puVar7);
  case '\x03':
    if (CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_) != 0) {
      thunk_FUN_016d3fb4(CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_));
    }
    break;
  default:
    FUN_0114868c(puVar7);
  }
  goto LAB_011464c4;
LAB_011467f0:
  local_cc = local_3c;
LAB_0114687c:
  local_d0 = '\x06';
LAB_01146414:
  FUN_0114868c(&local_90);
LAB_011462a0:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  pppppppuVar10 = (uint *******)FUN_00a6ef8c(param_2);
  pppppppuVar9 = local_cc;
  local_b8 = local_d0;
  cStack_b7 = cStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  pppppppuStack_b5._0_1_ = (undefined1)((ushort)uStack_ce >> 8);
  pppppppuStack_b5._1_3_ = (uint3)local_cc;
  pppppppuStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  pppppppuStack_b1._1_3_ = SUB43(local_c8,0);
  pppppppuStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  pppppppuStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = local_c0;
  local_a4 = local_bc;
  local_a0 = pppppppuVar10;
  if (local_d0 == '\x06') {
    if (pppppppuVar10 != (uint *******)0x0) {
      FUN_005c3974(pppppppuVar10);
      thunk_FUN_016d3fb4(pppppppuVar10);
    }
    goto LAB_011467a4;
  }
  pppppppuVar11 = local_c0;
  unaff_r11 = local_bc;
  cVar3 = local_d0;
  uVar4 = uStack_ce;
  puVar14 = (uint *)local_c8;
  pppppppuVar18 = local_c4;
  if (pppppppuVar10 == (uint *******)0x0) {
joined_r0x01146374:
    local_b8 = cVar3;
    local_a8 = pppppppuVar11;
    local_a4 = unaff_r11;
    local_a0 = pppppppuVar10;
    if (cVar3 != '\x06') {
LAB_011462fc:
      *(undefined2 *)(param_1 + 2) = uVar4;
      param_1[1] = cStack_b7;
      *param_1 = cVar3;
      *(uint ********)(param_1 + 4) = pppppppuVar9;
      *(uint **)(param_1 + 8) = puVar14;
      *(uint ********)(param_1 + 0xc) = pppppppuVar18;
      *(uint ********)(param_1 + 0x10) = pppppppuVar11;
      *(uint ********)(param_1 + 0x14) = unaff_r11;
      return;
    }
    goto LAB_011467a4;
  }
  FUN_01145300(&local_b8);
  pppppppuVar9 = pppppppuVar10;
  goto LAB_01146338;
LAB_01145acc:
  do {
    pppppppuVar9 = local_38;
    while( true ) {
      puVar14 = (uint *)(uint)*(byte *)((int)*pppppppuVar18 + (int)pppppppuVar10);
      if ((0x17 < (int)puVar14 - 9U) || ((1 << ((int)puVar14 - 9U & 0xff) & 0x800013U) == 0)) break;
      pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar10;
      if (pppppppuVar15 == pppppppuVar10) goto LAB_01145c08;
    }
    if (puVar14 == (uint *)&DAT_0000005d) {
      cVar3 = '\x04';
      local_74 = local_38;
      local_78 = local_3c;
      pppppppuVar9 = local_40;
      goto LAB_01145c48;
    }
    if (!bVar19) {
      if (puVar14 != (uint *)&DAT_0000002c) {
        local_b8 = '\a';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
        pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_b8);
        goto LAB_01145c20;
      }
      pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar10;
      if (pppppppuVar15 <= pppppppuVar10) {
LAB_01146718:
        local_b8 = '\x05';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5 & 0xffffff00);
        pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_b8);
        goto LAB_01145c20;
      }
      while( true ) {
        uVar12 = (uint)*(byte *)((int)*pppppppuVar18 + (int)pppppppuVar10);
        puVar14 = (uint *)(uVar12 - 9);
        if ((&DAT_00000017 < puVar14) || ((1 << ((uint)puVar14 & 0xff) & 0x800013U) == 0)) break;
        pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
        *(uint ********)(param_2 + 0x14) = pppppppuVar10;
        if (pppppppuVar15 == pppppppuVar10) goto LAB_01146718;
      }
      if (uVar12 == 0x5d) {
        local_b8 = '\x15';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5._1_3_ << 8);
        pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_b8);
        goto LAB_01145c20;
      }
    }
    FUN_011458b0(&local_b8,param_2);
    if (local_b8 == '\x06') {
      pppppppuVar9 = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
      goto LAB_01145c20;
    }
    local_7c = (uint *******)CONCAT13(pppppppuStack_b1._0_1_,pppppppuStack_b5._1_3_);
    local_78 = (uint *******)CONCAT13((char)pppppppuStack_ad,pppppppuStack_b1._1_3_);
    local_74 = (uint *******)CONCAT13(uStack_a9,pppppppuStack_ad._1_3_);
    uVar4 = *(undefined2 *)((uint)&local_b8 | 1);
    *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_80 | 1) = uVar4;
    pppppppuStack_70 = local_a8;
    pppppppuStack_6c = local_a4;
    local_80 = (uint *******)CONCAT31(local_80._1_3_,local_b8);
    if (pppppppuVar9 == local_40) {
      FUN_0157eb1c(&local_40);
      pppppppuVar11 = local_3c;
    }
    pppppppuVar10 = pppppppuVar11 + (int)pppppppuVar9 * 6;
    *pppppppuVar10 = (uint ******)local_80;
    pppppppuVar10[1] = (uint ******)local_7c;
    pppppppuVar10[2] = (uint ******)local_78;
    pppppppuVar10[3] = (uint ******)local_74;
    pppppppuVar10[4] = (uint ******)pppppppuStack_70;
    pppppppuVar10[5] = (uint ******)pppppppuStack_6c;
    local_38 = (uint *******)((int)pppppppuVar9 + 1);
    bVar19 = false;
    pppppppuVar15 = *(uint ********)(param_2 + 0x10);
    pppppppuVar10 = *(uint ********)(param_2 + 0x14);
    puVar14 = (uint *)local_74;
  } while (pppppppuVar10 < pppppppuVar15);
LAB_01145c08:
  local_b8 = '\x02';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  pppppppuStack_b5 = (uint *******)((uint)pppppppuStack_b5 & 0xffffff00);
  pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_b8);
LAB_01145c20:
  FUN_01150b1c(&local_40);
  local_74 = extraout_r3;
  if (local_40 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(pppppppuVar11);
    local_74 = extraout_r3_00;
  }
  pppppppuVar15 = *(uint ********)(param_2 + 0x10);
  cVar3 = '\x06';
  pppppppuVar10 = *(uint ********)(param_2 + 0x14);
  local_78 = (uint *******)puVar14;
LAB_01145c48:
  pppppppuVar13 = local_80;
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  local_80 = (uint *******)CONCAT31(local_80._1_3_,cVar3);
  local_7c = pppppppuVar9;
  if (pppppppuVar10 < pppppppuVar15) {
LAB_01145c70:
    cVar1 = *(char *)((int)*pppppppuVar18 + (int)pppppppuVar10);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_01145c88_caseD_9;
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_01145c88_caseD_b;
    case ',':
      pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
      *(uint ********)(param_2 + 0x14) = pppppppuVar10;
      if (pppppppuVar10 < pppppppuVar15) goto LAB_0114684c;
      goto LAB_011468ac;
    default:
      if (cVar1 == ']') {
        *(int *)(param_2 + 0x14) = (int)pppppppuVar10 + 1;
        cStack_b7 = (char)((uint)pppppppuVar13 >> 8);
        uStack_b6 = (undefined1)((uint)pppppppuVar13 >> 0x10);
        pppppppuStack_b5._0_1_ = (undefined1)((uint)pppppppuVar13 >> 0x18);
        pppppppuStack_b5._1_3_ = (uint3)pppppppuVar9;
        pppppppuStack_b1._0_1_ = (undefined1)((uint)pppppppuVar9 >> 0x18);
        pppppppuStack_b1._1_3_ = SUB43(local_78,0);
        pppppppuStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
        pppppppuStack_ad._1_3_ = SUB43(local_74,0);
        uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
        local_a8 = pppppppuStack_70;
        local_a4 = pppppppuStack_6c;
        if (cVar3 != '\x06') {
          pppppppuVar10 = local_a0;
          pppppppuVar11 = pppppppuStack_70;
          unaff_r11 = pppppppuStack_6c;
          uVar4 = (short)((uint)pppppppuVar13 >> 0x10);
          puVar14 = (uint *)local_78;
          pppppppuVar18 = local_74;
          goto joined_r0x01146374;
        }
        local_b8 = cVar3;
        goto LAB_011467a4;
      }
switchD_01145c88_caseD_b:
      local_40 = (uint *******)&DAT_00000016;
      pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_40);
      goto LAB_01145d40;
    }
  }
LAB_01145d2c:
  local_40 = (uint *******)&SUB_00000002;
  pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_40);
  goto LAB_01145d40;
switchD_01145c88_caseD_9:
  pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
  *(uint ********)(param_2 + 0x14) = pppppppuVar10;
  if (pppppppuVar15 == pppppppuVar10) goto LAB_01145d2c;
  goto LAB_01145c70;
switchD_011458f0_caseD_9:
  pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
  *(uint ********)(param_2 + 0x14) = pppppppuVar10;
  if (pppppppuVar15 == pppppppuVar10) goto LAB_01145998;
  goto LAB_011458d8;
  while( true ) {
    pppppppuVar10 = (uint *******)((int)pppppppuVar10 + 1);
    *(uint ********)(param_2 + 0x14) = pppppppuVar10;
    if (pppppppuVar15 == pppppppuVar10) break;
LAB_0114684c:
    uVar17 = (uint)*(byte *)((int)*pppppppuVar18 + (int)pppppppuVar10);
    uVar12 = uVar17 - 9;
    if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
      if (uVar17 == 0x5d) {
        local_40 = (uint *******)&DAT_00000015;
        pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_40);
        goto LAB_01145d40;
      }
      break;
    }
  }
LAB_011468ac:
  local_40 = (uint *******)&DAT_00000016;
  pppppppuVar9 = (uint *******)FUN_01143ab8(param_2,&local_40);
LAB_01145d40:
  pppppppuVar10 = local_7c;
  local_b8 = (char)local_80;
  cStack_b7 = (char)((uint)local_80 >> 8);
  uStack_b6 = (undefined1)((uint)local_80 >> 0x10);
  pppppppuStack_b5._0_1_ = (undefined1)((uint)local_80 >> 0x18);
  pppppppuStack_b5._1_3_ = (uint3)local_7c;
  pppppppuStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  pppppppuStack_b1._1_3_ = SUB43(local_78,0);
  pppppppuStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
  pppppppuStack_ad._1_3_ = SUB43(local_74,0);
  uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
  local_a8 = pppppppuStack_70;
  local_a4 = pppppppuStack_6c;
  local_a0 = pppppppuVar9;
  if (local_b8 == '\x06') {
    FUN_005c3974(pppppppuVar9);
    thunk_FUN_016d3fb4(pppppppuVar9);
    pppppppuVar9 = pppppppuVar10;
LAB_01146338:
  }
  else {
    FUN_01145300(&local_b8);
  }
LAB_011467a4:
  local_78 = (uint *******)FUN_011257e4(pppppppuVar9,param_2);
LAB_01146010:
  *(uint ********)(param_1 + 4) = local_78;
  *param_1 = '\x06';
  return;
}

