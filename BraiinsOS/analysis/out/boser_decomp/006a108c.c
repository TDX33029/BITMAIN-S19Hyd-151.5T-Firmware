// FUN_006a108c @ 006a108c size=4144 calls_out=24 calls_in=0
// strings: _Entity | deprecated | specifiedBy @inaccessibleextend ; resolvable: false @shareable @interfaceObject = @oneOf		 @external &  | oneOf | extend schema @link(  | 	url: 'https://specs.apollo.dev/federation/v2.3'; 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006a108c(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  uint ******ppppppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *****pppppuVar12;
  uint uVar13;
  undefined4 uVar14;
  int extraout_r2;
  uint *****pppppuVar15;
  uint ****extraout_r3;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint ******ppppppuVar20;
  uint ***pppuVar21;
  uint uVar22;
  uint ******ppppppuVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  int iVar26;
  uint ***pppuVar27;
  uint ****ppppuVar28;
  uint ****ppppuVar29;
  uint ******ppppppuVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined4 *local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint *****local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint *****local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint ******local_b0;
  uint ******local_ac;
  uint *****local_a8;
  uint ***local_a4;
  uint *****pppppuStack_a0;
  uint ******local_98;
  undefined4 *local_94;
  uint ******local_90;
  uint ******local_88;
  uint ******local_84;
  uint ******local_80;
  uint ******local_78;
  uint *****local_74;
  uint ******local_70;
  uint ****local_6c;
  uint *****local_68;
  uint ****local_64;
  uint *****local_60;
  uint local_5c;
  uint *****local_58;
  uint ******local_48;
  uint ******local_44;
  uint ******local_40;
  uint ******local_38;
  uint ******local_34;
  uint ******local_30;
  uint ******local_2c;
  
  local_6c = *(uint *****)(param_2 + 0x44);
  pppppuVar24 = *(uint ******)(param_2 + 0x40);
  local_58 = *(uint ******)(param_2 + 0x48);
  if (pppppuVar24 == (uint *****)0x0) {
    local_58 = pppppuVar24;
  }
  cVar1 = *(char *)(param_3 + 3);
  pppppuVar25 = (uint *****)(uint)(pppppuVar24 != (uint *****)0x0);
  local_e0 = 0;
  local_e4 = 1;
  local_e8 = 0;
  local_64 = (uint ****)0x0;
  local_74 = (uint *****)0x0;
  local_78 = (uint ******)pppppuVar25;
  local_70 = (uint ******)pppppuVar24;
  local_68 = pppppuVar25;
  local_60 = pppppuVar24;
  local_5c = (uint)local_6c;
  while (iVar4 = FUN_006bf6e0(&local_78), iVar4 != 0) {
    iVar6 = 2;
    if (*(int *)(iVar4 + 0x10) < 0) {
      iVar6 = *(int *)(iVar4 + 0x10);
    }
    if ((*(uint *)(iVar4 + *(int *)(iVar6 * 4 + 0x534b90)) < 2) ||
       (**(short **)(iVar4 + *(int *)(iVar6 * 4 + 0x534b78)) != 0x5f5f)) {
      if (cVar1 == '\0') {
LAB_006a1250:
                    /* WARNING: Could not recover jumptable at 0x006a1260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_006a1264 + *(int *)(&DAT_006a1264 + iVar6 * 4)))();
        return;
      }
      iVar26 = 0;
      uVar17 = *(undefined4 *)(iVar4 + *(int *)(iVar6 * 4 + 0x534ba8));
      iVar4 = *(int *)(iVar4 + *(int *)(iVar6 * 4 + 0x534bc0));
      while ((*(int *)((int)&DAT_01c05d04 + iVar26) != iVar4 ||
             (iVar5 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c05d00 + iVar26),uVar17,iVar4),
             iVar5 != 0))) {
        iVar26 = iVar26 + 8;
        if (iVar26 == 0x18) goto LAB_006a1250;
      }
    }
  }
  local_c4 = 0;
  uVar11 = *(uint *)(param_2 + 0x44);
  iVar4 = *(int *)(param_2 + 0x4c);
  uVar14 = *(undefined4 *)(param_2 + 0x50);
  uVar17 = *(undefined4 *)(param_2 + 0x54);
  if (iVar4 == 0) {
    uVar17 = 0;
  }
  pppppuVar12 = (uint *****)(uint)(iVar4 != 0);
  local_d4 = 0;
  pppppuVar15 = *(uint ******)(param_2 + 0x48);
  if (pppppuVar24 == (uint *****)0x0) {
    pppppuVar15 = pppppuVar24;
  }
  local_d8 = pppppuVar12;
  local_d0 = iVar4;
  local_cc = uVar14;
  local_c8 = pppppuVar12;
  local_c0 = iVar4;
  local_bc = uVar14;
  local_b8 = uVar17;
LAB_006a2eb8:
  iVar6 = FUN_006bf7fc(&local_d8);
  if (iVar6 != 0) {
    iVar26 = *(int *)(iVar6 + 0x54);
    if (iVar26 == 10) {
      iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x50),"deprecated",10);
      if (iVar5 != 0) goto LAB_006a30e4;
      local_64 = (uint ****)0x0;
      local_74 = (uint *****)0x0;
      local_78 = (uint ******)pppppuVar25;
      local_70 = (uint ******)pppppuVar24;
      local_6c = (uint ****)uVar11;
      local_68 = pppppuVar25;
      local_60 = pppppuVar24;
      local_5c = uVar11;
      local_58 = pppppuVar15;
      while (iVar5 = FUN_006bf6e0(&local_78), iVar5 != 0) {
        uVar13 = 2;
        if ((int)*(uint *)(iVar5 + 0x10) < 0) {
          uVar13 = *(uint *)(iVar5 + 0x10) ^ 0x80000000;
        }
        if (uVar13 == 4) {
          iVar7 = *(int *)(iVar5 + 0x34);
          iVar5 = *(int *)(iVar5 + 0x38) * 0x54;
          while (iVar5 != 0) {
            piVar8 = (int *)(iVar7 + 0x3c);
            iVar5 = iVar5 + -0x54;
            iVar7 = iVar7 + 0x54;
            if (*piVar8 != -0x7fffffff) goto LAB_006a2fe4;
          }
        }
        else if (uVar13 == 1) {
          iVar7 = *(int *)(iVar5 + 0x2c);
          iVar5 = *(int *)(iVar5 + 0x30) * 0xc0;
          while (iVar5 != 0) {
            piVar8 = (int *)(iVar7 + 0x40);
            iVar5 = iVar5 + -0xc0;
            iVar7 = iVar7 + 0xc0;
            if (*piVar8 != -0x7fffffff) goto LAB_006a2fe4;
          }
        }
      }
    }
    else {
LAB_006a2fe4:
      if (iVar26 == 0xb) {
        iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x50),
                                   "specifiedBy @inaccessibleextend , resolvable: false @shareable @interfaceObject = @oneOf\t\t @external & "
                                   ,0xb);
        if (iVar5 != 0) goto LAB_006a30e4;
        local_64 = (uint ****)0x0;
        local_74 = (uint *****)0x0;
        local_78 = (uint ******)pppppuVar25;
        local_70 = (uint ******)pppppuVar24;
        local_6c = (uint ****)uVar11;
        local_68 = pppppuVar25;
        local_60 = pppppuVar24;
        local_5c = uVar11;
        local_58 = pppppuVar15;
        do {
          iVar5 = FUN_006bf6e0(&local_78);
          if (iVar5 == 0) goto LAB_006a2eb8;
        } while ((*(int *)(iVar5 + 0x10) != -0x80000000) || (*(int *)(iVar5 + 0x44) == -0x80000000))
        ;
      }
      if ((iVar26 == 5) &&
         (iVar26 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x50),"oneOf",5), iVar26 == 0)) {
        local_64 = (uint ****)0x0;
        local_74 = (uint *****)0x0;
        local_78 = (uint ******)pppppuVar25;
        local_70 = (uint ******)pppppuVar24;
        local_6c = (uint ****)uVar11;
        local_68 = pppppuVar25;
        local_60 = pppppuVar24;
        local_5c = uVar11;
        local_58 = pppppuVar15;
        do {
          iVar26 = FUN_006bf6e0(&local_78);
          if (iVar26 == 0) goto LAB_006a2eb8;
        } while ((*(undefined1 **)(iVar26 + 0x10) != &DAT_80000005) ||
                ((*(byte *)(iVar26 + 0x85) & 1) == 0));
      }
LAB_006a30e4:
      local_78 = (uint ******)(iVar6 + 0x4c);
      local_74 = (uint *****)&LAB_00632348;
      FUN_00664898(&local_a8,&DAT_0057ddb8,&local_78);
      if (*(int *)(iVar6 + 0x28) != 0) {
        iVar26 = *(int *)(iVar6 + 0x18);
        if (iVar26 == 0) {
LAB_006a3140:
          local_40 = (uint ******)0x0;
          local_44 = (uint ******)&SUB_00000004;
          local_48 = (uint ******)0x0;
        }
        else {
          iVar5 = *(int *)(iVar6 + 0x14);
          FUN_006a4aa8(&local_78,iVar5 + 0xc);
          if (local_78 == (uint ******)0x80000000) goto LAB_006a3140;
          uVar13 = (iVar26 * 0x6c - 0x6cU >> 2) * 0x684bda13;
          if (uVar13 < 4) {
            uVar13 = 3;
          }
          ppppppuVar20 = (uint ******)(uVar13 + 1);
          ppppppuVar30 = (uint ******)FUN_01298504((int)ppppppuVar20 * 0xc,4);
          if (ppppppuVar30 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,(int)ppppppuVar20 * 0xc);
          }
          *ppppppuVar30 = (uint *****)local_78;
          ppppppuVar30[1] = local_74;
          ppppppuVar30[2] = (uint *****)local_70;
          local_30 = (uint ******)&DAT_00000001;
          local_38 = ppppppuVar20;
          local_34 = ppppppuVar30;
          if (iVar26 != 1) {
            iVar5 = iVar5 + 0x78;
            iVar7 = 0xc;
            uVar13 = iVar26 * 0x6c - 0xd8;
            do {
              ppppppuVar20 = local_30;
              FUN_006a4aa8(&local_78,iVar5);
              if (local_78 == (uint ******)0x80000000) break;
              if (ppppppuVar20 == local_38) {
                FUN_006520b4(&local_38,ppppppuVar20,(uVar13 >> 2) * 0x684bda13 + 1,4,0xc);
                ppppppuVar30 = local_34;
              }
              piVar8 = (int *)((int)ppppppuVar30 + iVar7);
              local_30 = (uint ******)((int)ppppppuVar20 + 1);
              iVar5 = iVar5 + 0x6c;
              iVar7 = iVar7 + 0xc;
              bVar31 = uVar13 != 0;
              *piVar8 = (int)local_78;
              piVar8[1] = (int)local_74;
              piVar8[2] = (int)local_70;
              uVar13 = uVar13 - 0x6c;
            } while (bVar31);
          }
          local_48 = local_38;
          local_44 = local_34;
          local_40 = local_30;
        }
        FUN_016eb0a0(&local_78,local_44,local_40,&DAT_00533bc1,2);
        FUN_006a41c0(&local_48);
        local_34 = (uint ******)&LAB_00632348;
        local_38 = (uint ******)&local_78;
        FUN_012fa178(&local_a8,&DAT_01d05f88,&DAT_00571d95,&local_38);
        FUN_019bb7e0(local_78,local_74);
      }
      ppppppuVar30 = *(uint *******)(iVar6 + 0x60);
      uVar19 = 0;
      puVar18 = local_f4;
      if ((uint ******)0xaaaaaaa < ppppppuVar30) {
LAB_006a34d8:
        local_f4 = puVar18;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar19,local_f4);
      }
      iVar6 = *(int *)(iVar6 + 0x5c);
      puVar18 = (undefined4 *)((int)ppppppuVar30 * 0xc);
      if (puVar18 == (undefined4 *)0x0) {
        local_f4 = (undefined4 *)&SUB_00000004;
        local_98 = (uint ******)0x0;
      }
      else {
        uVar19 = 4;
        local_f4 = (undefined4 *)FUN_01298504(puVar18,4);
        if (local_f4 == (undefined4 *)0x0) goto LAB_006a34d8;
        local_98 = ppppppuVar30;
      }
      ppppppuVar20 = (uint ******)0x0;
      local_94 = local_f4;
      if (ppppppuVar30 != (uint ******)0x0) {
        ppppppuVar20 = (uint ******)0x0;
        puVar18 = local_f4;
        do {
          FUN_006e5484(&local_78,*(undefined1 *)(iVar6 + (int)ppppppuVar20));
          local_40 = (uint ******)0x0;
          local_44 = (uint ******)&DAT_00000001;
          local_48 = (uint ******)0x0;
          local_2c = (uint ******)0x0;
          local_30 = (uint ******)0x60000020;
          local_34 = (uint ******)&DAT_01c05fd4;
          local_38 = (uint ******)&local_48;
          iVar26 = FUN_00700f8c(&local_78,&local_38);
          if (iVar26 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_88,&DAT_01c05fec,&DAT_01d30334);
          }
          local_88 = local_48;
          local_84 = local_44;
          local_80 = local_40;
          FUN_006dd0fc(&local_78);
          ppppppuVar20 = (uint ******)((int)ppppppuVar20 + 1);
          *puVar18 = local_88;
          puVar18[1] = local_84;
          puVar18[2] = local_80;
          puVar18 = puVar18 + 3;
        } while (ppppppuVar30 != ppppppuVar20);
        ppppppuVar20 = ppppppuVar30;
      }
      local_78 = local_98;
      local_74 = (uint *****)local_94;
      local_90 = ppppppuVar20;
      local_70 = ppppppuVar20;
      FUN_016eb0a0(&local_38,local_94,ppppppuVar20,&DAT_0053147c,3);
      FUN_006a41c0(&local_78);
      local_74 = (uint *****)&LAB_00632348;
      local_78 = (uint ******)&local_38;
      FUN_012fa178(&local_a8,&DAT_01d05f88,&DAT_00591a80,&local_78);
      local_78 = (uint ******)local_a8;
      local_74 = (uint *****)local_a4;
      local_70 = (uint ******)pppppuStack_a0;
      FUN_019bb7e0(local_38,local_34);
      local_34 = (uint ******)&LAB_00632348;
      local_38 = (uint ******)&local_78;
      FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_00582d7f,&local_38);
      FUN_019bb7e0(local_78,local_74);
    }
    goto LAB_006a2eb8;
  }
  if (*(char *)(param_3 + 3) == '\0') {
    FUN_0160ef04(&local_e8,"schema {\n",0x13);
    local_78 = (uint ******)(param_2 + 0x70);
    local_74 = (uint *****)&LAB_00632348;
    FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_0057c072,&local_78);
    if (*(int *)(param_2 + 0x58) != -0x80000000) {
      local_d8 = *(uint ******)(param_2 + 0x5c);
      local_d4 = *(undefined4 *)(param_2 + 0x60);
      local_78 = &local_d8;
      local_74 = (uint *****)&DAT_0132b6a0;
      FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_00599343,&local_78);
    }
    if (*(int *)(param_2 + 100) != -0x80000000) {
      local_d8 = *(uint ******)(param_2 + 0x68);
      local_d4 = *(undefined4 *)(param_2 + 0x6c);
      local_78 = &local_d8;
      local_74 = (uint *****)&DAT_0132b6a0;
      FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_005b3747,&local_78);
    }
    FUN_0160ef04(&local_e8,"}\n",5);
  }
  else {
    FUN_0160ef04(&local_e8,"extend schema @link(\n",0x2b);
    FUN_0160ef04(&local_e8,"\turl: \"https://specs.apollo.dev/federation/v2.3\",\n",0x65);
    FUN_0160ef04(&local_e8,
                 "\timport: [\"@key\", \"@tag\", \"@shareable\", \"@inaccessible\", \"@override\", \"@external\", \"@provides\", \"@requires\", \"@composeDirective\", \"@interfaceObject\"]\n"
                 ,0x12d);
    FUN_0160ef04(&local_e8,")\n",5);
    if (*(char *)(param_3 + 6) == '\x01') {
      uVar19 = FUN_0160ef04(&local_e8,"\n",3);
      uVar32 = thunk_FUN_01bee35a(uVar19,0x2c0);
      puVar16 = (uint *)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
      if ((char)puVar16[4] == '\0') {
        FUN_019ae6ac(&local_78);
        *puVar16 = (uint)local_78;
        puVar16[1] = (uint)local_74;
        puVar16[2] = (uint)local_70;
        puVar16[3] = (uint)local_6c;
        *(undefined1 *)(puVar16 + 4) = 1;
      }
      local_c8 = (uint *****)*puVar16;
      local_c4 = puVar16[1];
      local_c0 = puVar16[2];
      local_bc = puVar16[3];
      *puVar16 = (int)local_c8 + 1;
      puVar16[1] = local_c4 + ((uint ****)0xfffffffe < local_c8);
      local_d8 = (uint *****)&DAT_0056d238;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_64 = (uint ****)0x0;
      local_74 = (uint *****)0x0;
      local_78 = (uint ******)pppppuVar12;
      local_70 = (uint ******)iVar4;
      local_6c = (uint ****)uVar14;
      local_68 = pppppuVar12;
      local_60 = (uint *****)iVar4;
      local_5c = uVar14;
      local_58 = (uint *****)uVar17;
      while( true ) {
        iVar4 = FUN_006bf7fc(&local_78);
        if (iVar4 == 0) break;
        if (*(int *)(iVar4 + 0x40) != -0x80000000) {
          local_48 = (uint ******)(iVar4 + 0x4c);
          local_44 = (uint ******)&LAB_00632348;
          FUN_00664898(&local_34,&DAT_005a1baf,&local_48);
          ppppppuVar3 = local_2c;
          ppppppuVar20 = local_30;
          ppppppuVar30 = local_34;
          if (local_34 != (uint ******)&DAT_80000000) {
            pppuVar21 = *(uint ****)(iVar4 + 0x44);
            pppuVar27 = *(uint ****)(iVar4 + 0x48);
            uVar9 = FUN_006c561c(local_c8,local_c4,local_c0,local_bc,pppuVar21,pppuVar27);
            uVar11 = local_d4;
            pppppuVar24 = local_d8;
            iVar4 = 0;
            uVar13 = uVar9;
            while( true ) {
              uVar13 = uVar11 & uVar13;
              uVar22 = *(uint *)((int)pppppuVar24 + uVar13);
              uVar10 = uVar22 ^ (uVar9 >> 0x19) * 0x1010101;
              for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                  uVar10 = uVar10 - 1 & uVar10) {
                ppppuVar29 = (uint ****)
                             (pppppuVar24 +
                             (uVar13 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10
                                                      | (uVar10 >> 0x10 & 0xff) << 8 |
                                                      uVar10 >> 0x18) >> 3) & uVar11) * -5);
                if ((ppppuVar29[-4] == pppuVar27) &&
                   (iVar6 = thunk_FUN_01bed842(ppppuVar29[-5],pppuVar21), iVar6 == 0))
                goto LAB_006a3874;
              }
              if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) break;
              iVar4 = iVar4 + 4;
              uVar13 = uVar13 + iVar4;
            }
            if (local_d0 == 0) {
              FUN_006b69a0(&local_d8,&local_c8);
            }
            uVar11 = local_d4 & uVar9;
            uVar13 = *(uint *)((int)local_d8 + uVar11) & 0x80808080;
            if (uVar13 == 0) {
              iVar4 = 4;
              do {
                uVar11 = uVar11 + iVar4;
                iVar4 = iVar4 + 4;
                uVar11 = uVar11 & local_d4;
                uVar13 = *(uint *)((int)local_d8 + uVar11) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar11 = uVar11 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     local_d4;
            uVar13 = (uint)*(char *)((int)local_d8 + uVar11);
            if (-1 < (int)uVar13) {
              uVar11 = (uint)*local_d8 & 0x80808080;
              uVar11 = LZCOUNT(((uint)*local_d8 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                               (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
              uVar13 = (uint)*(byte *)((int)local_d8 + (uVar11 >> 3));
              uVar11 = uVar11 >> 3;
            }
                    /* WARNING (jumptable): Read-only address (ram,0x0056d238) is written */
            bVar2 = (byte)(uVar9 >> 0x19);
            *(byte *)((int)local_d8 + uVar11) = bVar2;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
            *(byte *)((int)local_d8 + (uVar11 - 4 & local_d4) + 4) = bVar2;
            ppppuVar29 = (uint ****)(local_d8 + uVar11 * -5);
                    /* WARNING (jumptable): Read-only address (ram,0x0056d224) is written */
            ppppuVar29[-5] = pppuVar21;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d228) is written */
            ppppuVar29[-4] = pppuVar27;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d22c) is written */
            ppppuVar29[-3] = (uint ***)0x0;
            ppppuVar29[-1] = (uint ***)0x0;
            local_d0 = local_d0 - (uVar13 & 1);
                    /* WARNING (jumptable): Read-only address (ram,0x0056d230) is written */
            ppppuVar29[-2] = (uint ***)0x4;
            local_cc = local_cc + 1;
LAB_006a3874:
            pppuVar21 = ppppuVar29[-1];
            if (pppuVar21 == ppppuVar29[-3]) {
              FUN_019abd3c();
            }
            pppuVar27 = ppppuVar29[-2] + (int)pppuVar21 * 3;
            *pppuVar27 = (uint **)ppppppuVar30;
            pppuVar27[1] = (uint **)ppppppuVar20;
            pppuVar27[2] = (uint **)ppppppuVar3;
            ppppuVar29[-1] = (uint ***)((int)pppuVar21 + 1);
          }
        }
      }
      if (local_d4 == 0) {
        local_78 = (uint ******)0x0;
        local_74 = (uint *****)extraout_r2;
        local_70 = (uint ******)extraout_r3;
      }
      else {
        local_78 = (uint ******)0x4;
        local_70 = (uint ******)(local_d8 + local_d4 * -5 + -5);
        local_74 = (uint *****)(local_d4 * 0x15 + 0x19);
      }
      ppppuVar29 = (uint ****)(local_d8 + 1);
      uVar11 = ~(uint)*local_d8 & 0x80808080;
      local_60 = (uint *****)((int)local_d8 + local_d4 + 1);
      local_5c = local_cc;
      local_6c = (uint ****)local_d8;
      iVar4 = local_cc;
      pppppuVar24 = local_d8;
      local_68 = (uint *****)uVar11;
      local_64 = ppppuVar29;
      while (iVar4 != 0) {
        uVar13 = uVar11;
        ppppuVar28 = ppppuVar29;
        if (uVar11 == 0) {
          do {
            ppppuVar29 = ppppuVar28 + 1;
            pppuVar21 = *ppppuVar28;
            pppppuVar24 = pppppuVar24 + -0x14;
            ppppuVar28 = ppppuVar29;
          } while (((uint)pppuVar21 & 0x80808080) == 0x80808080);
          uVar13 = (uint)pppuVar21 & 0x80808080 ^ 0x80808080;
          local_6c = (uint ****)pppppuVar24;
          local_64 = ppppuVar29;
        }
        iVar4 = iVar4 + -1;
        uVar11 = uVar13 - 1 & uVar13;
        uVar13 = LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
        iVar6 = (uVar13 >> 3) * -4 - (uVar13 >> 3);
        local_b0 = (uint ******)pppppuVar24[iVar6 + -2];
        ppppppuVar30 = (uint ******)pppppuVar24[iVar6 + -3];
        local_ac = (uint ******)pppppuVar24[iVar6 + -1];
        local_68 = (uint *****)uVar11;
        if (ppppppuVar30 == (uint ******)&DAT_80000000) goto LAB_006a3d40;
        local_a8 = (uint *****)pppppuVar24[iVar6 + -5];
        local_a4 = (uint ***)pppppuVar24[iVar6 + -4];
        local_88 = ppppppuVar30;
        local_84 = local_b0;
        local_80 = local_ac;
        FUN_0160ef04(&local_e8,"extend schema @link(\n",0x2b);
        local_38 = &local_a8;
        local_34 = (uint ******)&DAT_0132b6a0;
        FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_00587cb1,&local_38);
        ppppppuVar3 = local_80;
        ppppppuVar20 = local_84;
        FUN_016eb0a0(&local_38,local_84,local_80,",",1);
        local_48 = (uint ******)&local_38;
        local_44 = (uint ******)&LAB_00632348;
        FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_005b3267,&local_48);
        FUN_019bb7e0(local_38,local_34);
        FUN_0160ef04(&local_e8,")\n",5);
        ppppppuVar23 = ppppppuVar20 + (int)ppppppuVar3 * 3;
        local_34 = ppppppuVar20;
        local_38 = ppppppuVar20;
        local_30 = ppppppuVar30;
        local_2c = ppppppuVar23;
        if (ppppppuVar3 != (uint ******)0x0) {
          do {
            ppppppuVar30 = ppppppuVar20 + 3;
            if (*ppppppuVar20 == (uint *****)&DAT_80000000) goto LAB_006a3d08;
            local_44 = (uint ******)ppppppuVar20[1];
            local_40 = (uint ******)ppppppuVar20[2];
            local_94 = (undefined4 *)&LAB_00632348;
            local_98 = (uint ******)&local_48;
            local_48 = (uint ******)*ppppppuVar20;
            FUN_012fa178(&local_e8,&DAT_01d05f88,&DAT_005abb7a,&local_98);
            FUN_019bb7e0(local_48,local_44);
            ppppppuVar30 = ppppppuVar20 + 3;
            ppppppuVar20 = ppppppuVar20 + 3;
          } while (ppppppuVar30 != ppppppuVar23);
          ppppppuVar30 = ppppppuVar23;
LAB_006a3d08:
          local_34 = ppppppuVar30;
        }
        FUN_01574820(&local_38);
        FUN_0160ef04(&local_e8,"\n",3);
      }
      iVar4 = 0;
LAB_006a3d40:
      local_5c = iVar4;
      FUN_006b43c0(&local_78);
    }
  }
  *param_1 = local_e8;
  param_1[1] = local_e4;
  param_1[2] = local_e0;
  return;
}

