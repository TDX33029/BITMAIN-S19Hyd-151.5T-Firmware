// FUN_0061da6c @ 0061da6c size=3112 calls_out=8 calls_in=1
// strings: .llvm. | `fmt::Error`s should be impossible without a `fmt::Formatter`

/* WARNING: Removing unreachable block (ram,0x0061e59c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0061da6c(ushort *param_1,undefined4 param_2,ushort *******param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *******pppppppuVar6;
  undefined *puVar7;
  int extraout_r1;
  byte *pbVar8;
  ushort ******ppppppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *******unaff_r4;
  ushort *******pppppppuVar12;
  int iVar13;
  uint uVar14;
  ushort *******pppppppuVar15;
  ushort *******pppppppuVar16;
  byte *unaff_r8;
  byte *unaff_r9;
  ushort ******unaff_r10;
  undefined4 uVar17;
  int iVar18;
  byte *pbVar19;
  bool bVar20;
  ushort *******local_70;
  ushort *******local_6c;
  ushort *******local_68;
  byte *local_64;
  uint local_60;
  undefined4 local_5c;
  ushort *******local_58;
  ushort ******local_54;
  uint local_4c;
  int local_40;
  ushort *******local_3c;
  int iStack_38;
  uint uStack_34;
  ushort *******local_30;
  ushort ******local_2c;
  
  FUN_00fab1e0(&local_70);
  pppppppuVar6 = local_68;
  pppppppuVar15 = local_6c;
  pppppppuVar16 = param_3;
  if (local_70 == (ushort *******)0x1) {
    uVar17 = 2;
    iVar18 = extraout_r1;
    pppppppuVar15 = (ushort *******)param_1;
    goto LAB_0061e284;
  }
  FUN_00fb6cfc(&local_70,local_6c,local_68,".llvm.",6);
  if (local_70 == (ushort *******)0x0) {
    pppppppuVar16 = (ushort *******)&local_70;
    do {
      FUN_00bd41dc(&local_30,pppppppuVar16);
    } while (local_30 == (ushort *******)&DAT_00000001);
    if (local_30 == (ushort *******)0x0) {
      local_54 = local_2c;
      local_64 = unaff_r9;
      goto LAB_0061de40;
    }
  }
  else {
    local_30 = (ushort *******)&local_68;
    iVar18 = uStack_34 - 1;
    if (local_4c == 0xffffffff) {
      pppppppuVar12 = (ushort *******)((int)local_54 + iVar18);
      unaff_r9 = unaff_r9;
      if (pppppppuVar12 < local_3c) {
        uVar3 = uStack_34;
        if (uStack_34 < local_60) {
          uVar3 = local_60;
        }
        uVar14 = local_60 - 1;
LAB_0061dcc0:
        uVar5 = *(byte *)(local_40 + (int)pppppppuVar12) & 0x3f;
        local_30 = (ushort *******)(uVar5 - 0x20);
        uVar5 = (uint)local_68 >> uVar5 | (int)local_64 << (0x20 - uVar5 & 0xff);
        if (-1 < (int)local_30) {
          uVar5 = (uint)local_64 >> ((uint)local_30 & 0xff);
        }
        unaff_r9 = local_64;
        if ((uVar5 & 1) == 0) {
          local_54 = (ushort ******)((int)local_54 + uStack_34);
        }
        else {
          uVar5 = local_60;
          do {
            uVar4 = uVar5;
            if (uVar3 == uVar4) {
              if (uStack_34 <= uVar14) {
                if (local_60 == 0) goto LAB_0061de40;
                goto LAB_0061e5b4;
              }
              pppppppuVar12 = (ushort *******)((int)local_54 + uVar14);
              uVar5 = local_60;
              pbVar8 = (byte *)(iStack_38 + uVar14);
              goto LAB_0061dd48;
            }
            if (local_3c <= (ushort *******)((int)local_54 + uVar4)) {
              pppppppuVar16 = (ushort *******)((int)local_54 + local_60);
              if ((ushort *******)((int)local_54 + local_60) < local_3c) {
                pppppppuVar16 = local_3c;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pppppppuVar16,local_3c,&DAT_018aeb30);
            }
            pppppppuVar16 = (ushort *******)(uint)*(byte *)(iStack_38 + uVar4);
            uVar5 = uVar4 + 1;
          } while (pppppppuVar16 ==
                   (ushort *******)(uint)*(byte *)((int)local_54 + uVar4 + local_40));
          local_30 = (ushort *******)((int)local_54 + (uVar4 - local_60));
          local_54 = (ushort ******)((int)local_30 + 1);
        }
        goto LAB_0061dcb4;
      }
    }
    else {
      pppppppuVar16 = (ushort *******)((int)local_54 + iVar18);
      unaff_r9 = unaff_r9;
      if (pppppppuVar16 < local_3c) {
LAB_0061db80:
        uVar3 = *(byte *)(local_40 + (int)pppppppuVar16) & 0x3f;
        local_30 = (ushort *******)(uVar3 - 0x20);
        uVar3 = (uint)local_68 >> uVar3 | (int)local_64 << (0x20 - uVar3 & 0xff);
        if (-1 < (int)local_30) {
          uVar3 = (uint)local_64 >> ((uint)local_30 & 0xff);
        }
        if ((uVar3 & 1) == 0) {
          local_54 = (ushort ******)((int)local_54 + uStack_34);
          local_4c = 0;
        }
        else {
          uVar3 = local_60;
          if (local_60 < local_4c) {
            uVar3 = local_4c;
          }
          uVar14 = uStack_34;
          if (uStack_34 < uVar3) {
            uVar14 = uVar3;
          }
          uVar5 = uVar3;
          do {
            uVar4 = uVar5;
            if (uVar14 == uVar4) {
              uVar14 = local_60;
              goto LAB_0061dc24;
            }
            if (local_3c <= (ushort *******)((int)local_54 + uVar4)) {
              pppppppuVar16 = (ushort *******)((int)local_54 + uVar3);
              if ((ushort *******)((int)local_54 + uVar3) < local_3c) {
                pppppppuVar16 = local_3c;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pppppppuVar16,local_3c,&DAT_018aeb30);
            }
            unaff_r9 = (byte *)(uint)*(byte *)(iStack_38 + uVar4);
            uVar5 = uVar4 + 1;
          } while (unaff_r9 == (byte *)(uint)*(byte *)((int)local_54 + uVar4 + local_40));
          local_30 = (ushort *******)((int)local_54 + (uVar4 - local_60));
          local_54 = (ushort ******)((int)local_30 + 1);
          local_4c = 0;
        }
        goto LAB_0061db74;
      }
    }
  }
  goto LAB_0061dd88;
  while( true ) {
    if (local_3c <= pppppppuVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppppuVar12,local_3c,&DAT_018aeb20);
    }
    pbVar19 = (byte *)(local_40 + (int)pppppppuVar12);
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar8;
    pppppppuVar12 = (ushort *******)((int)pppppppuVar12 + -1);
    pbVar8 = pbVar8 + -1;
    if (bVar1 != *pbVar19) break;
LAB_0061dd48:
    if (uVar5 == 0) goto LAB_0061de38;
  }
  local_54 = (ushort ******)((int)local_54 + (int)local_58);
  local_30 = local_58;
LAB_0061dcb4:
  pppppppuVar12 = (ushort *******)((int)local_54 + iVar18);
  if (local_3c <= pppppppuVar12) goto LAB_0061dd88;
  goto LAB_0061dcc0;
LAB_0061dc24:
  do {
    if (uVar14 <= local_4c) goto LAB_0061de38;
    uVar14 = uVar14 - 1;
    if (uStack_34 <= uVar14) {
LAB_0061e5b4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uStack_34,&DAT_018aeb10);
    }
    pppppppuVar16 = (ushort *******)((int)local_54 + uVar14);
    if (local_3c <= pppppppuVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppppuVar16,local_3c,&DAT_018aeb20);
    }
  } while (*(byte *)(iStack_38 + uVar14) == *(byte *)(local_40 + (int)pppppppuVar16));
  local_54 = (ushort ******)((int)local_54 + (int)local_58);
  local_30 = local_58;
  local_4c = uStack_34 - (int)local_58;
LAB_0061db74:
  pppppppuVar16 = (ushort *******)((int)local_54 + iVar18);
  unaff_r9 = unaff_r9;
  if (local_3c <= pppppppuVar16) goto LAB_0061dd88;
  goto LAB_0061db80;
joined_r0x0061e098:
  if (uVar3 == 0x45) goto LAB_0061e09c;
  uVar14 = uVar3 - 0x30;
  if (9 < uVar14) goto LAB_0061e1ec;
  local_30 = (ushort *******)0x0;
  do {
    uVar2 = ZEXT48(local_30);
    local_30 = (ushort *******)(uVar2 * 10);
    if ((((int)(uVar2 * 10 >> 0x20) != 0) ||
        (bVar20 = CARRY4((uint)local_30,uVar14), local_30 = (ushort *******)((int)local_30 + uVar14)
        , bVar20)) || (unaff_r9 == pbVar19)) goto LAB_0061e1ec;
    pbVar8 = unaff_r9 + 1;
    uVar3 = (uint)*unaff_r9;
    if (0x7fffffff < (uint)(int)(char)*unaff_r9) {
      if (uVar3 < 0xe0) {
        uVar3 = unaff_r9[1] & 0x3f | (uVar3 & 0x1f) << 6;
        pbVar8 = unaff_r9 + 2;
      }
      else {
        uVar14 = unaff_r9[2] & 0x3f | (unaff_r9[1] & 0x3f) << 6;
        if (uVar3 < 0xf0) {
          uVar3 = uVar14 | (uVar3 & 0x1f) << 0xc;
          pbVar8 = unaff_r9 + 3;
        }
        else {
          pbVar8 = unaff_r9 + 4;
          uVar3 = unaff_r9[3] & 0x3f | uVar14 << 6 | (uVar3 & 7) << 0x12;
        }
      }
    }
    uVar14 = uVar3 - 0x30;
    unaff_r9 = pbVar8;
  } while (uVar14 < 10);
  for (; local_30 != (ushort *******)0x0; local_30 = (ushort *******)((int)local_30 + -1)) {
    if (unaff_r9 == pbVar19) goto LAB_0061e1ec;
    pbVar8 = unaff_r9 + 1;
    uVar3 = (uint)*unaff_r9;
    if (0x7fffffff < (uint)(int)(char)*unaff_r9) {
      if (uVar3 < 0xe0) {
        uVar3 = unaff_r9[1] & 0x3f | (uVar3 & 0x1f) << 6;
        pbVar8 = unaff_r9 + 2;
      }
      else {
        uVar14 = unaff_r9[2] & 0x3f | (unaff_r9[1] & 0x3f) << 6;
        if (uVar3 < 0xf0) {
          uVar3 = uVar14 | (uVar3 & 0x1f) << 0xc;
          pbVar8 = unaff_r9 + 3;
        }
        else {
          pbVar8 = unaff_r9 + 4;
          uVar3 = unaff_r9[3] & 0x3f | uVar14 << 6 | (uVar3 & 7) << 0x12;
        }
      }
    }
    unaff_r9 = pbVar8;
  }
  pppppppuVar16 = (ushort *******)((int)pppppppuVar16 + 1);
  goto joined_r0x0061e098;
LAB_0061e09c:
  iVar13 = (int)pbVar19 - (int)unaff_r9;
LAB_0061e440:
  uVar17 = 1;
  iVar18 = 0;
  if ((iVar13 != 0) && (uVar17 = 2, *unaff_r9 == 0x2e)) {
    puVar10 = (undefined1 *)0x2e;
    pbVar8 = unaff_r9;
LAB_0061e510:
    pbVar8 = pbVar8 + 1;
    uVar3 = (uint)puVar10 & 0x1fffdf;
joined_r0x0061e520:
    do {
      if (0x19 < uVar3 - 0x41) {
        puVar11 = puVar10 + -0x30;
        bVar20 = (undefined1 *)0x9 < puVar11;
        if (bVar20) {
          puVar11 = puVar10 + -0x21;
        }
        if (bVar20 && (undefined1 *)0xe < puVar11) {
          puVar11 = puVar10 + -0x3a;
          bVar20 = (undefined1 *)0x6 < puVar11;
          if (bVar20) {
            puVar11 = puVar10 + -0x5b;
          }
          if ((bVar20 && (undefined1 *)0x5 < puVar11) && ((undefined1 *)0x3 < puVar10 + -0x7b)) {
            break;
          }
        }
      }
      if (pbVar8 == unaff_r9 + iVar13) {
code_r0x0061e590:
        uVar17 = 1;
        iVar18 = iVar13;
        break;
      }
      puVar10 = (undefined1 *)(uint)*pbVar8;
      if ((uint)(int)(char)*pbVar8 < 0x80000000) goto LAB_0061e510;
      if (puVar10 < (undefined1 *)0xe0) {
        puVar10 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
        pbVar8 = pbVar8 + 2;
      }
      else {
        uVar14 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
        if ((undefined1 *)0xef < puVar10) {
          pbVar19 = pbVar8 + 3;
          uVar14 = uVar14 << 6;
          uVar3 = ((uint)puVar10 & 7) << 0x12;
          puVar10 = (undefined1 *)(*pbVar19 & 0x3f | uVar14 | uVar3);
          if (puVar10 == &DAT_00110000) goto code_r0x0061e590;
          pbVar8 = pbVar8 + 4;
          uVar3 = *pbVar19 & 0x1f | uVar14 | uVar3;
          goto joined_r0x0061e520;
        }
        puVar10 = (undefined1 *)(uVar14 | ((uint)puVar10 & 0x1f) << 0xc);
        pbVar8 = pbVar8 + 3;
      }
      uVar3 = (uint)puVar10 & 0x1fffdf;
    } while( true );
  }
  goto LAB_0061e284;
LAB_0061de38:
  local_64 = unaff_r9;
LAB_0061de40:
  ppppppuVar9 = (ushort ******)((int)local_54 + 6);
  if (ppppppuVar9 != (ushort ******)0x0) {
    if (ppppppuVar9 < pppppppuVar6) {
      if ((char)*(byte *)((int)local_6c + (int)ppppppuVar9) < -0x40) {
LAB_0061de60:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_6c,pppppppuVar6,ppppppuVar9,pppppppuVar6,&DAT_018a71e8);
      }
    }
    else if ((ushort *******)ppppppuVar9 != pppppppuVar6) goto LAB_0061de60;
  }
  local_30 = (ushort *******)((int)local_6c + (int)pppppppuVar6);
  pppppppuVar12 = (ushort *******)((int)local_6c + (int)ppppppuVar9);
LAB_0061dee4:
  do {
    pppppppuVar16 = pppppppuVar12;
    unaff_r9 = local_64;
    if (pppppppuVar12 == local_30) {
LAB_0061df80:
      if (local_54 == (ushort ******)0x0) {
        pppppppuVar6 = (ushort *******)0x0;
        goto LAB_0061e264;
      }
      if (local_54 < pppppppuVar6) {
        local_30 = (ushort *******)(int)(char)*(byte *)((int)local_6c + (int)local_54);
        if (-0x41 < (int)local_30) {
          pppppppuVar6 = (ushort *******)local_54;
          goto LAB_0061dd8c;
        }
      }
      else if ((ushort *******)local_54 == pppppppuVar6) goto LAB_0061dd8c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_6c,pppppppuVar6,0,local_54,&DAT_018a71f8);
    }
    pppppppuVar16 = (ushort *******)((int)pppppppuVar12 + 1);
    puVar10 = (undefined1 *)(uint)*(byte *)pppppppuVar12;
    if ((char)*(byte *)pppppppuVar12 < '\0') {
      uVar3 = *(byte *)((int)pppppppuVar12 + 1) & 0x3f;
      if (puVar10 < (undefined1 *)0xe0) {
        puVar10 = (undefined1 *)(uVar3 | ((uint)puVar10 & 0x1f) << 6);
        pppppppuVar16 = (ushort *******)((int)pppppppuVar12 + 2);
        pppppppuVar12 = pppppppuVar16;
        if ((undefined1 *)0xfffffff7 < puVar10 + -0x47 && puVar10 != (undefined1 *)0x3f)
        goto LAB_0061dee4;
      }
      else {
        uVar3 = *(byte *)((int)pppppppuVar12 + 2) & 0x3f | uVar3 << 6;
        if (puVar10 < (undefined1 *)0xf0) {
          puVar10 = (undefined1 *)(uVar3 | ((uint)puVar10 & 0x1f) << 0xc);
          pppppppuVar16 = (ushort *******)((int)pppppppuVar12 + 3);
          pppppppuVar12 = pppppppuVar16;
          if ((undefined1 *)0xfffffff7 < puVar10 + -0x47 && puVar10 != (undefined1 *)0x3f)
          goto LAB_0061dee4;
        }
        else {
          pppppppuVar16 = (ushort *******)((uint)puVar10 & 7);
          puVar10 = (undefined1 *)
                    (*(byte *)((int)pppppppuVar12 + 3) & 0x3f | uVar3 << 6 |
                    (int)pppppppuVar16 << 0x12);
          if (puVar10 == &DAT_00110000) goto LAB_0061df80;
          pppppppuVar16 = pppppppuVar12 + 1;
          pppppppuVar12 = pppppppuVar16;
          if ((undefined1 *)0xfffffff7 < puVar10 + -0x47 && puVar10 != (undefined1 *)0x3f)
          goto LAB_0061dee4;
        }
      }
    }
    else {
      pppppppuVar12 = pppppppuVar16;
      if ((undefined1 *)0xfffffff7 < puVar10 + -0x47 && puVar10 != (undefined1 *)0x3f)
      goto LAB_0061dee4;
    }
    pppppppuVar12 = pppppppuVar16;
  } while ((undefined1 *)0xfffffff5 < puVar10 + -0x3a);
LAB_0061dd88:
LAB_0061dd8c:
  unaff_r10 = (ushort ******)pppppppuVar6;
  if (&SUB_00000002 < pppppppuVar6) {
    iVar13 = 3;
    iVar18 = thunk_FUN_016dd50a("_ZN",local_6c,3);
    if (iVar18 == 0) {
      iVar18 = -3;
      if ((pppppppuVar6 != (ushort *******)0x3) && ((char)*(byte *)((int)local_6c + 3) < -0x40)) {
        puVar7 = &DAT_018a71d8;
        goto LAB_0061de9c;
      }
      goto LAB_0061dfc0;
    }
    local_30 = (ushort *******)(uint)*(ushort *)local_6c;
    if (local_30 == (ushort *******)0x4e5a) {
      if ((char)(byte)*(ushort *)((int)local_6c + 2) < -0x40) {
        puVar7 = &DAT_018a71c8;
        goto LAB_0061e670;
      }
      goto LAB_0061dfb8;
    }
    if (pppppppuVar6 < &DAT_00000004) goto LAB_0061e1ec;
    if (*local_6c == (ushort ******)0x4e5a5f5f) {
      iVar13 = 4;
      iVar18 = -4;
      if ((pppppppuVar6 != (ushort *******)&DAT_00000004) &&
         ((char)(byte)*(ushort *)((int)local_6c + 4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_6c,pppppppuVar6,4,pppppppuVar6,&DAT_018a71b8);
      }
      goto LAB_0061dfc0;
    }
LAB_0061e1f4:
    if (*(ushort *)local_6c != 0x525f) {
      local_64 = unaff_r9;
      if (*(byte *)local_6c == 0x52) goto LAB_0061e2c0;
      if ((pppppppuVar6 == (ushort *******)0x3) ||
         (iVar18 = thunk_FUN_016dd50a("__R",local_6c,3), iVar18 != 0)) goto LAB_0061e27c;
      unaff_r4 = (ushort *******)((int)local_6c + 3);
      bVar1 = *(byte *)unaff_r4;
      if ((char)bVar1 < -0x40) {
        puVar7 = &DAT_018a7138;
LAB_0061de9c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_6c,pppppppuVar6,3,pppppppuVar6,puVar7);
      }
      iVar18 = -3;
      goto joined_r0x0061e25c;
    }
    unaff_r4 = (ushort *******)((int)local_6c + 2);
    if ((char)*(byte *)unaff_r4 < -0x40) {
      puVar7 = &DAT_018a7158;
LAB_0061e670:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_6c,pppppppuVar6,2,pppppppuVar6,puVar7);
    }
    iVar18 = -2;
    if (0x19 < *(byte *)unaff_r4 - 0x41) goto LAB_0061e27c;
LAB_0061e314:
    uVar17 = 2;
    pppppppuVar16 = (ushort *******)((int)unaff_r10 + iVar18);
    pppppppuVar6 = (ushort *******)0x0;
    do {
      if (pppppppuVar16 == pppppppuVar6) {
        unaff_r8 = (byte *)0x0;
        local_68 = (ushort *******)0x0;
        local_64 = (byte *)0x0;
        local_60 = 0;
        local_5c = 0;
        local_70 = unaff_r4;
        local_6c = pppppppuVar16;
        iVar18 = FUN_014f5b4c(&local_70,0);
        if (iVar18 != 0) {
LAB_0061e5c4:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,
                       &local_30,&DAT_018a7198,&DAT_018a7168);
        }
        if (local_70 == (ushort *******)0x0) {
          unaff_r4 = (ushort *******)0x0;
          iVar18 = 0;
          goto LAB_0061e284;
        }
        if ((local_68 < local_6c) && (*(byte *)((int)local_70 + (int)local_68) - 0x41 < 0x1a)) {
          local_60 = 0;
          local_5c = 0;
          iVar18 = FUN_014f5b4c(&local_70,0);
          if (iVar18 != 0) goto LAB_0061e5c4;
          if (local_70 == (ushort *******)0x0) break;
        }
        if (local_68 != (ushort *******)0x0) {
          if (local_68 < local_6c) {
            if ((char)*(byte *)((int)local_70 + (int)local_68) < -0x40) {
LAB_0061e40c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac();
            }
          }
          else if (local_6c != local_68) goto LAB_0061e40c;
        }
        unaff_r9 = (byte *)((int)local_70 + (int)local_68);
        iVar13 = (int)local_6c - (int)local_68;
        unaff_r8 = (byte *)0x0;
        goto LAB_0061e440;
      }
      pbVar8 = (byte *)((int)unaff_r4 + (int)pppppppuVar6);
      pppppppuVar6 = (ushort *******)((int)pppppppuVar6 + 1);
    } while (-1 < (char)*pbVar8);
  }
  else {
    local_64 = unaff_r9;
    if ((pppppppuVar6 == (ushort *******)&SUB_00000002) &&
       (local_30 = (ushort *******)(uint)*(ushort *)local_6c, local_30 == (ushort *******)0x4e5a)) {
LAB_0061dfb8:
      iVar13 = 2;
      iVar18 = -2;
LAB_0061dfc0:
      unaff_r4 = (ushort *******)((int)pppppppuVar6 + iVar18);
      unaff_r8 = (byte *)((int)local_6c + iVar13);
      pbVar19 = unaff_r8 + (int)unaff_r4;
      local_30 = unaff_r4;
      pbVar8 = unaff_r8;
      do {
        if (local_30 == (ushort *******)0x0) {
          local_30 = (ushort *******)0x0;
          if (unaff_r4 != (ushort *******)0x0) {
            unaff_r9 = unaff_r8 + 1;
            local_30 = (ushort *******)(int)(char)*unaff_r8;
            uVar3 = (uint)*unaff_r8;
            if ((ushort *******)0x7fffffff < local_30) {
              local_30 = (ushort *******)(uVar3 & 0x1f);
              if (uVar3 < 0xe0) {
                uVar3 = unaff_r8[1] & 0x3f | (int)local_30 << 6;
                unaff_r9 = unaff_r8 + 2;
              }
              else {
                uVar14 = unaff_r8[2] & 0x3f | (unaff_r8[1] & 0x3f) << 6;
                if (uVar3 < 0xf0) {
                  uVar3 = uVar14 | (int)local_30 << 0xc;
                  unaff_r9 = unaff_r8 + 3;
                }
                else {
                  local_30 = (ushort *******)(uVar3 & 7);
                  unaff_r9 = unaff_r8 + 4;
                  uVar3 = unaff_r8[3] & 0x3f | uVar14 << 6 | (int)local_30 << 0x12;
                }
              }
            }
            pppppppuVar16 = (ushort *******)0x0;
            goto joined_r0x0061e098;
          }
          break;
        }
        bVar1 = *pbVar8;
        local_30 = (ushort *******)((int)local_30 + -1);
        pbVar8 = pbVar8 + 1;
      } while (-1 < (char)bVar1);
LAB_0061e1ec:
      local_64 = unaff_r9;
      if (&SUB_00000002 < pppppppuVar6) goto LAB_0061e1f4;
    }
LAB_0061e264:
    if (pppppppuVar6 == (ushort *******)&SUB_00000002) {
      local_30 = (ushort *******)(uint)*(byte *)local_6c;
    }
    unaff_r9 = local_64;
    unaff_r10 = (ushort ******)pppppppuVar6;
    if (pppppppuVar6 == (ushort *******)&SUB_00000002 && local_30 == (ushort *******)&DAT_00000052)
    {
LAB_0061e2c0:
      unaff_r4 = (ushort *******)((int)local_6c + 1);
      bVar1 = *(byte *)unaff_r4;
      if ((char)bVar1 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_6c,pppppppuVar6,1,pppppppuVar6,&DAT_018a7148);
      }
      iVar18 = -1;
      unaff_r9 = local_64;
      unaff_r10 = (ushort ******)pppppppuVar6;
joined_r0x0061e25c:
      if (bVar1 - 0x41 < 0x1a) goto LAB_0061e314;
    }
  }
LAB_0061e27c:
  uVar17 = 2;
  unaff_r8 = (byte *)0x0;
  unaff_r4 = (ushort *******)0x0;
  iVar18 = 0;
LAB_0061e284:
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(ushort ********)(param_1 + 0x12) = param_3;
  *(undefined4 *)param_1 = uVar17;
  *(byte **)(param_1 + 2) = unaff_r8;
  *(ushort ********)(param_1 + 4) = unaff_r4;
  *(ushort ********)(param_1 + 6) = pppppppuVar16;
  *(ushort ********)(param_1 + 8) = pppppppuVar15;
  *(ushort *******)(param_1 + 10) = unaff_r10;
  *(byte **)(param_1 + 0xc) = unaff_r9;
  *(int *)(param_1 + 0xe) = iVar18;
  return;
}

