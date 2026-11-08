// FUN_0165e164 @ 0165e164 size=1204 calls_out=13 calls_in=0
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0 | internal error: entered unreachable code: unexpected stage | [internal exception] blocking task ran twice.the timer is shutdown; must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration

void FUN_0165e164(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_a8 [3];
  uint local_9c;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  int *local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined4 local_30;
  uint local_2c;
  
  puVar11 = param_1 + 10;
  puVar9 = (undefined4 *)((uint)local_a8 | 4);
  DataMemoryBarrier(0xb);
  uVar12 = *param_1;
  do {
    if ((uVar12 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: next.is_notified()",0x24,&DAT_018ad23c);
    }
    if ((uVar12 & 3) == 0) {
      uVar7 = (uVar12 & 0x3f) >> 5;
      uVar8 = uVar12 & 0xfffffff8 | 1;
      uVar5 = *param_1;
    }
    else {
      if (uVar12 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: self.ref_count() > 0",0x26,&DAT_018ad2cc);
      }
      uVar8 = uVar12 - 0x40;
      uVar7 = 2;
      if (uVar8 < 0x40) {
        uVar7 = 3;
      }
      uVar5 = *param_1;
    }
    if (uVar5 == uVar12) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar8;
          DataMemoryBarrier(0xb);
          switch(uVar7) {
          case 0:
            puVar13 = param_1 + 0xc;
            if (*puVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,
                           &DAT_018ace94);
            }
            uVar16 = thunk_FUN_016de0ee(0,0x40);
            iVar14 = (int)uVar16 + (int)((ulonglong)uVar16 >> 0x20);
            uVar12 = *puVar11;
            uVar7 = param_1[0xb];
            if (*(char *)(iVar14 + 0x38) == '\x01') {
LAB_0165e368:
              local_ec = *(undefined4 *)(iVar14 + 0x18);
              local_f0 = *(undefined4 *)(iVar14 + 0x1c);
              cVar15 = '\x01';
              *(uint *)(iVar14 + 0x18) = uVar12;
              *(uint *)(iVar14 + 0x1c) = uVar7;
            }
            else {
              if (*(char *)(iVar14 + 0x38) != '\x02') {
                FUN_015e8e6c(iVar14,FUN_01655ec4);
                *(undefined1 *)(iVar14 + 0x38) = 1;
                goto LAB_0165e368;
              }
              local_ec = 0;
              local_f0 = 0;
              cVar15 = '\x02';
            }
            local_58 = param_1[0xe];
            local_54 = param_1[0xf];
            param_1[0xe] = 4;
            param_1[0xf] = 0;
            if (local_58 == 4 && local_54 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("[internal exception] blocking task ran twice.the timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
                           ,0x2d,&DAT_018ad3f4);
            }
            local_50 = param_1[0x10];
            uStack_4c = param_1[0x11];
            uStack_48 = param_1[0x12];
            local_44 = param_1[0x13];
            local_40 = param_1[0x14];
            uStack_3c = param_1[0x15];
            piStack_38 = (int *)param_1[0x16];
            uStack_34 = param_1[0x17];
            if (cVar15 == '\x01') {
LAB_0165e3f0:
              *(undefined1 *)(iVar14 + 0x30) = 0;
            }
            else if (cVar15 != '\x02') {
              FUN_015e8e6c(iVar14,FUN_01655ec4);
              *(undefined1 *)(iVar14 + 0x38) = 1;
              goto LAB_0165e3f0;
            }
            piVar2 = piStack_38;
            local_88 = local_58;
            local_84 = local_54;
            local_80 = local_50;
            local_7c = uStack_4c;
            local_78 = uStack_48;
            local_74 = local_44;
            local_70 = local_40;
            uStack_6c = uStack_3c;
            local_68 = piStack_38;
            uStack_64 = uStack_34;
            if ((local_58 == 3 && local_54 == 0) ||
               (lVar17 = FUN_016e011a(piStack_38[2],*(undefined4 *)(&DAT_004243fc + local_58 * 4),
                                      local_50,uStack_4c,
                                      *(undefined4 *)(&DAT_004243fc + local_58 * 4)), lVar17 != -1))
            {
              FUN_0163d6b4(&local_30,&local_78,piVar2 + 2);
            }
            else {
              puVar4 = (uint *)FUN_016d2bc8();
              local_2c = *puVar4;
              local_30 = 0;
            }
            uVar12 = local_2c;
            uVar3 = local_30;
            local_d4 = local_78;
            local_d0 = local_74;
            local_cc = local_70;
            local_c8 = uStack_6c;
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *local_68;
              bVar1 = (bool)hasExclusiveAccess(local_68);
            } while (!bVar1);
            *local_68 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_016592f4(local_68);
            }
            *puVar9 = uVar3;
            puVar9[1] = uVar12;
            local_a8[0] = 3;
            local_9c = local_d8;
            local_98 = local_d4;
            local_94 = local_d0;
            uStack_90 = local_cc;
            uStack_8c = local_c8;
            if (*(char *)(iVar14 + 0x38) == '\x01') {
LAB_0165e55c:
              *(undefined4 *)(iVar14 + 0x18) = local_ec;
              *(undefined4 *)(iVar14 + 0x1c) = local_f0;
              local_ec = *(undefined4 *)(iVar14 + 0x18);
              uVar10 = *(undefined4 *)(iVar14 + 0x1c);
              uVar7 = param_1[0xb];
              *(uint *)(iVar14 + 0x18) = *puVar11;
              *(uint *)(iVar14 + 0x1c) = uVar7;
            }
            else {
              if (*(char *)(iVar14 + 0x38) != '\x02') {
                FUN_015e8e6c(iVar14,FUN_01655ec4);
                *(undefined1 *)(iVar14 + 0x38) = 1;
                goto LAB_0165e55c;
              }
              uVar10 = 0;
              local_ec = 0;
            }
            local_88 = 2;
            FUN_01652784(puVar13);
            *puVar13 = local_88;
            param_1[0xd] = local_84;
            param_1[0xe] = local_80;
            param_1[0xf] = local_7c;
            param_1[0x10] = local_78;
            param_1[0x11] = local_74;
            param_1[0x12] = local_70;
            param_1[0x13] = uStack_6c;
            param_1[0x14] = (uint)local_68;
            param_1[0x15] = uStack_64;
            param_1[0x16] = uStack_60;
            param_1[0x17] = uStack_5c;
            if (*(char *)(iVar14 + 0x38) == '\x01') {
LAB_0165e5cc:
              *(undefined4 *)(iVar14 + 0x18) = local_ec;
              *(undefined4 *)(iVar14 + 0x1c) = uVar10;
            }
            else if (*(char *)(iVar14 + 0x38) != '\x02') {
              FUN_015e8e6c(iVar14,FUN_01655ec4);
              *(undefined1 *)(iVar14 + 0x38) = 1;
              goto LAB_0165e5cc;
            }
            uStack_b8 = puVar9[5];
            local_b4 = puVar9[6];
            local_c4 = local_9c;
            local_c0 = local_98;
            local_bc = local_94;
            local_cc = uVar3;
            local_c8 = uVar12;
            local_d0 = 3;
            local_d8 = 1;
            FUN_01652eb4(param_1 + 6,&local_d8);
            break;
          case 1:
            local_88 = 2;
            FUN_01652eb4(param_1 + 6,&local_88);
            local_c0 = 0;
            local_c8 = *puVar11;
            local_c4 = param_1[0xb];
            local_d0 = 4;
            local_d8 = 1;
            local_bc = extraout_r1;
            FUN_01652eb4(param_1 + 6,&local_d8);
            break;
          case 2:
            return;
          case 3:
            FUN_016348e0(param_1);
            return;
          }
          FUN_016357f4(param_1);
          return;
        }
        uVar5 = *param_1;
      } while (uVar5 == uVar12);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar12 = uVar5;
  } while( true );
}

