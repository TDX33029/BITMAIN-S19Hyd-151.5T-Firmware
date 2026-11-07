// FUN_019a4dfc @ 019a4dfc size=2104 calls_out=16 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x019a5504) */

void FUN_019a4dfc(byte **param_1,byte *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  byte **ppbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  bool bVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte *local_1f4;
  byte *local_1ec;
  byte *local_1e8;
  byte *local_1e4;
  byte *local_1e0;
  byte *local_1d8;
  byte *local_1d4;
  byte *local_1cc;
  byte *local_1c8;
  undefined1 local_1c4;
  undefined2 local_1b0;
  undefined1 local_1ae;
  byte *local_1ac;
  byte *local_1a8 [2];
  undefined1 local_1a0;
  undefined2 local_18c;
  undefined1 local_18a;
  
  lVar1 = CONCAT44(param_4,param_3);
  uVar17 = CONCAT44(local_1f4,param_3);
  if (param_2[4] == 0) {
    local_1e8 = param_2;
    if (2 < (uint)param_4 >> 7) {
      FUN_019a5758(param_1,param_3,param_4,&local_1e8,FUN_019a5718);
      return;
    }
    FUN_01bed4e2(local_1a8,param_3,param_4);
    *(byte *)((int)local_1a8 + (int)param_4) = 0;
    FUN_012fbc58(&local_1cc,local_1a8,param_4 + 1);
    if (local_1cc == (byte *)0x1) {
      *param_1 = (byte *)0x2;
      param_1[1] = (byte *)&DAT_01d27a70;
      return;
    }
    iVar2 = FUN_01bead0e(local_1c8,*(undefined4 *)param_2);
    if (iVar2 == -1) {
      puVar4 = (undefined4 *)FUN_01be3244();
      pbVar13 = (byte *)*puVar4;
      *param_1 = (byte *)0x0;
      param_1[1] = pbVar13;
      return;
    }
  }
  else {
    bVar16 = param_4 != (byte *)0x0;
    uVar8 = 0;
    if (bVar16) {
      uVar8 = (uint)*param_3;
    }
    local_18a = 0;
    if (bVar16) {
      uVar8 = uVar8 - 0x2f;
    }
    local_1a8[1] = (byte *)0x0;
    if (bVar16) {
      uVar8 = LZCOUNT(uVar8);
    }
    local_1a8[0] = (byte *)0x1;
    if (bVar16) {
      uVar8 = uVar8 >> 5;
    }
    local_1ae = (undefined1)uVar8;
    local_1c4 = 6;
    local_1a0 = 6;
    local_1b0 = 0x201;
    local_18c = 0x201;
    local_1cc = param_3;
    local_1c8 = param_4;
    iVar2 = FUN_01982bb0(&local_1cc,local_1a8);
    if (iVar2 == 0) {
      if (param_4 == (byte *)0x0) {
        local_18a = false;
      }
      else {
        local_18a = *param_3 == 0x2f;
      }
      local_1a0 = 6;
      local_18c = 0x201;
      local_1a8[0] = param_3;
      local_1a8[1] = param_4;
      FUN_01982524(&local_1cc,local_1a8);
      if (((uint)local_1cc & 0xff) - 7 < 3) {
        FUN_0198294c(local_1a8);
        uVar3 = *(undefined4 *)param_2;
        pbVar13 = (byte *)0x0;
        do {
          pbVar6 = (byte *)uVar17;
          puVar15 = &DAT_00000006;
          bVar16 = param_4 != (byte *)0x0;
          uVar8 = 0;
          if (bVar16) {
            uVar8 = (uint)*pbVar6;
          }
          local_1a0 = 6;
          if (bVar16) {
            uVar8 = LZCOUNT(uVar8 - 0x2f);
          }
          local_18c = 0x201;
          if (bVar16) {
            uVar8 = uVar8 >> 5;
          }
          local_18a = (undefined1)uVar8;
          local_1a8[0] = pbVar6;
          local_1a8[1] = param_4;
          FUN_01982524(&local_1cc,local_1a8);
          uVar11 = 0;
          uVar17 = uVar17 & 0xffffffff00000000;
          if (((uint)local_1cc & 0xff) - 7 < 3) {
            uVar17 = FUN_0198294c(local_1a8);
          }
          local_1f4 = (byte *)(uVar17 >> 0x20);
          bVar16 = param_4 != (byte *)0x0;
          uVar8 = (uint)uVar17;
          if (bVar16) {
            uVar8 = (uint)*pbVar6;
          }
          local_1c4 = 6;
          if (bVar16) {
            uVar8 = LZCOUNT(uVar8 - 0x2f);
          }
          local_1b0 = 0x201;
          if (bVar16) {
            uVar11 = (undefined1)(uVar8 >> 5);
          }
          local_18a = 0;
          local_1a8[1] = (byte *)0x0;
          local_1a8[0] = &DAT_00000001;
          local_1a0 = 6;
          local_18c = 0x201;
          local_1cc = pbVar6;
          local_1c8 = param_4;
          local_1ae = uVar11;
          iVar2 = FUN_01982bb0(&local_1cc,local_1a8);
          ppbVar12 = local_1a8;
          if (iVar2 != 0) break;
          if (param_4 == (byte *)0x0) {
            local_18a = false;
          }
          else {
            local_18a = *pbVar6 == 0x2f;
          }
          local_1a0 = 6;
          local_18c = 0x201;
          local_1a8[0] = pbVar6;
          local_1a8[1] = param_4;
          FUN_01982524(&local_1cc,local_1a8);
          if (2 < ((uint)local_1cc & 0xff) - 7) break;
          FUN_0198294c(local_1a8);
          local_1d8 = param_2;
          if ((uint)param_4 >> 7 < 3) {
            FUN_01bed4e2(local_1a8,pbVar6,param_4);
            *(byte *)((int)local_1a8 + (int)param_4) = 0;
            FUN_012fbc58(&local_1cc,local_1a8,param_4 + 1);
            if (local_1cc == &DAT_00000001) {
              local_1e8 = (byte *)0x2;
              puVar15 = (undefined1 *)0x2;
              local_1e4 = (byte *)&DAT_01d27a70;
            }
            else {
              iVar2 = FUN_01bead0e(local_1c8,uVar3);
              if (iVar2 == -1) {
                puVar4 = (undefined4 *)FUN_01be3244();
                local_1e4 = (byte *)*puVar4;
                puVar15 = (undefined1 *)0x0;
                local_1e8 = (byte *)0x0;
              }
              else {
                puVar15 = &SUB_00000004;
                local_1e8 = (byte *)CONCAT31(local_1e8._1_3_,4);
              }
            }
          }
          else {
            FUN_019a5758(&local_1e8,pbVar6,param_4,&local_1d8,FUN_019a5718);
            puVar15 = (undefined1 *)((uint)local_1e8 & 0xff);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(puVar15) {
          case (undefined1 *)0x0:
            uVar8 = FUN_019a0d94(local_1e4);
            uVar8 = uVar8 & 0xff;
            break;
          case (undefined1 *)0x1:
            uVar8 = (uint)local_1e8 >> 8 & 0xff;
            break;
          default:
            uVar8 = (uint)local_1e4[8];
            break;
          case (undefined1 *)0x4:
            goto switchD_019a51ac_caseD_4;
          }
          pbVar5 = local_1e4;
          if (uVar8 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(puVar15) {
            case (undefined1 *)0x0:
              uVar8 = FUN_019a0d94(local_1e4);
              uVar8 = uVar8 & 0xff;
              break;
            case (undefined1 *)0x1:
              uVar8 = (uint)local_1e8 >> 8 & 0xff;
              break;
            default:
              uVar8 = (uint)local_1e4[8];
            }
            if ((uVar8 != 0xc) || (iVar2 = FUN_01982f48(pbVar6,param_4), iVar2 == 0)) {
              *param_1 = local_1e8;
              param_1[1] = local_1e4;
              return;
            }
            local_1a8[0] = local_1e8;
            local_1a8[1] = local_1e4;
            FUN_0197acb4(local_1a8);
            ppbVar12 = param_1;
            break;
          }
          puVar15 = &DAT_00000006;
          if (((uint)local_1e8 & 0xff) == 3) {
            uVar10 = *(undefined4 *)local_1e4;
            puVar4 = *(undefined4 **)(local_1e4 + 4);
            pcVar9 = (code *)*puVar4;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(uVar10);
            }
            if (puVar4[1] != 0) {
              thunk_FUN_01be4678(uVar10);
            }
            thunk_FUN_01be4678(pbVar5);
          }
          pbVar13 = pbVar13 + 1;
          ppbVar12 = local_1a8;
          param_4 = local_1f4;
        } while ((uint)uVar17 != 0);
switchD_019a51ac_caseD_4:
        bVar16 = (byte *)0x1ffffffe < pbVar13;
        if (pbVar13 < (byte *)0x20000000) {
          ppbVar12 = (byte **)((int)pbVar13 << 3);
          bVar16 = (byte **)0x7ffffffc < ppbVar12;
        }
        if (bVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00664730();
        }
        if (ppbVar12 == (byte **)0x0) {
          pbVar5 = (byte *)0x4;
          pbVar6 = (byte *)0x0;
        }
        else {
          pbVar5 = (byte *)FUN_01298504(ppbVar12,4);
          pbVar6 = pbVar13;
          if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,ppbVar12);
          }
        }
        local_1e0 = (byte *)0x0;
        pbVar14 = pbVar5;
        local_1e8 = pbVar6;
        local_1e4 = pbVar5;
        if (pbVar13 != (byte *)0x0) {
          do {
            pbVar6 = local_1e0;
            local_1ec = (byte *)((ulonglong)lVar1 >> 0x20);
            pbVar14 = (byte *)lVar1;
            if (pbVar14 == (byte *)0x0) {
              pbVar14 = local_1e4;
              if (local_1e0 == (byte *)0x0) goto LAB_019a55fc;
              ppbVar12 = (byte **)((int)local_1e0 << 3);
              break;
            }
            if (local_1ec == (byte *)0x0) {
              local_18a = false;
            }
            else {
              local_18a = *pbVar14 == 0x2f;
            }
            local_1a0 = 6;
            local_1a8[1] = local_1ec;
            local_18c = 0x201;
            local_1a8[0] = pbVar14;
            FUN_01982524(&local_1cc,local_1a8);
            lVar18 = ZEXT48(puVar15) << 0x20;
            if (((uint)local_1cc & 0xff) - 7 < 3) {
              lVar18 = FUN_0198294c(local_1a8);
            }
            puVar15 = (undefined1 *)((ulonglong)lVar18 >> 0x20);
            if (pbVar6 == local_1e8) {
              FUN_0197ac30(&local_1e8,pbVar6,1,4,8);
              pbVar5 = local_1e4;
            }
            local_1e0 = pbVar6 + 1;
            *(longlong *)((int)pbVar5 + (int)pbVar6 * 8) = lVar1;
            pbVar14 = local_1e4;
            lVar1 = lVar18;
          } while (pbVar13 != local_1e0);
          do {
            uVar8 = *(uint *)((int)ppbVar12 + (int)pbVar14 + -4);
            uVar10 = *(undefined4 *)((int)ppbVar12 + (int)pbVar14 + -8);
            local_1ac = param_2;
            if (uVar8 >> 7 < 3) {
              FUN_01bed4e2(local_1a8,uVar10,uVar8);
              *(undefined1 *)((int)local_1a8 + uVar8) = 0;
              FUN_012fbc58(&local_1cc,local_1a8,uVar8 + 1);
              if (local_1cc == &DAT_00000001) {
                local_1d8 = (byte *)0x2;
                local_1d4 = (byte *)&DAT_01d27a70;
              }
              else {
                iVar2 = FUN_01bead0e(local_1c8,uVar3);
                if (iVar2 != -1) {
                  local_1d8 = (byte *)CONCAT31(local_1d8._1_3_,4);
                  goto LAB_019a5464;
                }
                puVar4 = (undefined4 *)FUN_01be3244();
                local_1d4 = (byte *)*puVar4;
                local_1d8 = (byte *)0x0;
              }
LAB_019a5524:
              pbVar6 = local_1d4;
              pbVar13 = local_1d8;
              local_1a8[1] = local_1d4;
              local_1a8[0] = local_1d8;
              uVar8 = (uint)local_1d8 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(uVar8) {
              case 0:
                uVar7 = FUN_019a0d94(local_1d4);
                uVar7 = uVar7 & 0xff;
                break;
              case 1:
                uVar7 = (uint)local_1d8 >> 8;
                break;
              default:
                uVar7 = (uint)local_1d4[8];
              }
              if (((uVar7 & 0xff) != 0xc) ||
                 (iVar2 = FUN_01982f48(*(undefined4 *)((int)ppbVar12 + (int)pbVar14 + -8),
                                       *(undefined4 *)((int)ppbVar12 + (int)pbVar14 + -4)),
                 iVar2 == 0)) {
                *param_1 = pbVar13;
                param_1[1] = pbVar6;
                goto joined_r0x019a562c;
              }
              if (uVar8 == 3) {
                uVar10 = *(undefined4 *)pbVar6;
                puVar4 = *(undefined4 **)(pbVar6 + 4);
                pcVar9 = (code *)*puVar4;
                if (pcVar9 != (code *)0x0) {
                  (*pcVar9)(uVar10);
                }
                if (puVar4[1] != 0) {
                  thunk_FUN_01be4678(uVar10);
                }
                thunk_FUN_01be4678(pbVar6);
              }
            }
            else {
              FUN_019a5758(&local_1d8,uVar10,uVar8,&local_1ac,FUN_019a5718);
              if ((char)local_1d8 != '\x04') goto LAB_019a5524;
            }
LAB_019a5464:
            ppbVar12 = ppbVar12 + -2;
          } while (ppbVar12 != (byte **)0x0);
        }
LAB_019a55fc:
        *(undefined1 *)param_1 = 4;
joined_r0x019a562c:
        if (local_1e8 == (byte *)0x0) {
          return;
        }
        thunk_FUN_01be4678(pbVar14);
        return;
      }
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

