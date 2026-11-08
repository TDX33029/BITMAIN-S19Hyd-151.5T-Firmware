// FUN_012a8cb4 @ 012a8cb4 size=1708 calls_out=14 calls_in=2
// strings: 

int ***** FUN_012a8cb4(int ******param_1,undefined4 param_2,int ****param_3)

{
  int ****ppppiVar1;
  int *****pppppiVar2;
  int iVar3;
  int *****pppppiVar4;
  int ***pppiVar5;
  int *****pppppiVar6;
  int ******ppppppiVar7;
  undefined *puVar8;
  uint extraout_r2;
  uint uVar9;
  int ****ppppiVar10;
  int *****pppppiVar11;
  int ***pppiVar12;
  int iVar13;
  undefined1 *puVar14;
  int ******ppppppiVar15;
  int ****ppppiVar16;
  bool bVar17;
  undefined8 uVar18;
  int ***local_84;
  undefined1 *local_80;
  int ***local_7c;
  int ******local_78;
  int ****local_74;
  int ****local_70;
  int *****local_68;
  int *****local_64;
  char *local_60;
  uint local_5c;
  int ******local_58;
  int ****local_54;
  int ******local_50;
  int ****local_4c;
  int ****local_48;
  int ******local_40;
  int ****local_3c;
  int ****local_38;
  undefined1 *local_34;
  int ******local_30;
  undefined1 *local_2c;
  
  uVar18 = thunk_FUN_01be5118(1);
  pppppiVar6 = (int *****)((ulonglong)uVar18 >> 0x20);
  puVar14 = (undefined1 *)uVar18;
  if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,1);
  }
  *puVar14 = 0x20;
  pppppiVar2 = param_1[0x51];
  local_7c = (int ***)0x1;
  bVar17 = ((uint)pppppiVar2 & 0x1000) == 0;
  uVar9 = extraout_r2;
  if (bVar17) {
    pppppiVar6 = param_1[0x52];
    uVar9 = (uint)pppppiVar2 & 0x2000;
  }
  local_84 = (int ***)0x1;
  local_80 = puVar14;
  if (bVar17 && (((uint)pppppiVar6 & 0x3000) == 0 && uVar9 == 0)) {
    ppppiVar16 = (int ****)FUN_012b9138(param_1 + 0x1d);
    local_38 = (int ****)0x0;
    local_3c = (int ****)&DAT_00420598;
    if (ppppiVar16 != (int ****)0x0) {
      local_3c = ppppiVar16;
    }
    local_40 = param_1;
    FUN_012b5da8(&local_78,&local_40,4,0,0);
    if (local_70 != (int ****)0x0) {
      pppiVar12 = (int ***)0x1;
      ppppiVar16 = local_74 + 1;
      iVar13 = (int)local_70 * 0xc;
      do {
        local_4c = (int ****)0x1;
        local_48 = (int ****)0x0;
        local_50 = (int ******)0x0;
        local_34 = (undefined1 *)0x0;
        local_38 = (int ****)0x60000020;
        local_3c = (int ****)&DAT_01ce23dc;
        local_40 = (int ******)&local_50;
        iVar3 = FUN_012fb940(&local_40,*ppppiVar16,ppppiVar16[1]);
        ppppiVar1 = local_48;
        ppppiVar10 = local_4c;
        ppppppiVar15 = local_50;
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01ce23f4,&DAT_01d30334);
        }
        if ((int ****)((int)local_84 - (int)pppiVar12) < local_48) {
          FUN_006520b4(&local_84,pppiVar12,local_48,1,1);
          pppiVar12 = local_7c;
          puVar14 = local_80;
        }
        FUN_01bed4e2(puVar14 + (int)pppiVar12,ppppiVar10,ppppiVar1);
        pppiVar12 = (int ***)((int)local_7c + (int)ppppiVar1);
        local_7c = pppiVar12;
        FUN_0134bd64(ppppppiVar15,ppppiVar10);
        pppiVar5 = pppiVar12;
        if (local_84 == pppiVar12) {
          FUN_006520b4(&local_84,pppiVar12,1,1,1);
          pppiVar5 = local_7c;
        }
        ppppiVar16 = ppppiVar16 + 3;
        pppiVar12 = (int ***)((int)pppiVar12 + 1);
        iVar13 = iVar13 + -0xc;
        local_80[(int)pppiVar5] = 0x20;
        puVar14 = local_80;
        local_7c = pppiVar12;
      } while (iVar13 != 0);
    }
    FUN_018a8274(&local_78);
    pppppiVar2 = param_1[0x51];
  }
  pppppiVar6 = param_1[0x52];
  if (param_1[0x19] != (int *****)0x0) {
    pppppiVar11 = param_1[0x18];
    iVar13 = (int)param_1[0x19] * 0x16c;
    do {
      if (pppppiVar11[0x48] == param_3) {
        ppppiVar16 = pppppiVar11[0x47];
        iVar3 = thunk_FUN_01bed842(ppppiVar16,param_2,param_3);
        if (iVar3 == 0) {
          local_70 = (int ****)0x0;
          local_74 = (int ****)0x1;
          local_78 = (int ******)0x0;
          ppppiVar10 = pppppiVar11[0x48];
          if (ppppiVar10 != (int ****)0x0) {
            FUN_006520b4(&local_78,0,ppppiVar10,1,1);
          }
          FUN_01bed4e2((undefined *)((int)local_74 + (int)local_70),ppppiVar16,ppppiVar10);
          local_70 = (int ****)((int)local_70 + (int)ppppiVar10);
          if ((int *****)pppppiVar11[0x49] == (int *****)0x0) {
            pppppiVar4 = (int *****)pppppiVar11[7];
            if (pppppiVar4 != (int *****)&DAT_00110000) {
LAB_012a8fc4:
              local_40 = (int ******)&local_50;
              local_3c = (int ****)FUN_012fbb84;
              local_50 = (int ******)pppppiVar4;
              iVar13 = FUN_012fa178(&local_78,&DAT_01ce25cc,&DAT_005930d8,&local_40);
              if (iVar13 != 0) {
                puVar8 = &DAT_01ce239c;
LAB_012a930c:
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01ce23f4,puVar8);
              }
              goto LAB_012a9000;
            }
          }
          else {
            local_4c = pppppiVar11[0x4a];
            local_40 = (int ******)&local_50;
            local_3c = (int ****)&LAB_018a13b8;
            local_50 = (int ******)pppppiVar11[0x49];
            iVar13 = FUN_012fa178(&local_78,&DAT_01ce25cc,&DAT_00584e7a,&local_40);
            if (iVar13 != 0) {
              puVar8 = &DAT_01ce238c;
              goto LAB_012a930c;
            }
            pppppiVar4 = (int *****)pppppiVar11[7];
            if (pppppiVar4 != (int *****)&DAT_00110000) goto LAB_012a8fc4;
LAB_012a9000:
            local_50 = (int ******)&local_78;
            local_4c = (int ****)&LAB_00632348;
            FUN_00664898(&local_40,&DAT_00586789,&local_50);
            local_50 = local_40;
            local_4c = local_3c;
            local_48 = local_38;
            FUN_0134bd64(local_78,local_74);
            local_78 = local_50;
            local_74 = local_4c;
            local_70 = local_48;
          }
          if (param_1[0x26] == (int *****)0x80000000) {
LAB_012a90bc:
            ppppiVar16 = local_74;
            ppppppiVar15 = local_78;
            ppppiVar10 = local_70;
          }
          else {
            local_30 = (int ******)&local_78;
            local_38 = &local_84;
            local_40 = (int ******)&local_58;
            local_2c = &LAB_00632348;
            local_34 = &LAB_00632348;
            local_3c = (int ****)&LAB_0193a90c;
            local_58 = param_1 + 0x26;
            FUN_00664898(&local_50,&DAT_005a902e,&local_40);
            ppppiVar10 = local_48;
            ppppiVar16 = local_4c;
            ppppppiVar15 = local_50;
            if (local_50 == (int ******)&DAT_80000000) goto LAB_012a90bc;
            FUN_0134bd64(local_78,local_74);
          }
          if (pppppiVar11[0x3e] != (int ****)0x80000000) {
            FUN_0134bd64(pppppiVar11[0x3e],pppppiVar11[0x3f]);
          }
          pppppiVar11[0x3e] = (int ****)ppppppiVar15;
          pppppiVar11[0x3f] = ppppiVar16;
          pppppiVar11[0x40] = ppppiVar10;
          pppppiVar4 = param_1[0x26];
          local_68 = param_1[0x27];
          local_64 = param_1[0x28];
          if (pppppiVar4 == (int *****)0x80000000) {
            local_64 = (int *****)0x0;
          }
          local_5c = (uint)(pppppiVar4 != (int *****)0x80000000);
          local_60 = &DAT_005319c3;
          if (pppppiVar4 == (int *****)0x80000000) {
            local_68 = (int *****)0x1;
            local_60 = (char *)0x1;
          }
          local_58 = (int ******)pppppiVar11[0x47];
          local_54 = pppppiVar11[0x48];
          local_30 = (int ******)&local_58;
          local_2c = &LAB_018a13b8;
          local_34 = &LAB_018a13b8;
          local_3c = (int ****)&LAB_018a13b8;
          local_40 = &local_68;
          local_38 = (int ****)&local_60;
          FUN_00664898(&local_50,&DAT_005a902e,&local_40);
          local_40 = local_50;
          local_3c = local_4c;
          local_38 = local_48;
          ppppiVar16 = pppppiVar11[0x26];
          if (ppppiVar16 != (int ****)0x80000000) {
            FUN_0134bd64(ppppiVar16,pppppiVar11[0x27]);
          }
          pppppiVar11[0x26] = (int ****)local_40;
          pppppiVar11[0x27] = local_3c;
          pppppiVar11[0x28] = local_38;
          pppppiVar4 = pppppiVar11 + 0x23;
          if (*pppppiVar4 == (int ****)0x80000000) {
            if ((int)(((uint)pppppiVar2 | (uint)pppppiVar6) << 0x14) < 0) {
              local_68 = param_1[0x24];
              local_64 = param_1[0x25];
              if (param_1[0x23] == (int *****)0x80000000) {
                local_68 = (int *****)0x1;
                local_64 = (int *****)0x0;
              }
            }
            else {
              ppppppiVar15 = param_1 + 0x25;
              ppppppiVar7 = param_1 + 0x24;
              if (param_1[0x23] == (int *****)0x80000000) {
                ppppppiVar15 = param_1 + 0x48;
                ppppppiVar7 = param_1 + 0x47;
              }
              local_68 = *ppppppiVar7;
              local_64 = *ppppppiVar15;
            }
            local_5c = (uint)(local_64 != (int *****)0x0);
            local_60 = "-";
            if (local_64 == (int *****)0x0) {
              local_60 = (char *)0x1;
            }
            local_58 = (int ******)pppppiVar11[0x47];
            local_54 = pppppiVar11[0x48];
            local_30 = (int ******)&local_58;
            local_2c = &LAB_018a13b8;
            local_34 = &LAB_018a13b8;
            local_3c = (int ****)&LAB_018a13b8;
            local_40 = &local_68;
            local_38 = (int ****)&local_60;
            FUN_00664898(&local_50,&DAT_005a902e,&local_40);
            local_40 = local_50;
            local_3c = local_4c;
            local_38 = local_48;
            if (*pppppiVar4 != (int ****)0x80000000) {
              FUN_0134bd64(*pppppiVar4,pppppiVar11[0x24]);
            }
            *pppppiVar4 = (int ****)local_40;
            pppppiVar11[0x24] = local_3c;
            pppppiVar11[0x25] = local_38;
          }
          FUN_012a48d4(pppppiVar11,0);
          puVar14 = local_80;
          goto LAB_012a92b8;
        }
      }
      pppppiVar11 = pppppiVar11 + 0x5b;
      iVar13 = iVar13 + -0x16c;
    } while (iVar13 != 0);
  }
  pppppiVar11 = (int *****)0x0;
LAB_012a92b8:
  FUN_0134bd64(local_84,puVar14);
  return pppppiVar11;
}

