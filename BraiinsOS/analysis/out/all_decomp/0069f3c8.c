// FUN_0069f3c8 @ 0069f3c8 size=6732 calls_out=17 calls_in=1
// strings: HTTP/1.1 100 Continue   | chunk trailers bytes over limit | Invalid chunk size linear white space | chunk extensions over limit | Invalid chunk body LF | Invalid chunk body CR

/* WARNING: Removing unreachable block (ram,0x006a079c) */
/* WARNING: Removing unreachable block (ram,0x006a0738) */
/* WARNING: Removing unreachable block (ram,0x0069fdc0) */
/* WARNING: Removing unreachable block (ram,0x006a0608) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0069f3c8(undefined4 *param_1,int param_2,code *param_3)

{
  code cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  code *pcVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  code *unaff_r5;
  code *pcVar20;
  code *pcVar21;
  uint *puVar22;
  code *pcVar23;
  uint uVar24;
  undefined4 uVar25;
  uint local_124;
  code *local_120;
  undefined4 local_11c;
  undefined *local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_108;
  code *local_100;
  code *local_f4;
  code *local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *pcStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  code *pcStack_a0;
  undefined4 uStack_9c;
  undefined2 local_94;
  undefined1 local_92;
  code *local_90;
  code *local_8c;
  code *local_88;
  code *local_84;
  undefined4 local_80;
  code *local_7c;
  code *local_78;
  code *local_74;
  code *local_70;
  code *local_6c;
  code *local_68;
  code *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined4 uStack_3c;
  code *local_38;
  code *local_34;
  code *local_30;
  code *local_2c [2];
  
  pcVar10 = (code *)(param_2 + 0x40);
  iVar5 = *(int *)pcVar10;
  puVar15 = (uint *)(param_2 + 0x6c);
  pcVar16 = (code *)(param_2 + 0x68);
  local_f4 = (code *)(param_2 + 0x58);
  pcVar21 = (code *)(param_2 + 0x7d);
  puVar22 = (uint *)(param_2 + 0x60);
  piVar11 = (int *)(param_2 + 0x50);
  if (iVar5 == 1) {
    if (*(int *)(param_2 + 0x90) == 3) {
      iVar5 = *(int *)(param_2 + 0x130);
      if ((uint)(*(int *)(param_2 + 0x128) - iVar5) < 0x19) {
        FUN_006bca64(param_2 + 0x128,iVar5,0x19,1,1);
        iVar5 = *(int *)(param_2 + 0x130);
      }
      FUN_016dd1aa(*(int *)(param_2 + 300) + iVar5,"HTTP/1.1 100 Continue\r\n\r\n",0x19);
      *(int *)(param_2 + 0x130) = *(int *)(param_2 + 0x130) + 0x19;
    }
    unaff_r5 = *(code **)(param_2 + 0x48);
    pcVar6 = (code *)&DAT_00000001;
    if (&DAT_00000001 < unaff_r5) {
      pcVar6 = unaff_r5 + -2;
    }
    if ((pcVar6 == (code *)0x0) || (pcVar6 != (code *)&DAT_00000001)) {
      local_92 = *(undefined1 *)(param_2 + 0x7f);
      local_110 = *(undefined4 *)(param_2 + 0x4c);
      local_114 = *(undefined4 *)(param_2 + 0x50);
      local_118 = *(undefined **)(param_2 + 0x54);
      local_108 = *(int *)(param_2 + 0x68);
      local_120 = *(code **)(param_2 + 0x70);
      local_124 = *(uint *)(param_2 + 0x74);
      uVar24 = *puVar22;
      pcVar6 = *(code **)(param_2 + 0x6c);
      local_ec = *(code **)(param_2 + 100);
      local_11c = *(undefined4 *)(param_2 + 0x78);
      local_100 = *(code **)local_f4;
      uVar25 = *(undefined4 *)(param_2 + 0x5c);
      local_94 = *(undefined2 *)pcVar21;
      uVar4 = *(undefined1 *)(param_2 + 0x7c);
    }
    else {
      iVar5 = *(int *)(param_2 + 0x68);
      uVar24 = *puVar22;
      local_ec = *(code **)(param_2 + 100);
      uVar4 = *(undefined1 *)(param_2 + 0x7c);
      local_100 = *(code **)local_f4;
      uVar25 = *(undefined4 *)(param_2 + 0x5c);
      if (iVar5 == 0) {
        local_108 = 0;
        pcVar6 = param_3;
      }
      else {
        pcVar6 = (code *)*puVar15;
        uVar7 = 0;
        if ((int)pcVar6 < 0) {
LAB_006a0e64:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,pcVar6);
        }
        if (pcVar6 == (code *)0x0) {
          local_108 = 1;
          local_120 = (code *)0x0;
        }
        else {
          local_108 = thunk_FUN_016d4a50(pcVar6);
          local_120 = pcVar6;
          if (local_108 == 0) {
            uVar7 = 1;
            goto LAB_006a0e64;
          }
        }
        FUN_016dd1aa(local_108,iVar5,pcVar6);
        uVar8 = 0x20 - LZCOUNT((uint)local_120 >> 10);
        if (6 < uVar8) {
          uVar8 = 7;
        }
        local_124 = uVar8 << 2 | 1;
      }
      local_110 = *(undefined4 *)(param_2 + 0x4c);
      unaff_r5 = (code *)((uint)unaff_r5 & 1);
      local_114 = *(undefined4 *)(param_2 + 0x50);
      local_118 = *(undefined **)(param_2 + 0x54);
      local_11c = *(undefined4 *)(param_2 + 0x78);
    }
    if (((*(int *)pcVar10 == 1 || *(int *)pcVar10 == 2) && (*(uint *)(param_2 + 0x48) < 2)) &&
       (*(int *)(param_2 + 0x68) != 0)) {
      piVar9 = *(int **)(param_2 + 0x74);
      if (((uint)piVar9 & 1) == 0) {
        piVar12 = piVar9 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar9 != 0) {
            thunk_FUN_016d3fb4(piVar9[1]);
          }
          goto LAB_0069f6e8;
        }
      }
      else if (*(int *)(param_2 + 0x70) + ((uint)piVar9 >> 5) != 0) {
        piVar9 = (int *)(*(int *)(param_2 + 0x68) - ((uint)piVar9 >> 5));
LAB_0069f6e8:
        thunk_FUN_016d3fb4(piVar9);
      }
    }
    *(undefined4 *)(param_2 + 0x4c) = local_110;
    iVar5 = 2;
    *(undefined4 *)(param_2 + 0x50) = local_114;
    *(undefined **)(param_2 + 0x54) = local_118;
    *(undefined1 *)(param_2 + 0x7c) = uVar4;
    *(int *)(param_2 + 0x68) = local_108;
    *(code **)(param_2 + 0x70) = local_120;
    *(uint *)(param_2 + 0x74) = local_124;
    *(undefined4 *)(param_2 + 0x78) = local_11c;
    *(int *)pcVar10 = 2;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined1 *)(param_2 + 0x7f) = local_92;
    *(code **)local_f4 = local_100;
    *(code **)(param_2 + 0x6c) = pcVar6;
    *puVar22 = uVar24;
    *(code **)(param_2 + 0x48) = unaff_r5;
    *(undefined2 *)pcVar21 = local_94;
    *(undefined4 *)(param_2 + 0x5c) = uVar25;
    *(code **)(param_2 + 100) = local_ec;
  }
  if (iVar5 != 2) {
    local_74 = (code *)&LAB_006a3218;
    local_78 = pcVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00570def,&local_78,&DAT_018a4538);
  }
  uVar24 = *(uint *)(param_2 + 0x48);
  iVar5 = 1;
  local_ec = (code *)(param_2 + 0x100);
  if (1 < uVar24) {
    iVar5 = uVar24 - 2;
  }
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar8 = *(uint *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar8 = 0x4000;
      }
      uVar17 = *(uint *)(param_2 + 0x4c);
      if ((uVar24 & 1) == 0) {
        uVar17 = 100;
      }
      pcVar6 = (code *)(uint)*(byte *)(param_2 + 0x7c);
      local_118 = &DAT_018a4998;
LAB_0069f838:
      do {
        local_90 = (code *)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(pcVar6) {
        case (code *)0x0:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          if (local_78 == (code *)&DAT_00000001) break;
          if (local_74 != (code *)0x0) {
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              goto LAB_006a004c;
            }
            pcVar20 = (code *)(uint)(byte)*local_70;
            pcVar21 = *(code **)(local_74 + 0x10);
            (*pcVar21)(local_2c,local_70,local_6c);
            uVar24 = (uint)(pcVar20 + -0x30) & 0xff;
            if (uVar24 < 10) {
LAB_0069fd2c:
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar24 = uVar24 | *(uint *)local_f4 << 4;
                uVar13 = *(uint *)(param_2 + 0x5c) << 4 | *(uint *)local_f4 >> 0x1c;
LAB_006a05f0:
                *(uint *)local_f4 = uVar24;
                *(uint *)(param_2 + 0x5c) = uVar13;
                pcVar6 = (code *)&DAT_00000001;
                goto LAB_006a05f8;
              }
            }
            else if (((uint)(pcVar20 + -0x61) & 0xff) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar14 = *(uint *)local_f4;
                uVar13 = *(uint *)(param_2 + 0x5c) << 4 | uVar14 >> 0x1c;
                pcVar6 = pcVar20 + -0x57;
LAB_006a05e4:
                uVar24 = ((uint)pcVar6 & 0xff) + uVar14 * 0x10;
                uVar13 = uVar13 + CARRY4((uint)pcVar6 & 0xff,uVar14 * 0x10);
                goto LAB_006a05f0;
              }
            }
            else {
              if (5 < ((uint)(pcVar20 + -0x41) & 0xff)) {
                uVar25 = 0x2b;
                pcVar20 = (code *)&DAT_00000014;
                pcVar18 = "Invalid chunk size line: missing size digit";
                goto LAB_006a067c;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar14 = *(uint *)local_f4;
                uVar13 = *(uint *)(param_2 + 0x5c) << 4 | uVar14 >> 0x1c;
                pcVar6 = pcVar20 + -0x37;
                goto LAB_006a05e4;
              }
            }
            goto LAB_006a06dc;
          }
LAB_006a0084:
          pcVar23 = local_70;
          local_80 = local_70;
          local_7c = local_6c;
          goto LAB_006a004c;
        case (code *)0x1:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) {
LAB_006a0138:
              unaff_r5 = local_6c;
              pcVar23 = local_70;
              local_80 = local_70;
              local_7c = local_6c;
              goto LAB_006a004c;
            }
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              unaff_r5 = pcVar20;
              goto LAB_006a004c;
            }
            pcVar21 = (code *)(uint)(byte)*local_70;
            (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
            uVar24 = (uint)(pcVar21 + -0x30) & 0xff;
            if (uVar24 < 10) goto LAB_0069fd2c;
            if (((uint)(pcVar21 + -0x61) & 0xff) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar14 = *(uint *)local_f4;
                uVar13 = *(uint *)(param_2 + 0x5c) << 4 | uVar14 >> 0x1c;
                pcVar6 = pcVar21 + -0x57;
                goto LAB_006a05e4;
              }
            }
            else {
              if (5 < ((uint)(pcVar21 + -0x41) & 0xff)) {
                pcVar6 = (code *)&SUB_00000002;
                uVar25 = 0x25;
                pcVar20 = (code *)&DAT_00000014;
                if (&DAT_0000001f < pcVar21) {
                  if (pcVar21 == (code *)&DAT_00000020) goto LAB_006a05f8;
                  pcVar18 = "Invalid chunk size line: Invalid Size";
                  if (pcVar21 == (code *)&DAT_0000003b) goto LAB_006a04a0;
                }
                else {
                  if (pcVar21 == (code *)&DAT_00000009) goto LAB_006a05f8;
                  pcVar18 = "Invalid chunk size line: Invalid Size";
                  if (pcVar21 == (code *)&DAT_0000000d) goto LAB_0069fb5c;
                }
                goto LAB_006a067c;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar14 = *(uint *)local_f4;
                uVar13 = *(uint *)(param_2 + 0x5c) << 4 | uVar14 >> 0x1c;
                pcVar6 = pcVar21 + -0x37;
                goto LAB_006a05e4;
              }
            }
LAB_006a06dc:
            uVar25 = 0x1c;
            pcVar20 = (code *)&DAT_00000015;
            pcVar18 = "invalid chunk size: overflow";
            goto LAB_006a067c;
          }
          break;
        case (code *)0x2:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (code *)0x0) {
              pcVar21 = (code *)(uint)(byte)*local_70;
              (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
              pcVar6 = (code *)&SUB_00000002;
              uVar25 = 0x25;
              pcVar20 = (code *)&DAT_00000014;
              if (&DAT_0000001f < pcVar21) {
                if (pcVar21 != (code *)&DAT_00000020) {
                  pcVar18 = "Invalid chunk size linear white space";
                  if (pcVar21 != (code *)&DAT_0000003b) goto LAB_006a067c;
LAB_006a04a0:
                  pcVar20 = (code *)&DAT_00000014;
                  pcVar6 = (code *)0x3;
                }
              }
              else if (pcVar21 != (code *)&DAT_00000009) {
                pcVar18 = "Invalid chunk size linear white space";
                if (pcVar21 != (code *)&DAT_0000000d) goto LAB_006a067c;
LAB_0069fb5c:
                pcVar20 = (code *)&DAT_00000014;
                pcVar6 = (code *)&DAT_00000004;
              }
              goto LAB_006a05f8;
            }
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pcVar23 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
            unaff_r5 = pcVar20;
            goto LAB_006a004c;
          }
          break;
        case (code *)0x3:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              unaff_r5 = pcVar20;
              goto LAB_006a004c;
            }
            pcVar21 = (code *)(uint)(byte)*local_70;
            (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
            pcVar20 = (code *)&DAT_00000015;
            if (pcVar21 != (code *)&DAT_0000000a) {
              pcVar6 = (code *)&DAT_00000004;
              if (pcVar21 != (code *)&DAT_0000000d) {
                pcVar6 = (code *)0x3;
                uVar25 = 0x1b;
                uVar24 = *puVar22 + 1;
                iVar5 = *(int *)(param_2 + 100) + (uint)(0xfffffffe < *puVar22);
                *puVar22 = uVar24;
                *(int *)(param_2 + 100) = iVar5;
                pcVar18 = "chunk extensions over limit";
                if (iVar5 != 0 || uVar24 >> 0xe != 0) goto LAB_006a067c;
              }
              goto LAB_006a05f8;
            }
            uVar25 = 0x28;
            pcVar18 = "invalid chunk extension contains newline";
LAB_006a067c:
            FUN_015e79d4(&local_80,pcVar20,pcVar18,uVar25);
            unaff_r5 = pcVar20;
            pcVar23 = (code *)((uint)local_80 & 0xff);
            goto LAB_006a004c;
          }
          break;
        case (code *)0x4:
          pcVar6 = *(code **)local_f4;
          pcVar20 = *(code **)(param_2 + 0x5c);
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          unaff_r5 = pcVar20;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0084;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (code *)0x0) {
              pcVar21 = (code *)(uint)(byte)*local_70;
              (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
              if (pcVar21 == (code *)&DAT_0000000a) {
                bVar2 = pcVar6 == (code *)0x0;
                pcVar6 = (code *)&DAT_00000005;
                if (bVar2 && pcVar20 == (code *)0x0) {
                  pcVar6 = (code *)&DAT_0000000a;
                }
                goto LAB_006a05f8;
              }
              uVar25 = 0x15;
              pcVar20 = (code *)&DAT_00000014;
              pcVar18 = "Invalid chunk size LF";
              goto LAB_006a067c;
            }
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pcVar23 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
            goto LAB_006a004c;
          }
          break;
        case (code *)0x5:
          pcVar6 = *(code **)local_f4;
          unaff_r5 = *(code **)(param_2 + 0x5c);
          pcVar20 = pcVar6;
          if (unaff_r5 != (code *)0x0) {
            pcVar20 = (code *)0xffffffff;
          }
          FUN_0075daa4(&local_78,local_ec,param_3,pcVar20);
          pcVar3 = local_70;
          pcVar20 = local_74;
          if (local_78 != (code *)&DAT_00000001) {
            pcVar21 = pcVar20;
            if (local_74 == (code *)0x0) {
              pcVar23 = local_70;
              local_80 = local_70;
              local_7c = local_6c;
            }
            else {
              *(undefined4 *)((uint)&local_38 | 4) = local_70;
              ((undefined4 *)((uint)&local_38 | 4))[1] = local_6c;
              local_38 = local_74;
              local_2c[0] = local_68;
              if (local_6c == (code *)0x0) {
                *(uint *)local_f4 = 0;
                *(undefined4 *)(param_2 + 0x5c) = 0;
                FUN_014b3b88(&local_78);
                pcVar23 = local_78;
                local_7c = local_74;
                local_80 = local_78;
                (**(code **)(pcVar20 + 0x10))(local_2c,pcVar3,0);
              }
              else {
                *(int *)local_f4 = (int)pcVar6 - (int)local_6c;
                *(uint *)(param_2 + 0x5c) = (int)unaff_r5 - (uint)(pcVar6 < local_6c);
                uVar4 = 5;
                if (pcVar6 == local_6c && unaff_r5 == (code *)0x0) {
                  uVar4 = 6;
                }
                local_84 = local_68;
                local_88 = local_30;
                local_8c = local_34;
                local_90 = local_74;
                local_80._0_2_ = CONCAT11(uVar4,4);
                pcVar21 = local_30;
                pcVar23 = (code *)&DAT_00000004;
              }
            }
            goto LAB_006a004c;
          }
          break;
        case (code *)0x6:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (code *)0x0) {
              pcVar21 = (code *)(uint)(byte)*local_70;
              (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
              pcVar6 = (code *)&DAT_00000007;
              if (pcVar21 == (code *)&DAT_0000000d) goto LAB_006a05f8;
              uVar25 = 0x15;
              pcVar20 = (code *)&DAT_00000014;
              pcVar18 = "Invalid chunk body CR";
              goto LAB_006a067c;
            }
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pcVar23 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
            unaff_r5 = pcVar20;
            goto LAB_006a004c;
          }
          break;
        case (code *)0x7:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (code *)0x0) {
              pcVar21 = (code *)(uint)(byte)*local_70;
              (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
              pcVar6 = (code *)0x0;
              if (pcVar21 == (code *)&DAT_0000000a) goto LAB_006a05f8;
              uVar25 = 0x15;
              pcVar20 = (code *)&DAT_00000014;
              pcVar18 = "Invalid chunk body LF";
              goto LAB_006a067c;
            }
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pcVar23 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
            unaff_r5 = pcVar20;
            goto LAB_006a004c;
          }
          break;
        case (code *)0x8:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0084;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              goto LAB_006a004c;
            }
            cVar1 = *local_70;
            pcVar20 = (code *)(uint)(byte)cVar1;
            pcVar21 = *(code **)(local_74 + 0x10);
            (*pcVar21)(local_2c,local_70,local_6c);
            if (*(uint *)pcVar16 != 0) {
              iVar5 = *(int *)(param_2 + 0x6c);
              if (*(int *)(param_2 + 0x70) == iVar5) {
                FUN_00f5f538(pcVar16,1);
                iVar5 = *(int *)(param_2 + 0x6c);
                iVar19 = *(int *)(param_2 + 0x70);
                *(code *)(*(int *)(param_2 + 0x68) + iVar5) = cVar1;
                if (iVar19 == iVar5) {
                  local_74 = (code *)0x0;
                  local_78 = (code *)0x1;
                    /* WARNING: Subroutine does not return */
                  FUN_00f600c0(&local_78);
                }
              }
              else {
                *(code *)(*(uint *)pcVar16 + iVar5) = cVar1;
              }
              *puVar15 = iVar5 + 1U;
              if (*(uint *)pcVar16 != 0) {
                if (iVar5 + 1U < uVar8) {
                  pcVar6 = (code *)&DAT_00000008;
                  if (pcVar20 == (code *)&DAT_0000000d) {
                    pcVar6 = (code *)&DAT_00000009;
                  }
                  goto LAB_006a05f8;
                }
LAB_006a0550:
                uVar25 = 0x1f;
                pcVar20 = (code *)&DAT_00000015;
                pcVar18 = "chunk trailers bytes over limit";
                goto LAB_006a067c;
              }
            }
            local_118 = &DAT_018a4988;
LAB_006a0e24:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("trailers_buf is None",0x14,local_118);
          }
          break;
        case (code *)0x9:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (code *)0x0) {
              pcVar21 = (code *)(uint)(byte)*local_70;
              (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
              if (pcVar21 == (code *)&DAT_0000000a) {
                uVar25 = 0x1d;
                pcVar20 = (code *)&DAT_00000015;
                if (*(uint *)(param_2 + 0x78) < uVar17) {
                  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) + 1;
                  if (*(int *)(param_2 + 0x68) == 0) goto LAB_006a0e24;
                  local_78 = (code *)CONCAT31(local_78._1_3_,10);
                  FUN_00f60054(pcVar16,&local_78,1,0x1d);
                  if (*(uint *)pcVar16 == 0) goto LAB_006a0e24;
                  uVar25 = 0x1f;
                  pcVar6 = (code *)&DAT_0000000a;
                  pcVar18 = "chunk trailers bytes over limit";
                  if (*puVar15 < uVar8) goto LAB_006a05f8;
                }
                else {
                  pcVar18 = "chunk trailers count overflow";
                }
              }
              else {
                uVar25 = 0x16;
                pcVar20 = (code *)&DAT_00000014;
                pcVar18 = "Invalid trailer end LF";
              }
              goto LAB_006a067c;
            }
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pcVar23 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
            unaff_r5 = pcVar20;
            goto LAB_006a004c;
          }
          break;
        case (code *)0xa:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0084;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              goto LAB_006a004c;
            }
            cVar1 = *local_70;
            pcVar20 = (code *)(uint)(byte)cVar1;
            pcVar21 = *(code **)(local_74 + 0x10);
            (*pcVar21)(local_2c,local_70,local_6c);
            if (pcVar20 == (code *)&DAT_0000000d) {
              pcVar6 = (code *)&DAT_0000000b;
              if (*(uint *)pcVar16 != 0) {
                local_78 = (code *)CONCAT31(local_78._1_3_,0xd);
                FUN_00f60054(pcVar16,&local_78,1);
                goto LAB_006a0500;
              }
            }
            else if (*(uint *)pcVar16 == 0) {
              pcVar21 = (code *)thunk_FUN_016d4a50(0x40);
              if (pcVar21 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4();
              }
              local_70 = (code *)&DAT_00000040;
              local_6c = (code *)&DAT_00000001;
              local_74 = (code *)0x0;
              local_38 = (code *)CONCAT31(local_38._1_3_,cVar1);
              local_78 = pcVar21;
              FUN_00f60054(&local_78,&local_38);
              pcVar6 = (code *)&DAT_00000008;
              *(code **)pcVar16 = local_78;
              *(code **)(param_2 + 0x6c) = local_74;
              *(code **)(param_2 + 0x70) = local_70;
              *(code **)(param_2 + 0x74) = local_6c;
              pcVar21 = pcVar16;
            }
            else {
              local_78 = (code *)CONCAT31(local_78._1_3_,cVar1);
              FUN_00f60054(pcVar16,&local_78,1);
              pcVar6 = (code *)&DAT_00000008;
LAB_006a0500:
              if (uVar8 <= *puVar15) goto LAB_006a0550;
            }
LAB_006a05f8:
            *(char *)(param_2 + 0x7c) = (char)pcVar6;
            unaff_r5 = pcVar20;
            goto LAB_0069f838;
          }
          break;
        case (code *)0xb:
          FUN_0075daa4(&local_78,local_ec,param_3,1);
          pcVar20 = local_6c;
          if (local_78 != (code *)&DAT_00000001) {
            if (local_74 == (code *)0x0) goto LAB_006a0138;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (code *)0x0) {
              FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              pcVar23 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
              unaff_r5 = pcVar20;
              goto LAB_006a004c;
            }
            pcVar21 = (code *)(uint)(byte)*local_70;
            (**(code **)(local_74 + 0x10))(local_2c,local_70,local_6c);
            pcVar20 = (code *)&DAT_00000014;
            uVar25 = 0x14;
            pcVar18 = "Invalid chunk end LF";
            if (pcVar21 != (code *)&DAT_0000000a) goto LAB_006a067c;
            if (*(uint *)pcVar16 != 0) {
              local_78 = (code *)CONCAT31(local_78._1_3_,10);
              FUN_00f60054(pcVar16,&local_78,1,0x14);
              if (uVar8 <= *puVar15) goto LAB_006a0550;
            }
            goto switchD_0069f84c_caseD_c;
          }
          break;
        case (code *)0xc:
switchD_0069f84c_caseD_c:
          *(undefined1 *)(param_2 + 0x7c) = 0xc;
          goto LAB_006a0c5c;
        }
        local_80 = (code *)CONCAT31(local_80._1_3_,5);
        pcVar23 = (code *)&DAT_00000005;
LAB_006a004c:
        if (((uint)pcVar23 & 0xff) == 5) {
          pcVar23 = (code *)&DAT_00000005;
          local_100 = (code *)&DAT_00000005;
joined_r0x006a08c0:
          pcVar16 = (code *)0x0;
          local_f4 = param_3;
joined_r0x006a08c0:
          if (local_90 != (code *)0x0) {
LAB_006a0d58:
            (**(code **)(local_90 + 0x10))(&local_84,local_8c,local_88);
            if (!(local_100 != (code *)&DAT_00000005 || pcVar16 != (code *)0x0)) goto LAB_006a0d7c;
            goto LAB_006a0908;
          }
LAB_006a08c4:
          if (!(local_100 != (code *)&DAT_00000005 || pcVar16 != (code *)0x0)) goto LAB_006a0d7c;
          goto LAB_006a0908;
        }
        pcVar6 = (code *)(uint)local_80._1_1_;
        if (((uint)pcVar23 & 0xff) != 4) {
          unaff_r5 = local_7c;
          pcVar21 = local_80;
LAB_006a0d44:
          pcVar21 = (code *)((uint)pcVar21 >> 0x10);
          local_100 = (code *)&DAT_00000004;
          goto joined_r0x006a08c0;
        }
        *(byte *)(param_2 + 0x7c) = local_80._1_1_;
        if (pcVar6 == (code *)&DAT_0000000c) {
LAB_006a0c5c:
          pcVar21 = *(code **)pcVar16;
          if (pcVar21 != (code *)0x0) {
            if (uVar17 <= *(uint *)(param_2 + 0x78)) {
              FUN_015e79d4(&local_78,0x15,"chunk trailers count overflow",0x1d);
              pcVar6 = (code *)((uint)local_78 >> 8);
              unaff_r5 = local_74;
              pcVar23 = local_78;
              pcVar21 = local_78;
              goto LAB_006a0d44;
            }
            local_34 = (code *)*puVar15;
            local_30 = *(code **)(param_2 + 0x70);
            local_2c[0] = *(code **)(param_2 + 0x74);
            *(uint *)pcVar16 = 0;
            local_38 = pcVar21;
            FUN_010ba778(&local_78);
            unaff_r5 = local_6c;
            pcVar23 = local_70;
            local_100 = local_78;
            if (local_78 == (code *)0x3 && local_74 == (code *)0x0) {
              local_100 = (code *)&DAT_00000004;
              pcVar16 = (code *)0x0;
            }
            else {
              local_f4 = local_68;
              local_ec = local_64;
              local_e8 = local_60;
              uStack_e4 = uStack_5c;
              uStack_e0 = uStack_58;
              uStack_dc = uStack_54;
              uStack_d8 = local_50;
              local_d4 = local_4c;
              uStack_d0 = uStack_48;
              uStack_cc = uStack_44;
              pcStack_c8 = pcStack_40;
              uStack_c4 = uStack_3c;
              pcVar16 = local_74;
            }
            FUN_00f5fafc(&local_38);
            pcVar21 = (code *)((uint)pcVar23 >> 0x10);
            pcVar6 = (code *)((uint)pcVar23 >> 8);
            goto joined_r0x006a08c0;
          }
          local_ec = (code *)0x0;
          pcVar23 = (code *)&DAT_01858684;
          local_100 = (code *)0x3;
          unaff_r5 = (code *)&DAT_00000001;
          local_f4 = (code *)0x0;
          pcVar21 = (code *)0x185;
          pcVar6 = (code *)0x18586;
          pcVar16 = (code *)0x0;
          if (local_90 != (code *)0x0) goto LAB_006a0d58;
          goto LAB_006a08c4;
        }
      } while (local_90 == (code *)0x0);
      local_ec = local_84;
      local_70 = local_8c;
      local_6c = local_88;
      local_74 = local_90;
    }
    else {
      if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_006a0748;
      FUN_0075daa4(&local_78,local_ec,param_3,0x2000);
      pcVar16 = (code *)0x0;
      if (local_78 != (code *)0x0) goto LAB_006a0d7c;
      if (local_74 == (code *)0x0) {
        local_100 = (code *)&DAT_00000004;
        pcVar21 = (code *)((uint)local_70 >> 0x10);
        pcVar6 = (code *)((uint)local_70 >> 8);
        unaff_r5 = local_6c;
        local_f4 = param_3;
        pcVar23 = local_70;
        goto LAB_006a0908;
      }
      local_ec = local_68;
      *(bool *)(param_2 + 0x4c) = local_6c == (code *)0x0;
    }
    pcVar6 = (code *)((uint)local_74 >> 8);
    pcVar21 = (code *)((uint)local_74 >> 0x10);
    pcVar16 = (code *)0x0;
    local_100 = (code *)0x3;
    unaff_r5 = local_70;
    local_f4 = local_6c;
    pcVar23 = local_74;
    goto LAB_006a0908;
  }
  if (*piVar11 == 0 && *(int *)(param_2 + 0x54) == 0) {
LAB_006a0748:
    local_6c = (code *)0x0;
    local_68 = (code *)0x0;
    local_74 = (code *)&DAT_01858684;
    local_70 = (code *)&DAT_00000001;
LAB_006a0758:
    pcVar16 = (code *)0x0;
    local_100 = (code *)0x3;
    local_ec = local_68;
    local_f4 = local_6c;
    pcVar21 = local_74;
    unaff_r5 = local_70;
LAB_006a0964:
    local_60 = local_e8;
    uStack_5c = uStack_e4;
    uStack_58 = uStack_e0;
    uStack_54 = uStack_dc;
    local_50 = uStack_d8;
    local_4c = local_d4;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    pcStack_40 = pcStack_c8;
    uStack_3c = uStack_c4;
    if (local_100 == (code *)0x3 && pcVar16 == (code *)0x0) {
      iVar5 = 1;
      if (1 < *(uint *)(param_2 + 0x48)) {
        iVar5 = *(uint *)(param_2 + 0x48) - 2;
      }
      if (iVar5 == 0) {
        if (!(*piVar11 == 0 && *(int *)(param_2 + 0x54) == 0)) goto LAB_006a0a44;
LAB_006a09dc:
        if (local_f4 != (code *)0x0) {
          iVar5 = 3;
          local_100 = (code *)0x3;
          pcVar16 = (code *)0x0;
          goto LAB_006a0a20;
        }
        iVar5 = 3;
      }
      else {
        if (iVar5 != 1) {
          if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_006a0a44;
          goto LAB_006a09dc;
        }
        if (*(char *)(param_2 + 0x7c) == '\f') goto LAB_006a09dc;
LAB_006a0a44:
        if (local_f4 != (code *)0x0) {
          *param_1 = local_100;
          param_1[1] = pcVar16;
          param_1[2] = pcVar21;
          param_1[3] = unaff_r5;
          param_1[4] = local_f4;
          param_1[5] = local_ec;
          param_1[6] = local_e8;
          param_1[7] = uStack_e4;
          param_1[8] = uStack_e0;
          param_1[9] = uStack_dc;
          param_1[10] = uStack_d8;
          param_1[0xb] = local_d4;
          param_1[0xc] = uStack_d0;
          param_1[0xd] = uStack_cc;
          param_1[0xe] = pcStack_c8;
          param_1[0xf] = uStack_c4;
          return;
        }
        iVar5 = 4;
      }
      local_78 = local_100;
      local_74 = pcVar16;
      local_70 = pcVar21;
      local_6c = unaff_r5;
      local_68 = local_f4;
      local_64 = local_ec;
      local_ec = (code *)(**(code **)(pcVar21 + 0x10))(&local_64,unaff_r5,local_f4);
      pcVar16 = (code *)0x0;
      local_100 = (code *)&DAT_00000005;
      local_f4 = pcStack_c8;
    }
    else {
      iVar5 = 4;
LAB_006a0a20:
      uStack_b0 = uStack_d8;
      uStack_b4 = uStack_dc;
      uStack_b8 = uStack_e0;
      uStack_bc = uStack_e4;
      local_c0 = local_e8;
      local_ac = local_d4;
      uStack_a8 = uStack_d0;
      uStack_a4 = uStack_cc;
      pcStack_a0 = pcStack_c8;
      uStack_9c = uStack_c4;
    }
  }
  else {
    FUN_0075daa4(&local_78,local_ec,param_3,*piVar11);
    pcVar21 = local_74;
    pcVar16 = (code *)0x0;
    if (local_78 != (code *)0x0) {
LAB_006a0d7c:
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if (local_74 != (code *)0x0) {
      pcVar16 = (code *)*piVar11;
      uVar24 = *(uint *)(param_2 + 0x54);
      local_2c[0] = local_68;
      iVar5 = 0;
      iVar19 = 0;
      local_34 = local_70;
      local_38 = local_74;
      local_30 = local_6c;
      if (uVar24 != 0 || uVar24 < (local_6c <= pcVar16)) {
        if (local_6c == (code *)0x0) {
          FUN_014b3b88(&local_78);
          pcVar16 = (code *)0x0;
          (**(code **)(pcVar21 + 0x10))(local_2c,local_70,0);
          pcVar21 = (code *)((uint)local_78 >> 0x10);
          pcVar6 = (code *)((uint)local_78 >> 8);
          local_100 = (code *)&DAT_00000004;
          unaff_r5 = local_74;
          local_f4 = local_78;
          pcVar23 = local_78;
          goto LAB_006a0908;
        }
        iVar5 = (int)pcVar16 - (int)local_6c;
        iVar19 = uVar24 - (pcVar16 < local_6c);
      }
      *piVar11 = iVar5;
      *(int *)(param_2 + 0x54) = iVar19;
      goto LAB_006a0758;
    }
    pcVar21 = (code *)((uint)local_70 >> 0x10);
    pcVar6 = (code *)((uint)local_70 >> 8);
    local_100 = (code *)&DAT_00000004;
    unaff_r5 = local_6c;
    local_f4 = local_6c;
    pcVar23 = local_70;
LAB_006a0908:
    pcVar21 = (code *)((int)pcVar21 << 0x10 | ((uint)pcVar6 & 0xff) << 8 | (uint)pcVar23 & 0xff);
    if (local_100 != (code *)&DAT_00000004 || pcVar16 != (code *)0x0) goto LAB_006a0964;
    iVar5 = 4;
    pcVar16 = (code *)0x0;
    local_c0 = local_e8;
    uStack_bc = uStack_e4;
    uStack_b8 = uStack_e0;
    uStack_b4 = uStack_dc;
    uStack_b0 = uStack_d8;
    local_ac = local_d4;
    uStack_a8 = uStack_d0;
    uStack_a4 = uStack_cc;
    pcStack_a0 = pcStack_c8;
    uStack_9c = uStack_c4;
    local_100 = (code *)&DAT_00000004;
  }
  local_60 = local_c0;
  uStack_5c = uStack_bc;
  uStack_58 = uStack_b8;
  uStack_54 = uStack_b4;
  local_50 = uStack_b0;
  local_4c = local_ac;
  uStack_48 = uStack_a8;
  uStack_44 = uStack_a4;
  pcStack_40 = pcStack_a0;
  uStack_3c = uStack_9c;
  local_70 = pcVar21;
  local_6c = unaff_r5;
  local_74 = pcVar16;
  local_78 = local_100;
  local_68 = local_f4;
  local_64 = local_ec;
  if (*(int *)pcVar10 == 1) {
    uVar24 = *(uint *)(param_2 + 0x48);
  }
  else {
    if (*(int *)pcVar10 != 2) goto LAB_006a0bd4;
    uVar24 = *(uint *)(param_2 + 0x48);
  }
  if ((uVar24 < 2) && (*(int *)(param_2 + 0x68) != 0)) {
    piVar11 = *(int **)(param_2 + 0x74);
    if (((uint)piVar11 & 1) == 0) {
      piVar9 = piVar11 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar19 + -1;
      if (iVar19 != 1) goto LAB_006a0bd4;
      DataMemoryBarrier(0xb);
      if (*piVar11 != 0) {
        thunk_FUN_016d3fb4(piVar11[1]);
      }
    }
    else {
      if (*(int *)(param_2 + 0x70) + ((uint)piVar11 >> 5) == 0) goto LAB_006a0bd4;
      piVar11 = (int *)(*(int *)(param_2 + 0x68) - ((uint)piVar11 >> 5));
    }
    thunk_FUN_016d3fb4(piVar11);
  }
LAB_006a0bd4:
  *(int *)pcVar10 = iVar5;
  *(undefined4 *)(param_2 + 0x44) = 0;
  FUN_006a2fc8(param_2);
  FUN_006a30fc(param_2,param_3);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  param_1[7] = uStack_5c;
  param_1[8] = uStack_58;
  param_1[9] = uStack_54;
  param_1[10] = local_50;
  param_1[0xb] = local_4c;
  param_1[0xc] = uStack_48;
  param_1[0xd] = uStack_44;
  param_1[0xe] = pcStack_40;
  param_1[0xf] = uStack_3c;
  return;
}

