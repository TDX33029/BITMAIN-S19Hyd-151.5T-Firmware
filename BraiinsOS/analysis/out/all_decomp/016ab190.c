// FUN_016ab190 @ 016ab190 size=2772 calls_out=11 calls_in=1
// strings: 

/* WARNING: Switch with 1 destination removed at 0x016ab8e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_016ab190(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  code *pcVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint local_154;
  int local_128;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  
  piVar21 = *(int **)(param_2 + 0x2c);
  uVar20 = *(uint *)(param_2 + 0xc);
  uVar28 = *(uint *)(param_2 + 0x1c);
  bVar26 = *(byte *)(param_2 + 0x25);
LAB_016ab224:
  uVar4 = *(uint *)(param_2 + 8);
  iVar30 = *(int *)(param_2 + 4);
  uVar24 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x24);
  uVar6 = (uint)*(byte *)(param_2 + 0x18);
LAB_016ab264:
  uVar29 = uVar28;
  if ((bVar26 & 1) == 0) {
    if ((uVar24 <= uVar4) && (uVar20 <= uVar24)) {
      uVar27 = (uint)*(byte *)(param_2 + 0x13 + uVar6);
      uVar28 = uVar27 * 0x1010101;
      if (uVar6 < 5) {
        do {
          uVar7 = uVar24 - uVar20;
          iVar22 = iVar30 + uVar20;
          if (uVar7 < 8) {
            if (uVar24 == uVar20) goto LAB_016ab560;
            uVar13 = 0;
            while (*(byte *)(iVar22 + uVar13) != uVar27) {
              uVar13 = uVar13 + 1;
              if (uVar7 == uVar13) goto LAB_016ab560;
            }
          }
          else {
            uVar11 = (iVar22 + 3U & 0xfffffffc) - iVar22;
            if (uVar11 == 0) {
              uVar11 = 0;
              goto LAB_016ab32c;
            }
            uVar13 = 0;
            do {
              if (*(byte *)(iVar22 + uVar13) == uVar27) goto LAB_016ab3bc;
              uVar13 = uVar13 + 1;
            } while (uVar11 != uVar13);
            for (; uVar11 <= uVar7 - 8; uVar11 = uVar11 + 8) {
LAB_016ab32c:
              uVar17 = *(uint *)(iVar22 + uVar11) ^ uVar28;
              uVar13 = ((uint *)(iVar22 + uVar11))[1] ^ uVar28;
              if (((0x1010100 - uVar17 | uVar17) & 0x80808080 & (0x1010100 - uVar13 | uVar13)) !=
                  0x80808080) break;
            }
            if (uVar7 == uVar11) goto LAB_016ab560;
            iVar8 = 0;
            while (*(byte *)(iVar22 + uVar11 + iVar8) != uVar27) {
              iVar8 = iVar8 + 1;
              if ((uVar24 - uVar11) - uVar20 == iVar8) goto LAB_016ab560;
            }
            uVar13 = iVar8 + uVar11;
          }
LAB_016ab3bc:
          uVar20 = uVar20 + uVar13 + 1;
          *(uint *)(param_2 + 0xc) = uVar20;
          if ((uVar6 <= uVar20) && (uVar20 <= uVar4)) {
            uVar7 = uVar20 - uVar6;
            iVar22 = thunk_FUN_016dd50a(iVar30 + uVar7,param_2 + 0x14);
            if (iVar22 == 0) {
              *(uint *)(param_2 + 0x1c) = uVar20;
              bVar26 = 0;
              uVar28 = uVar20;
              goto LAB_016ab25c;
            }
          }
        } while (uVar20 <= uVar24);
      }
      else {
        do {
          uVar7 = uVar24 - uVar20;
          iVar22 = iVar30 + uVar20;
          if (uVar7 < 8) {
            if (uVar24 == uVar20) goto LAB_016ab560;
            uVar13 = 0;
            while (*(byte *)(iVar22 + uVar13) != uVar27) {
              uVar13 = uVar13 + 1;
              if (uVar7 == uVar13) goto LAB_016ab560;
            }
          }
          else {
            uVar11 = (iVar22 + 3U & 0xfffffffc) - iVar22;
            if (uVar11 == 0) {
              uVar11 = 0;
              goto LAB_016ab4a8;
            }
            uVar13 = 0;
            do {
              if (*(byte *)(iVar22 + uVar13) == uVar27) goto LAB_016ab538;
              uVar13 = uVar13 + 1;
            } while (uVar11 != uVar13);
            for (; uVar11 <= uVar7 - 8; uVar11 = uVar11 + 8) {
LAB_016ab4a8:
              uVar17 = *(uint *)(iVar22 + uVar11) ^ uVar28;
              uVar13 = ((uint *)(iVar22 + uVar11))[1] ^ uVar28;
              if (((0x1010100 - uVar17 | uVar17) & 0x80808080 & (0x1010100 - uVar13 | uVar13)) !=
                  0x80808080) break;
            }
            if (uVar7 == uVar11) goto LAB_016ab560;
            iVar8 = 0;
            while (*(byte *)(iVar22 + uVar11 + iVar8) != uVar27) {
              iVar8 = iVar8 + 1;
              if ((uVar24 - uVar11) - uVar20 == iVar8) goto LAB_016ab560;
            }
            uVar13 = iVar8 + uVar11;
          }
LAB_016ab538:
          uVar20 = uVar20 + uVar13 + 1;
          *(uint *)(param_2 + 0xc) = uVar20;
          if ((uVar6 <= uVar20) && (uVar20 <= uVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar6,4,&DAT_018af1a8);
          }
        } while (uVar20 <= uVar24);
      }
    }
    goto LAB_016ab568;
  }
  goto LAB_016ac518;
LAB_016ab560:
  *(uint *)(param_2 + 0xc) = uVar24;
  uVar20 = uVar24;
LAB_016ab568:
  bVar26 = 1;
  *(undefined1 *)(param_2 + 0x25) = 1;
  uVar7 = uVar5;
  uVar28 = uVar29;
  if ((cVar1 == '\0') && (uVar5 == uVar29)) goto LAB_016ac518;
LAB_016ab25c:
  pbVar15 = (byte *)(uVar7 - uVar29);
  if (pbVar15 != (byte *)0x0) goto LAB_016ab590;
  goto LAB_016ab264;
LAB_016ab590:
  pbVar18 = (byte *)(iVar30 + uVar29);
  local_a8 = 8;
  pbVar9 = (byte *)(iVar30 + uVar7);
  local_a4 = 0;
  local_94 = 0x80000000;
  local_ac = 0;
  local_a0 = -0x80000000;
  local_b0 = 0;
  pbVar12 = (byte *)0x0;
  pbVar14 = pbVar18;
  do {
    pbVar19 = pbVar14 + 1;
    uVar4 = (uint)*pbVar14;
    if (0x7fffffff < (uint)(int)(char)*pbVar14) {
      if (uVar4 < 0xe0) {
        uVar4 = pbVar14[1] & 0x3f | (uVar4 & 0x1f) << 6;
        pbVar19 = pbVar14 + 2;
      }
      else {
        uVar5 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
          pbVar19 = pbVar14 + 3;
        }
        else {
          pbVar19 = pbVar14 + 4;
          uVar4 = pbVar14[3] & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
        }
      }
    }
    pbVar14 = pbVar12 + ((int)pbVar19 - (int)pbVar14);
    if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
      if (uVar4 < 0x80) break;
      uVar5 = uVar4 >> 8;
      if (uVar5 < 0x20) {
        if (uVar5 == 0) {
          bVar2 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
          goto joined_r0x016ab6dc;
        }
        if (uVar5 != 0x16 || uVar4 != 0x1680) break;
      }
      else if (uVar5 == 0x20) {
        bVar2 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
joined_r0x016ab6dc:
        if (bVar2 == 0) break;
      }
      else if ((uVar5 != 0x30) || (uVar4 != 0x3000)) break;
    }
    pbVar12 = pbVar14;
    pbVar14 = pbVar19;
    if (pbVar19 == pbVar9) goto switchD_016ac284_caseD_2;
  } while( true );
  while( true ) {
    if (uVar5 == 0x20) {
      bVar2 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
      goto joined_r0x016ab7dc;
    }
    if (uVar5 != 0x30 || uVar4 != 0x3000) break;
joined_r0x016ab6f4:
    do {
      pbVar16 = pbVar9;
      if (pbVar19 == pbVar16) goto LAB_016ab7fc;
      pbVar9 = pbVar16 + -1;
      uVar4 = (uint)(char)*pbVar9;
      if (0x7fffffff < uVar4) {
        pbVar9 = pbVar16 + -2;
        bVar2 = *pbVar9;
        if ((char)bVar2 < -0x40) {
          pbVar9 = pbVar16 + -3;
          bVar3 = *pbVar9;
          if ((char)bVar3 < -0x40) {
            pbVar9 = pbVar16 + -4;
            uVar5 = (int)(char)bVar3 & 0x3fU | (*pbVar9 & 7) << 6;
          }
          else {
            uVar5 = bVar3 & 0xf;
          }
          uVar5 = (int)(char)bVar2 & 0x3fU | uVar5 << 6;
        }
        else {
          uVar5 = bVar2 & 0x1f;
        }
        uVar4 = uVar4 & 0x3f | uVar5 << 6;
      }
    } while ((uVar4 - 9 < 5) || (uVar4 == 0x20));
    if (uVar4 < 0x80) break;
    uVar5 = uVar4 >> 8;
    if (uVar5 < 0x20) {
      if (uVar5 == 0) {
        bVar2 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
joined_r0x016ab7dc:
        if (bVar2 == 0) break;
      }
      else if ((uVar5 != 0x16) || (uVar4 != 0x1680)) break;
      goto joined_r0x016ab6f4;
    }
  }
  pbVar14 = pbVar16 + ((int)pbVar14 - (int)pbVar19);
LAB_016ab7fc:
  if (pbVar14 != pbVar12) {
    pbVar9 = (byte *)0x0;
    pbVar12 = pbVar18 + (int)pbVar12;
    do {
      pbVar19 = pbVar12 + 1;
      uVar4 = (uint)*pbVar12;
      if (0x7fffffff < (uint)(int)(char)*pbVar12) {
        if (uVar4 < 0xe0) {
          uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
          pbVar19 = pbVar12 + 2;
        }
        else {
          uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar4 < 0xf0) {
            uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
            pbVar19 = pbVar12 + 3;
          }
          else {
            uVar4 = pbVar12[3] & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
            pbVar19 = pbVar12 + 4;
          }
        }
      }
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
      pbVar16 = pbVar9;
      if (uVar4 < 0x5b) {
        if ((uVar4 == 0x2d) || (uVar4 == 0x3a)) goto LAB_016aba6c;
LAB_016abb54:
        uVar25 = 1;
        if (uVar4 < 0x80) {
          if (uVar4 - 0x30 < 10) goto LAB_016aba6c;
          if (0x19 < (uVar4 & 0x5f) - 0x41) goto switchD_016ac284_caseD_2;
        }
        else {
          if (uVar4 < 0xaa) goto switchD_016ac284_caseD_2;
          iVar30 = FUN_00fb7558(uVar4);
          if (iVar30 != 0) goto LAB_016aba6c;
          if ((uVar4 < 0xb2) || (iVar30 = FUN_00fb7a34(uVar4), iVar30 == 0))
          goto switchD_016ac284_caseD_2;
        }
      }
      else {
        if (uVar4 == 0x5b) {
          pbVar16 = pbVar9 + 1;
          uVar25 = 2;
          goto LAB_016ab840;
        }
        if (uVar4 != 0x5f) goto LAB_016abb54;
LAB_016aba6c:
        uVar25 = 1;
      }
LAB_016ab840:
      pbVar9 = pbVar19 + ((int)pbVar9 - (int)pbVar12);
      pbVar12 = pbVar19;
    } while (pbVar19 != pbVar18 + (int)pbVar14);
    switch(uVar25) {
    case 1:
      if (pbVar16 != (byte *)0x0) {
        if (pbVar16 < pbVar15) {
          if ((char)pbVar18[(int)pbVar16] < -0x40) goto LAB_016ac64c;
        }
        else if (pbVar15 != pbVar16) {
LAB_016ac64c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar18,pbVar15,pbVar16,pbVar15,&DAT_018ae830);
        }
      }
      pbVar18 = pbVar18 + (int)pbVar16;
      uVar4 = (int)pbVar15 - (int)pbVar16;
      if (uVar4 == 0) {
        iVar30 = thunk_FUN_016dd50a(pbVar18,1,0);
        uVar5 = 0x80000000;
        if (iVar30 == 0) goto LAB_016ac3dc;
        iVar30 = FUN_0169b7d0(pbVar18,0);
        if (iVar30 == 6) {
          local_154 = 1;
          uVar5 = 0;
          goto LAB_016ac3cc;
        }
      }
      else {
        iVar30 = FUN_0169b7d0(pbVar18,uVar4);
        if (iVar30 == 6) {
          uVar25 = 0;
          if ((int)uVar4 < 0) {
LAB_016ac620:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar25,local_154);
          }
          local_154 = thunk_FUN_016d4a50(uVar4,local_154);
          if (local_154 == 0) {
            uVar25 = 1;
            local_154 = uVar4;
            goto LAB_016ac620;
          }
          uVar5 = uVar4;
LAB_016ac3cc:
          FUN_016dd1aa(local_154,pbVar18,uVar4);
LAB_016ac3dc:
          iVar30 = 0;
        }
        else {
          uVar5 = 0x80000000;
        }
      }
      local_b0 = iVar30;
      if ((local_94 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      local_90 = local_154;
      local_94 = uVar5;
      local_8c = uVar4;
      if (local_b0 != 6) {
        local_128 = 0;
        if (local_b0 != 7) {
          *param_1 = local_b0;
          param_1[1] = local_ac;
          param_1[8] = local_154;
          param_1[9] = uVar4;
          param_1[2] = local_a8;
          param_1[3] = 0;
          param_1[4] = local_a0;
          param_1[5] = local_9c;
          param_1[6] = local_98;
          param_1[7] = uVar5;
          return;
        }
        goto LAB_016ab224;
      }
      local_128 = 0;
      iVar30 = *piVar21;
      local_b0 = 6;
      iVar22 = local_ac;
      iVar8 = local_a8;
      goto joined_r0x016ac55c;
    }
  }
switchD_016ac284_caseD_2:
  iVar22 = 2;
  iVar8 = 0;
  FUN_016a01b4(&local_b0);
  iVar30 = *piVar21;
joined_r0x016ac55c:
  if ((iVar30 != 3) && (iVar30 == 0)) {
    iVar30 = piVar21[1];
    puVar23 = (undefined4 *)piVar21[2];
    pcVar10 = (code *)*puVar23;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(iVar30);
    }
    if (puVar23[1] != 0) {
      thunk_FUN_016d3fb4(iVar30);
    }
  }
  piVar21[2] = local_128;
  *piVar21 = iVar22;
  piVar21[1] = iVar8;
LAB_016ac518:
  *param_1 = 6;
  return;
}

