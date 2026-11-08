// FUN_006bcb88 @ 006bcb88 size=1968 calls_out=17 calls_in=2
// strings: Oneof Input Objects require that exactly one field must be supplied and that field must not be null | Oneof input objects requires have exactly one field

void FUN_006bcb88(int *param_1,int param_2,uint ******param_3,undefined4 param_4,int *param_5,
                 uint *******param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *****pppppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint *******pppppppuVar10;
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  int iVar13;
  uint ******ppppppuVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  int local_cc;
  undefined1 *local_a4;
  int local_a0;
  undefined8 local_9c;
  uint ******local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  int local_84;
  uint *******local_80;
  uint ******local_7c;
  uint *******local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint *******local_60;
  undefined2 *local_5c;
  uint *******local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  uint *****local_4c;
  uint *******local_48;
  undefined2 *puStack_44;
  uint *******pppppppuStack_40;
  uint *******local_38;
  undefined2 *local_34;
  uint *******local_30;
  undefined1 *local_2c;
  
  uVar21 = FUN_00700b3c(param_3,param_4,0x21);
  pppppppuVar12 = (uint *******)&local_80;
  if ((int)uVar21 == 0) {
    uVar21 = FUN_006a4c58(param_3,param_4);
    if ((int)uVar21 == 0) {
      uVar2 = param_5[4];
      if (uVar2 != 0x80000000) {
        local_94 = param_3;
        local_90 = param_4;
        iVar13 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                              param_3,param_4);
        if (iVar13 == 0) {
          local_80 = &local_94;
          local_7c = (uint ******)&DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0057b0de,&local_80,&DAT_01c05e2c);
        }
        uVar3 = 2;
        if ((int)*(uint *)(iVar13 + 0x10) < 0) {
          uVar3 = *(uint *)(iVar13 + 0x10) ^ 0x80000000;
        }
        if (uVar3 == 0) {
          if ((*(int *)(iVar13 + 0x50) != 0) &&
             (iVar13 = (**(code **)(*(int *)(iVar13 + 0x54) + 0x14))
                                 (*(int *)(iVar13 + 0x50) +
                                  (*(int *)(*(int *)(iVar13 + 0x54) + 8) - 1U & 0xfffffff8) + 8,
                                  param_5), iVar13 == 0)) {
LAB_006bcea0:
            pppppppuVar12 = (uint *******)&local_80;
            pppppppuVar10 = (uint *******)&local_60;
            puVar8 = &DAT_005b29d6;
            local_5c = &DAT_0132b6a0;
            local_60 = &local_94;
LAB_006bd1b8:
            FUN_01a8da38(pppppppuVar12,puVar8,pppppppuVar10);
            goto LAB_006bcc08;
          }
        }
        else if (uVar3 == 4) {
          local_38 = (uint *******)(iVar13 + 0x60);
          uVar3 = 7;
          if ((int)uVar2 < 0) {
            uVar3 = uVar2 ^ 0x80000000;
          }
          if (uVar3 == 2) {
            local_88 = param_5;
            iVar13 = FUN_006e0288(iVar13 + 0x20,param_5[1],param_5[2]);
            if (iVar13 == 0) {
              local_78 = (uint *******)&local_88;
              local_74 = &LAB_0193a90c;
LAB_006bd1a0:
              puVar8 = &DAT_00592494;
              pppppppuVar12 = (uint *******)&local_60;
              local_7c = (uint ******)&LAB_0193a90c;
              local_80 = (uint *******)&local_38;
              pppppppuVar10 = (uint *******)&local_80;
              goto LAB_006bd1b8;
            }
          }
          else {
            if (uVar3 != 5) goto LAB_006bcea0;
            local_8c = param_5;
            iVar13 = FUN_006e0288(iVar13 + 0x20,*param_5 + 8,param_5[1]);
            if (iVar13 == 0) {
              local_74 = &LAB_00700f68;
              local_78 = (uint *******)&local_8c;
              goto LAB_006bd1a0;
            }
          }
        }
        else if ((uVar3 == 5) && (local_84 = iVar13 + 0x60, -1 < (int)uVar2)) {
          if (*(char *)(iVar13 + 0x85) == '\0') {
LAB_006bcec8:
            FUN_006bd42c(&local_80,param_5[5],param_5[5] + param_5[6] * 0x40);
            iVar15 = *(int *)(iVar13 + 0x38);
            iVar20 = *(int *)(iVar13 + 0x34);
            local_a4 = local_74;
            iVar13 = iVar20;
LAB_006bcf40:
            do {
              local_a0 = iVar13;
              if (local_a0 == iVar15 * 0x6c + iVar20) {
                local_58 = local_80 + 1;
                local_54 = (undefined1 *)((int)local_80 + (int)((int)local_7c + 1));
                local_50 = local_a4;
                local_5c = (undefined2 *)(~(uint)*local_80 & 0x80808080);
                local_60 = local_80;
                pppppuVar6 = (uint *****)FUN_006e54e8(&local_60);
                if (pppppuVar6 == (uint *****)0x0) {
                  *param_1 = -0x80000000;
                }
                else {
                  local_30 = (uint *******)&local_84;
                  local_38 = (uint *******)&local_4c;
                  local_2c = &LAB_0193a90c;
                  local_34 = (undefined2 *)&LAB_01963050;
                  local_4c = pppppuVar6;
                  FUN_01a8da38(&local_48,&DAT_005acf96,&local_38);
                  local_38 = local_48;
                  local_34 = puStack_44;
                  local_30 = pppppppuStack_40;
                  pppppppuVar12 = (uint *******)&local_48;
                  FUN_006bd3a0(pppppppuVar12,param_6,&local_38);
LAB_006bd2f4:
                  ppppppuVar14 = pppppppuVar12[1];
                  ppppppuVar11 = pppppppuVar12[2];
                  *param_1 = (int)*pppppppuVar12;
                  param_1[1] = (int)ppppppuVar14;
                  param_1[2] = (int)ppppppuVar11;
                }
                goto LAB_006bd2fc;
              }
              uVar9 = *(undefined4 *)(local_a0 + 0x10);
              ppppppuVar14 = *(uint *******)(local_a0 + 0x14);
              uVar3 = FUN_01a60560(local_70,local_6c,local_68,local_64,uVar9,ppppppuVar14);
              uVar2 = uVar3 >> 0x19;
              iVar13 = local_a0 + 0x6c;
              local_cc = 0;
              while( true ) {
                uVar3 = (uint)local_7c & uVar3;
                uVar18 = *(uint *)((int)local_80 + uVar3);
                uVar4 = uVar18 ^ uVar2 * 0x1010101;
                uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
                while (uVar4 != 0) {
                  uVar19 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3)
                           & (uint)local_7c;
                  uVar4 = uVar4 - 1 & uVar4;
                  if ((ppppppuVar14 == (local_80 + uVar19 * -2 + -2)[1]) &&
                     (iVar5 = thunk_FUN_01bed842(uVar9,local_80[uVar19 * -2 + -2],ppppppuVar14),
                     iVar5 == 0)) {
                    puVar16 = (uint *)((int)local_80 + (uVar19 - 4 & (uint)local_7c));
                    uVar3 = *puVar16;
                    uVar2 = *(uint *)((int)local_80 + uVar19) & 0x80808080 &
                            *(uint *)((int)local_80 + uVar19) << 1;
                    uVar1 = 0x80;
                    if (((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                       (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) +
                        ((uint)LZCOUNT(uVar3 & 0x80808080 & uVar3 << 1) >> 3) < 4) {
                      uVar1 = 0xff;
                    }
                    *(undefined1 *)((int)local_80 + uVar19) = uVar1;
                    *(undefined1 *)(puVar16 + 1) = uVar1;
                    uVar9 = *(undefined4 *)(local_a0 + 0x10);
                    local_a4 = local_a4 + -1;
                    ppppppuVar14 = *(uint *******)(local_a0 + 0x14);
                    goto LAB_006bd0c8;
                  }
                }
                if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
                local_cc = local_cc + 4;
                uVar3 = uVar3 + local_cc;
              }
LAB_006bd0c8:
              iVar5 = FUN_007017a8(param_5,uVar9,ppppppuVar14);
              uVar17 = *(undefined4 *)(local_a0 + 0x1c);
              uVar9 = *(undefined4 *)(local_a0 + 0x20);
              if (iVar5 != 0) goto code_r0x006bd0e8;
              iVar5 = FUN_00700b3c(uVar17,uVar9,0x21);
              if (iVar5 == 0) {
                FUN_006a4c58(uVar17,uVar9);
              }
              else if (*(int *)(local_a0 + 0x48) == -0x80000000) {
                local_58 = (uint *******)(local_a0 + 0x18);
                local_54 = &LAB_00632348;
                local_5c = (undefined2 *)&LAB_00632348;
                local_60 = (uint *******)(local_a0 + 0xc);
                FUN_01a8da38(&local_38,&DAT_005808ff,&local_60);
                local_60 = local_38;
                local_5c = local_34;
                local_58 = local_30;
                pppppppuVar12 = (uint *******)&local_38;
                FUN_006bd3a0(pppppppuVar12,param_6,&local_60);
                goto LAB_006bd2f4;
              }
            } while( true );
          }
          if (param_5[10] == 1) {
            iVar15 = FUN_006e15a4(param_5);
            if (*(int *)(iVar15 + 0x10) != -0x80000000) goto LAB_006bcec8;
            uVar9 = 99;
            pcVar7 = 
            "Oneof Input Objects require that exactly one field must be supplied and that field must not be null"
            ;
          }
          else {
            uVar9 = 0x33;
            pcVar7 = "Oneof input objects requires have exactly one field";
          }
          pppppppuVar12 = (uint *******)&local_80;
          FUN_006bd550(&local_80,pcVar7,uVar9);
          goto LAB_006bcc08;
        }
      }
    }
    else {
      uVar2 = 7;
      if (param_5[4] < 0) {
        uVar2 = param_5[4] ^ 0x80000000;
      }
      if (uVar2 != 0) {
        if (uVar2 == 6) {
          if (param_5[2] != 0) {
            iVar15 = param_5[1];
            iVar13 = param_5[2] * 0x30;
            iVar20 = 0;
            do {
              local_78 = param_6;
              local_80 = (uint *******)0x0;
              local_7c = (uint ******)iVar20;
              FUN_006bcb88(&local_60,param_2,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),iVar15,
                           &local_80);
              if (local_60 != (uint *******)&DAT_80000000) {
                *param_1 = (int)local_60;
                param_1[1] = (int)local_5c;
                param_1[2] = (int)local_58;
                return;
              }
              iVar20 = iVar20 + 1;
              iVar15 = iVar15 + 0x30;
              iVar13 = iVar13 + -0x30;
            } while (iVar13 != 0);
          }
          *param_1 = -0x80000000;
          return;
        }
        local_80 = (uint *******)*param_6;
        local_7c = param_6[1];
        local_78 = (uint *******)param_6[2];
        goto LAB_006bccf8;
      }
    }
    *param_1 = -0x80000000;
  }
  else {
    local_9c = uVar21;
    if (param_5[4] != -0x80000000) {
      local_80 = (uint *******)*param_6;
      local_7c = param_6[1];
      local_78 = (uint *******)param_6[2];
LAB_006bccf8:
      FUN_006bcb88(param_1,param_2,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),param_5,&local_80);
      return;
    }
    local_5c = &DAT_0132b6a0;
    local_60 = (uint *******)&local_9c;
    FUN_00664898(pppppppuVar12,&DAT_005b29d6,&local_60);
LAB_006bcc08:
    FUN_006bd3a0(param_1,param_6,pppppppuVar12);
  }
  return;
code_r0x006bd0e8:
  local_60 = *(uint ********)(local_a0 + 0x10);
  local_5c = *(undefined2 **)(local_a0 + 0x14);
  local_58 = param_6;
  FUN_006bcb88(param_1,param_2,uVar17,uVar9,iVar5,&local_60);
  if (*param_1 != -0x80000000) {
LAB_006bd2fc:
    FUN_006b3e50(local_80,local_7c);
    return;
  }
  goto LAB_006bcf40;
}

