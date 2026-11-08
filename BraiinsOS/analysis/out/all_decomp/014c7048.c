// FUN_014c7048 @ 014c7048 size=3160 calls_out=20 calls_in=1
// strings: Proxy-Authorization:  | HTTP/1.1 200 | HTTP/1.0 200 | HTTP/1.1 407

void FUN_014c7048(uint *param_1,uint *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  code *pcVar13;
  uint uVar14;
  undefined2 uVar15;
  code *pcVar16;
  undefined1 *unaff_r8;
  undefined1 *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined *local_ed0;
  uint *local_ec4;
  uint *local_eb8;
  undefined1 auStack_ea8 [728];
  undefined1 auStack_bd0 [744];
  int local_8e8;
  code *local_8e4;
  code *local_8e0;
  undefined1 auStack_8d8 [728];
  int local_600 [2];
  undefined2 local_5f8;
  undefined1 auStack_328 [728];
  code *local_50;
  code *local_4c;
  uint local_48;
  code *local_40;
  code *local_3c;
  uint local_38;
  code *local_34;
  code *local_30;
  code *local_2c;
  code *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1d]) {
  case '\0':
    uVar8 = param_2[0x10];
    uVar10 = param_2[0x11];
    param_2[0x1e] = uVar8;
    param_2[0x1f] = uVar10;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a62b4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a62b4);
  case '\x03':
    uVar8 = param_2[0x1e];
    uVar10 = param_2[0x1f];
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x19f]) {
    case '\0':
      uVar20 = *(undefined8 *)(param_2 + 0xdc);
      uVar15 = (undefined2)param_2[0x19e];
      puVar18 = (uint *)param_2[0x19a];
      goto LAB_014c737c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6194);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a6194);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1a7]) {
      case '\0':
        puVar5 = (uint *)param_2[0x1a0];
        uVar8 = param_2[0x1a1];
        pcVar4 = (code *)param_2[0x1a2];
        goto LAB_014c7520;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a6134);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a6134);
      case '\x03':
        pcVar4 = (code *)param_2[0x1a4];
        pcVar16 = (code *)param_2[0x1a6];
        if (pcVar4 <= pcVar16) goto LAB_014c75b4;
      }
      break;
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1a7]) {
      case '\0':
        puVar5 = (uint *)param_2[0x1a1];
        local_34 = (code *)param_2[0x1a2];
        local_30 = (code *)param_2[0x1a3];
        goto LAB_014c7a70;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a6124);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a6124);
      case '\x03':
        local_34 = (code *)param_2[0x1a4];
        local_30 = (code *)param_2[0x1a5];
        puVar5 = (uint *)param_2[0x1a6];
        goto LAB_014c7a7c;
      }
    }
    goto LAB_014c7540;
  }
  (**(code **)(uVar10 + 0xc))(&local_8e8,uVar8,param_3);
  if (local_8e8 == 4) {
    *param_1 = 4;
    *(undefined1 *)(param_2 + 0x1d) = 3;
    return;
  }
  FUN_016dd1aa(auStack_ea8,auStack_8d8,0x2d8);
  puVar11 = (undefined4 *)param_2[0x1f];
  uVar8 = param_2[0x1e];
  pcVar4 = (code *)*puVar11;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar8);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (local_8e8 == 3) {
    uVar10 = 0;
    pcVar4 = local_8e4;
    pcVar16 = local_8e0;
  }
  else {
    FUN_016dd1aa(auStack_8d8,auStack_ea8,0x2d8);
    if (param_2[0x16] != 0) {
      uVar20 = FUN_010a61e4(param_2[0x15]);
      param_2[0x1e] = 7;
      *(undefined8 *)(param_2 + 0x1f) = uVar20;
      if (param_2[0x16] == 0) {
        uVar15 = 0x1bb;
      }
      else {
        FUN_010a6bb0(local_600,param_2[0x15]);
        uVar15 = local_5f8;
        if (local_600[0] == 0) {
          uVar15 = 0x1bb;
        }
      }
      unaff_r8 = auStack_bd0;
      FUN_016dd1aa(unaff_r8,&local_8e8,0x2e8);
      FUN_016dd1aa(param_2 + 0x22,unaff_r8,0x2e8);
      *(undefined8 *)(param_2 + 0xdc) = uVar20;
      *(undefined2 *)(param_2 + 0x19e) = uVar15;
      *(undefined1 *)(param_2 + 0x19f) = 0;
      param_2[0x19a] = (uint)param_2;
      puVar18 = param_2;
LAB_014c737c:
      *(undefined1 *)((int)param_2 + 0x67d) = 1;
      puVar5 = param_2 + 0xde;
      FUN_016dd1aa(puVar5,param_2 + 0x22,0x2e8);
      local_34 = (code *)(param_2 + 0x198);
      *(undefined8 *)local_34 = uVar20;
      local_2c = (code *)((int)param_2 + 0x67a);
      *(undefined2 *)local_2c = uVar15;
      local_28 = FUN_00fac370;
      local_30 = (code *)&DAT_0157d360;
      FUN_00600d2c(&local_40,&DAT_004092b6,&local_34);
      puVar6 = param_2 + 0x19b;
      *puVar6 = (uint)local_40;
      param_2[0x19c] = (uint)local_3c;
      param_2[0x19d] = local_38;
      local_4c = local_3c;
      local_48 = local_38;
      local_50 = local_40;
      iVar2 = 2;
      if ((uint)(*puVar18 < 3) <= -puVar18[1]) {
        iVar2 = *puVar18 - 3;
      }
      if (iVar2 == 2) {
        uVar8 = 0;
        puVar17 = (undefined1 *)0x0;
        if (puVar18[10] == 0) {
          uVar8 = 2;
        }
        local_ed0 = &DAT_018a65cc;
        if (uVar8 == 2) goto LAB_014c7684;
LAB_014c7614:
        puVar7 = (undefined1 *)puVar18[10];
        if (puVar17 < puVar7) {
          puVar3 = (uint *)((int)puVar17 * 0x34 + puVar18[9]);
          if ((uVar8 & 1) == 0) goto LAB_014c76a0;
          puVar7 = (undefined1 *)puVar18[0xd];
          if (unaff_r8 < puVar7) {
            uVar8 = 2;
            iVar2 = puVar18[0xc] + (int)unaff_r8 * 0x24;
            puVar19 = (uint *)(iVar2 + 0x10);
            if (*(int *)(iVar2 + 8) != 0) {
              unaff_r8 = *(undefined1 **)(iVar2 + 0xc);
              uVar8 = 1;
            }
            if (puVar3[8] != 0) goto LAB_014c76c4;
            do {
              uVar20 = FUN_014c7ee4((char)puVar3[9]);
              while( true ) {
                uVar9 = (uint)((ulonglong)uVar20 >> 0x20);
                uVar10 = param_2[0x19d];
                if (param_2[0x19b] - uVar10 < uVar9) {
                  FUN_0148d72c(puVar6,uVar10,uVar9,1,1);
                  uVar10 = param_2[0x19d];
                }
                FUN_016dd1aa(param_2[0x19c] + uVar10,(int)uVar20,uVar9);
                uVar10 = uVar10 + uVar9;
                param_2[0x19d] = uVar10;
                if (param_2[0x19b] - uVar10 < 2) {
                  FUN_0148d72c(puVar6,uVar10,2,1,1);
                  uVar10 = param_2[0x19d];
                }
                uVar9 = uVar10 + 2;
                *(undefined2 *)(param_2[0x19c] + uVar10) = 0x203a;
                param_2[0x19d] = uVar9;
                uVar10 = puVar19[1];
                uVar14 = puVar19[2];
                if (param_2[0x19b] - uVar9 < uVar14) {
                  FUN_0148d72c(puVar6,uVar9,uVar14,1,1);
                  uVar9 = param_2[0x19d];
                }
                FUN_016dd1aa(param_2[0x19c] + uVar9,uVar10,uVar14);
                uVar9 = uVar9 + uVar14;
                param_2[0x19d] = uVar9;
                if (param_2[0x19b] - uVar9 < 2) {
                  FUN_0148d72c(puVar6,uVar9,2,1,1);
                  uVar9 = param_2[0x19d];
                }
                param_2[0x19d] = uVar9 + 2;
                *(undefined2 *)(param_2[0x19c] + uVar9) = 0xa0d;
                if (uVar8 != 2) goto LAB_014c7614;
LAB_014c7684:
                puVar17 = puVar17 + 1;
                if ((undefined1 *)puVar18[10] <= puVar17) goto LAB_014c74c8;
                puVar3 = (uint *)((int)puVar17 * 0x34 + puVar18[9]);
LAB_014c76a0:
                uVar8 = 2;
                puVar19 = puVar3 + 3;
                if ((*puVar3 & 1) != 0) {
                  unaff_r8 = (undefined1 *)puVar3[1];
                  uVar8 = 1;
                }
                if (puVar3[8] == 0) break;
LAB_014c76c4:
                uVar20 = *(undefined8 *)(puVar3 + 9);
              }
            } while( true );
          }
          local_ed0 = &DAT_018a65dc;
          puVar17 = unaff_r8;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(puVar17,puVar7,local_ed0);
      }
      if (iVar2 == 1) {
        uVar8 = param_2[0x19d];
        if (param_2[0x19b] - uVar8 < 0x15) {
          FUN_0148d72c(puVar6,uVar8,0x15,1,1);
          uVar8 = param_2[0x19d];
        }
        FUN_016dd1aa(param_2[0x19c] + uVar8,"Proxy-Authorization: ",0x15);
        uVar8 = uVar8 + 0x15;
        param_2[0x19d] = uVar8;
        uVar10 = puVar18[3];
        uVar9 = puVar18[4];
        if (param_2[0x19b] - uVar8 < uVar9) {
          FUN_0148d72c(puVar6,uVar8,uVar9,1,1);
          uVar8 = param_2[0x19d];
        }
        FUN_016dd1aa(param_2[0x19c] + uVar8,uVar10,uVar9);
        uVar8 = uVar8 + uVar9;
        param_2[0x19d] = uVar8;
        if (param_2[0x19b] - uVar8 < 2) {
          FUN_0148d72c(puVar6,uVar8,2,1,1);
          uVar8 = param_2[0x19d];
        }
        param_2[0x19d] = uVar8 + 2;
        *(undefined2 *)(param_2[0x19c] + uVar8) = 0xa0d;
      }
LAB_014c74c8:
      uVar8 = param_2[0x19d];
      if (param_2[0x19b] - uVar8 < 2) {
        FUN_0148d72c(puVar6,uVar8,2,1,1);
        uVar8 = param_2[0x19d];
      }
      pcVar4 = (code *)(uVar8 + 2);
      *(undefined2 *)(param_2[0x19c] + uVar8) = 0xa0d;
      *(undefined1 *)(param_2 + 0x1a7) = 0;
      uVar8 = param_2[0x19c];
      param_2[0x1a0] = (uint)puVar5;
      param_2[0x1a1] = uVar8;
      param_2[0x1a2] = (uint)pcVar4;
      param_2[0x19d] = (uint)pcVar4;
LAB_014c7520:
      pcVar16 = (code *)0x0;
      param_2[0x1a3] = uVar8;
      param_2[0x1a4] = (uint)pcVar4;
      param_2[0x1a5] = (uint)puVar5;
      param_2[0x1a6] = 0;
      if (pcVar4 != (code *)0x0) {
LAB_014c7540:
        piVar12 = (int *)param_2[0x1a5];
        uVar8 = param_2[0x1a3];
        do {
          if (*piVar12 == 2) {
            FUN_01642b4c(&local_34,piVar12 + 1,param_3,pcVar16 + uVar8,(int)pcVar4 - (int)pcVar16);
          }
          else {
            FUN_014c9e60(&local_34,piVar12,param_3,pcVar16 + uVar8,(int)pcVar4 - (int)pcVar16);
          }
          if (((uint)local_34 & 0xff) != 4) {
            if (((uint)local_34 & 0xff) == 5) {
              uVar1 = 3;
              goto LAB_014c7bac;
            }
            uVar1 = 1;
            uVar8 = (uint)local_34 & 0xff;
            if (uVar8 == 5) {
              uVar1 = 3;
            }
            *(undefined1 *)(param_2 + 0x1a7) = uVar1;
            uVar1 = 3;
            if (uVar8 == 5) goto LAB_014c7bb4;
            if (uVar8 == 4) goto LAB_014c75bc;
            pcVar4 = local_34;
            pcVar16 = local_30;
            goto LAB_014c7be4;
          }
          pcVar16 = local_30 + (int)pcVar16;
          param_2[0x1a6] = (uint)pcVar16;
        } while (pcVar16 < pcVar4);
      }
LAB_014c75b4:
      *(undefined1 *)(param_2 + 0x1a7) = 1;
LAB_014c75bc:
      pcVar13 = (code *)0x0;
      FUN_016dd606(param_2 + 0x1a8,0,0x2000);
      param_2[0x1a0] = 0;
LAB_014c7b74:
      local_30 = (code *)(0x2000 - (int)pcVar13);
      puVar5 = param_2 + 0xde;
      local_34 = (code *)((int)param_2 + (int)(pcVar13 + 0x6a0));
      param_2[0x1a1] = (uint)puVar5;
      param_2[0x1a2] = (uint)local_34;
      param_2[0x1a3] = (uint)local_30;
      *(undefined1 *)(param_2 + 0x1a7) = 0;
LAB_014c7a70:
      param_2[0x1a4] = (uint)local_34;
      param_2[0x1a5] = (uint)local_30;
      param_2[0x1a6] = (uint)puVar5;
LAB_014c7a7c:
      pcVar4 = (code *)(param_2 + 0x1a7);
      pcVar16 = (code *)(param_2 + 0x22);
      local_2c = (code *)0x0;
      local_28 = local_30;
      if (*puVar5 == 2) {
        FUN_014bd230(&local_40,puVar5 + 1,param_3,&local_34);
      }
      else {
        FUN_014bcea4(&local_40,puVar5,param_3,&local_34);
      }
      if (((uint)local_40 & 0xff) == 4) {
        if (local_30 < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_2c,local_30,&DAT_018a69b0);
        }
        uVar8 = 3;
        *pcVar4 = (code)0x1;
        if (local_2c == (code *)0x0) {
          uVar10 = 5;
        }
        else {
          pcVar13 = local_2c + param_2[0x1a0];
          param_2[0x1a0] = (uint)pcVar13;
          if ((code *)0x2000 < pcVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,pcVar13,0x2000,&DAT_018a61a4);
          }
          if (pcVar13 < (code *)0xc) {
            uVar10 = 6;
          }
          else {
            puVar5 = param_2 + 0x1a8;
            iVar2 = thunk_FUN_016dd50a("HTTP/1.1 200",puVar5,0xc);
            if ((iVar2 == 0) || (iVar2 = thunk_FUN_016dd50a("HTTP/1.0 200",puVar5,0xc), iVar2 == 0))
            {
              if (*(int *)((int)puVar5 + (int)(pcVar13 + -4)) != 0xa0d0a0d) goto code_r0x014c7b6c;
              uVar8 = param_2[0xde];
              pcVar4 = (code *)param_2[0xe0];
              pcVar16 = (code *)param_2[0xe1];
              *(undefined1 *)((int)param_2 + 0x67d) = 0;
              uVar10 = param_2[0xdf];
              FUN_016dd1aa(&local_8e8,param_2 + 0xe2,0x2d8);
            }
            else {
              iVar2 = thunk_FUN_016dd50a("HTTP/1.1 407",puVar5,0xc);
              uVar10 = 6;
              if (iVar2 == 0) {
                uVar10 = 3;
              }
            }
          }
        }
      }
      else {
        if (((uint)local_40 & 0xff) == 5) {
          uVar1 = 4;
LAB_014c7bac:
          *(undefined1 *)(param_2 + 0x1a7) = 3;
LAB_014c7bb4:
          local_ec4 = param_2 + 0x19f;
          *(undefined1 *)local_ec4 = uVar1;
          goto LAB_014c7cb8;
        }
        *pcVar4 = (code)0x1;
        pcVar4 = local_40;
        pcVar16 = local_3c;
LAB_014c7be4:
        uVar10 = 1;
        uVar8 = 3;
      }
      goto LAB_014c7c64;
    }
    pcVar16 = (code *)param_2[0x20];
    uVar10 = 2;
    pcVar4 = (code *)0x0;
    param_2[0x1e] = 2;
    param_2[0x1f] = 0;
    FUN_014c6e20(&local_8e8);
  }
  FUN_0145d5e0(param_2 + 0x12);
  uVar9 = *param_2;
  iVar2 = 2;
  uVar8 = 3;
  if ((uint)(uVar9 < 3) <= -param_2[1]) {
    iVar2 = uVar9 - 3;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2 + 5,param_2[3],param_2[4]);
    }
    else {
      FUN_01015c1c(param_2,-(param_2[1] + (uint)(uVar9 >= 3)));
    }
  }
LAB_014c7d80:
  *param_1 = uVar8;
  param_1[1] = uVar10;
  param_1[2] = (uint)pcVar4;
  param_1[3] = (uint)pcVar16;
  FUN_016dd1aa(param_1 + 4,auStack_328,0x2d8);
  *(undefined1 *)(param_2 + 0x1d) = 1;
  return;
code_r0x014c7b6c:
  if (pcVar13 == (code *)0x2000) goto LAB_014c7c34;
  goto LAB_014c7b74;
LAB_014c7c34:
  uVar10 = 4;
LAB_014c7c64:
  local_eb8 = param_2 + 0x22;
  if (param_2[0x19b] != 0) {
    thunk_FUN_016d3fb4(param_2[0x19c]);
  }
  if (*(char *)((int)param_2 + 0x67d) == '\x01') {
    FUN_014c6e20(param_2 + 0xde);
  }
  *(undefined1 *)((int)param_2 + 0x67d) = 0;
  FUN_016dd1aa(local_600,&local_8e8,0x2d8);
  *(undefined1 *)(param_2 + 0x19f) = 1;
  if (uVar8 == 4) {
LAB_014c7cb8:
    *param_1 = 4;
    *(undefined1 *)(param_2 + 0x1d) = 4;
    return;
  }
  FUN_016dd1aa(auStack_328,local_600,0x2d8);
  if ((byte)param_2[0x19f] - 3 < 2) {
    if (param_2[0x19b] != 0) {
      thunk_FUN_016d3fb4(param_2[0x19c]);
    }
    FUN_014c6e20(param_2 + 0xde);
    *(undefined1 *)((int)param_2 + 0x67d) = 0;
  }
  else if ((byte)param_2[0x19f] == 0) {
    FUN_014c6e20(local_eb8);
  }
  FUN_0145d5e0(param_2 + 0x12);
  uVar9 = *param_2;
  iVar2 = 2;
  if ((uint)(uVar9 < 3) <= -param_2[1]) {
    iVar2 = uVar9 - 3;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      (**(code **)(param_2[2] + 0x10))(param_2 + 5,param_2[3],param_2[4]);
    }
    else {
      FUN_01015c1c(param_2,-(param_2[1] + (uint)(uVar9 >= 3)));
    }
  }
  goto LAB_014c7d80;
}

