// FUN_010064f8 @ 010064f8 size=1404 calls_out=19 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0100681c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010064f8(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *******pppppppuVar7;
  uint uVar8;
  undefined4 *******pppppppuVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *****pppppuVar13;
  undefined4 *****pppppuVar14;
  undefined4 ******ppppppuVar15;
  undefined4 *******pppppppuVar16;
  undefined4 ******ppppppuVar17;
  bool bVar18;
  int local_2090;
  uint local_208c;
  undefined4 *******local_2080;
  undefined4 ******appppppuStack_2070 [2048];
  undefined4 local_70;
  undefined4 *******local_6c;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  byte local_58 [4];
  undefined4 *******local_54;
  undefined4 *****local_50;
  undefined4 local_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  int local_40;
  undefined4 *****local_3c;
  undefined4 *******local_38;
  undefined4 *******local_34;
  undefined4 *******local_30;
  undefined4 ******local_2c;
  
  local_208c = 0;
  local_2090 = 0;
  do {
    while( true ) {
      local_2080 = appppppuStack_2070;
      pppppppuVar4 = (undefined4 *******)FUN_016e0250(*param_2,local_2080,0x2000);
      if (pppppppuVar4 == (undefined4 *******)0xffffffff) break;
      if (pppppppuVar4 == (undefined4 *******)0x0) {
        param_1[2] = local_208c;
        param_1[3] = local_2090;
        uVar11 = 0;
        goto LAB_010069c8;
      }
      pppppppuVar16 = pppppppuVar4;
      do {
        while( true ) {
          FUN_01006ccc(&local_38,param_3);
          if ((char)local_38 != '\x04') break;
          if (*(char *)((int)param_3 + 0x1d) != '\0') {
            piVar5 = (int *)param_3[1];
            if (*param_3 == 0) {
              piVar5 = param_3 + 1;
            }
            uVar11 = FUN_017a2030(*piVar5,1);
            iVar12 = FUN_01793784();
            if (iVar12 != 0) {
              uVar11 = FUN_017937a4(uVar11);
              uVar6 = FUN_016dd8a2();
              FUN_00fab1e0(&local_38,uVar11,uVar6);
              pppppppuVar9 = local_30;
              pppppppuVar3 = local_34;
              if (local_38 == (undefined4 *******)&DAT_00000001) {
                local_48 = local_34;
                local_44 = local_30;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0041d945,0x1b,&local_48,&DAT_018af4a4,&DAT_018af4b4);
              }
              if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600c10();
              }
              if (local_30 == (undefined4 *******)0x0) {
                pppppppuVar7 = (undefined4 *******)&DAT_00000001;
              }
              else {
                pppppppuVar7 = (undefined4 *******)thunk_FUN_016d4a50(local_30);
                if (pppppppuVar7 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,pppppppuVar9);
                }
              }
              FUN_016dd1aa(pppppppuVar7,pppppppuVar3,pppppppuVar9);
              local_38 = pppppppuVar9;
              local_34 = pppppppuVar7;
              local_30 = pppppppuVar9;
              FUN_016d23a8(&local_64,0x28,&local_38);
              uVar8 = (uint)local_64 & 0xff;
              if (uVar8 != 4) {
                local_70 = (undefined4 *******)
                           CONCAT31(*(undefined3 *)((uint)&local_64 | 1),local_64._0_1_);
                local_6c = local_60;
                goto LAB_010068a8;
              }
            }
            *(undefined1 *)((int)param_3 + 0x1d) = 0;
          }
          piVar5 = (int *)param_3[1];
          local_4c = 0;
          local_48 = (undefined4 *******)&local_50;
          param_3[4] = 0;
          local_5c = (undefined4 *******)0x0;
          local_64 = local_2080;
          if (*param_3 == 1) {
            piVar5 = (int *)*piVar5;
          }
          local_40 = param_3[2];
          local_38 = &local_64;
          local_3c = (undefined4 *****)0x0;
          local_2c = (undefined4 ******)0x0;
          local_44 = (undefined4 *******)param_3[3];
          local_34 = local_2080;
          local_60 = pppppppuVar16;
          local_50 = (undefined4 *****)(param_3 + 2);
          local_30 = pppppppuVar16;
          pppppppuVar9 = (undefined4 *******)FUN_017a23c4(piVar5,&local_44,&local_34);
          iVar12 = FUN_01793784();
          pppppppuVar3 = local_48;
          if (local_38[1] < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_0041d994,0x2c,&DAT_018af4d4);
          }
          local_38[2] = local_2c;
          pppppuVar13 = local_3c;
          pppppuVar14 = *pppppppuVar3;
          if (*pppppuVar14 < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_0041d994,0x2c,&DAT_01881eb8);
          }
          pppppppuVar3[1] = (undefined4 ******)local_3c;
          pppppuVar14[2] = pppppuVar13;
          if (iVar12 == 0) {
            local_58[0] = 4;
            local_54 = pppppppuVar9;
            param_3[6] = 0;
          }
          else {
            FUN_016d2468(local_58,pppppppuVar9);
            uVar8 = (uint)local_58[0];
            param_3[6] = 0;
            if (uVar8 != 4) {
              uVar1 = *(undefined2 *)((uint)local_58 | 1);
              *(undefined1 *)((undefined2 *)((uint)&local_70 | 1) + 1) =
                   *(undefined1 *)((undefined2 *)((uint)local_58 | 1) + 1);
              *(undefined2 *)((uint)&local_70 | 1) = uVar1;
              local_6c = local_54;
              local_70 = (undefined4 *******)CONCAT31(local_70._1_3_,local_58[0]);
              if (uVar8 != 4) goto LAB_010068a8;
              goto LAB_01006854;
            }
          }
          if (local_54 == (undefined4 *******)0x0) {
            *(undefined1 *)((int)param_3 + 0x1d) = 1;
          }
          if (local_5c != (undefined4 *******)0x0) {
            local_6c = local_5c;
            local_70 = (undefined4 *******)CONCAT31(local_70._1_3_,4);
LAB_01006854:
            if (local_6c == (undefined4 *******)0x0) {
              puVar10 = &DAT_018aeaf8;
LAB_0100696c:
              if ((*puVar10 & 0xff) != 4) {
                uVar8 = puVar10[1];
                param_1[1] = *puVar10;
                param_1[2] = uVar8;
                goto LAB_010069c4;
              }
              goto LAB_0100697c;
            }
            if (pppppppuVar16 < local_6c) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(local_6c,pppppppuVar16,pppppppuVar16,&DAT_018aeb00);
            }
            pppppppuVar16 = (undefined4 *******)((int)pppppppuVar16 - (int)local_6c);
            local_2080 = (undefined4 *******)((int)local_2080 + (int)local_6c);
            if (pppppppuVar16 == (undefined4 *******)0x0) goto LAB_0100697c;
          }
        }
        local_70 = local_38;
        local_6c = local_34;
        uVar8 = (uint)local_38 & 0xff;
        if (uVar8 == 4) goto LAB_01006854;
LAB_010068a8:
        pppppppuVar3 = local_6c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar8) {
        case 0:
          if (local_6c == (undefined4 *******)&DAT_00000004) goto joined_r0x01006944;
          goto LAB_01006958;
        case 1:
          cVar2 = local_70._1_1_;
          break;
        case 2:
          cVar2 = *(char *)(local_6c + 2);
          break;
        case 3:
          if (*(char *)(local_6c + 2) != '#') goto LAB_01006958;
          ppppppuVar15 = local_6c[1];
          ppppppuVar17 = *local_6c;
          pppppuVar13 = *ppppppuVar15;
          if (pppppuVar13 != (undefined4 *****)0x0) {
            (*(code *)pppppuVar13)(ppppppuVar17);
          }
          if (ppppppuVar15[1] != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(ppppppuVar17);
          }
          thunk_FUN_016d3fb4(pppppppuVar3);
          goto joined_r0x01006944;
        }
        if (cVar2 != '#') {
LAB_01006958:
          puVar10 = &local_70;
          goto LAB_0100696c;
        }
joined_r0x01006944:
      } while (pppppppuVar16 != (undefined4 *******)0x0);
LAB_0100697c:
      bVar18 = CARRY4(local_208c,(uint)pppppppuVar4);
      local_208c = local_208c + (int)pppppppuVar4;
      local_2090 = local_2090 + (uint)bVar18;
    }
    piVar5 = (int *)FUN_016d2bc8();
    iVar12 = *piVar5;
  } while (iVar12 == 4);
  param_1[1] = 0;
  param_1[2] = iVar12;
LAB_010069c4:
  uVar11 = 1;
LAB_010069c8:
  *param_1 = uVar11;
  return;
}

