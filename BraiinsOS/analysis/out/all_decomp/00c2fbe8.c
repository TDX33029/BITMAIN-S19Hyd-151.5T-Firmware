// FUN_00c2fbe8 @ 00c2fbe8 size=2160 calls_out=13 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00c2fbe8(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  int *piVar15;
  uint *******pppppppuVar16;
  uint extraout_r3;
  uint uVar17;
  uint extraout_r3_00;
  uint *******pppppppuVar18;
  uint uVar19;
  int *piVar20;
  code *pcVar21;
  uint *******pppppppuVar22;
  int *piVar23;
  uint *******pppppppuVar24;
  int *piVar25;
  int iVar26;
  code *local_9c;
  byte local_91;
  uint *******local_90;
  code *local_8c;
  uint *******local_88;
  undefined1 auStack_84 [12];
  uint *******local_78;
  code *local_74;
  uint *******local_70;
  undefined4 *local_6c;
  uint *******local_68;
  code *local_64;
  uint *******local_58;
  code *local_54;
  uint *******local_50;
  uint *******local_48;
  code *local_44;
  uint *******local_40;
  uint *******local_38;
  code *local_34;
  uint *******local_30;
  uint *****local_28;
  
  bVar4 = (byte)param_2;
  local_48 = (uint *******)CONCAT31(local_48._1_3_,bVar4);
  DataMemoryBarrier(0xb);
  if (DAT_018db068 != 0) {
    local_38 = (uint *******)&DAT_018db048;
    local_78 = (uint *******)&local_38;
    FUN_015eedc4(&DAT_018db068,1,&local_78,&DAT_01873450,&DAT_018ac9b8);
  }
  if (DAT_018db054 != 0) {
    uVar6 = FUN_00c507d4(DAT_018db058,DAT_018db05c,DAT_018db060,DAT_018db064,param_2);
    uVar17 = uVar6 >> 0x19;
    iVar26 = 0;
    while( true ) {
      uVar6 = DAT_018db04c & uVar6;
      uVar19 = *(uint *)(DAT_018db048 + uVar6);
      uVar12 = uVar19 ^ uVar17 * 0x1010101;
      uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
      while (uVar12 != 0) {
        uVar13 = uVar12 >> 8;
        uVar1 = uVar12 >> 0x10;
        uVar2 = uVar12 >> 0x18;
        uVar3 = uVar12 << 0x18;
        uVar12 = uVar12 - 1 & uVar12;
        uVar13 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                        uVar2) >> 3) & DAT_018db04c;
        if ((param_2 & 0xff) == (uint)*(byte *)(DAT_018db048 + -8 + uVar13 * -8)) {
          iVar26 = *(int *)(DAT_018db048 + uVar13 * -8 + -4);
          piVar7 = (int *)thunk_FUN_016d4a50(0x10);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          *(byte *)(piVar7 + 3) = bVar4;
          *piVar7 = 1;
          piVar7[1] = 1;
          piVar7[2] = iVar26;
          DataMemoryBarrier(0xb);
          local_91 = bVar4;
          if (DAT_018dad60 != 0) {
            local_78 = (uint *******)&local_38;
            local_38 = (uint *******)&DAT_018dad60;
            FUN_015eedc4(&DAT_018dad60,1,&local_78,&DAT_01873464,&DAT_018ac9b8);
          }
          piVar25 = DAT_018dad68 + (int)DAT_018dad6c * 2;
          piVar15 = DAT_018dad68;
          goto LAB_00c2fd2c;
        }
      }
      if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
      iVar26 = iVar26 + 4;
      uVar6 = uVar6 + iVar26;
    }
  }
  uVar9 = FUN_00c313b0(&local_48);
  *param_1 = 0x80000000;
  param_1[1] = uVar9;
  return;
  while( true ) {
    (**(code **)(piVar20[1] + 0x10))
              (&local_78,*piVar20 + (*(int *)(piVar20[1] + 8) - 1U & 0xfffffff8) + 8);
    pppppppuVar18 = local_70;
    piVar15 = piVar20 + 2;
    pppppppuVar16 = (uint *******)0x0;
    uVar17 = extraout_r3;
    do {
      pppppppuVar22 = pppppppuVar16;
      pppppppuVar16 = pppppppuVar22;
      if (local_70 != pppppppuVar22) {
        uVar17 = (uint)(byte)local_74[(int)pppppppuVar22];
        pppppppuVar16 = (uint *******)((int)pppppppuVar22 + 1);
      }
    } while (local_70 != pppppppuVar22 && uVar17 != local_91);
    if (local_78 != (uint *******)0x0) {
      thunk_FUN_016d3fb4();
    }
    if (pppppppuVar18 != pppppppuVar22) break;
LAB_00c2fd2c:
    piVar20 = piVar15;
    if (piVar20 == piVar25) {
      local_88 = (uint *******)0x0;
      local_8c = (code *)&DAT_00000004;
      local_90 = (uint *******)0x0;
      goto LAB_00c2ff64;
    }
  }
  iVar26 = piVar20[1];
  piVar20 = (int *)*piVar20;
  do {
    iVar8 = *piVar20;
    bVar5 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar5);
  *piVar20 = iVar8 + 1;
  if (iVar8 < 0) {
LAB_00c30354:
                    /* WARNING: Does not return */
    pcVar10 = (code *)software_udf(0xfdee,0xc30354);
    (*pcVar10)();
  }
  local_9c = (code *)thunk_FUN_016d4a50(0x20);
  if (local_9c == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x20);
  }
  pppppppuVar16 = (uint *******)&DAT_00000001;
  *(int **)local_9c = piVar20;
  *(int *)(local_9c + 4) = iVar26;
  local_38 = (uint *******)&DAT_00000004;
  local_34 = local_9c;
  while (piVar20 = piVar15, local_30 = pppppppuVar16, piVar15 != piVar25) {
    while( true ) {
      (**(code **)(piVar20[1] + 0x10))
                (&local_78,*piVar20 + (*(int *)(piVar20[1] + 8) - 1U & 0xfffffff8) + 8);
      pppppppuVar22 = local_70;
      piVar15 = piVar20 + 2;
      pppppppuVar18 = (uint *******)0x0;
      uVar17 = extraout_r3_00;
      do {
        pppppppuVar24 = pppppppuVar18;
        pppppppuVar18 = pppppppuVar24;
        if (local_70 != pppppppuVar24) {
          uVar17 = (uint)(byte)local_74[(int)pppppppuVar24];
          pppppppuVar18 = (uint *******)((int)pppppppuVar24 + 1);
        }
      } while (local_70 != pppppppuVar24 && uVar17 != local_91);
      if (local_78 != (uint *******)0x0) {
        thunk_FUN_016d3fb4();
      }
      if (pppppppuVar22 != pppppppuVar24) break;
      piVar20 = piVar15;
      if (piVar15 == piVar25) goto LAB_00c2ff08;
    }
    piVar23 = (int *)*piVar20;
    iVar26 = piVar20[1];
    do {
      iVar8 = *piVar23;
      bVar5 = (bool)hasExclusiveAccess(piVar23);
    } while (!bVar5);
    *piVar23 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00c30354;
    if (pppppppuVar16 == local_38) {
      FUN_00d653ec(&local_38,pppppppuVar16,1,4,8);
      local_9c = local_34;
    }
    iVar8 = (int)pppppppuVar16 * 8;
    *(int **)(local_9c + iVar8) = piVar23;
    pppppppuVar16 = (uint *******)((int)pppppppuVar16 + 1);
    *(int *)(local_9c + iVar8 + 4) = iVar26;
  }
LAB_00c2ff08:
  local_8c = local_34;
  local_90 = local_38;
  local_88 = local_30;
  if (local_30 != (uint *******)0x0) {
    pcVar10 = local_34;
    if (local_38 == (uint *******)&DAT_80000000) {
LAB_00c30530:
      *param_1 = 0x80000000;
      param_1[1] = pcVar10;
      DataMemoryBarrier(0xb);
      do {
        iVar26 = *piVar7;
        bVar5 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar5);
      *piVar7 = iVar26 + -1;
      if (iVar26 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007846b4(piVar7,&DAT_01873328);
        return;
      }
    }
    else {
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      param_1[3] = piVar7;
      param_1[4] = &DAT_01873328;
    }
    return;
  }
LAB_00c2ff64:
  DataMemoryBarrier(0xb);
  if (DAT_018dad60 != 0) {
    local_78 = (uint *******)&local_38;
    local_38 = (uint *******)&DAT_018dad60;
    FUN_015eedc4(&DAT_018dad60,1,&local_78,&DAT_01873464,&DAT_018ac9b8);
  }
  pppppppuVar16 = DAT_018dad6c;
  piVar15 = DAT_018dad68;
  iVar26 = (int)DAT_018dad6c * 0xc;
  uVar9 = 0;
  if ((uint *******)0xaaaaaaa < DAT_018dad6c) {
LAB_00c2ff94:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar9,iVar26);
  }
  pppppppuVar18 = (uint *******)0x0;
  if (iVar26 == 0) {
    local_64 = (code *)&DAT_00000004;
    local_68 = (uint *******)0x0;
    pcVar10 = local_64;
  }
  else {
    pcVar10 = (code *)thunk_FUN_016d4a50(iVar26);
    local_68 = pppppppuVar16;
    if (pcVar10 == (code *)0x0) {
      uVar9 = 4;
      goto LAB_00c2ff94;
    }
  }
  local_64 = pcVar10;
  if (pppppppuVar16 != (uint *******)0x0) {
    pppppppuVar18 = (uint *******)0x0;
    do {
      iVar26 = (piVar15 + (int)pppppppuVar18 * 2)[1];
      (**(code **)(iVar26 + 0x10))
                (&local_48,
                 piVar15[(int)pppppppuVar18 * 2] + (*(int *)(iVar26 + 8) - 1U & 0xfffffff8) + 8);
      pppppppuVar22 = local_40;
      pcVar11 = local_44;
      uVar9 = 0;
      pcVar14 = local_9c;
      if ((uint *******)0xaaaaaaa < local_40) {
LAB_00c30350:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,pcVar14);
      }
      pcVar14 = (code *)((int)local_40 * 0xc);
      if (pcVar14 == (code *)0x0) {
        local_9c = (code *)&DAT_00000004;
        local_38 = (uint *******)0x0;
      }
      else {
        local_9c = (code *)thunk_FUN_016d4a50(pcVar14,local_9c);
        if (local_9c == (code *)0x0) {
          uVar9 = 4;
          goto LAB_00c30350;
        }
        local_38 = pppppppuVar22;
      }
      pppppppuVar24 = (uint *******)0x0;
      local_34 = local_9c;
      if (pppppppuVar22 != (uint *******)0x0) {
        pppppppuVar24 = (uint *******)0x0;
        pcVar14 = local_9c;
        do {
          local_28 = (uint *****)(pcVar11 + (int)pppppppuVar24);
          local_54 = FUN_00c72da8;
          local_58 = (uint *******)&local_28;
          FUN_00600d2c(&local_78,&DAT_00574fbe,&local_58);
          pppppppuVar24 = (uint *******)((int)pppppppuVar24 + 1);
          *(uint ********)pcVar14 = local_78;
          *(code **)(pcVar14 + 4) = local_74;
          *(uint ********)(pcVar14 + 8) = local_70;
          pcVar14 = pcVar14 + 0xc;
        } while (pppppppuVar22 != pppppppuVar24);
        pppppppuVar24 = pppppppuVar22;
      }
      pcVar14 = local_34;
      local_58 = local_38;
      local_54 = local_34;
      local_50 = pppppppuVar24;
      FUN_00c4406c(&local_78,local_34,pppppppuVar24,&DAT_0041950f,2);
      pcVar21 = pcVar14 + 4;
      local_38 = local_78;
      local_34 = local_74;
      local_30 = local_70;
      for (; pppppppuVar24 != (uint *******)0x0;
          pppppppuVar24 = (uint *******)((int)pppppppuVar24 + -1)) {
        if (*(int *)(pcVar21 + -4) != 0) {
          thunk_FUN_016d3fb4(*(int *)pcVar21);
        }
        pcVar21 = pcVar21 + 0xc;
      }
      if (local_58 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pcVar14);
      }
      if (local_48 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pcVar11);
      }
      pppppppuVar22 = (uint *******)((int)pppppppuVar18 + 1);
      pcVar14 = pcVar10 + (int)pppppppuVar18 * 0xc;
      *(uint ********)pcVar14 = local_38;
      *(code **)(pcVar14 + 4) = local_34;
      *(uint ********)(pcVar14 + 8) = local_30;
      pppppppuVar18 = pppppppuVar22;
    } while (pppppppuVar22 != pppppppuVar16);
    pppppppuVar18 = pppppppuVar16;
  }
  pcVar10 = local_64;
  local_38 = local_68;
  local_34 = local_64;
  local_30 = pppppppuVar18;
  FUN_00c4406c(&local_78,local_64,pppppppuVar18,&DAT_0041950f,2);
  local_48 = local_78;
  local_44 = local_74;
  local_40 = local_70;
  local_78 = (uint *******)&local_91;
  local_6c = &DAT_006043a8;
  pppppppuVar22 = (uint *******)&local_48;
  local_74 = FUN_006407f8;
  local_70 = pppppppuVar22;
  FUN_00600d2c(auStack_84,&DAT_0058a54d,&local_78);
  pppppppuVar16 = (uint *******)0x0;
  if (local_48 != (uint *******)0x0) goto LAB_00c30470;
LAB_00c30478:
  pppppppuVar22 = (uint *******)(pcVar10 + ((int)pppppppuVar16 * 3 + -3) * 4);
LAB_00c30484:
  if (pppppppuVar18 != pppppppuVar16) goto code_r0x00c3048c;
  if (local_38 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(pcVar10);
  }
  pcVar10 = (code *)FUN_00c6b484(auStack_84);
  pppppppuVar16 = local_88;
  pcVar14 = local_8c;
  if (local_88 != (uint *******)0x0) {
    pppppppuVar18 = (uint *******)0x0;
    do {
      pcVar11 = pcVar14 + (int)pppppppuVar18 * 8;
      piVar15 = *(int **)pcVar11;
      pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
      DataMemoryBarrier(0xb);
      do {
        iVar26 = *piVar15;
        bVar5 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar5);
      *piVar15 = iVar26 + -1;
      if (iVar26 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)pcVar11,*(undefined4 *)(pcVar11 + 4));
      }
    } while (pppppppuVar18 != pppppppuVar16);
  }
  if (local_90 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(local_8c);
  }
  goto LAB_00c30530;
code_r0x00c3048c:
  pppppppuVar22 = pppppppuVar22 + 3;
  pppppppuVar16 = (uint *******)((int)pppppppuVar16 + 1);
  if (*pppppppuVar22 != (uint ******)0x0) goto LAB_00c30470;
  goto LAB_00c30484;
LAB_00c30470:
  thunk_FUN_016d3fb4(pppppppuVar22[1]);
  goto LAB_00c30478;
}

