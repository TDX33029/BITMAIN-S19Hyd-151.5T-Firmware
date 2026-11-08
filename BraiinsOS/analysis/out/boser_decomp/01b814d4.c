// FUN_01b814d4 @ 01b814d4 size=1900 calls_out=8 calls_in=1
// strings: 

uint FUN_01b814d4(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint unaff_r6;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *local_5c;
  uint local_58;
  int local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_7 < 0x200) {
    unaff_r6 = 0xffffffff;
  }
  local_54 = 0xff;
  if (param_7 >= 0x200) {
    uVar5 = FUN_01b80b3c(param_6,&local_54,&local_58,param_3,param_4,0);
    unaff_r6 = uVar5;
    if (uVar5 < 0xffffff89) {
      if ((param_5 < local_58) ||
         (uVar1 = 1 << (local_58 & 0xff), uVar6 = (local_54 + 1) * 2,
         uVar13 = (1 << (local_58 - 0x20 & 0xff) | 1U >> (0x20 - local_58 & 0xff)) +
                  (uint)(0xfffffff4 < uVar1) + (uint)CARRY4(uVar6,uVar1 + 0xb),
         uVar6 = uVar6 + uVar1 + 0xb >> 2 | uVar13 * 0x40000000, uVar14 = uVar6 + uVar1 + 0x83,
         (uint)(uVar14 * 4 <= param_7) <=
         -((((int)(uVar1 + 2) >> 0x1f) + (uint)(0xffffff7e < uVar1 + 2) + (uVar13 >> 2) +
           (uint)CARRY4(uVar6,uVar1 + 0x83)) * 4 | uVar14 >> 0x1e))) {
        unaff_r6 = 0xffffffd4;
      }
      else {
        iVar9 = param_6 + 0x200;
        unaff_r6 = FUN_01b81024(iVar9,param_6,local_54,local_58,param_6 + (uVar1 + 0x81) * 4,
                                param_7 + (uVar1 + 0x81) * -4);
        if (unaff_r6 < 0xffffff89) {
          local_3c = 0;
          local_38 = (undefined4 *)0x0;
          local_34 = (undefined4 *)0x0;
          local_30 = (undefined4 *)0x0;
          puVar10 = param_1;
          if (*(short *)(param_6 + 0x202) == 0) {
            unaff_r6 = FUN_01b812d8(&local_40,param_3 + uVar5,param_4 - uVar5);
            puVar3 = local_30;
            puVar2 = local_34;
            if (0xffffff88 < unaff_r6) goto LAB_01b817a8;
            FUN_01b813f8(auStack_50,&local_40,iVar9);
            FUN_01b813f8(auStack_48,&local_40,iVar9);
            puVar12 = local_38;
            while( true ) {
              local_5c = auStack_50;
              uVar5 = local_3c;
              if (local_3c < 0x21) {
                if (puVar12 < puVar3) {
                  if (puVar12 == puVar2) {
                    if (local_3c == 0x20) {
                      puVar8 = (undefined4 *)0x2;
                    }
                    else {
                      puVar8 = (undefined4 *)&DAT_00000001;
                    }
                  }
                  else {
                    puVar7 = (undefined4 *)((int)puVar12 - (local_3c >> 3));
                    uVar5 = local_3c >> 3;
                    puVar8 = puVar7;
                    if (puVar7 < puVar2) {
                      uVar5 = (int)puVar12 - (int)puVar2;
                      puVar8 = (undefined4 *)&DAT_00000001;
                    }
                    puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                    if (puVar2 <= puVar7) {
                      puVar8 = (undefined4 *)0x0;
                    }
                    local_40 = *puVar12;
                    uVar5 = local_3c + uVar5 * -8;
                  }
                }
                else {
                  local_38 = puVar12;
                  FUN_01b813c4(&local_40);
                  puVar8 = (undefined4 *)0x0;
                  uVar5 = local_3c;
                  puVar12 = local_38;
                }
              }
              else {
                puVar8 = (undefined4 *)&DAT_00000003;
                puVar12 = (undefined4 *)&DAT_00561bb0;
              }
              if (param_1 + param_2 + -3 <= puVar10 || puVar8 != (undefined4 *)0x0)
              goto LAB_01b81aa4;
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80f50(local_5c,&local_40);
              *puVar10 = uVar4;
              uVar4 = FUN_01b80f50(auStack_48,&local_40);
              puVar10[1] = uVar4;
              uVar5 = local_3c;
              if (0x20 < local_3c) break;
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) goto LAB_01b81aa0;
                puVar7 = (undefined4 *)((int)puVar12 - (local_3c >> 3));
                uVar5 = local_3c >> 3;
                puVar8 = puVar7;
                if (puVar7 < puVar2) {
                  uVar5 = (int)puVar12 - (int)puVar2;
                  puVar8 = (undefined4 *)&DAT_00000001;
                }
                puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                if (puVar2 <= puVar7) {
                  puVar8 = (undefined4 *)0x0;
                }
                uVar5 = local_3c + uVar5 * -8;
                local_40 = *puVar12;
                if (puVar8 != (undefined4 *)0x0) goto LAB_01b81aa0;
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
              local_3c = uVar5;
              uVar4 = FUN_01b80f50(local_5c,&local_40);
              puVar10[2] = uVar4;
              uVar4 = FUN_01b80f50(auStack_48,&local_40);
              puVar10[3] = uVar4;
              puVar10 = puVar10 + 4;
            }
            puVar12 = (undefined4 *)&DAT_00561bb0;
LAB_01b81aa0:
            puVar10 = puVar10 + 2;
LAB_01b81aa4:
            while (local_5c = auStack_50, puVar10 <= param_1 + param_2 + -2) {
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80f50(local_5c,&local_40);
              *puVar10 = uVar4;
              if (0x20 < local_3c) {
                uVar4 = FUN_01b80f50(auStack_48,&local_40);
                goto LAB_01b818f0;
              }
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) {
                  uVar5 = local_3c;
                  puVar12 = puVar2;
                }
                else {
                  uVar5 = local_3c >> 3;
                  if ((undefined4 *)((int)puVar12 - (local_3c >> 3)) < puVar2) {
                    uVar5 = (int)puVar12 - (int)puVar2;
                  }
                  puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                  uVar5 = local_3c + uVar5 * -8;
                  local_40 = *puVar12;
                }
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
              if (param_1 + param_2 + -2 < puVar10 + 1) break;
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80f50(auStack_48,&local_40);
              puVar10[1] = uVar4;
              if (0x20 < local_3c) {
                uVar4 = FUN_01b80f50(local_5c,&local_40);
                goto LAB_01b818a8;
              }
              puVar10 = puVar10 + 2;
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) {
                  uVar5 = local_3c;
                  puVar12 = puVar2;
                }
                else {
                  uVar5 = local_3c >> 3;
                  if ((undefined4 *)((int)puVar12 - (local_3c >> 3)) < puVar2) {
                    uVar5 = (int)puVar12 - (int)puVar2;
                  }
                  puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                  uVar5 = local_3c + uVar5 * -8;
                  local_40 = *puVar12;
                }
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
            }
          }
          else {
            unaff_r6 = FUN_01b812d8(&local_40,param_3 + uVar5,param_4 - uVar5);
            puVar3 = local_30;
            puVar2 = local_34;
            if (0xffffff88 < unaff_r6) goto LAB_01b817a8;
            FUN_01b813f8(auStack_50,&local_40,iVar9);
            FUN_01b813f8(auStack_48,&local_40,iVar9);
            puVar12 = local_38;
            while( true ) {
              uVar5 = local_3c;
              if (local_3c < 0x21) {
                if (puVar12 < puVar3) {
                  if (puVar12 == puVar2) {
                    if (local_3c == 0x20) {
                      puVar8 = (undefined4 *)0x2;
                    }
                    else {
                      puVar8 = (undefined4 *)&DAT_00000001;
                    }
                  }
                  else {
                    puVar7 = (undefined4 *)((int)puVar12 - (local_3c >> 3));
                    uVar5 = local_3c >> 3;
                    puVar8 = puVar7;
                    if (puVar7 < puVar2) {
                      uVar5 = (int)puVar12 - (int)puVar2;
                      puVar8 = (undefined4 *)&DAT_00000001;
                    }
                    puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                    if (puVar2 <= puVar7) {
                      puVar8 = (undefined4 *)0x0;
                    }
                    local_40 = *puVar12;
                    uVar5 = local_3c + uVar5 * -8;
                  }
                }
                else {
                  local_38 = puVar12;
                  FUN_01b813c4(&local_40);
                  puVar8 = (undefined4 *)0x0;
                  uVar5 = local_3c;
                  puVar12 = local_38;
                }
              }
              else {
                puVar8 = (undefined4 *)&DAT_00000003;
                puVar12 = (undefined4 *)&DAT_00561bb0;
              }
              if (param_1 + param_2 + -3 <= puVar10 || puVar8 != (undefined4 *)0x0)
              goto LAB_01b81798;
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80fc0(auStack_50,&local_40);
              *puVar10 = uVar4;
              uVar4 = FUN_01b80fc0(auStack_48,&local_40);
              puVar10[1] = uVar4;
              uVar5 = local_3c;
              if (0x20 < local_3c) break;
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) goto LAB_01b81794;
                puVar7 = (undefined4 *)((int)puVar12 - (local_3c >> 3));
                uVar5 = local_3c >> 3;
                puVar8 = puVar7;
                if (puVar7 < puVar2) {
                  uVar5 = (int)puVar12 - (int)puVar2;
                  puVar8 = (undefined4 *)&DAT_00000001;
                }
                puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                if (puVar2 <= puVar7) {
                  puVar8 = (undefined4 *)0x0;
                }
                uVar5 = local_3c + uVar5 * -8;
                local_40 = *puVar12;
                if (puVar8 != (undefined4 *)0x0) goto LAB_01b81794;
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
              local_3c = uVar5;
              uVar4 = FUN_01b80fc0(auStack_50,&local_40);
              puVar10[2] = uVar4;
              uVar4 = FUN_01b80fc0(auStack_48,&local_40);
              puVar10[3] = uVar4;
              puVar10 = puVar10 + 4;
            }
            puVar12 = (undefined4 *)&DAT_00561bb0;
LAB_01b81794:
            puVar10 = puVar10 + 2;
LAB_01b81798:
            while (puVar10 <= param_1 + param_2 + -2) {
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80fc0(auStack_50,&local_40);
              *puVar10 = uVar4;
              if (0x20 < local_3c) {
                uVar4 = FUN_01b80fc0(auStack_48,&local_40);
LAB_01b818f0:
                puVar11 = puVar10 + 2;
                puVar10[1] = uVar4;
LAB_01b818f8:
                unaff_r6 = (int)puVar11 - (int)param_1;
                goto LAB_01b817a8;
              }
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) {
                  uVar5 = local_3c;
                  puVar12 = puVar2;
                }
                else {
                  uVar5 = local_3c >> 3;
                  if ((undefined4 *)((int)puVar12 - (local_3c >> 3)) < puVar2) {
                    uVar5 = (int)puVar12 - (int)puVar2;
                  }
                  puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                  uVar5 = local_3c + uVar5 * -8;
                  local_40 = *puVar12;
                }
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
              if (param_1 + param_2 + -2 < puVar10 + 1) break;
              local_3c = uVar5;
              local_38 = puVar12;
              uVar4 = FUN_01b80fc0(auStack_48,&local_40);
              puVar10[1] = uVar4;
              if (0x20 < local_3c) {
                uVar4 = FUN_01b80fc0(auStack_50,&local_40);
LAB_01b818a8:
                puVar11 = puVar10 + 3;
                puVar10[2] = uVar4;
                goto LAB_01b818f8;
              }
              puVar10 = puVar10 + 2;
              if (puVar12 < puVar3) {
                if (puVar12 == puVar2) {
                  uVar5 = local_3c;
                  puVar12 = puVar2;
                }
                else {
                  uVar5 = local_3c >> 3;
                  if ((undefined4 *)((int)puVar12 - (local_3c >> 3)) < puVar2) {
                    uVar5 = (int)puVar12 - (int)puVar2;
                  }
                  puVar12 = (undefined4 *)((int)puVar12 - uVar5);
                  uVar5 = local_3c + uVar5 * -8;
                  local_40 = *puVar12;
                }
              }
              else {
                FUN_01b813c4(&local_40);
                uVar5 = local_3c;
                puVar12 = local_38;
              }
            }
          }
          unaff_r6 = 0xffffffba;
        }
      }
    }
  }
LAB_01b817a8:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return unaff_r6;
}

