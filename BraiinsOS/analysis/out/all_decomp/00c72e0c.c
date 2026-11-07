// FUN_00c72e0c @ 00c72e0c size=2900 calls_out=31 calls_in=2
// strings: too many temporary files exist

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00c72e0c(char *******param_1,char *******param_2,char *param_3,char *******param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  char *******pppppppcVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  char *******pppppppcVar16;
  char *******pppppppcVar17;
  undefined1 *puVar18;
  uint uVar19;
  char *****pppppcVar20;
  char *pcVar21;
  char *******pppppppcVar22;
  undefined1 *puVar23;
  char *******pppppppcVar24;
  uint uVar25;
  char *******pppppppcVar26;
  uint *puVar27;
  char ******ppppppcVar28;
  char ******ppppppcVar29;
  char *******pppppppcVar30;
  char *******pppppppcVar31;
  int iVar32;
  bool bVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  byte local_cc;
  char *******local_b0;
  char *local_ac;
  char *******local_a4;
  char *******local_a0;
  undefined1 local_9c;
  undefined2 local_9b;
  byte local_99;
  char *******local_98;
  char *******local_94;
  char *******local_90;
  undefined4 local_8c;
  undefined2 local_84;
  byte local_82;
  char *******local_80;
  char *******local_7c;
  char *******local_78;
  char *******local_74;
  char *******local_70;
  char *******local_6c;
  undefined4 local_68;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  char *******local_54;
  char *******pppppppcStack_50;
  uint local_4c;
  char *******local_38;
  char *******local_34;
  undefined1 auStack_30 [12];
  
  if (param_2 == (char *******)0x0) {
    local_5a = false;
  }
  else {
    local_5a = *(char *)param_1 == '/';
  }
  local_70 = (char *******)CONCAT31(local_70._1_3_,6);
  local_5c = 0x201;
  local_78 = param_1;
  local_74 = param_2;
  FUN_015c7164(&local_58,&local_78);
  if (2 < ((uint)local_58 & 0xff) - 7) {
LAB_00c733a0:
    FUN_00600d2c(auStack_30 + 0xc,&DAT_0057d834,auStack_30 + 0x20);
    uVar15 = FUN_00c6b484(auStack_30 + 0xc);
    return uVar15;
  }
  uVar34 = FUN_015c7664(&local_78);
  puVar18 = (undefined1 *)(uVar34 >> 0x20);
  pppppppcVar17 = (char *******)uVar34;
  if (pppppppcVar17 == (char *******)0x0) goto LAB_00c733a0;
  if ((puVar18 == (undefined1 *)0x0) || (*(char *)pppppppcVar17 != '/')) {
    FUN_015bff34(&local_78);
    pppppppcVar24 = local_74;
    pppppppcVar30 = local_78;
    if (local_78 != (char *******)&DAT_80000000) {
      FUN_015ed628(&local_78,local_74,local_70,pppppppcVar17,puVar18);
      pppppppcVar13 = local_70;
      pppppppcVar22 = local_78;
      local_b0 = local_74;
      if (pppppppcVar30 != (char *******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar24);
      }
      local_cc = pppppppcVar22 == (char *******)0x0;
      uVar6 = ZEXT48(pppppppcVar13) << 0x20;
      bVar5 = false;
      goto LAB_00c72f38;
    }
    local_98 = local_74;
    local_8c = CONCAT31(local_8c._1_3_,2);
    local_94 = local_70;
  }
  else {
    bVar5 = true;
    local_b0 = pppppppcVar17;
    uVar6 = uVar34;
LAB_00c72f38:
    pppppppcVar30 = (char *******)(uVar6 >> 0x20);
    uVar35 = thunk_FUN_016de0ee((int)uVar6,0x260);
    puVar27 = (uint *)((int)uVar35 + (int)((ulonglong)uVar35 >> 0x20));
    if ((char)puVar27[2] == '\0') {
      FUN_01005868(&local_78);
      *(undefined1 *)(puVar27 + 2) = 1;
      bVar33 = ((uint)local_78 & 1) != 0;
      pppppppcVar24 = (char *******)0xef6f79e;
      if (bVar33) {
        pppppppcVar24 = local_6c;
      }
      pppppppcVar22 = (char *******)0xd30ba75a;
      if (bVar33) {
        pppppppcVar22 = local_70;
      }
      *puVar27 = (uint)pppppppcVar22;
      puVar27[1] = (uint)pppppppcVar24;
    }
    uVar9 = *puVar27 + 0xaa6c78a5;
    uVar19 = puVar27[1] + 0x2d358dcc + (uint)(0x5593875a < *puVar27);
    uVar3 = (ulonglong)uVar9 * (ulonglong)(uVar9 ^ 0x962eacc9);
    lVar1 = (ulonglong)uVar9 * (ulonglong)(uVar19 ^ 0x8bb84b93) + (uVar3 >> 0x20);
    uVar25 = (uint)((ulonglong)lVar1 >> 0x20);
    *puVar27 = uVar9;
    puVar27[1] = uVar19;
    lVar4 = (ulonglong)uVar19 * (ulonglong)(uVar9 ^ 0x962eacc9);
    uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
    iVar32 = 0;
    lVar2 = (ulonglong)uVar19 * (ulonglong)(uVar19 ^ 0x8bb84b93) +
            (ulonglong)
            CONCAT14(CARRY4(uVar25,uVar9) ||
                     CARRY4(uVar25 + uVar9,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
    local_34 = (char *******)((uint)((ulonglong)lVar2 >> 0x20) ^ (uint)(lVar1 + lVar4));
    local_38 = (char *******)((uint)lVar2 ^ (uint)uVar3);
    do {
      pppppppcVar24 = (char *******)&local_78;
      if (iVar32 == 3) {
        DataMemoryBarrier(0xb);
        if (DAT_018dd98c == (code *)0x0) {
          pcVar12 = (code *)FUN_0100f390();
          if (pcVar12 == (code *)0xffffffff) goto LAB_00c73088;
LAB_00c73014:
          uVar9 = 8;
          do {
            uVar19 = (*pcVar12)(pppppppcVar24,uVar9,0);
            if ((int)uVar19 < 1) {
              if (uVar19 != 0xffffffff) goto LAB_00c730b4;
              piVar10 = (int *)FUN_016d2bc8();
              iVar11 = 0x10001;
              if (0 < *piVar10) {
                iVar11 = -*piVar10;
              }
              if (iVar11 != -4) goto LAB_00c73094;
            }
            else {
              if (uVar9 < uVar19) goto LAB_00c730b4;
              pppppppcVar24 = (char *******)((int)pppppppcVar24 + uVar19);
              uVar9 = uVar9 - uVar19;
            }
          } while (uVar9 != 0);
        }
        else {
          pcVar12 = DAT_018dd98c;
          if (DAT_018dd98c != (code *)0xffffffff) goto LAB_00c73014;
LAB_00c73088:
          iVar11 = FUN_0100f050(pppppppcVar24,8);
LAB_00c73094:
          if (iVar11 != 0) goto LAB_00c730b4;
        }
        local_34 = local_74;
        local_38 = local_78;
      }
LAB_00c730b4:
      FUN_0162a640(&local_78,&local_38,&DAT_005686f0,4,1,0,6);
      pppppppcVar24 = local_74;
      FUN_015ed628(auStack_30,local_b0,pppppppcVar30,local_74,local_70);
      if (local_78 != (char *******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar24);
      }
      local_70 = (char *******)0x0;
      local_6c = (char *******)((uint)local_6c & 0xffff0000);
      local_74 = (char *******)&DAT_000001b6;
      local_78 = (char *******)0x0;
      FUN_0162a128(&local_58,auStack_30,&local_78,0,0);
      if ((char)local_4c != '\x02') {
LAB_00c73234:
        local_98 = local_58;
        local_94 = local_54;
        local_90 = pppppppcStack_50;
        local_8c = local_4c;
        if (!bVar5 && (local_cc & 1) == 0) goto LAB_00c73260;
        goto LAB_00c73268;
      }
      uVar9 = (uint)local_58 & 0xff;
      iVar32 = iVar32 + 1;
      pppppppcVar24 = local_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar9) {
      case 0:
        cVar8 = FUN_005bc530(local_54);
        pppppppcVar24 = local_58;
        local_58._1_1_ = cVar8;
        break;
      case 1:
        break;
      default:
        local_58._1_1_ = *(char *)(local_54 + 2);
      }
      bVar33 = local_58._1_1_ != '\f';
      local_58 = pppppppcVar24;
      if (bVar33) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar9) {
        case 0:
          cVar8 = FUN_005bc530(local_54);
          pppppppcVar24 = local_58;
          break;
        case 1:
          local_58._1_1_ = (char)((uint)pppppppcVar24 >> 8);
          cVar8 = local_58._1_1_;
          break;
        default:
          cVar8 = *(char *)(local_54 + 2);
        }
        local_58 = pppppppcVar24;
        if (cVar8 != '\b') goto LAB_00c73234;
      }
      pppppppcVar24 = local_54;
      if (uVar9 == 3) {
        ppppppcVar28 = *local_54;
        ppppppcVar29 = local_54[1];
        pppppcVar20 = *ppppppcVar29;
        if (pppppcVar20 != (char *****)0x0) {
          (*(code *)pppppcVar20)(ppppppcVar28);
        }
        if (ppppppcVar29[1] != (char *****)0x0) {
          thunk_FUN_016d3fb4(ppppppcVar28);
        }
        thunk_FUN_016d3fb4(pppppppcVar24);
      }
    } while (iVar32 != 0x10000);
    FUN_015e79d4(&local_78,0xc,"too many temporary files exist",0x1e);
    pppppppcVar22 = local_74;
    pppppppcVar24 = local_78;
    local_54 = local_74;
    local_58 = local_78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_78 & 0xff) {
    case 0:
      uVar9 = FUN_005bc530(local_74);
      uVar9 = uVar9 & 0xff;
      break;
    case 1:
      uVar9 = (uint)local_78 >> 8 | (int)local_74 << 0x18;
      break;
    default:
      uVar9 = (uint)*(byte *)(local_74 + 2);
    }
    uVar15 = 0;
    if ((longlong)uVar6 < 0) {
LAB_00c7365c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar15,pppppppcVar30);
    }
    if (pppppppcVar30 == (char *******)0x0) {
      pppppppcVar13 = (char *******)0x0;
      pppppppcVar31 = (char *******)&DAT_00000001;
    }
    else {
      pppppppcVar31 = (char *******)thunk_FUN_016d4a50(pppppppcVar30);
      pppppppcVar13 = pppppppcVar30;
      if (pppppppcVar31 == (char *******)0x0) {
        uVar15 = 1;
        goto LAB_00c7365c;
      }
    }
    FUN_016dd1aa(pppppppcVar31,local_b0,pppppppcVar30);
    local_68 = pppppppcVar22;
    local_6c = pppppppcVar24;
    local_78 = pppppppcVar13;
    local_74 = pppppppcVar31;
    local_70 = pppppppcVar30;
    FUN_0162a8fc(&local_98,uVar9,&local_78);
    local_8c = CONCAT31(local_8c._1_3_,2);
    if (!bVar5 && (local_cc & 1) == 0) {
LAB_00c73260:
      thunk_FUN_016d3fb4(local_b0);
    }
  }
LAB_00c73268:
  pppppppcVar22 = local_90;
  pppppppcVar24 = local_94;
  pppppppcVar30 = local_98;
  uVar7 = (undefined1)local_8c;
  uVar9 = local_8c & 0xff;
  if (uVar9 != 2) {
    pcVar21 = (char *)(uint)local_8c._3_1_;
    local_9b = local_8c._1_2_;
    local_99 = local_8c._3_1_;
    local_a0 = local_90;
    local_a4 = local_94;
    local_9c = (undefined1)local_8c;
    pppppppcVar13 = (char *******)&local_a4;
    if (param_4 != (char *******)0x0) {
      pppppppcVar31 = (char *******)&DAT_018aeaf8;
      local_ac = param_3;
      do {
        while (pppppppcVar13 = (char *******)FUN_016e034e(pppppppcVar30,local_ac,param_4),
              pppppppcVar13 != (char *******)0xffffffff) {
          local_74 = pppppppcVar13;
          local_78 = (char *******)CONCAT31(local_78._1_3_,4);
          if (pppppppcVar13 == (char *******)0x0) {
LAB_00c733b8:
            pppppppcVar13 = (char *******)*pppppppcVar31;
            pppppppcVar31 = (char *******)pppppppcVar31[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uint)pppppppcVar13 & 0xff) {
            case 0:
              local_58 = pppppppcVar13;
              local_54 = pppppppcVar31;
              uVar19 = FUN_005bc530(pppppppcVar31);
              uVar19 = uVar19 & 0xff;
              break;
            case 1:
              uVar19 = (uint)pppppppcVar13 >> 8 | (int)pppppppcVar31 << 0x18;
              local_58 = pppppppcVar13;
              local_54 = pppppppcVar31;
              break;
            case 2:
            case 3:
              uVar19 = (uint)*(byte *)(pppppppcVar31 + 2);
              local_58 = pppppppcVar13;
              local_54 = pppppppcVar31;
              break;
            default:
              pcVar21 = (char *)((uint)pppppppcVar31 >> 8);
              pppppppcVar13 = (char *******)((uint)pppppppcVar13 >> 8 | (int)pppppppcVar31 << 0x18);
              goto LAB_00c733dc;
            }
            uVar15 = 0;
            if ((int)pppppppcVar22 < 0) {
LAB_00c73760:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar15,pppppppcVar22);
            }
            if (pppppppcVar22 == (char *******)0x0) {
              pppppppcVar16 = (char *******)&DAT_00000001;
              pppppppcVar26 = (char *******)0x0;
            }
            else {
              pppppppcVar16 = (char *******)thunk_FUN_016d4a50(pppppppcVar22);
              pppppppcVar26 = pppppppcVar22;
              if (pppppppcVar16 == (char *******)0x0) {
                uVar15 = 1;
                goto LAB_00c73760;
              }
            }
            FUN_016dd1aa(pppppppcVar16,pppppppcVar24,pppppppcVar22);
            local_70 = pppppppcVar22;
            local_78 = pppppppcVar26;
            local_74 = pppppppcVar16;
            local_6c = pppppppcVar13;
            local_68 = pppppppcVar31;
            FUN_0162a8fc(&local_80,uVar19,&local_78);
            if ((char)local_80 == '\x04') goto LAB_00c733f4;
            local_54 = (char *******)&LAB_016040f8;
            local_58 = (char *******)&local_98;
            local_38 = local_80;
            local_34 = local_7c;
            local_98 = param_1;
            local_94 = param_2;
            FUN_00600d2c(&local_78,&DAT_00574b46,&local_58);
            uVar15 = FUN_00bad83c(&local_38,&local_78);
            goto LAB_00c73460;
          }
          if (param_4 < pppppppcVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pppppppcVar13,param_4,param_4,&DAT_018aeb00);
          }
          param_4 = (char *******)((int)param_4 - (int)pppppppcVar13);
          pcVar21 = local_ac + (int)pppppppcVar13;
          local_ac = pcVar21;
          if (param_4 == (char *******)0x0) goto LAB_00c733dc;
        }
        uVar35 = FUN_016d2bc8();
        pcVar21 = (char *)((ulonglong)uVar35 >> 0x20);
        local_78 = (char *******)((uint)local_78 & 0xffffff00);
        local_74 = (char *******)*(undefined4 *)uVar35;
        if ((char *******)*(undefined4 *)uVar35 != (char *******)&DAT_00000004) {
          pppppppcVar31 = (char *******)&local_78;
          goto LAB_00c733b8;
        }
        pppppppcVar13 = (char *******)&DAT_00000004;
      } while (param_4 != (char *******)0x0);
    }
LAB_00c733dc:
    local_80 = (char *******)((int)pppppppcVar13 << 8 | 4);
    local_7c = (char *******)((int)pcVar21 << 8 | (uint)pppppppcVar13 >> 0x18);
LAB_00c733f4:
    do {
      iVar32 = FUN_016e0002(pppppppcVar30);
      pppppppcVar31 = local_a0;
      pppppppcVar13 = local_a4;
      if (iVar32 != -1) {
        FUN_016dffb2(pppppppcVar30);
        FUN_0162aa38(&local_58,pppppppcVar13,pppppppcVar31,param_1,param_2);
        if ((char)local_58 == '\x04') {
          local_70 = (char *******)0x0;
          local_74 = (char *******)0x1;
          local_78 = (char *******)0x0;
          FUN_015f3928(&local_78);
          if (pppppppcVar31 != (char *******)0x0) {
            thunk_FUN_016d3fb4(pppppppcVar13);
          }
        }
        else {
          local_80 = local_a4;
          local_7c = local_a0;
          local_84 = local_9b;
          local_82 = local_99;
          pppppppcVar31 = local_a0;
          if (uVar9 != 2) {
            local_74 = local_54;
            local_98 = (char *******)&local_38;
            local_78 = local_58;
            local_68 = (char *******)CONCAT13(local_99,CONCAT21(local_9b,uVar7));
            local_94 = (char *******)&LAB_016040f8;
            local_70 = local_80;
            local_6c = local_7c;
            local_38 = param_1;
            local_34 = param_2;
            FUN_00600d2c(&local_58,&DAT_0058dc34,&local_98);
            uVar15 = FUN_00bad6ec(&local_78,&local_58);
            return uVar15;
          }
        }
        local_74 = (char *******)&DAT_000001b6;
        if (puVar18 == (undefined1 *)0x0) {
          pppppppcVar17 = (char *******)&DAT_00418eb7;
        }
        local_78 = (char *******)0x0;
        local_6c = (char *******)((uint)local_6c & 0xffff0000);
        local_70 = (char *******)&DAT_00000001;
        puVar23 = &DAT_00000001;
        if (0x1ffffffff < uVar34) {
          puVar23 = puVar18;
        }
        FUN_015ec1bc(&local_58,&local_78,pppppppcVar17,puVar23);
        pppppppcVar17 = local_54;
        if ((char)local_58 == '\x04') goto LAB_00c7358c;
        uVar19 = (uint)local_58 >> 8;
        uVar9 = (uint)local_58 & 0xff;
        local_34 = local_54;
        goto LAB_00c73614;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      if ((char *******)*puVar14 != (char *******)&DAT_00000004) {
        local_38 = (char *******)0x0;
        local_58 = (char *******)&local_98;
        local_54 = (char *******)&LAB_016040f8;
        local_98 = param_1;
        local_94 = param_2;
        local_34 = (char *******)*puVar14;
        FUN_00600d2c(&local_78,&DAT_00594680,&local_58);
        uVar15 = FUN_00bad83c(&local_38,&local_78);
LAB_00c73460:
        FUN_01629d00(&local_a4);
        if (pppppppcVar22 != (char *******)0x0) {
          thunk_FUN_016d3fb4(pppppppcVar24);
        }
        FUN_016dffb2(pppppppcVar30);
        return uVar15;
      }
    } while( true );
  }
  local_54 = (char *******)&LAB_016040f8;
  local_58 = (char *******)&local_38;
  local_80 = local_98;
  local_7c = local_94;
  local_38 = param_1;
  local_34 = param_2;
  FUN_00600d2c(&local_78,&DAT_00572a7e,&local_58);
  pppppppcVar17 = (char *******)&local_80;
LAB_00c73870:
  uVar15 = FUN_00bad83c(pppppppcVar17,&local_78);
  return uVar15;
  while( true ) {
    puVar14 = (undefined4 *)FUN_016d2bc8();
    pppppppcVar31 = (char *******)*puVar14;
    if (pppppppcVar31 != (char *******)&DAT_00000004) break;
LAB_00c7358c:
    iVar32 = FUN_016e0022(pppppppcVar17);
    if (iVar32 != -1) {
      uVar9 = 4;
      goto LAB_00c73608;
    }
  }
  uVar9 = 0;
LAB_00c73608:
  FUN_016dffb2(pppppppcVar17);
  uVar19 = 0;
  local_34 = pppppppcVar31;
LAB_00c73614:
  if (uVar9 == 4) {
    return 0;
  }
  local_38 = (char *******)(uVar9 | uVar19 << 8);
  local_58 = (char *******)&local_98;
  local_54 = (char *******)&LAB_016040f8;
  local_98 = param_1;
  local_94 = param_2;
  FUN_00600d2c(&local_78,&DAT_00597953,&local_58);
  pppppppcVar17 = (char *******)&local_38;
  goto LAB_00c73870;
}

